#include "cowgol.h"
static i8 workspace[0x01bf];
#define ws ((i1*)workspace)

// ExitWithError workspace at ws+3488 length ws+0
void f6_ExitWithError(void) {


	
exit(1); 



endsub:;
}

// MemSet workspace at ws+3456 length ws+24
void f7_MemSet(i8 p8 /* len */, i1 p9 /* byte */, i8 p10 /* buf */) {
	*(i8*)(intptr_t)(ws+3456) = p10; /*buf */
	*(i1*)(intptr_t)(ws+3464) = p9; /*byte */
	*(i8*)(intptr_t)(ws+3472) = p8; /*len */


	
memset((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3456) 
,  
*(i1*)(intptr_t)(ws+3464) 
,  
*(i8*)(intptr_t)(ws+3472) 
); 



endsub:;
}

// print_char workspace at ws+3536 length ws+1
void f9_print_char(i1 p12 /* c */) {
	*(i1*)(intptr_t)(ws+3536) = p12; /*c */


	
putchar( 
*(i1*)(intptr_t)(ws+3536) 
); 



endsub:;
}
	void f9_print_char(i1 /* c */);

// print workspace at ws+3520 length ws+9
void f12_print(i8 p21 /* ptr */) {
	*(i8*)(intptr_t)(ws+3520) = p21; /*ptr */

c02_0001:;

	i8 v22 = (i8)(intptr_t)(ws+3520);
	i8 v23 = *(i8*)(intptr_t)v22;
	i1 v24 = *(i1*)(intptr_t)v23;
	i8 v25 = (i8)(intptr_t)(ws+3528);
	*(i1*)(intptr_t)v25 = v24;

	i8 v26 = (i8)(intptr_t)(ws+3528);
	i1 v27 = *(i1*)(intptr_t)v26;
	i1 v28 = (i1)+0;
	if (v27==v28) goto c02_0006; else goto c02_0007;

c02_0006:;

	goto endsub;

c02_0007:;

c02_0003:;

	i8 v29 = (i8)(intptr_t)(ws+3528);
	i1 v30 = *(i1*)(intptr_t)v29;
	i8 v31 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v31)(v30);

	i8 v32 = (i8)(intptr_t)(ws+3520);
	i8 v33 = *(i8*)(intptr_t)v32;
	i8 v34 = v33+(+1);
	i8 v35 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v35 = v34;

	goto c02_0001;

c02_0002:;

endsub:;
}
	void f9_print_char(i1 /* c */);

// print_nl workspace at ws+3488 length ws+0
void f13_print_nl(void) {

	i1 v36 = (i1)+10;
	i8 v37 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v37)(v36);

endsub:;
}

// UIToA workspace at ws+3520 length ws+49
void f14_UIToA(i8* p38 /* ptr */, i8 p39 /* buffer */, i1 p40 /* base */, i4 p41 /* value */) {
	*(i4*)(intptr_t)(ws+3520) = p41; /*value */
	*(i1*)(intptr_t)(ws+3524) = p40; /*base */
	*(i8*)(intptr_t)(ws+3528) = p39; /*buffer */

	i8 v42 = (i8)(intptr_t)(ws+3528);
	i8 v43 = *(i8*)(intptr_t)v42;
	i8 v44 = (i8)(intptr_t)(ws+3536);
	*(i8*)(intptr_t)v44 = v43;

c02_0008:;

	i8 v45 = (i8)(intptr_t)(ws+3520);
	i4 v46 = *(i4*)(intptr_t)v45;
	i8 v47 = (i8)(intptr_t)(ws+3524);
	i1 v48 = *(i1*)(intptr_t)v47;
	i4 v49 = v48;
	i4 v50 = v46%v49;
	i8 v51 = (i8)(intptr_t)(ws+3544);
	*(i4*)(intptr_t)v51 = v50;

	i8 v52 = (i8)(intptr_t)(ws+3520);
	i4 v53 = *(i4*)(intptr_t)v52;
	i8 v54 = (i8)(intptr_t)(ws+3524);
	i1 v55 = *(i1*)(intptr_t)v54;
	i4 v56 = v55;
	i4 v57 = v53/v56;
	i8 v58 = (i8)(intptr_t)(ws+3520);
	*(i4*)(intptr_t)v58 = v57;

	i8 v59 = (i8)(intptr_t)(ws+3544);
	i4 v60 = *(i4*)(intptr_t)v59;
	i4 v61 = (i4)+10;
	if (v60<v61) goto c02_000d; else goto c02_000e;

c02_000d:;

	i8 v62 = (i8)(intptr_t)(ws+3544);
	i4 v63 = *(i4*)(intptr_t)v62;
	i4 v64 = v63+(+48);
	i8 v65 = (i8)(intptr_t)(ws+3544);
	*(i4*)(intptr_t)v65 = v64;

	goto c02_000a;

c02_000e:;

	i8 v66 = (i8)(intptr_t)(ws+3544);
	i4 v67 = *(i4*)(intptr_t)v66;
	i4 v68 = v67+(+87);
	i8 v69 = (i8)(intptr_t)(ws+3544);
	*(i4*)(intptr_t)v69 = v68;

c02_000a:;

	i8 v70 = (i8)(intptr_t)(ws+3544);
	i4 v71 = *(i4*)(intptr_t)v70;
	i1 v72 = v71;
	i8 v73 = (i8)(intptr_t)(ws+3536);
	i8 v74 = *(i8*)(intptr_t)v73;
	*(i1*)(intptr_t)v74 = v72;

	i8 v75 = (i8)(intptr_t)(ws+3536);
	i8 v76 = *(i8*)(intptr_t)v75;
	i8 v77 = v76+(+1);
	i8 v78 = (i8)(intptr_t)(ws+3536);
	*(i8*)(intptr_t)v78 = v77;

	i8 v79 = (i8)(intptr_t)(ws+3520);
	i4 v80 = *(i4*)(intptr_t)v79;
	i4 v81 = (i4)+0;
	if (v80==v81) goto c02_0012; else goto c02_0013;

c02_0012:;

	goto c02_0009;

c02_0013:;

c02_000f:;

	goto c02_0008;

c02_0009:;

	i8 v82 = (i8)(intptr_t)(ws+3528);
	i8 v83 = *(i8*)(intptr_t)v82;
	i8 v84 = (i8)(intptr_t)(ws+3552);
	*(i8*)(intptr_t)v84 = v83;

	i8 v85 = (i8)(intptr_t)(ws+3536);
	i8 v86 = *(i8*)(intptr_t)v85;
	i8 v87 = v86+(-1);
	i8 v88 = (i8)(intptr_t)(ws+3560);
	*(i8*)(intptr_t)v88 = v87;

c02_0016:;

	i8 v89 = (i8)(intptr_t)(ws+3552);
	i8 v90 = *(i8*)(intptr_t)v89;
	i8 v91 = (i8)(intptr_t)(ws+3560);
	i8 v92 = *(i8*)(intptr_t)v91;
	if (v90<v92) goto c02_0018; else goto c02_0019;

c02_0018:;

	i8 v93 = (i8)(intptr_t)(ws+3552);
	i8 v94 = *(i8*)(intptr_t)v93;
	i1 v95 = *(i1*)(intptr_t)v94;
	i8 v96 = (i8)(intptr_t)(ws+3568);
	*(i1*)(intptr_t)v96 = v95;

	i8 v97 = (i8)(intptr_t)(ws+3560);
	i8 v98 = *(i8*)(intptr_t)v97;
	i1 v99 = *(i1*)(intptr_t)v98;
	i8 v100 = (i8)(intptr_t)(ws+3552);
	i8 v101 = *(i8*)(intptr_t)v100;
	*(i1*)(intptr_t)v101 = v99;

	i8 v102 = (i8)(intptr_t)(ws+3568);
	i1 v103 = *(i1*)(intptr_t)v102;
	i8 v104 = (i8)(intptr_t)(ws+3560);
	i8 v105 = *(i8*)(intptr_t)v104;
	*(i1*)(intptr_t)v105 = v103;

	i8 v106 = (i8)(intptr_t)(ws+3552);
	i8 v107 = *(i8*)(intptr_t)v106;
	i8 v108 = v107+(+1);
	i8 v109 = (i8)(intptr_t)(ws+3552);
	*(i8*)(intptr_t)v109 = v108;

	i8 v110 = (i8)(intptr_t)(ws+3560);
	i8 v111 = *(i8*)(intptr_t)v110;
	i8 v112 = v111+(-1);
	i8 v113 = (i8)(intptr_t)(ws+3560);
	*(i8*)(intptr_t)v113 = v112;

	goto c02_0016;

c02_0019:;

	i1 v114 = (i1)+0;
	i8 v115 = (i8)(intptr_t)(ws+3536);
	i8 v116 = *(i8*)(intptr_t)v115;
	*(i1*)(intptr_t)v116 = v114;

endsub:;
	*p38 = *(i8*)(intptr_t)(ws+3536);
}
	void f14_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f12_print(i8 /* ptr */);

// print_i32 workspace at ws+3496 length ws+24
void f16_print_i32(i4 p144 /* value */) {
	*(i4*)(intptr_t)(ws+3496) = p144; /*value */

	i8 v145 = (i8)(intptr_t)(ws+3496);
	i4 v146 = *(i4*)(intptr_t)v145;
	i1 v147 = (i1)+10;
	i8 v148 = (i8)(intptr_t)(ws+3500);
	i8 v149 = (i8)(intptr_t)(f14_UIToA);
	i8 v150;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v149)(&v150, v148, v147, v146);
	i8 v151 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v151 = v150;

	i8 v152 = (i8)(intptr_t)(ws+3500);
	i8 v153 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v153)(v152);

endsub:;
}
	void f16_print_i32(i4 /* value */);

// print_i16 workspace at ws+3488 length ws+2
void f17_print_i16(i2 p154 /* value */) {
	*(i2*)(intptr_t)(ws+3488) = p154; /*value */

	i8 v155 = (i8)(intptr_t)(ws+3488);
	i2 v156 = *(i2*)(intptr_t)v155;
	i4 v157 = v156;
	i8 v158 = (i8)(intptr_t)(f16_print_i32);

	((void(*)(i4 /* value */))(intptr_t)v158)(v157);

endsub:;
}
	void f16_print_i32(i4 /* value */);

// print_i8 workspace at ws+3384 length ws+1
void f18_print_i8(i1 p159 /* value */) {
	*(i1*)(intptr_t)(ws+3384) = p159; /*value */

	i8 v160 = (i8)(intptr_t)(ws+3384);
	i1 v161 = *(i1*)(intptr_t)v160;
	i4 v162 = v161;
	i8 v163 = (i8)(intptr_t)(f16_print_i32);

	((void(*)(i4 /* value */))(intptr_t)v163)(v162);

endsub:;
}
	void f9_print_char(i1 /* c */);

// print_hex_i8 workspace at ws+3392 length ws+3
void f19_print_hex_i8(i1 p164 /* value */) {
	*(i1*)(intptr_t)(ws+3392) = p164; /*value */

	i1 v165 = (i1)+2;
	i8 v166 = (i8)(intptr_t)(ws+3393);
	*(i1*)(intptr_t)v166 = v165;

c02_001f:;

	i8 v167 = (i8)(intptr_t)(ws+3392);
	i1 v168 = *(i1*)(intptr_t)v167;
	i1 v169 = (i1)+4;
	i1 v170 = ((i1)v168)>>v169;
	i8 v171 = (i8)(intptr_t)(ws+3394);
	*(i1*)(intptr_t)v171 = v170;

	i8 v172 = (i8)(intptr_t)(ws+3394);
	i1 v173 = *(i1*)(intptr_t)v172;
	i1 v174 = (i1)+10;
	if (v173<v174) goto c02_0024; else goto c02_0025;

c02_0024:;

	i8 v175 = (i8)(intptr_t)(ws+3394);
	i1 v176 = *(i1*)(intptr_t)v175;
	i1 v177 = v176+(+48);
	i8 v178 = (i8)(intptr_t)(ws+3394);
	*(i1*)(intptr_t)v178 = v177;

	goto c02_0021;

c02_0025:;

	i8 v179 = (i8)(intptr_t)(ws+3394);
	i1 v180 = *(i1*)(intptr_t)v179;
	i1 v181 = v180+(+87);
	i8 v182 = (i8)(intptr_t)(ws+3394);
	*(i1*)(intptr_t)v182 = v181;

c02_0021:;

	i8 v183 = (i8)(intptr_t)(ws+3394);
	i1 v184 = *(i1*)(intptr_t)v183;
	i8 v185 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v185)(v184);

	i8 v186 = (i8)(intptr_t)(ws+3392);
	i1 v187 = *(i1*)(intptr_t)v186;
	i1 v188 = (i1)+4;
	i1 v189 = ((i1)v187)<<v188;
	i8 v190 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v190 = v189;

	i8 v191 = (i8)(intptr_t)(ws+3393);
	i1 v192 = *(i1*)(intptr_t)v191;
	i1 v193 = v192+(-1);
	i8 v194 = (i8)(intptr_t)(ws+3393);
	*(i1*)(intptr_t)v194 = v193;

	i8 v195 = (i8)(intptr_t)(ws+3393);
	i1 v196 = *(i1*)(intptr_t)v195;
	i1 v197 = (i1)+0;
	if (v196==v197) goto c02_0029; else goto c02_002a;

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

// print_hex_i32 workspace at ws+3384 length ws+4
void f21_print_hex_i32(i4 p209 /* value */) {
	*(i4*)(intptr_t)(ws+3384) = p209; /*value */

	i8 v210 = (i8)(intptr_t)(ws+3384);
	i4 v211 = *(i4*)(intptr_t)v210;
	i1 v212 = (i1)+24;
	i4 v213 = ((i4)v211)>>v212;
	i1 v214 = v213;
	i8 v215 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v215)(v214);

	i8 v216 = (i8)(intptr_t)(ws+3384);
	i4 v217 = *(i4*)(intptr_t)v216;
	i1 v218 = (i1)+16;
	i4 v219 = ((i4)v217)>>v218;
	i1 v220 = v219;
	i8 v221 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v221)(v220);

	i8 v222 = (i8)(intptr_t)(ws+3384);
	i4 v223 = *(i4*)(intptr_t)v222;
	i1 v224 = (i1)+8;
	i4 v225 = ((i4)v223)>>v224;
	i1 v226 = v225;
	i8 v227 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v227)(v226);

	i8 v228 = (i8)(intptr_t)(ws+3384);
	i4 v229 = *(i4*)(intptr_t)v228;
	i1 v230 = v229;
	i8 v231 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v231)(v230);

endsub:;
}

// ArgvInit workspace at ws+3216 length ws+0
void f24_ArgvInit(void) {


	
*(i8*)(intptr_t)(ws+16) 
 = (i8)(intptr_t)global_argv; 



	i8 v344 = (i8)(intptr_t)(ws+16);
	i8 v345 = *(i8*)(intptr_t)v344;
	i8 v346 = v345+(+8);
	i8 v347 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v347 = v346;

endsub:;
}

// ArgvNext workspace at ws+3216 length ws+8
void f25_ArgvNext(i8* p348 /* arg */) {

	i8 v349 = (i8)(intptr_t)(ws+16);
	i8 v350 = *(i8*)(intptr_t)v349;
	i8 v351 = (i8)+0;
	if (v350==v351) goto c02_0052; else goto c02_0053;

c02_0052:;

	i8 v352 = (i8)+0;
	i8 v353 = (i8)(intptr_t)(ws+3216);
	*(i8*)(intptr_t)v353 = v352;

	goto endsub;

c02_0053:;

c02_004f:;

	i8 v354 = (i8)(intptr_t)(ws+16);
	i8 v355 = *(i8*)(intptr_t)v354;
	i8 v356 = *(i8*)(intptr_t)v355;
	i8 v357 = (i8)(intptr_t)(ws+3216);
	*(i8*)(intptr_t)v357 = v356;

	i8 v358 = (i8)(intptr_t)(ws+3216);
	i8 v359 = *(i8*)(intptr_t)v358;
	i8 v360 = (i8)+0;
	if (v359==v360) goto c02_0057; else goto c02_0058;

c02_0057:;

	i8 v361 = (i8)+0;
	i8 v362 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v362 = v361;

	goto c02_0054;

c02_0058:;

	i8 v363 = (i8)(intptr_t)(ws+16);
	i8 v364 = *(i8*)(intptr_t)v363;
	i8 v365 = v364+(+8);
	i8 v366 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v366 = v365;

c02_0054:;

endsub:;
	*p348 = *(i8*)(intptr_t)(ws+3216);
}

// StrCmp workspace at ws+3416 length ws+17
void f26_StrCmp(i1* p367 /* res */, i8 p368 /* s2 */, i8 p369 /* s1 */) {
	*(i8*)(intptr_t)(ws+3416) = p369; /*s1 */
	*(i8*)(intptr_t)(ws+3424) = p368; /*s2 */

c02_0059:;

	i8 v370 = (i8)(intptr_t)(ws+3416);
	i8 v371 = *(i8*)(intptr_t)v370;
	i1 v372 = *(i1*)(intptr_t)v371;
	i8 v373 = (i8)(intptr_t)(ws+3424);
	i8 v374 = *(i8*)(intptr_t)v373;
	i1 v375 = *(i1*)(intptr_t)v374;
	i1 v376 = v372-v375;
	i8 v377 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v377 = v376;

	i8 v378 = (i8)(intptr_t)(ws+3432);
	i1 v379 = *(i1*)(intptr_t)v378;
	i1 v380 = (i1)+0;
	if (v379==v380) goto c02_0062; else goto c02_0060;

c02_0062:;

	i8 v381 = (i8)(intptr_t)(ws+3416);
	i8 v382 = *(i8*)(intptr_t)v381;
	i1 v383 = *(i1*)(intptr_t)v382;
	i1 v384 = (i1)+0;
	if (v383==v384) goto c02_0060; else goto c02_0061;

c02_0060:;

	goto c02_005a;

c02_0061:;

c02_005b:;

	i8 v385 = (i8)(intptr_t)(ws+3416);
	i8 v386 = *(i8*)(intptr_t)v385;
	i8 v387 = v386+(+1);
	i8 v388 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v388 = v387;

	i8 v389 = (i8)(intptr_t)(ws+3424);
	i8 v390 = *(i8*)(intptr_t)v389;
	i8 v391 = v390+(+1);
	i8 v392 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v392 = v391;

	goto c02_0059;

c02_005a:;

endsub:;
	*p367 = *(i1*)(intptr_t)(ws+3432);
}

// ToLower workspace at ws+3232 length ws+2
void f27_ToLower(i1* p393 /* cc */, i1 p394 /* c */) {
	*(i1*)(intptr_t)(ws+3232) = p394; /*c */

	i8 v395 = (i8)(intptr_t)(ws+3232);
	i1 v396 = *(i1*)(intptr_t)v395;
	i1 v397 = (i1)+65;
	if (v396<v397) goto c02_0069; else goto c02_006a;

c02_006a:;

	i1 v398 = (i1)+90;
	i8 v399 = (i8)(intptr_t)(ws+3232);
	i1 v400 = *(i1*)(intptr_t)v399;
	if (v398<v400) goto c02_0069; else goto c02_0068;

c02_0068:;

	i8 v401 = (i8)(intptr_t)(ws+3232);
	i1 v402 = *(i1*)(intptr_t)v401;
	i1 v403 = v402|(+32);
	i8 v404 = (i8)(intptr_t)(ws+3233);
	*(i1*)(intptr_t)v404 = v403;

	goto c02_0063;

c02_0069:;

	i8 v405 = (i8)(intptr_t)(ws+3232);
	i1 v406 = *(i1*)(intptr_t)v405;
	i8 v407 = (i8)(intptr_t)(ws+3233);
	*(i1*)(intptr_t)v407 = v406;

c02_0063:;

endsub:;
	*p393 = *(i1*)(intptr_t)(ws+3233);
}

// StrLen workspace at ws+3456 length ws+25
void f29_StrLen(i8* p438 /* size */, i8 p439 /* s */) {
	*(i8*)(intptr_t)(ws+3456) = p439; /*s */

	i8 v440 = (i8)(intptr_t)(ws+3456);
	i8 v441 = *(i8*)(intptr_t)v440;
	i8 v442 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v442 = v441;

c02_0075:;

	i8 v443 = (i8)(intptr_t)(ws+3472);
	i8 v444 = *(i8*)(intptr_t)v443;
	i1 v445 = *(i1*)(intptr_t)v444;
	i8 v446 = (i8)(intptr_t)(ws+3480);
	*(i1*)(intptr_t)v446 = v445;

	i8 v447 = (i8)(intptr_t)(ws+3480);
	i1 v448 = *(i1*)(intptr_t)v447;
	i1 v449 = (i1)+0;
	if (v448==v449) goto c02_007a; else goto c02_007b;

c02_007a:;

	goto c02_0076;

c02_007b:;

c02_0077:;

	i8 v450 = (i8)(intptr_t)(ws+3472);
	i8 v451 = *(i8*)(intptr_t)v450;
	i8 v452 = v451+(+1);
	i8 v453 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v453 = v452;

	goto c02_0075;

c02_0076:;

	i8 v454 = (i8)(intptr_t)(ws+3472);
	i8 v455 = *(i8*)(intptr_t)v454;
	i8 v456 = (i8)(intptr_t)(ws+3456);
	i8 v457 = *(i8*)(intptr_t)v456;
	i8 v458 = v455-v457;
	i8 v459 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v459 = v458;

endsub:;
	*p438 = *(i8*)(intptr_t)(ws+3464);
}

// MemCopy workspace at ws+3424 length ws+24
void f31_MemCopy(i8 p481 /* dest */, i8 p482 /* size */, i8 p483 /* src */) {
	*(i8*)(intptr_t)(ws+3424) = p483; /*src */
	*(i8*)(intptr_t)(ws+3432) = p482; /*size */
	*(i8*)(intptr_t)(ws+3440) = p481; /*dest */

c02_0085:;

	i8 v484 = (i8)(intptr_t)(ws+3432);
	i8 v485 = *(i8*)(intptr_t)v484;
	i8 v486 = (i8)+0;
	if (v485==v486) goto c02_0088; else goto c02_0087;

c02_0087:;

	i8 v487 = (i8)(intptr_t)(ws+3424);
	i8 v488 = *(i8*)(intptr_t)v487;
	i1 v489 = *(i1*)(intptr_t)v488;
	i8 v490 = (i8)(intptr_t)(ws+3440);
	i8 v491 = *(i8*)(intptr_t)v490;
	*(i1*)(intptr_t)v491 = v489;

	i8 v492 = (i8)(intptr_t)(ws+3440);
	i8 v493 = *(i8*)(intptr_t)v492;
	i8 v494 = v493+(+1);
	i8 v495 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v495 = v494;

	i8 v496 = (i8)(intptr_t)(ws+3424);
	i8 v497 = *(i8*)(intptr_t)v496;
	i8 v498 = v497+(+1);
	i8 v499 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v499 = v498;

	i8 v500 = (i8)(intptr_t)(ws+3432);
	i8 v501 = *(i8*)(intptr_t)v500;
	i8 v502 = v501+(-1);
	i8 v503 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v503 = v502;

	goto c02_0085;

c02_0088:;

endsub:;
}

// RawAlloc workspace at ws+3472 length ws+16
void f32_RawAlloc(i8* p504 /* block */, i8 p505 /* length */) {
	*(i8*)(intptr_t)(ws+3472) = p505; /*length */


	
*(i8*)(intptr_t)(ws+3480) 
=(intptr_t)calloc(1, (size_t) 
*(i8*)(intptr_t)(ws+3472) 
); 



endsub:;
	*p504 = *(i8*)(intptr_t)(ws+3480);
}

// Free workspace at ws+3480 length ws+8
void f34_Free(i8 p519 /* block */) {
	*(i8*)(intptr_t)(ws+3480) = p519; /*block */


	
free((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3480) 
); 



endsub:;
}

// GetFreeMemory workspace at ws+3208 length ws+8
void f38_GetFreeMemory(i8* p522 /* i */) {

	i8 v523 = (i8)+0;
	i8 v524 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v524 = v523;

endsub:;
	*p522 = *(i8*)(intptr_t)(ws+3208);
}

// _fcb_init workspace at ws+3336 length ws+8
void f41__fcb_init(i8 p525 /* fcb */) {
	*(i8*)(intptr_t)(ws+3336) = p525; /*fcb */

	i4 v526 = (i4)+0;
	i8 v527 = (i8)(intptr_t)(ws+3336);
	i8 v528 = *(i8*)(intptr_t)v527;
	i8 v529 = v528+(+4);
	*(i4*)(intptr_t)v529 = v526;

	i2 v530 = (i2)+0;
	i8 v531 = (i8)(intptr_t)(ws+3336);
	i8 v532 = *(i8*)(intptr_t)v531;
	i8 v533 = v532+(+8);
	*(i2*)(intptr_t)v533 = v530;

	i2 v534 = (i2)+0;
	i8 v535 = (i8)(intptr_t)(ws+3336);
	i8 v536 = *(i8*)(intptr_t)v535;
	i8 v537 = v536+(+10);
	*(i2*)(intptr_t)v537 = v534;

	i1 v538 = (i1)+0;
	i8 v539 = (i8)(intptr_t)(ws+3336);
	i8 v540 = *(i8*)(intptr_t)v539;
	i8 v541 = v540+(+524);
	*(i1*)(intptr_t)v541 = v538;

endsub:;
}

// _fcb_advance workspace at ws+3512 length ws+8
void f42__fcb_advance(i8 p542 /* fcb */) {
	*(i8*)(intptr_t)(ws+3512) = p542; /*fcb */

	i8 v543 = (i8)(intptr_t)(ws+3512);
	i8 v544 = *(i8*)(intptr_t)v543;
	i8 v545 = v544+(+10);
	i2 v546 = *(i2*)(intptr_t)v545;
	i2 v547 = v546+(+1);
	i8 v548 = (i8)(intptr_t)(ws+3512);
	i8 v549 = *(i8*)(intptr_t)v548;
	i8 v550 = v549+(+10);
	*(i2*)(intptr_t)v550 = v547;

endsub:;
}
	void f39_FCBRawRead(i2* /* amount */, i2 /* len */, i4 /* pos */, i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// _fcb_fillbuffer workspace at ws+3272 length ws+16
void f43__fcb_fillbuffer(i1* p551 /* b */, i8 p552 /* fcb */) {
	*(i8*)(intptr_t)(ws+3272) = p552; /*fcb */

	i8 v553 = (i8)(intptr_t)(ws+3272);
	i8 v554 = *(i8*)(intptr_t)v553;
	i8 v555 = v554+(+4);
	i4 v556 = *(i4*)(intptr_t)v555;
	i8 v557 = (i8)(intptr_t)(ws+3272);
	i8 v558 = *(i8*)(intptr_t)v557;
	i8 v559 = v558+(+10);
	i2 v560 = *(i2*)(intptr_t)v559;
	i4 v561 = v560;
	i4 v562 = v556+v561;
	i8 v563 = (i8)(intptr_t)(ws+3284);
	*(i4*)(intptr_t)v563 = v562;

	i8 v564 = (i8)(intptr_t)(ws+3272);
	i8 v565 = *(i8*)(intptr_t)v564;
	i8 v566 = (i8)(intptr_t)(ws+3284);
	i4 v567 = *(i4*)(intptr_t)v566;
	i2 v568 = (i2)+512;
	i8 v569 = (i8)(intptr_t)(f39_FCBRawRead);
	i2 v570;

	((void(*)(i2* /* amount */, i2 /* len */, i4 /* pos */, i8 /* fcb */))(intptr_t)v569)(&v570, v568, v567, v565);
	i8 v571 = (i8)(intptr_t)(ws+3272);
	i8 v572 = *(i8*)(intptr_t)v571;
	i8 v573 = v572+(+8);
	*(i2*)(intptr_t)v573 = v570;

	i1 v574 = (i1)+0;
	i8 v575 = (i8)(intptr_t)(ws+3280);
	*(i1*)(intptr_t)v575 = v574;

	i8 v576 = (i8)(intptr_t)(ws+3272);
	i8 v577 = *(i8*)(intptr_t)v576;
	i8 v578 = v577+(+524);
	i1 v579 = *(i1*)(intptr_t)v578;
	i1 v580 = v579&(+1);
	i1 v581 = (i1)+0;
	if (v580==v581) goto c02_0092; else goto c02_0091;

c02_0091:;

	goto endsub;

c02_0092:;

c02_008e:;

	i1 v582 = (i1)+2;
	i8 v583 = (i8)(intptr_t)(ws+3272);
	i8 v584 = *(i8*)(intptr_t)v583;
	i8 v585 = v584+(+524);
	*(i1*)(intptr_t)v585 = v582;

	i8 v586 = (i8)(intptr_t)(ws+3284);
	i4 v587 = *(i4*)(intptr_t)v586;
	i8 v588 = (i8)(intptr_t)(ws+3272);
	i8 v589 = *(i8*)(intptr_t)v588;
	i8 v590 = v589+(+4);
	*(i4*)(intptr_t)v590 = v587;

	i2 v591 = (i2)+0;
	i8 v592 = (i8)(intptr_t)(ws+3272);
	i8 v593 = *(i8*)(intptr_t)v592;
	i8 v594 = v593+(+10);
	*(i2*)(intptr_t)v594 = v591;

	i8 v595 = (i8)(intptr_t)(ws+3272);
	i8 v596 = *(i8*)(intptr_t)v595;
	i8 v597 = v596+(+8);
	i2 v598 = *(i2*)(intptr_t)v597;
	i2 v599 = (i2)+0;
	if (v598==v599) goto c02_0097; else goto c02_0096;

c02_0096:;

	i8 v600 = (i8)(intptr_t)(ws+3272);
	i8 v601 = *(i8*)(intptr_t)v600;
	i8 v602 = v601+(+12);
	i1 v603 = *(i1*)(intptr_t)v602;
	i8 v604 = (i8)(intptr_t)(ws+3280);
	*(i1*)(intptr_t)v604 = v603;

	i8 v605 = (i8)(intptr_t)(ws+3272);
	i8 v606 = *(i8*)(intptr_t)v605;
	i8 v607 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v607)(v606);

c02_0097:;

c02_0093:;

endsub:;
	*p551 = *(i1*)(intptr_t)(ws+3280);
}
	void f40_FCBRawWrite(i2 /* len */, i4 /* pos */, i8 /* fcb */);

// FCBFlush workspace at ws+3512 length ws+12
void f44_FCBFlush(i8 p608 /* fcb */) {
	*(i8*)(intptr_t)(ws+3512) = p608; /*fcb */

	i8 v609 = (i8)(intptr_t)(ws+3512);
	i8 v610 = *(i8*)(intptr_t)v609;
	i8 v611 = v610+(+4);
	i4 v612 = *(i4*)(intptr_t)v611;
	i8 v613 = (i8)(intptr_t)(ws+3520);
	*(i4*)(intptr_t)v613 = v612;

	i8 v614 = (i8)(intptr_t)(ws+3512);
	i8 v615 = *(i8*)(intptr_t)v614;
	i8 v616 = v615+(+524);
	i1 v617 = *(i1*)(intptr_t)v616;
	i1 v618 = v617&(+4);
	i1 v619 = (i1)+0;
	if (v618==v619) goto c02_009c; else goto c02_009b;

c02_009b:;

	i8 v620 = (i8)(intptr_t)(ws+3512);
	i8 v621 = *(i8*)(intptr_t)v620;
	i8 v622 = (i8)(intptr_t)(ws+3520);
	i4 v623 = *(i4*)(intptr_t)v622;
	i8 v624 = (i8)(intptr_t)(ws+3512);
	i8 v625 = *(i8*)(intptr_t)v624;
	i8 v626 = v625+(+10);
	i2 v627 = *(i2*)(intptr_t)v626;
	i8 v628 = (i8)(intptr_t)(f40_FCBRawWrite);

	((void(*)(i2 /* len */, i4 /* pos */, i8 /* fcb */))(intptr_t)v628)(v627, v623, v621);

	i8 v629 = (i8)(intptr_t)(ws+3512);
	i8 v630 = *(i8*)(intptr_t)v629;
	i8 v631 = v630+(+524);
	i1 v632 = *(i1*)(intptr_t)v631;
	i1 v633 = v632&(+1);
	i1 v634 = (i1)+0;
	if (v633==v634) goto c02_00a1; else goto c02_00a0;

c02_00a0:;

	goto endsub;

c02_00a1:;

c02_009d:;

c02_009c:;

c02_0098:;

	i8 v635 = (i8)(intptr_t)(ws+3520);
	i4 v636 = *(i4*)(intptr_t)v635;
	i8 v637 = (i8)(intptr_t)(ws+3512);
	i8 v638 = *(i8*)(intptr_t)v637;
	i8 v639 = v638+(+10);
	i2 v640 = *(i2*)(intptr_t)v639;
	i4 v641 = v640;
	i4 v642 = v636+v641;
	i8 v643 = (i8)(intptr_t)(ws+3512);
	i8 v644 = *(i8*)(intptr_t)v643;
	i8 v645 = v644+(+4);
	*(i4*)(intptr_t)v645 = v642;

	i1 v646 = (i1)+0;
	i8 v647 = (i8)(intptr_t)(ws+3512);
	i8 v648 = *(i8*)(intptr_t)v647;
	i8 v649 = v648+(+524);
	*(i1*)(intptr_t)v649 = v646;

	i2 v650 = (i2)+0;
	i8 v651 = (i8)(intptr_t)(ws+3512);
	i8 v652 = *(i8*)(intptr_t)v651;
	i8 v653 = v652+(+10);
	*(i2*)(intptr_t)v653 = v650;

	i2 v654 = (i2)+0;
	i8 v655 = (i8)(intptr_t)(ws+3512);
	i8 v656 = *(i8*)(intptr_t)v655;
	i8 v657 = v656+(+8);
	*(i2*)(intptr_t)v657 = v654;

endsub:;
}
	void f44_FCBFlush(i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// _fcb_flushbuffer workspace at ws+3496 length ws+9
void f45__fcb_flushbuffer(i1 p658 /* b */, i8 p659 /* fcb */) {
	*(i8*)(intptr_t)(ws+3496) = p659; /*fcb */
	*(i1*)(intptr_t)(ws+3504) = p658; /*b */

	i8 v660 = (i8)(intptr_t)(ws+3496);
	i8 v661 = *(i8*)(intptr_t)v660;
	i8 v662 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v662)(v661);

	i8 v663 = (i8)(intptr_t)(ws+3496);
	i8 v664 = *(i8*)(intptr_t)v663;
	i8 v665 = v664+(+524);
	i1 v666 = *(i1*)(intptr_t)v665;
	i1 v667 = v666&(+1);
	i1 v668 = (i1)+0;
	if (v667==v668) goto c02_00a6; else goto c02_00a5;

c02_00a5:;

	goto endsub;

c02_00a6:;

c02_00a2:;

	i1 v669 = (i1)+4;
	i8 v670 = (i8)(intptr_t)(ws+3496);
	i8 v671 = *(i8*)(intptr_t)v670;
	i8 v672 = v671+(+524);
	*(i1*)(intptr_t)v672 = v669;

	i8 v673 = (i8)(intptr_t)(ws+3504);
	i1 v674 = *(i1*)(intptr_t)v673;
	i8 v675 = (i8)(intptr_t)(ws+3496);
	i8 v676 = *(i8*)(intptr_t)v675;
	i8 v677 = v676+(+12);
	*(i1*)(intptr_t)v677 = v674;

	i8 v678 = (i8)(intptr_t)(ws+3496);
	i8 v679 = *(i8*)(intptr_t)v678;
	i8 v680 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v680)(v679);

endsub:;
}
	void f44_FCBFlush(i8 /* fcb */);
	void f43__fcb_fillbuffer(i1* /* b */, i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// FCBGetChar workspace at ws+3256 length ws+12
void f46_FCBGetChar(i1* p681 /* b */, i8 p682 /* fcb */) {
	*(i8*)(intptr_t)(ws+3256) = p682; /*fcb */

	i8 v683 = (i8)(intptr_t)(ws+3256);
	i8 v684 = *(i8*)(intptr_t)v683;
	i8 v685 = v684+(+524);
	i1 v686 = *(i1*)(intptr_t)v685;
	i1 v687 = v686&(+4);
	i1 v688 = (i1)+0;
	if (v687==v688) goto c02_00ab; else goto c02_00aa;

c02_00aa:;

	i8 v689 = (i8)(intptr_t)(ws+3256);
	i8 v690 = *(i8*)(intptr_t)v689;
	i8 v691 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v691)(v690);

c02_00ab:;

c02_00a7:;

	i8 v692 = (i8)(intptr_t)(ws+3256);
	i8 v693 = *(i8*)(intptr_t)v692;
	i8 v694 = v693+(+10);
	i2 v695 = *(i2*)(intptr_t)v694;
	i8 v696 = (i8)(intptr_t)(ws+3266);
	*(i2*)(intptr_t)v696 = v695;

	i8 v697 = (i8)(intptr_t)(ws+3266);
	i2 v698 = *(i2*)(intptr_t)v697;
	i8 v699 = (i8)(intptr_t)(ws+3256);
	i8 v700 = *(i8*)(intptr_t)v699;
	i8 v701 = v700+(+8);
	i2 v702 = *(i2*)(intptr_t)v701;
	if (v698==v702) goto c02_00af; else goto c02_00b0;

c02_00af:;

	i8 v703 = (i8)(intptr_t)(ws+3256);
	i8 v704 = *(i8*)(intptr_t)v703;
	i8 v705 = (i8)(intptr_t)(f43__fcb_fillbuffer);
	i1 v706;

	((void(*)(i1* /* b */, i8 /* fcb */))(intptr_t)v705)(&v706, v704);
	i8 v707 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v707 = v706;

	goto c02_00ac;

c02_00b0:;

	i8 v708 = (i8)(intptr_t)(ws+3256);
	i8 v709 = *(i8*)(intptr_t)v708;
	i8 v710 = v709+(+12);
	i8 v711 = (i8)(intptr_t)(ws+3266);
	i2 v712 = *(i2*)(intptr_t)v711;
	i8 v713 = v712;
	i8 v714 = v710+v713;
	i1 v715 = *(i1*)(intptr_t)v714;
	i8 v716 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v716 = v715;

	i8 v717 = (i8)(intptr_t)(ws+3256);
	i8 v718 = *(i8*)(intptr_t)v717;
	i8 v719 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v719)(v718);

c02_00ac:;

endsub:;
	*p681 = *(i1*)(intptr_t)(ws+3264);
}
	void f44_FCBFlush(i8 /* fcb */);
	void f45__fcb_flushbuffer(i1 /* b */, i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// FCBPutChar workspace at ws+3480 length ws+12
void f47_FCBPutChar(i1 p720 /* b */, i8 p721 /* fcb */) {
	*(i8*)(intptr_t)(ws+3480) = p721; /*fcb */
	*(i1*)(intptr_t)(ws+3488) = p720; /*b */

	i8 v722 = (i8)(intptr_t)(ws+3480);
	i8 v723 = *(i8*)(intptr_t)v722;
	i8 v724 = v723+(+524);
	i1 v725 = *(i1*)(intptr_t)v724;
	i1 v726 = v725&(+2);
	i1 v727 = (i1)+0;
	if (v726==v727) goto c02_00b5; else goto c02_00b4;

c02_00b4:;

	i8 v728 = (i8)(intptr_t)(ws+3480);
	i8 v729 = *(i8*)(intptr_t)v728;
	i8 v730 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v730)(v729);

c02_00b5:;

c02_00b1:;

	i8 v731 = (i8)(intptr_t)(ws+3480);
	i8 v732 = *(i8*)(intptr_t)v731;
	i8 v733 = v732+(+10);
	i2 v734 = *(i2*)(intptr_t)v733;
	i8 v735 = (i8)(intptr_t)(ws+3490);
	*(i2*)(intptr_t)v735 = v734;

	i8 v736 = (i8)(intptr_t)(ws+3490);
	i2 v737 = *(i2*)(intptr_t)v736;
	i2 v738 = (i2)+512;
	if (v737==v738) goto c02_00b9; else goto c02_00ba;

c02_00b9:;

	i8 v739 = (i8)(intptr_t)(ws+3480);
	i8 v740 = *(i8*)(intptr_t)v739;
	i8 v741 = (i8)(intptr_t)(ws+3488);
	i1 v742 = *(i1*)(intptr_t)v741;
	i8 v743 = (i8)(intptr_t)(f45__fcb_flushbuffer);

	((void(*)(i1 /* b */, i8 /* fcb */))(intptr_t)v743)(v742, v740);

	goto c02_00b6;

c02_00ba:;

	i8 v744 = (i8)(intptr_t)(ws+3488);
	i1 v745 = *(i1*)(intptr_t)v744;
	i8 v746 = (i8)(intptr_t)(ws+3480);
	i8 v747 = *(i8*)(intptr_t)v746;
	i8 v748 = v747+(+12);
	i8 v749 = (i8)(intptr_t)(ws+3490);
	i2 v750 = *(i2*)(intptr_t)v749;
	i8 v751 = v750;
	i8 v752 = v748+v751;
	*(i1*)(intptr_t)v752 = v745;

	i8 v753 = (i8)(intptr_t)(ws+3480);
	i8 v754 = *(i8*)(intptr_t)v753;
	i8 v755 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v755)(v754);

c02_00b6:;

	i8 v756 = (i8)(intptr_t)(ws+3480);
	i8 v757 = *(i8*)(intptr_t)v756;
	i8 v758 = v757+(+524);
	i1 v759 = *(i1*)(intptr_t)v758;
	i1 v760 = v759|(+4);
	i8 v761 = (i8)(intptr_t)(ws+3480);
	i8 v762 = *(i8*)(intptr_t)v761;
	i8 v763 = v762+(+524);
	*(i1*)(intptr_t)v763 = v760;

endsub:;
}

// FCBPos workspace at ws+3280 length ws+12
void f48_FCBPos(i4* p764 /* pos */, i8 p765 /* fcb */) {
	*(i8*)(intptr_t)(ws+3280) = p765; /*fcb */

	i8 v766 = (i8)(intptr_t)(ws+3280);
	i8 v767 = *(i8*)(intptr_t)v766;
	i8 v768 = v767+(+4);
	i4 v769 = *(i4*)(intptr_t)v768;
	i8 v770 = (i8)(intptr_t)(ws+3280);
	i8 v771 = *(i8*)(intptr_t)v770;
	i8 v772 = v771+(+10);
	i2 v773 = *(i2*)(intptr_t)v772;
	i4 v774 = v773;
	i4 v775 = v769+v774;
	i8 v776 = (i8)(intptr_t)(ws+3288);
	*(i4*)(intptr_t)v776 = v775;

endsub:;
	*p764 = *(i4*)(intptr_t)(ws+3288);
}
	void f44_FCBFlush(i8 /* fcb */);

// FCBSeek workspace at ws+3280 length ws+16
void f50_FCBSeek(i4 p789 /* pos */, i8 p790 /* fcb */) {
	*(i8*)(intptr_t)(ws+3280) = p790; /*fcb */
	*(i4*)(intptr_t)(ws+3288) = p789; /*pos */

	i8 v791 = (i8)(intptr_t)(ws+3288);
	i4 v792 = *(i4*)(intptr_t)v791;
	i8 v793 = (i8)(intptr_t)(ws+3280);
	i8 v794 = *(i8*)(intptr_t)v793;
	i8 v795 = v794+(+4);
	i4 v796 = *(i4*)(intptr_t)v795;
	i4 v797 = v792-v796;
	i8 v798 = (i8)(intptr_t)(ws+3292);
	*(i4*)(intptr_t)v798 = v797;

	i8 v799 = (i8)(intptr_t)(ws+3280);
	i8 v800 = *(i8*)(intptr_t)v799;
	i8 v801 = v800+(+524);
	i1 v802 = *(i1*)(intptr_t)v801;
	i1 v803 = v802&(+2);
	i1 v804 = (i1)+0;
	if (v803==v804) goto c02_00c4; else goto c02_00c3;

c02_00c3:;

	i8 v805 = (i8)(intptr_t)(ws+3292);
	i4 v806 = *(i4*)(intptr_t)v805;
	i8 v807 = (i8)(intptr_t)(ws+3280);
	i8 v808 = *(i8*)(intptr_t)v807;
	i8 v809 = v808+(+8);
	i2 v810 = *(i2*)(intptr_t)v809;
	i4 v811 = v810;
	if (v806<v811) goto c02_00c8; else goto c02_00c9;

c02_00c8:;

	i8 v812 = (i8)(intptr_t)(ws+3292);
	i4 v813 = *(i4*)(intptr_t)v812;
	i2 v814 = v813;
	i8 v815 = (i8)(intptr_t)(ws+3280);
	i8 v816 = *(i8*)(intptr_t)v815;
	i8 v817 = v816+(+10);
	*(i2*)(intptr_t)v817 = v814;

	goto endsub;

c02_00c9:;

c02_00c5:;

	goto c02_00c0;

c02_00c4:;

	i8 v818 = (i8)(intptr_t)(ws+3280);
	i8 v819 = *(i8*)(intptr_t)v818;
	i8 v820 = v819+(+524);
	i1 v821 = *(i1*)(intptr_t)v820;
	i1 v822 = v821&(+4);
	i1 v823 = (i1)+0;
	if (v822==v823) goto c02_00cd; else goto c02_00cc;

c02_00cc:;

	i8 v824 = (i8)(intptr_t)(ws+3280);
	i8 v825 = *(i8*)(intptr_t)v824;
	i8 v826 = v825+(+10);
	i2 v827 = *(i2*)(intptr_t)v826;
	i4 v828 = v827;
	i8 v829 = (i8)(intptr_t)(ws+3292);
	i4 v830 = *(i4*)(intptr_t)v829;
	if (v828<v830) goto c02_00d2; else goto c02_00d1;

c02_00d1:;

	i8 v831 = (i8)(intptr_t)(ws+3292);
	i4 v832 = *(i4*)(intptr_t)v831;
	i2 v833 = v832;
	i8 v834 = (i8)(intptr_t)(ws+3280);
	i8 v835 = *(i8*)(intptr_t)v834;
	i8 v836 = v835+(+10);
	*(i2*)(intptr_t)v836 = v833;

	goto endsub;

c02_00d2:;

c02_00ce:;

c02_00cd:;

c02_00c0:;

	i8 v837 = (i8)(intptr_t)(ws+3280);
	i8 v838 = *(i8*)(intptr_t)v837;
	i8 v839 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v839)(v838);

	i8 v840 = (i8)(intptr_t)(ws+3288);
	i4 v841 = *(i4*)(intptr_t)v840;
	i8 v842 = (i8)(intptr_t)(ws+3280);
	i8 v843 = *(i8*)(intptr_t)v842;
	i8 v844 = v843+(+4);
	*(i4*)(intptr_t)v844 = v841;

endsub:;
}

// FCBRawRead workspace at ws+3288 length ws+36
void f39_FCBRawRead(i2* p845 /* amount */, i2 p846 /* len */, i4 p847 /* pos */, i8 p848 /* fcb */) {
	*(i8*)(intptr_t)(ws+3288) = p848; /*fcb */
	*(i4*)(intptr_t)(ws+3296) = p847; /*pos */
	*(i2*)(intptr_t)(ws+3300) = p846; /*len */

	i8 v849 = (i8)(intptr_t)(ws+3288);
	i8 v850 = *(i8*)(intptr_t)v849;
	i4 v851 = *(i4*)(intptr_t)v850;
	i8 v852 = (i8)(intptr_t)(ws+3304);
	*(i4*)(intptr_t)v852 = v851;

	i8 v853 = (i8)(intptr_t)(ws+3288);
	i8 v854 = *(i8*)(intptr_t)v853;
	i8 v855 = v854+(+12);
	i8 v856 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v856 = v855;


	
*(i4*)(intptr_t)(ws+3320) 
=pread( 
*(i4*)(intptr_t)(ws+3304) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3312) 
,  
*(i2*)(intptr_t)(ws+3300) 
,  
*(i4*)(intptr_t)(ws+3296) 
); 



	i8 v857 = (i8)(intptr_t)(ws+3320);
	i4 v858 = *(i4*)(intptr_t)v857;
	i4 v859 = (i4)-1;
	if (v858==v859) goto c02_00d6; else goto c02_00d7;

c02_00d6:;

	i2 v860 = (i2)+0;
	i8 v861 = (i8)(intptr_t)(ws+3302);
	*(i2*)(intptr_t)v861 = v860;

	i8 v862 = (i8)(intptr_t)(ws+3288);
	i8 v863 = *(i8*)(intptr_t)v862;
	i8 v864 = v863+(+524);
	i1 v865 = *(i1*)(intptr_t)v864;
	i1 v866 = v865|(+1);
	i8 v867 = (i8)(intptr_t)(ws+3288);
	i8 v868 = *(i8*)(intptr_t)v867;
	i8 v869 = v868+(+524);
	*(i1*)(intptr_t)v869 = v866;

	goto c02_00d3;

c02_00d7:;

	i8 v870 = (i8)(intptr_t)(ws+3320);
	i4 v871 = *(i4*)(intptr_t)v870;
	i2 v872 = (s2)(s4)v871;
	i8 v873 = (i8)(intptr_t)(ws+3302);
	*(i2*)(intptr_t)v873 = v872;

c02_00d3:;

endsub:;
	*p845 = *(i2*)(intptr_t)(ws+3302);
}

// FCBRawWrite workspace at ws+3528 length ws+36
void f40_FCBRawWrite(i2 p874 /* len */, i4 p875 /* pos */, i8 p876 /* fcb */) {
	*(i8*)(intptr_t)(ws+3528) = p876; /*fcb */
	*(i4*)(intptr_t)(ws+3536) = p875; /*pos */
	*(i2*)(intptr_t)(ws+3540) = p874; /*len */

	i8 v877 = (i8)(intptr_t)(ws+3528);
	i8 v878 = *(i8*)(intptr_t)v877;
	i4 v879 = *(i4*)(intptr_t)v878;
	i8 v880 = (i8)(intptr_t)(ws+3544);
	*(i4*)(intptr_t)v880 = v879;

	i8 v881 = (i8)(intptr_t)(ws+3528);
	i8 v882 = *(i8*)(intptr_t)v881;
	i8 v883 = v882+(+12);
	i8 v884 = (i8)(intptr_t)(ws+3552);
	*(i8*)(intptr_t)v884 = v883;


	
*(i4*)(intptr_t)(ws+3560) 
=pwrite( 
*(i4*)(intptr_t)(ws+3544) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3552) 
,  
*(i2*)(intptr_t)(ws+3540) 
,  
*(i4*)(intptr_t)(ws+3536) 
); 



	i8 v885 = (i8)(intptr_t)(ws+3560);
	i4 v886 = *(i4*)(intptr_t)v885;
	i4 v887 = (i4)-1;
	if (v886==v887) goto c02_00db; else goto c02_00dc;

c02_00db:;

	i8 v888 = (i8)(intptr_t)(ws+3528);
	i8 v889 = *(i8*)(intptr_t)v888;
	i8 v890 = v889+(+524);
	i1 v891 = *(i1*)(intptr_t)v890;
	i1 v892 = v891|(+1);
	i8 v893 = (i8)(intptr_t)(ws+3528);
	i8 v894 = *(i8*)(intptr_t)v893;
	i8 v895 = v894+(+524);
	*(i1*)(intptr_t)v895 = v892;

c02_00dc:;

c02_00d8:;

endsub:;
}
	void f41__fcb_init(i8 /* fcb */);

// fcb_i_open workspace at ws+3304 length ws+28
void f51_fcb_i_open(i1* p896 /* errno */, i4 p897 /* flags */, i8 p898 /* filename */, i8 p899 /* fcb */) {
	*(i8*)(intptr_t)(ws+3304) = p899; /*fcb */
	*(i8*)(intptr_t)(ws+3312) = p898; /*filename */
	*(i4*)(intptr_t)(ws+3320) = p897; /*flags */

	i8 v900 = (i8)(intptr_t)(ws+3304);
	i8 v901 = *(i8*)(intptr_t)v900;
	i8 v902 = (i8)(intptr_t)(f41__fcb_init);

	((void(*)(i8 /* fcb */))(intptr_t)v902)(v901);


	
errno = 0; 


	
*(i4*)(intptr_t)(ws+3328) 
 = open((char*)(intptr_t) 
*(i8*)(intptr_t)(ws+3312) 
,  
*(i4*)(intptr_t)(ws+3320) 
,  
(+438)
); 



	i8 v903 = (i8)(intptr_t)(ws+3328);
	i4 v904 = *(i4*)(intptr_t)v903;
	i8 v905 = (i8)(intptr_t)(ws+3304);
	i8 v906 = *(i8*)(intptr_t)v905;
	*(i4*)(intptr_t)v906 = v904;

	i8 v907 = (i8)(intptr_t)(ws+3328);
	i4 v908 = *(i4*)(intptr_t)v907;
	i4 v909 = (i4)+0;
	if ((s4)v908<(s4)v909) goto c02_00e0; else goto c02_00e1;

c02_00e0:;


	
*(i1*)(intptr_t)(ws+3324) 
 = errno; 



	goto c02_00dd;

c02_00e1:;

	i1 v910 = (i1)+0;
	i8 v911 = (i8)(intptr_t)(ws+3324);
	*(i1*)(intptr_t)v911 = v910;

c02_00dd:;

endsub:;
	*p896 = *(i1*)(intptr_t)(ws+3324);
}
	void f51_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenIn workspace at ws+3280 length ws+17
void f52_FCBOpenIn(i1* p912 /* errno */, i8 p913 /* filename */, i8 p914 /* fcb */) {
	*(i8*)(intptr_t)(ws+3280) = p914; /*fcb */
	*(i8*)(intptr_t)(ws+3288) = p913; /*filename */

	i8 v915 = (i8)(intptr_t)(ws+3280);
	i8 v916 = *(i8*)(intptr_t)v915;
	i8 v917 = (i8)(intptr_t)(ws+3288);
	i8 v918 = *(i8*)(intptr_t)v917;
	i4 v919 = (i4)+0;
	i8 v920 = (i8)(intptr_t)(f51_fcb_i_open);
	i1 v921;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v920)(&v921, v919, v918, v916);
	i8 v922 = (i8)(intptr_t)(ws+3296);
	*(i1*)(intptr_t)v922 = v921;

endsub:;
	*p912 = *(i1*)(intptr_t)(ws+3296);
}
	void f51_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenOut workspace at ws+3216 length ws+17
void f54_FCBOpenOut(i1* p934 /* errno */, i8 p935 /* filename */, i8 p936 /* fcb */) {
	*(i8*)(intptr_t)(ws+3216) = p936; /*fcb */
	*(i8*)(intptr_t)(ws+3224) = p935; /*filename */

	i8 v937 = (i8)(intptr_t)(ws+3216);
	i8 v938 = *(i8*)(intptr_t)v937;
	i8 v939 = (i8)(intptr_t)(ws+3224);
	i8 v940 = *(i8*)(intptr_t)v939;
	i4 v941 = (i4)+578;
	i8 v942 = (i8)(intptr_t)(f51_fcb_i_open);
	i1 v943;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v942)(&v943, v941, v940, v938);
	i8 v944 = (i8)(intptr_t)(ws+3232);
	*(i1*)(intptr_t)v944 = v943;

endsub:;
	*p934 = *(i1*)(intptr_t)(ws+3232);
}
	void f44_FCBFlush(i8 /* fcb */);

// FCBClose workspace at ws+3280 length ws+16
void f55_FCBClose(i1* p945 /* errno */, i8 p946 /* fcb */) {
	*(i8*)(intptr_t)(ws+3280) = p946; /*fcb */

	i8 v947 = (i8)(intptr_t)(ws+3280);
	i8 v948 = *(i8*)(intptr_t)v947;
	i8 v949 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v949)(v948);

	i8 v950 = (i8)(intptr_t)(ws+3280);
	i8 v951 = *(i8*)(intptr_t)v950;
	i4 v952 = *(i4*)(intptr_t)v951;
	i8 v953 = (i8)(intptr_t)(ws+3292);
	*(i4*)(intptr_t)v953 = v952;


	
errno = 0; 


	
close( 
*(i4*)(intptr_t)(ws+3292) 
); 


	
*(i1*)(intptr_t)(ws+3288) 
 = errno; 



endsub:;
	*p945 = *(i1*)(intptr_t)(ws+3288);
}
	void f29_StrLen(i8* /* size */, i8 /* s */);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f31_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);

// StrDupBraced workspace at ws+3392 length ws+32
void f70_StrDupBraced(i8* p1033 /* news */, i8 p1034 /* s */) {
	*(i8*)(intptr_t)(ws+3392) = p1034; /*s */

	i8 v1035 = (i8)(intptr_t)(ws+3392);
	i8 v1036 = *(i8*)(intptr_t)v1035;
	i8 v1037 = (i8)(intptr_t)(f29_StrLen);
	i8 v1038;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v1037)(&v1038, v1036);
	i8 v1039 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v1039 = v1038;

	i8 v1040 = (i8)(intptr_t)(ws+3408);
	i8 v1041 = *(i8*)(intptr_t)v1040;
	i8 v1042 = v1041+(+3);
	i8 v1043 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v1044;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1043)(&v1044, v1042);
	i8 v1045 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v1045 = v1044;

	i8 v1046 = (i8)(intptr_t)(ws+3400);
	i8 v1047 = *(i8*)(intptr_t)v1046;
	i8 v1048 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v1048 = v1047;

	i1 v1049 = (i1)+91;
	i8 v1050 = (i8)(intptr_t)(ws+3416);
	i8 v1051 = *(i8*)(intptr_t)v1050;
	*(i1*)(intptr_t)v1051 = v1049;

	i8 v1052 = (i8)(intptr_t)(ws+3416);
	i8 v1053 = *(i8*)(intptr_t)v1052;
	i8 v1054 = v1053+(+1);
	i8 v1055 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v1055 = v1054;

	i8 v1056 = (i8)(intptr_t)(ws+3392);
	i8 v1057 = *(i8*)(intptr_t)v1056;
	i8 v1058 = (i8)(intptr_t)(ws+3408);
	i8 v1059 = *(i8*)(intptr_t)v1058;
	i8 v1060 = (i8)(intptr_t)(ws+3416);
	i8 v1061 = *(i8*)(intptr_t)v1060;
	i8 v1062 = (i8)(intptr_t)(f31_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v1062)(v1061, v1059, v1057);

	i8 v1063 = (i8)(intptr_t)(ws+3416);
	i8 v1064 = *(i8*)(intptr_t)v1063;
	i8 v1065 = (i8)(intptr_t)(ws+3408);
	i8 v1066 = *(i8*)(intptr_t)v1065;
	i8 v1067 = v1064+v1066;
	i8 v1068 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v1068 = v1067;

	i1 v1069 = (i1)+93;
	i8 v1070 = (i8)(intptr_t)(ws+3416);
	i8 v1071 = *(i8*)(intptr_t)v1070;
	*(i1*)(intptr_t)v1071 = v1069;

	i8 v1072 = (i8)(intptr_t)(ws+3416);
	i8 v1073 = *(i8*)(intptr_t)v1072;
	i8 v1074 = v1073+(+1);
	i8 v1075 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v1075 = v1074;

	i1 v1076 = (i1)+0;
	i8 v1077 = (i8)(intptr_t)(ws+3416);
	i8 v1078 = *(i8*)(intptr_t)v1077;
	*(i1*)(intptr_t)v1078 = v1076;

endsub:;
	*p1033 = *(i8*)(intptr_t)(ws+3400);
}
	void f29_StrLen(i8* /* size */, i8 /* s */);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f31_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);

// StrDupArrayed workspace at ws+3360 length ws+40
void f71_StrDupArrayed(i8* p1079 /* news */, i2 p1080 /* i */, i8 p1081 /* s */) {
	*(i8*)(intptr_t)(ws+3360) = p1081; /*s */
	*(i2*)(intptr_t)(ws+3368) = p1080; /*i */

	i8 v1082 = (i8)(intptr_t)(ws+3360);
	i8 v1083 = *(i8*)(intptr_t)v1082;
	i8 v1084 = (i8)(intptr_t)(f29_StrLen);
	i8 v1085;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v1084)(&v1085, v1083);
	i8 v1086 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v1086 = v1085;

	i8 v1087 = (i8)(intptr_t)(ws+3384);
	i8 v1088 = *(i8*)(intptr_t)v1087;
	i8 v1089 = v1088+(+3);
	i8 v1090 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v1091;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1090)(&v1091, v1089);
	i8 v1092 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v1092 = v1091;

	i8 v1093 = (i8)(intptr_t)(ws+3376);
	i8 v1094 = *(i8*)(intptr_t)v1093;
	i8 v1095 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v1095 = v1094;

	i8 v1096 = (i8)(intptr_t)(ws+3360);
	i8 v1097 = *(i8*)(intptr_t)v1096;
	i8 v1098 = (i8)(intptr_t)(ws+3384);
	i8 v1099 = *(i8*)(intptr_t)v1098;
	i8 v1100 = (i8)(intptr_t)(ws+3392);
	i8 v1101 = *(i8*)(intptr_t)v1100;
	i8 v1102 = (i8)(intptr_t)(f31_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v1102)(v1101, v1099, v1097);

	i8 v1103 = (i8)(intptr_t)(ws+3392);
	i8 v1104 = *(i8*)(intptr_t)v1103;
	i8 v1105 = (i8)(intptr_t)(ws+3384);
	i8 v1106 = *(i8*)(intptr_t)v1105;
	i8 v1107 = v1104+v1106;
	i8 v1108 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v1108 = v1107;

	i1 v1109 = (i1)+91;
	i8 v1110 = (i8)(intptr_t)(ws+3392);
	i8 v1111 = *(i8*)(intptr_t)v1110;
	*(i1*)(intptr_t)v1111 = v1109;

	i8 v1112 = (i8)(intptr_t)(ws+3392);
	i8 v1113 = *(i8*)(intptr_t)v1112;
	i8 v1114 = v1113+(+1);
	i8 v1115 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v1115 = v1114;

	i1 v1116 = (i1)+93;
	i8 v1117 = (i8)(intptr_t)(ws+3392);
	i8 v1118 = *(i8*)(intptr_t)v1117;
	*(i1*)(intptr_t)v1118 = v1116;

	i8 v1119 = (i8)(intptr_t)(ws+3392);
	i8 v1120 = *(i8*)(intptr_t)v1119;
	i8 v1121 = v1120+(+1);
	i8 v1122 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v1122 = v1121;

	i1 v1123 = (i1)+0;
	i8 v1124 = (i8)(intptr_t)(ws+3392);
	i8 v1125 = *(i8*)(intptr_t)v1124;
	*(i1*)(intptr_t)v1125 = v1123;

endsub:;
	*p1079 = *(i8*)(intptr_t)(ws+3376);
}
	void f29_StrLen(i8* /* size */, i8 /* s */);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f31_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);

// InternalStrDup workspace at ws+3368 length ws+24
void f72_InternalStrDup(i8* p1126 /* news */, i8 p1127 /* s */) {
	*(i8*)(intptr_t)(ws+3368) = p1127; /*s */

	i8 v1128 = (i8)(intptr_t)(ws+3368);
	i8 v1129 = *(i8*)(intptr_t)v1128;
	i8 v1130 = (i8)(intptr_t)(f29_StrLen);
	i8 v1131;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v1130)(&v1131, v1129);
	i8 v1132 = v1131+(+1);
	i8 v1133 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v1133 = v1132;

	i8 v1134 = (i8)(intptr_t)(ws+3384);
	i8 v1135 = *(i8*)(intptr_t)v1134;
	i8 v1136 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v1137;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1136)(&v1137, v1135);
	i8 v1138 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v1138 = v1137;

	i8 v1139 = (i8)(intptr_t)(ws+3368);
	i8 v1140 = *(i8*)(intptr_t)v1139;
	i8 v1141 = (i8)(intptr_t)(ws+3384);
	i8 v1142 = *(i8*)(intptr_t)v1141;
	i8 v1143 = (i8)(intptr_t)(ws+3376);
	i8 v1144 = *(i8*)(intptr_t)v1143;
	i8 v1145 = (i8)(intptr_t)(f31_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v1145)(v1144, v1142, v1140);

endsub:;
	*p1126 = *(i8*)(intptr_t)(ws+3376);
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);

// AllocNewSymbol workspace at ws+3424 length ws+8
void f64_AllocNewSymbol(i8* p1148 /* symbol */) {

	i8 v1149 = (i8)(intptr_t)(ws+232);
	i8 v1150 = *(i8*)(intptr_t)v1149;
	i8 v1151 = (i8)+0;
	if (v1150==v1151) goto c02_00f9; else goto c02_00f8;

c02_00f8:;

	i8 v1152 = (i8)(intptr_t)(ws+232);
	i8 v1153 = *(i8*)(intptr_t)v1152;
	i8 v1154 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v1154 = v1153;

	i8 v1155 = (i8)(intptr_t)(ws+232);
	i8 v1156 = *(i8*)(intptr_t)v1155;
	i8 v1157 = v1156+(+24);
	i8 v1158 = *(i8*)(intptr_t)v1157;
	i8 v1159 = (i8)(intptr_t)(ws+232);
	*(i8*)(intptr_t)v1159 = v1158;

	i8 v1160 = (i8)(intptr_t)(ws+3424);
	i8 v1161 = *(i8*)(intptr_t)v1160;
	i1 v1162 = (i1)+0;
	i8 v1163 = (i8)+33;
	i8 v1164 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v1164)(v1163, v1162, v1161);

	goto c02_00f5;

c02_00f9:;

	i8 v1165 = (i8)+33;
	i8 v1166 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v1167;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1166)(&v1167, v1165);
	i8 v1168 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v1168 = v1167;

c02_00f5:;

endsub:;
	*p1148 = *(i8*)(intptr_t)(ws+3424);
}

// FreeSymbol workspace at ws+3384 length ws+8
void f65_FreeSymbol(i8 p1169 /* symbol */) {
	*(i8*)(intptr_t)(ws+3384) = p1169; /*symbol */

	i8 v1170 = (i8)(intptr_t)(ws+232);
	i8 v1171 = *(i8*)(intptr_t)v1170;
	i8 v1172 = (i8)(intptr_t)(ws+3384);
	i8 v1173 = *(i8*)(intptr_t)v1172;
	i8 v1174 = v1173+(+24);
	*(i8*)(intptr_t)v1174 = v1171;

	i8 v1175 = (i8)(intptr_t)(ws+3384);
	i8 v1176 = *(i8*)(intptr_t)v1175;
	i8 v1177 = (i8)(intptr_t)(ws+232);
	*(i8*)(intptr_t)v1177 = v1176;

endsub:;
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);

// AllocNewType workspace at ws+3392 length ws+8
void f66_AllocNewType(i8* p1180 /* type */) {

	i8 v1181 = (i8)(intptr_t)(ws+240);
	i8 v1182 = *(i8*)(intptr_t)v1181;
	i8 v1183 = (i8)+0;
	if (v1182==v1183) goto c02_00fe; else goto c02_00fd;

c02_00fd:;

	i8 v1184 = (i8)(intptr_t)(ws+240);
	i8 v1185 = *(i8*)(intptr_t)v1184;
	i8 v1186 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v1186 = v1185;

	i8 v1187 = (i8)(intptr_t)(ws+240);
	i8 v1188 = *(i8*)(intptr_t)v1187;
	i8 v1189 = v1188+(+40);
	i8 v1190 = *(i8*)(intptr_t)v1189;
	i8 v1191 = (i8)(intptr_t)(ws+240);
	*(i8*)(intptr_t)v1191 = v1190;

	i8 v1192 = (i8)(intptr_t)(ws+3392);
	i8 v1193 = *(i8*)(intptr_t)v1192;
	i1 v1194 = (i1)+0;
	i8 v1195 = (i8)+54;
	i8 v1196 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v1196)(v1195, v1194, v1193);

	goto c02_00fa;

c02_00fe:;

	i8 v1197 = (i8)+54;
	i8 v1198 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v1199;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1198)(&v1199, v1197);
	i8 v1200 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v1200 = v1199;

c02_00fa:;

endsub:;
	*p1180 = *(i8*)(intptr_t)(ws+3392);
}

// FreeType workspace at ws+3384 length ws+8
void f67_FreeType(i8 p1201 /* type */) {
	*(i8*)(intptr_t)(ws+3384) = p1201; /*type */

	i8 v1202 = (i8)(intptr_t)(ws+240);
	i8 v1203 = *(i8*)(intptr_t)v1202;
	i8 v1204 = (i8)(intptr_t)(ws+3384);
	i8 v1205 = *(i8*)(intptr_t)v1204;
	i8 v1206 = v1205+(+40);
	*(i8*)(intptr_t)v1206 = v1203;

	i8 v1207 = (i8)(intptr_t)(ws+3384);
	i8 v1208 = *(i8*)(intptr_t)v1207;
	i8 v1209 = (i8)(intptr_t)(ws+240);
	*(i8*)(intptr_t)v1209 = v1208;

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

// InternalAlloc workspace at ws+3456 length ws+16
void f69_InternalAlloc(i8* p1210 /* block */, i8 p1211 /* length */) {
	*(i8*)(intptr_t)(ws+3456) = p1211; /*length */

	i8 v1212 = (i8)(intptr_t)(ws+3456);
	i8 v1213 = *(i8*)(intptr_t)v1212;
	i8 v1214 = (i8)(intptr_t)(f32_RawAlloc);
	i8 v1215;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1214)(&v1215, v1213);
	i8 v1216 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v1216 = v1215;

	i8 v1217 = (i8)(intptr_t)(ws+3464);
	i8 v1218 = *(i8*)(intptr_t)v1217;
	i8 v1219 = (i8)+0;
	if (v1218==v1219) goto c02_0102; else goto c02_0103;

c02_0102:;

c02_0106:;

	i8 v1220 = (i8)(intptr_t)(ws+232);
	i8 v1221 = *(i8*)(intptr_t)v1220;
	i8 v1222 = (i8)+0;
	if (v1221==v1222) goto c02_0109; else goto c02_0108;

c02_0108:;

	i8 v1223 = (i8)(intptr_t)(ws+232);
	i8 v1224 = *(i8*)(intptr_t)v1223;
	i8 v1225 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v1225 = v1224;

	i8 v1226 = (i8)(intptr_t)(ws+232);
	i8 v1227 = *(i8*)(intptr_t)v1226;
	i8 v1228 = v1227+(+24);
	i8 v1229 = *(i8*)(intptr_t)v1228;
	i8 v1230 = (i8)(intptr_t)(ws+232);
	*(i8*)(intptr_t)v1230 = v1229;

	i8 v1231 = (i8)(intptr_t)(ws+3464);
	i8 v1232 = *(i8*)(intptr_t)v1231;
	i8 v1233 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v1233)(v1232);

	goto c02_0106;

c02_0109:;

c02_010c:;

	i8 v1234 = (i8)(intptr_t)(ws+240);
	i8 v1235 = *(i8*)(intptr_t)v1234;
	i8 v1236 = (i8)+0;
	if (v1235==v1236) goto c02_010f; else goto c02_010e;

c02_010e:;

	i8 v1237 = (i8)(intptr_t)(ws+240);
	i8 v1238 = *(i8*)(intptr_t)v1237;
	i8 v1239 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v1239 = v1238;

	i8 v1240 = (i8)(intptr_t)(ws+240);
	i8 v1241 = *(i8*)(intptr_t)v1240;
	i8 v1242 = v1241+(+40);
	i8 v1243 = *(i8*)(intptr_t)v1242;
	i8 v1244 = (i8)(intptr_t)(ws+240);
	*(i8*)(intptr_t)v1244 = v1243;

	i8 v1245 = (i8)(intptr_t)(ws+3464);
	i8 v1246 = *(i8*)(intptr_t)v1245;
	i8 v1247 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v1247)(v1246);

	goto c02_010c;

c02_010f:;

	i8 v1248 = (i8)(intptr_t)(f73_PurgeAllFreeNodes);

	((void(*)(void))(intptr_t)v1248)();

	i8 v1249 = (i8)(intptr_t)(ws+3456);
	i8 v1250 = *(i8*)(intptr_t)v1249;
	i8 v1251 = (i8)(intptr_t)(f32_RawAlloc);
	i8 v1252;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1251)(&v1252, v1250);
	i8 v1253 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v1253 = v1252;

	i8 v1254 = (i8)(intptr_t)(ws+3464);
	i8 v1255 = *(i8*)(intptr_t)v1254;
	i8 v1256 = (i8)+0;
	if (v1255==v1256) goto c02_0113; else goto c02_0114;

c02_0113:;

	i8 v1257 = (i8)(intptr_t)c02_s0001;
	i8 v1258 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1258)(v1257);

	i8 v1259 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v1259)();

c02_0114:;

c02_0110:;

c02_0103:;

c02_00ff:;

endsub:;
	*p1210 = *(i8*)(intptr_t)(ws+3464);
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

// StartError workspace at ws+3488 length ws+0
void f74_StartError(void) {

	i8 v1268 = (i8)(intptr_t)c02_s0028;
	i8 v1269 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1269)(v1268);

	i8 v1270 = (i8)(intptr_t)(ws+256);
	i8 v1271 = *(i8*)(intptr_t)v1270;
	i8 v1272 = (i8)+0;
	if (v1271==v1272) goto c02_011b; else goto c02_011c;

c02_011b:;

	i8 v1273 = (i8)(intptr_t)c02_s0029;
	i8 v1274 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1274)(v1273);

	goto c02_0118;

c02_011c:;

	i8 v1275 = (i8)(intptr_t)(ws+256);
	i8 v1276 = *(i8*)(intptr_t)v1275;
	i8 v1277 = v1276+(+8);
	i8 v1278 = *(i8*)(intptr_t)v1277;
	i8 v1279 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1279)(v1278);

	i8 v1280 = (i8)(intptr_t)c02_s002a;
	i8 v1281 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1281)(v1280);

	i8 v1282 = (i8)(intptr_t)(ws+256);
	i8 v1283 = *(i8*)(intptr_t)v1282;
	i8 v1284 = v1283+(+16);
	i2 v1285 = *(i2*)(intptr_t)v1284;
	i8 v1286 = (i8)(intptr_t)(f17_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v1286)(v1285);

c02_0118:;

	i8 v1287 = (i8)(intptr_t)c02_s002b;
	i8 v1288 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1288)(v1287);

endsub:;
}
	void f13_print_nl(void);
	void f6_ExitWithError(void);

// EndError workspace at ws+3488 length ws+0
void f75_EndError(void) {

	i8 v1289 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v1289)();

	i8 v1290 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v1290)();

endsub:;
}
	void f74_StartError(void);
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// SimpleError workspace at ws+3480 length ws+8
void f76_SimpleError(i8 p1291 /* message */) {
	*(i8*)(intptr_t)(ws+3480) = p1291; /*message */

	i8 v1292 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v1292)();

	i8 v1293 = (i8)(intptr_t)(ws+3480);
	i8 v1294 = *(i8*)(intptr_t)v1293;
	i8 v1295 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1295)(v1294);

	i8 v1296 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v1296)();

endsub:;
}
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);

// LexerAddIncludePath workspace at ws+3216 length ws+16
void f77_LexerAddIncludePath(i8 p1297 /* path */) {
	*(i8*)(intptr_t)(ws+3216) = p1297; /*path */

	i8 v1298 = (i8)+16;
	i8 v1299 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v1300;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1299)(&v1300, v1298);
	i8 v1301 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v1301 = v1300;

	i8 v1302 = (i8)(intptr_t)(ws+248);
	i8 v1303 = *(i8*)(intptr_t)v1302;
	i8 v1304 = (i8)(intptr_t)(ws+3224);
	i8 v1305 = *(i8*)(intptr_t)v1304;
	*(i8*)(intptr_t)v1305 = v1303;

	i8 v1306 = (i8)(intptr_t)(ws+3216);
	i8 v1307 = *(i8*)(intptr_t)v1306;
	i8 v1308 = (i8)(intptr_t)(ws+3224);
	i8 v1309 = *(i8*)(intptr_t)v1308;
	i8 v1310 = v1309+(+8);
	*(i8*)(intptr_t)v1310 = v1307;

	i8 v1311 = (i8)(intptr_t)(ws+3224);
	i8 v1312 = *(i8*)(intptr_t)v1311;
	i8 v1313 = (i8)(intptr_t)(ws+248);
	*(i8*)(intptr_t)v1313 = v1312;

endsub:;
}
const i1 c02_s002c[] = { 0x20,0x20,0 };
	void f12_print(i8 /* ptr */);

// LexerPrintSpaces workspace at ws+3264 length ws+1
void f78_LexerPrintSpaces(void) {

	i8 v1316 = (i8)(intptr_t)(ws+925);
	i1 v1317 = *(i1*)(intptr_t)v1316;
	i8 v1318 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v1318 = v1317;

c02_011f:;

	i8 v1319 = (i8)(intptr_t)(ws+3264);
	i1 v1320 = *(i1*)(intptr_t)v1319;
	i1 v1321 = (i1)+0;
	if (v1320==v1321) goto c02_0122; else goto c02_0121;

c02_0121:;

	i8 v1322 = (i8)(intptr_t)c02_s002c;
	i8 v1323 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1323)(v1322);

	i8 v1324 = (i8)(intptr_t)(ws+3264);
	i1 v1325 = *(i1*)(intptr_t)v1324;
	i1 v1326 = v1325+(-1);
	i8 v1327 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v1327 = v1326;

	goto c02_011f;

c02_0122:;

endsub:;
}
	void f52_FCBOpenIn(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
	void f50_FCBSeek(i4 /* pos */, i8 /* fcb */);

// lexer_i_open workspace at ws+3264 length ws+9
void f79_lexer_i_open(i1* p1328 /* result */, i8 p1329 /* file */) {
	*(i8*)(intptr_t)(ws+3264) = p1329; /*file */

	i8 v1330 = (i8)(intptr_t)(ws+400);
	i8 v1331 = (i8)(intptr_t)(ws+3264);
	i8 v1332 = *(i8*)(intptr_t)v1331;
	i8 v1333 = v1332+(+8);
	i8 v1334 = *(i8*)(intptr_t)v1333;
	i8 v1335 = (i8)(intptr_t)(f52_FCBOpenIn);
	i1 v1336;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v1335)(&v1336, v1334, v1330);
	i1 v1337 = (i1)+0;
	if (v1336==v1337) goto c02_0126; else goto c02_0127;

c02_0126:;

	i8 v1338 = (i8)(intptr_t)(ws+400);
	i8 v1339 = (i8)(intptr_t)(ws+3264);
	i8 v1340 = *(i8*)(intptr_t)v1339;
	i8 v1341 = v1340+(+20);
	i4 v1342 = *(i4*)(intptr_t)v1341;
	i8 v1343 = (i8)(intptr_t)(f50_FCBSeek);

	((void(*)(i4 /* pos */, i8 /* fcb */))(intptr_t)v1343)(v1342, v1338);

	i1 v1344 = (i1)+0;
	i8 v1345 = (i8)(intptr_t)(ws+3272);
	*(i1*)(intptr_t)v1345 = v1344;

	goto c02_0123;

c02_0127:;

	i1 v1346 = (i1)+1;
	i8 v1347 = (i8)(intptr_t)(ws+3272);
	*(i1*)(intptr_t)v1347 = v1346;

c02_0123:;

endsub:;
	*p1328 = *(i1*)(intptr_t)(ws+3272);
}
	void f48_FCBPos(i4* /* pos */, i8 /* fcb */);
	void f55_FCBClose(i1* /* errno */, i8 /* fcb */);

// lexer_i_close workspace at ws+3264 length ws+9
void f80_lexer_i_close(i8 p1348 /* file */) {
	*(i8*)(intptr_t)(ws+3264) = p1348; /*file */

	i8 v1349 = (i8)(intptr_t)(ws+400);
	i8 v1350 = (i8)(intptr_t)(f48_FCBPos);
	i4 v1351;

	((void(*)(i4* /* pos */, i8 /* fcb */))(intptr_t)v1350)(&v1351, v1349);
	i8 v1352 = (i8)(intptr_t)(ws+3264);
	i8 v1353 = *(i8*)(intptr_t)v1352;
	i8 v1354 = v1353+(+20);
	*(i4*)(intptr_t)v1354 = v1351;

	i8 v1355 = (i8)(intptr_t)(ws+400);
	i8 v1356 = (i8)(intptr_t)(f55_FCBClose);
	i1 v1357;

	((void(*)(i1* /* errno */, i8 /* fcb */))(intptr_t)v1356)(&v1357, v1355);
	i8 v1358 = (i8)(intptr_t)(ws+3272);
	*(i1*)(intptr_t)v1358 = v1357;

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

// LexerIncludeFile workspace at ws+3224 length ws+40
void f81_LexerIncludeFile(i8 p1359 /* path */) {
	*(i8*)(intptr_t)(ws+3224) = p1359; /*path */

	i8 v1360 = (i8)+24;
	i8 v1361 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v1362;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1361)(&v1362, v1360);
	i8 v1363 = (i8)(intptr_t)(ws+3232);
	*(i8*)(intptr_t)v1363 = v1362;

	i8 v1364 = (i8)(intptr_t)(ws+256);
	i8 v1365 = *(i8*)(intptr_t)v1364;
	i8 v1366 = (i8)(intptr_t)(ws+3232);
	i8 v1367 = *(i8*)(intptr_t)v1366;
	*(i8*)(intptr_t)v1367 = v1365;

	i2 v1368 = (i2)+1;
	i8 v1369 = (i8)(intptr_t)(ws+3232);
	i8 v1370 = *(i8*)(intptr_t)v1369;
	i8 v1371 = v1370+(+16);
	*(i2*)(intptr_t)v1371 = v1368;

	i8 v1372 = (i8)(intptr_t)(ws+256);
	i8 v1373 = *(i8*)(intptr_t)v1372;
	i8 v1374 = (i8)+0;
	if (v1373==v1374) goto c02_012c; else goto c02_012b;

c02_012b:;

	i8 v1375 = (i8)(intptr_t)(ws+256);
	i8 v1376 = *(i8*)(intptr_t)v1375;
	i8 v1377 = (i8)(intptr_t)(f80_lexer_i_close);

	((void(*)(i8 /* file */))(intptr_t)v1377)(v1376);

c02_012c:;

c02_0128:;

	i8 v1378 = (i8)(intptr_t)(ws+248);
	i8 v1379 = *(i8*)(intptr_t)v1378;
	i8 v1380 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v1380 = v1379;

	i8 v1381 = (i8)(intptr_t)(ws+3224);
	i8 v1382 = *(i8*)(intptr_t)v1381;
	i8 v1383 = (i8)(intptr_t)(f29_StrLen);
	i8 v1384;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v1383)(&v1384, v1382);
	i8 v1385 = (i8)(intptr_t)(ws+3248);
	*(i8*)(intptr_t)v1385 = v1384;

c02_012f:;

	i8 v1386 = (i8)(intptr_t)(ws+3240);
	i8 v1387 = *(i8*)(intptr_t)v1386;
	i8 v1388 = (i8)+0;
	if (v1387==v1388) goto c02_0132; else goto c02_0131;

c02_0131:;

	i8 v1389 = (i8)(intptr_t)(ws+3240);
	i8 v1390 = *(i8*)(intptr_t)v1389;
	i8 v1391 = v1390+(+8);
	i8 v1392 = *(i8*)(intptr_t)v1391;
	i8 v1393 = (i8)(intptr_t)(f29_StrLen);
	i8 v1394;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v1393)(&v1394, v1392);
	i8 v1395 = (i8)(intptr_t)(ws+3256);
	*(i8*)(intptr_t)v1395 = v1394;

	i8 v1396 = (i8)(intptr_t)(ws+3248);
	i8 v1397 = *(i8*)(intptr_t)v1396;
	i8 v1398 = (i8)(intptr_t)(ws+3256);
	i8 v1399 = *(i8*)(intptr_t)v1398;
	i8 v1400 = v1397+v1399;
	i8 v1401 = v1400+(+1);
	i8 v1402 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v1403;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1402)(&v1403, v1401);
	i8 v1404 = (i8)(intptr_t)(ws+3232);
	i8 v1405 = *(i8*)(intptr_t)v1404;
	i8 v1406 = v1405+(+8);
	*(i8*)(intptr_t)v1406 = v1403;

	i8 v1407 = (i8)(intptr_t)(ws+3240);
	i8 v1408 = *(i8*)(intptr_t)v1407;
	i8 v1409 = v1408+(+8);
	i8 v1410 = *(i8*)(intptr_t)v1409;
	i8 v1411 = (i8)(intptr_t)(ws+3256);
	i8 v1412 = *(i8*)(intptr_t)v1411;
	i8 v1413 = (i8)(intptr_t)(ws+3232);
	i8 v1414 = *(i8*)(intptr_t)v1413;
	i8 v1415 = v1414+(+8);
	i8 v1416 = *(i8*)(intptr_t)v1415;
	i8 v1417 = (i8)(intptr_t)(f31_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v1417)(v1416, v1412, v1410);

	i8 v1418 = (i8)(intptr_t)(ws+3224);
	i8 v1419 = *(i8*)(intptr_t)v1418;
	i8 v1420 = (i8)(intptr_t)(ws+3248);
	i8 v1421 = *(i8*)(intptr_t)v1420;
	i8 v1422 = v1421+(+1);
	i8 v1423 = (i8)(intptr_t)(ws+3232);
	i8 v1424 = *(i8*)(intptr_t)v1423;
	i8 v1425 = v1424+(+8);
	i8 v1426 = *(i8*)(intptr_t)v1425;
	i8 v1427 = (i8)(intptr_t)(ws+3256);
	i8 v1428 = *(i8*)(intptr_t)v1427;
	i8 v1429 = v1426+v1428;
	i8 v1430 = (i8)(intptr_t)(f31_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v1430)(v1429, v1422, v1419);

	i8 v1431 = (i8)(intptr_t)(ws+3232);
	i8 v1432 = *(i8*)(intptr_t)v1431;
	i8 v1433 = (i8)(intptr_t)(f79_lexer_i_open);
	i1 v1434;

	((void(*)(i1* /* result */, i8 /* file */))(intptr_t)v1433)(&v1434, v1432);
	i1 v1435 = (i1)+0;
	if (v1434==v1435) goto c02_0136; else goto c02_0137;

c02_0136:;

	i8 v1436 = (i8)(intptr_t)(ws+925);
	i1 v1437 = *(i1*)(intptr_t)v1436;
	i1 v1438 = v1437+(+1);
	i8 v1439 = (i8)(intptr_t)(ws+925);
	*(i1*)(intptr_t)v1439 = v1438;

	i8 v1440 = (i8)(intptr_t)(f78_LexerPrintSpaces);

	((void(*)(void))(intptr_t)v1440)();

	i8 v1441 = (i8)(intptr_t)c02_s002d;
	i8 v1442 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1442)(v1441);

	i8 v1443 = (i8)(intptr_t)(ws+3232);
	i8 v1444 = *(i8*)(intptr_t)v1443;
	i8 v1445 = v1444+(+8);
	i8 v1446 = *(i8*)(intptr_t)v1445;
	i8 v1447 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1447)(v1446);

	i8 v1448 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v1448)();

	i8 v1449 = (i8)(intptr_t)(ws+3232);
	i8 v1450 = *(i8*)(intptr_t)v1449;
	i8 v1451 = (i8)(intptr_t)(ws+256);
	*(i8*)(intptr_t)v1451 = v1450;

	goto endsub;

c02_0137:;

c02_0133:;

	i8 v1452 = (i8)(intptr_t)(ws+3232);
	i8 v1453 = *(i8*)(intptr_t)v1452;
	i8 v1454 = v1453+(+8);
	i8 v1455 = *(i8*)(intptr_t)v1454;
	i8 v1456 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v1456)(v1455);

	i8 v1457 = (i8)(intptr_t)(ws+3240);
	i8 v1458 = *(i8*)(intptr_t)v1457;
	i8 v1459 = *(i8*)(intptr_t)v1458;
	i8 v1460 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v1460 = v1459;

	goto c02_012f;

c02_0132:;

	i8 v1461 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v1461)();

	i8 v1462 = (i8)(intptr_t)c02_s002e;
	i8 v1463 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1463)(v1462);

	i8 v1464 = (i8)(intptr_t)(ws+3224);
	i8 v1465 = *(i8*)(intptr_t)v1464;
	i8 v1466 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1466)(v1465);

	i8 v1467 = (i8)(intptr_t)c02_s002f;
	i8 v1468 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1468)(v1467);

	i8 v1469 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v1469)();

endsub:;
}

// lexer_i_ctype workspace at ws+3232 length ws+3
void f83_lexer_i_ctype(i1* p1471 /* type */, i1* p1472 /* token */, i1 p1473 /* c */) {
	*(i1*)(intptr_t)(ws+3232) = p1473; /*c */

	i8 v1474 = (i8)(intptr_t)(ws+3232);
	i1 v1475 = *(i1*)(intptr_t)v1474;
	i1 v1476 = (i1)+33;
	if (v1475<v1476) goto c02_013e; else goto c02_013f;

c02_013f:;

	i1 v1477 = (i1)+127;
	i8 v1478 = (i8)(intptr_t)(ws+3232);
	i1 v1479 = *(i1*)(intptr_t)v1478;
	if (v1477<v1479) goto c02_013e; else goto c02_013d;

c02_013d:;

	i8 v1480 = (i8)(intptr_t)((i1*)f3___main_s0115);
	i8 v1481 = (i8)(intptr_t)(ws+3232);
	i1 v1482 = *(i1*)(intptr_t)v1481;
	i1 v1483 = v1482+(-33);
	i8 v1484 = v1483;
	i8 v1485 = v1480+v1484;
	i1 v1486 = *(i1*)(intptr_t)v1485;
	i8 v1487 = (i8)(intptr_t)(ws+3233);
	*(i1*)(intptr_t)v1487 = v1486;

	i8 v1488 = (i8)(intptr_t)(ws+3233);
	i1 v1489 = *(i1*)(intptr_t)v1488;
	i1 v1490 = v1489&(+128);
	i1 v1491 = (i1)+0;
	if (v1490==v1491) goto c02_0144; else goto c02_0143;

c02_0143:;

	i8 v1492 = (i8)(intptr_t)(ws+3233);
	i1 v1493 = *(i1*)(intptr_t)v1492;
	i1 v1494 = v1493&(-129);
	i8 v1495 = (i8)(intptr_t)(ws+3234);
	*(i1*)(intptr_t)v1495 = v1494;

	i1 v1496 = (i1)+128;
	i8 v1497 = (i8)(intptr_t)(ws+3233);
	*(i1*)(intptr_t)v1497 = v1496;

c02_0144:;

c02_0140:;

	goto c02_0138;

c02_013e:;

	i1 v1498 = (i1)+0;
	i8 v1499 = (i8)(intptr_t)(ws+3233);
	*(i1*)(intptr_t)v1499 = v1498;

	i1 v1500 = (i1)+0;
	i8 v1501 = (i8)(intptr_t)(ws+3234);
	*(i1*)(intptr_t)v1501 = v1500;

c02_0138:;

endsub:;
	*p1472 = *(i1*)(intptr_t)(ws+3234);
	*p1471 = *(i1*)(intptr_t)(ws+3233);
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

// lexer_i_getchar workspace at ws+3240 length ws+16
void f84_lexer_i_getchar(i1* p1502 /* c */) {

	i8 v1503 = (i8)(intptr_t)(ws+264);
	i1 v1504 = *(i1*)(intptr_t)v1503;
	i1 v1505 = (i1)+0;
	if (v1504==v1505) goto c02_0149; else goto c02_0148;

c02_0148:;

	i8 v1506 = (i8)(intptr_t)(ws+264);
	i1 v1507 = *(i1*)(intptr_t)v1506;
	i8 v1508 = (i8)(intptr_t)(ws+3240);
	*(i1*)(intptr_t)v1508 = v1507;

	i1 v1509 = (i1)+0;
	i8 v1510 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1510 = v1509;

	goto endsub;

c02_0149:;

c02_0145:;

c02_014a:;

	i8 v1511 = (i8)(intptr_t)(ws+256);
	i8 v1512 = *(i8*)(intptr_t)v1511;
	i8 v1513 = (i8)+0;
	if (v1512==v1513) goto c02_014f; else goto c02_0150;

c02_014f:;

	i1 v1514 = (i1)+0;
	i8 v1515 = (i8)(intptr_t)(ws+3240);
	*(i1*)(intptr_t)v1515 = v1514;

	goto c02_014b;

c02_0150:;

c02_014c:;

	i8 v1516 = (i8)(intptr_t)(ws+256);
	i8 v1517 = *(i8*)(intptr_t)v1516;
	i8 v1518 = (i8)(intptr_t)(ws+3248);
	*(i8*)(intptr_t)v1518 = v1517;

	i8 v1519 = (i8)(intptr_t)(ws+400);
	i8 v1520 = (i8)(intptr_t)(f46_FCBGetChar);
	i1 v1521;

	((void(*)(i1* /* b */, i8 /* fcb */))(intptr_t)v1520)(&v1521, v1519);
	i8 v1522 = (i8)(intptr_t)(ws+3240);
	*(i1*)(intptr_t)v1522 = v1521;

	i8 v1523 = (i8)(intptr_t)(ws+3240);
	i1 v1524 = *(i1*)(intptr_t)v1523;
	i1 v1525 = (i1)+26;
	if (v1524==v1525) goto c02_0154; else goto c02_0155;

c02_0154:;

	i1 v1526 = (i1)+0;
	i8 v1527 = (i8)(intptr_t)(ws+3240);
	*(i1*)(intptr_t)v1527 = v1526;

c02_0155:;

c02_0151:;

	i8 v1528 = (i8)(intptr_t)(ws+3240);
	i1 v1529 = *(i1*)(intptr_t)v1528;
	i1 v1530 = (i1)+0;
	if (v1529==v1530) goto c02_015a; else goto c02_0159;

c02_0159:;

	goto c02_014b;

c02_015a:;

c02_0156:;

	i8 v1531 = (i8)(intptr_t)(ws+3248);
	i8 v1532 = *(i8*)(intptr_t)v1531;
	i8 v1533 = *(i8*)(intptr_t)v1532;
	i8 v1534 = (i8)(intptr_t)(ws+256);
	*(i8*)(intptr_t)v1534 = v1533;

	i8 v1535 = (i8)(intptr_t)(ws+3248);
	i8 v1536 = *(i8*)(intptr_t)v1535;
	i8 v1537 = (i8)(intptr_t)(f80_lexer_i_close);

	((void(*)(i8 /* file */))(intptr_t)v1537)(v1536);

	i8 v1538 = (i8)(intptr_t)(ws+3248);
	i8 v1539 = *(i8*)(intptr_t)v1538;
	i8 v1540 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v1540)(v1539);

	i8 v1541 = (i8)(intptr_t)(ws+256);
	i8 v1542 = *(i8*)(intptr_t)v1541;
	i8 v1543 = (i8)+0;
	if (v1542==v1543) goto c02_015f; else goto c02_015e;

c02_015e:;

	i8 v1544 = (i8)(intptr_t)(ws+925);
	i1 v1545 = *(i1*)(intptr_t)v1544;
	i1 v1546 = v1545+(-1);
	i8 v1547 = (i8)(intptr_t)(ws+925);
	*(i1*)(intptr_t)v1547 = v1546;

	i8 v1548 = (i8)(intptr_t)(f78_LexerPrintSpaces);

	((void(*)(void))(intptr_t)v1548)();

	i8 v1549 = (i8)(intptr_t)c02_s0030;
	i8 v1550 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1550)(v1549);

	i8 v1551 = (i8)(intptr_t)(ws+256);
	i8 v1552 = *(i8*)(intptr_t)v1551;
	i8 v1553 = v1552+(+8);
	i8 v1554 = *(i8*)(intptr_t)v1553;
	i8 v1555 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1555)(v1554);

	i8 v1556 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v1556)();

	i8 v1557 = (i8)(intptr_t)(ws+256);
	i8 v1558 = *(i8*)(intptr_t)v1557;
	i8 v1559 = (i8)(intptr_t)(f79_lexer_i_open);
	i1 v1560;

	((void(*)(i1* /* result */, i8 /* file */))(intptr_t)v1559)(&v1560, v1558);
	i1 v1561 = (i1)+0;
	if (v1560==v1561) goto c02_0164; else goto c02_0163;

c02_0163:;

	i8 v1562 = (i8)(intptr_t)c02_s0031;
	i8 v1563 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v1563)(v1562);

c02_0164:;

c02_0160:;

c02_015f:;

c02_015b:;

	goto c02_014a;

c02_014b:;

endsub:;
	*p1502 = *(i1*)(intptr_t)(ws+3240);
}
	void f74_StartError(void);
const i1 c02_s0032[] = { 0x75,0x6e,0x70,0x61,0x72,0x73,0x65,0x61,0x62,0x6c,0x65,0x20,0x63,0x68,0x61,0x72,0x61,0x63,0x74,0x65,0x72,0x20,0x30,0x78,0 };
	void f12_print(i8 /* ptr */);
	void f19_print_hex_i8(i1 /* value */);
	void f75_EndError(void);

// lexer_i_unparseable workspace at ws+3216 length ws+1
void f85_lexer_i_unparseable(i1 p1564 /* c */) {
	*(i1*)(intptr_t)(ws+3216) = p1564; /*c */

	i8 v1565 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v1565)();

	i8 v1566 = (i8)(intptr_t)c02_s0032;
	i8 v1567 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1567)(v1566);

	i8 v1568 = (i8)(intptr_t)(ws+3216);
	i1 v1569 = *(i1*)(intptr_t)v1568;
	i8 v1570 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v1570)(v1569);

	i8 v1571 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v1571)();

endsub:;
}
	void f84_lexer_i_getchar(i1* /* c */);

// lexer_i_skipwhitespace workspace at ws+3224 length ws+1
void f86_lexer_i_skipwhitespace(void) {

c02_0165:;

	i8 v1572 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v1573;

	((void(*)(i1* /* c */))(intptr_t)v1572)(&v1573);
	i8 v1574 = (i8)(intptr_t)(ws+3224);
	*(i1*)(intptr_t)v1574 = v1573;

	i8 v1575 = (i8)(intptr_t)(ws+3224);
	i1 v1576 = *(i1*)(intptr_t)v1575;

	if (v1576 != +32) goto c02_0168;

	goto c02_0167;

c02_0168:;

	if (v1576 != +13) goto c02_0169;

	goto c02_0167;

c02_0169:;

	if (v1576 != +10) goto c02_016a;

	i8 v1577 = (i8)(intptr_t)(ws+256);
	i8 v1578 = *(i8*)(intptr_t)v1577;
	i8 v1579 = v1578+(+16);
	i2 v1580 = *(i2*)(intptr_t)v1579;
	i2 v1581 = v1580+(+1);
	i8 v1582 = (i8)(intptr_t)(ws+256);
	i8 v1583 = *(i8*)(intptr_t)v1582;
	i8 v1584 = v1583+(+16);
	*(i2*)(intptr_t)v1584 = v1581;

	goto c02_0167;

c02_016a:;

	if (v1576 != +9) goto c02_016b;

	goto c02_0167;

c02_016b:;

	goto c02_0166;

c02_0167:;


	goto c02_0165;

c02_0166:;

	i8 v1585 = (i8)(intptr_t)(ws+3224);
	i1 v1586 = *(i1*)(intptr_t)v1585;
	i8 v1587 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1587 = v1586;

endsub:;
}
	void f84_lexer_i_getchar(i1* /* c */);
	void f83_lexer_i_ctype(i1* /* type */, i1* /* token */, i1 /* c */);
	void f74_StartError(void);
const i1 c02_s0033[] = { 0x74,0x6f,0x6b,0x65,0x6e,0x20,0x74,0x6f,0x6f,0x20,0x6c,0x6f,0x6e,0x67,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// lexer_i_read_identifier workspace at ws+3216 length ws+3
void f87_lexer_i_read_identifier(void) {

c02_016c:;

	i8 v1588 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v1589;

	((void(*)(i1* /* c */))(intptr_t)v1588)(&v1589);
	i8 v1590 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v1590 = v1589;

	i8 v1591 = (i8)(intptr_t)(ws+3216);
	i1 v1592 = *(i1*)(intptr_t)v1591;
	i8 v1593 = (i8)(intptr_t)(f83_lexer_i_ctype);
	i1 v1594;
	i1 v1595;

	((void(*)(i1* /* type */, i1* /* token */, i1 /* c */))(intptr_t)v1593)(&v1594, &v1595, v1592);

	i8 v1596 = (i8)(intptr_t)(ws+3218);
	*(i1*)(intptr_t)v1596 = v1595;

	i8 v1597 = (i8)(intptr_t)(ws+3217);
	*(i1*)(intptr_t)v1597 = v1594;

	i8 v1598 = (i8)(intptr_t)(ws+3217);
	i1 v1599 = *(i1*)(intptr_t)v1598;
	i1 v1600 = v1599&(+32);
	i1 v1601 = (i1)+0;
	if (v1600==v1601) goto c02_0172; else goto c02_0171;

c02_0171:;

	i8 v1602 = (i8)(intptr_t)(ws+3216);
	i1 v1603 = *(i1*)(intptr_t)v1602;
	i8 v1604 = (i8)(intptr_t)(ws+265);
	i8 v1605 = (i8)(intptr_t)(ws+393);
	i1 v1606 = *(i1*)(intptr_t)v1605;
	i8 v1607 = v1606;
	i8 v1608 = v1604+v1607;
	*(i1*)(intptr_t)v1608 = v1603;

	i8 v1609 = (i8)(intptr_t)(ws+393);
	i1 v1610 = *(i1*)(intptr_t)v1609;
	i1 v1611 = v1610+(+1);
	i8 v1612 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1612 = v1611;

	i8 v1613 = (i8)(intptr_t)(ws+393);
	i1 v1614 = *(i1*)(intptr_t)v1613;
	i1 v1615 = (i1)+128;
	if (v1614==v1615) goto c02_0176; else goto c02_0177;

c02_0176:;

	i8 v1616 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v1616)();

	i8 v1617 = (i8)(intptr_t)c02_s0033;
	i8 v1618 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1618)(v1617);

	i8 v1619 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v1619)();

c02_0177:;

c02_0173:;

	goto c02_016e;

c02_0172:;

	i8 v1620 = (i8)(intptr_t)(ws+3216);
	i1 v1621 = *(i1*)(intptr_t)v1620;
	i8 v1622 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1622 = v1621;

	goto c02_016d;

c02_016e:;

	goto c02_016c;

c02_016d:;

	i1 v1623 = (i1)+0;
	i8 v1624 = (i8)(intptr_t)(ws+265);
	i8 v1625 = (i8)(intptr_t)(ws+393);
	i1 v1626 = *(i1*)(intptr_t)v1625;
	i8 v1627 = v1626;
	i8 v1628 = v1624+v1627;
	*(i1*)(intptr_t)v1628 = v1623;

endsub:;
}
	void f26_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);

// lexer_i_match_keyword workspace at ws+3216 length ws+2
void f88_lexer_i_match_keyword(i1* p1629 /* token */) {

	i1 v1630 = (i1)+0;
	i8 v1631 = (i8)(intptr_t)(ws+3217);
	*(i1*)(intptr_t)v1631 = v1630;

c02_017a:;

	i8 v1632 = (i8)(intptr_t)(ws+3217);
	i1 v1633 = *(i1*)(intptr_t)v1632;
	i1 v1634 = (i1)+38;
	if (v1633==v1634) goto c02_017d; else goto c02_017c;

c02_017c:;

	i8 v1635 = (i8)(intptr_t)(ws+265);
	i8 v1636 = (i8)(intptr_t)((i1*)f3___main_s0116);
	i8 v1637 = (i8)(intptr_t)(ws+3217);
	i1 v1638 = *(i1*)(intptr_t)v1637;
	i8 v1639 = v1638;
	i1 v1640 = (i1)+3;
	i8 v1641 = ((i8)v1639)<<v1640;
	i8 v1642 = v1636+v1641;
	i8 v1643 = *(i8*)(intptr_t)v1642;
	i8 v1644 = (i8)(intptr_t)(f26_StrCmp);
	i1 v1645;

	((void(*)(i1* /* res */, i8 /* s2 */, i8 /* s1 */))(intptr_t)v1644)(&v1645, v1643, v1635);
	i1 v1646 = (i1)+0;
	if (v1645==v1646) goto c02_0181; else goto c02_0182;

c02_0181:;

	i8 v1647 = (i8)(intptr_t)((i1*)f3___main_s0117);
	i8 v1648 = (i8)(intptr_t)(ws+3217);
	i1 v1649 = *(i1*)(intptr_t)v1648;
	i8 v1650 = v1649;
	i8 v1651 = v1647+v1650;
	i1 v1652 = *(i1*)(intptr_t)v1651;
	i8 v1653 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v1653 = v1652;

	goto endsub;

c02_0182:;

c02_017e:;

	i8 v1654 = (i8)(intptr_t)(ws+3217);
	i1 v1655 = *(i1*)(intptr_t)v1654;
	i1 v1656 = v1655+(+1);
	i8 v1657 = (i8)(intptr_t)(ws+3217);
	*(i1*)(intptr_t)v1657 = v1656;

	goto c02_017a;

c02_017d:;

	i1 v1658 = (i1)+33;
	i8 v1659 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v1659 = v1658;

endsub:;
	*p1629 = *(i1*)(intptr_t)(ws+3216);
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

// lexer_i_read_number workspace at ws+3224 length ws+7
void f89_lexer_i_read_number(void) {

	i4 v1660 = (i4)+0;
	i8 v1661 = (i8)(intptr_t)(ws+396);
	*(i4*)(intptr_t)v1661 = v1660;

	i4 v1662 = (i4)+10;
	i8 v1663 = (i8)(intptr_t)(ws+3224);
	*(i4*)(intptr_t)v1663 = v1662;

	i8 v1664 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v1665;

	((void(*)(i1* /* c */))(intptr_t)v1664)(&v1665);
	i8 v1666 = (i8)(intptr_t)(ws+3230);
	*(i1*)(intptr_t)v1666 = v1665;

	i8 v1667 = (i8)(intptr_t)(ws+3230);
	i1 v1668 = *(i1*)(intptr_t)v1667;
	i1 v1669 = (i1)+48;
	if (v1668==v1669) goto c02_0186; else goto c02_0187;

c02_0186:;

	i8 v1670 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v1671;

	((void(*)(i1* /* c */))(intptr_t)v1670)(&v1671);
	i8 v1672 = (i8)(intptr_t)(ws+3230);
	*(i1*)(intptr_t)v1672 = v1671;

	i8 v1673 = (i8)(intptr_t)(ws+3230);
	i1 v1674 = *(i1*)(intptr_t)v1673;

	if (v1674 != +98) goto c02_0189;

	i4 v1675 = (i4)+2;
	i8 v1676 = (i8)(intptr_t)(ws+3224);
	*(i4*)(intptr_t)v1676 = v1675;

	goto c02_0188;

c02_0189:;

	if (v1674 != +111) goto c02_018a;

	i4 v1677 = (i4)+8;
	i8 v1678 = (i8)(intptr_t)(ws+3224);
	*(i4*)(intptr_t)v1678 = v1677;

	goto c02_0188;

c02_018a:;

	if (v1674 != +100) goto c02_018b;

	i4 v1679 = (i4)+10;
	i8 v1680 = (i8)(intptr_t)(ws+3224);
	*(i4*)(intptr_t)v1680 = v1679;

	goto c02_0188;

c02_018b:;

	if (v1674 != +120) goto c02_018c;

	i4 v1681 = (i4)+16;
	i8 v1682 = (i8)(intptr_t)(ws+3224);
	*(i4*)(intptr_t)v1682 = v1681;

	goto c02_0188;

c02_018c:;

	i8 v1683 = (i8)(intptr_t)(ws+3230);
	i1 v1684 = *(i1*)(intptr_t)v1683;
	i8 v1685 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1685 = v1684;

	i8 v1686 = (i8)(intptr_t)(ws+3230);
	i1 v1687 = *(i1*)(intptr_t)v1686;
	i8 v1688 = (i8)(intptr_t)(f83_lexer_i_ctype);
	i1 v1689;
	i1 v1690;

	((void(*)(i1* /* type */, i1* /* token */, i1 /* c */))(intptr_t)v1688)(&v1689, &v1690, v1687);

	i8 v1691 = (i8)(intptr_t)(ws+3229);
	*(i1*)(intptr_t)v1691 = v1690;

	i8 v1692 = (i8)(intptr_t)(ws+3228);
	*(i1*)(intptr_t)v1692 = v1689;

	i8 v1693 = (i8)(intptr_t)(ws+3228);
	i1 v1694 = *(i1*)(intptr_t)v1693;
	i1 v1695 = v1694&(+32);
	i1 v1696 = (i1)+0;
	if (v1695==v1696) goto c02_0190; else goto c02_0191;

c02_0190:;

	goto endsub;

c02_0191:;

c02_018d:;

c02_0188:;


	goto c02_0183;

c02_0187:;

	i8 v1697 = (i8)(intptr_t)(ws+3230);
	i1 v1698 = *(i1*)(intptr_t)v1697;
	i8 v1699 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1699 = v1698;

c02_0183:;

c02_0192:;

	i8 v1700 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v1701;

	((void(*)(i1* /* c */))(intptr_t)v1700)(&v1701);
	i8 v1702 = (i8)(intptr_t)(f27_ToLower);
	i1 v1703;

	((void(*)(i1* /* cc */, i1 /* c */))(intptr_t)v1702)(&v1703, v1701);
	i8 v1704 = (i8)(intptr_t)(ws+3230);
	*(i1*)(intptr_t)v1704 = v1703;

	i8 v1705 = (i8)(intptr_t)(ws+3230);
	i1 v1706 = *(i1*)(intptr_t)v1705;
	i8 v1707 = (i8)(intptr_t)(f83_lexer_i_ctype);
	i1 v1708;
	i1 v1709;

	((void(*)(i1* /* type */, i1* /* token */, i1 /* c */))(intptr_t)v1707)(&v1708, &v1709, v1706);

	i8 v1710 = (i8)(intptr_t)(ws+3229);
	*(i1*)(intptr_t)v1710 = v1709;

	i8 v1711 = (i8)(intptr_t)(ws+3228);
	*(i1*)(intptr_t)v1711 = v1708;

	i8 v1712 = (i8)(intptr_t)(ws+3228);
	i1 v1713 = *(i1*)(intptr_t)v1712;
	i1 v1714 = v1713&(+32);
	i1 v1715 = (i1)+0;
	if (v1714==v1715) goto c02_0197; else goto c02_0198;

c02_0197:;

	i8 v1716 = (i8)(intptr_t)(ws+3230);
	i1 v1717 = *(i1*)(intptr_t)v1716;
	i8 v1718 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1718 = v1717;

	goto c02_0193;

c02_0198:;

c02_0194:;

	i8 v1719 = (i8)(intptr_t)(ws+3230);
	i1 v1720 = *(i1*)(intptr_t)v1719;
	i1 v1721 = (i1)+97;
	if (v1720<v1721) goto c02_019d; else goto c02_019c;

c02_019c:;

	i8 v1722 = (i8)(intptr_t)(ws+3230);
	i1 v1723 = *(i1*)(intptr_t)v1722;
	i1 v1724 = v1723+(-87);
	i8 v1725 = (i8)(intptr_t)(ws+3230);
	*(i1*)(intptr_t)v1725 = v1724;

	goto c02_0199;

c02_019d:;

	i8 v1726 = (i8)(intptr_t)(ws+3230);
	i1 v1727 = *(i1*)(intptr_t)v1726;
	i1 v1728 = v1727+(-48);
	i8 v1729 = (i8)(intptr_t)(ws+3230);
	*(i1*)(intptr_t)v1729 = v1728;

c02_0199:;

	i8 v1730 = (i8)(intptr_t)(ws+3230);
	i1 v1731 = *(i1*)(intptr_t)v1730;
	i8 v1732 = (i8)(intptr_t)(ws+3224);
	i4 v1733 = *(i4*)(intptr_t)v1732;
	i1 v1734 = (s1)(s4)v1733;
	if (v1731<v1734) goto c02_01a2; else goto c02_01a1;

c02_01a1:;

	i8 v1735 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v1735)();

	i8 v1736 = (i8)(intptr_t)c02_s0034;
	i8 v1737 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1737)(v1736);

	i8 v1738 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v1738)();

c02_01a2:;

c02_019e:;

	i8 v1739 = (i8)(intptr_t)(ws+396);
	i4 v1740 = *(i4*)(intptr_t)v1739;
	i8 v1741 = (i8)(intptr_t)(ws+3224);
	i4 v1742 = *(i4*)(intptr_t)v1741;
	i4 v1743 = v1740*v1742;
	i8 v1744 = (i8)(intptr_t)(ws+3230);
	i1 v1745 = *(i1*)(intptr_t)v1744;
	i4 v1746 = v1745;
	i4 v1747 = v1743+v1746;
	i8 v1748 = (i8)(intptr_t)(ws+396);
	*(i4*)(intptr_t)v1748 = v1747;

	goto c02_0192;

c02_0193:;

endsub:;
}
	void f74_StartError(void);
const i1 c02_s0035[] = { 0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// lexer_i_malformed workspace at ws+3240 length ws+8
void f90_lexer_i_malformed(i8 p1749 /* s */) {
	*(i8*)(intptr_t)(ws+3240) = p1749; /*s */

	i8 v1750 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v1750)();

	i8 v1751 = (i8)(intptr_t)c02_s0035;
	i8 v1752 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1752)(v1751);

	i8 v1753 = (i8)(intptr_t)(ws+3240);
	i8 v1754 = *(i8*)(intptr_t)v1753;
	i8 v1755 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1755)(v1754);

	i8 v1756 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v1756)();

endsub:;
}
	void f84_lexer_i_getchar(i1* /* c */);
const i1 c02_s0036[] = { 0x65,0x73,0x63,0x61,0x70,0x65,0 };
	void f90_lexer_i_malformed(i8 /* s */);

// lexer_i_get_escaped workspace at ws+3232 length ws+1
void f91_lexer_i_get_escaped(i1* p1757 /* c */) {

	i8 v1758 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v1759;

	((void(*)(i1* /* c */))(intptr_t)v1758)(&v1759);
	i8 v1760 = (i8)(intptr_t)(ws+3232);
	*(i1*)(intptr_t)v1760 = v1759;

	i8 v1761 = (i8)(intptr_t)(ws+3232);
	i1 v1762 = *(i1*)(intptr_t)v1761;

	if (v1762 != +110) goto c02_01a4;

	i1 v1763 = (i1)+10;
	i8 v1764 = (i8)(intptr_t)(ws+3232);
	*(i1*)(intptr_t)v1764 = v1763;

	goto c02_01a3;

c02_01a4:;

	if (v1762 != +114) goto c02_01a5;

	i1 v1765 = (i1)+13;
	i8 v1766 = (i8)(intptr_t)(ws+3232);
	*(i1*)(intptr_t)v1766 = v1765;

	goto c02_01a3;

c02_01a5:;

	if (v1762 != +116) goto c02_01a6;

	i1 v1767 = (i1)+9;
	i8 v1768 = (i8)(intptr_t)(ws+3232);
	*(i1*)(intptr_t)v1768 = v1767;

	goto c02_01a3;

c02_01a6:;

	if (v1762 != +92) goto c02_01a7;

	i1 v1769 = (i1)+92;
	i8 v1770 = (i8)(intptr_t)(ws+3232);
	*(i1*)(intptr_t)v1770 = v1769;

	goto c02_01a3;

c02_01a7:;

	if (v1762 != +39) goto c02_01a8;

	i1 v1771 = (i1)+39;
	i8 v1772 = (i8)(intptr_t)(ws+3232);
	*(i1*)(intptr_t)v1772 = v1771;

	goto c02_01a3;

c02_01a8:;

	if (v1762 != +34) goto c02_01a9;

	i1 v1773 = (i1)+34;
	i8 v1774 = (i8)(intptr_t)(ws+3232);
	*(i1*)(intptr_t)v1774 = v1773;

	goto c02_01a3;

c02_01a9:;

	if (v1762 != +48) goto c02_01aa;

	i1 v1775 = (i1)+0;
	i8 v1776 = (i8)(intptr_t)(ws+3232);
	*(i1*)(intptr_t)v1776 = v1775;

	goto c02_01a3;

c02_01aa:;

	i8 v1777 = (i8)(intptr_t)c02_s0036;
	i8 v1778 = (i8)(intptr_t)(f90_lexer_i_malformed);

	((void(*)(i8 /* s */))(intptr_t)v1778)(v1777);

c02_01a3:;


endsub:;
	*p1757 = *(i1*)(intptr_t)(ws+3232);
}
	void f84_lexer_i_getchar(i1* /* c */);
const i1 c02_s0037[] = { 0x73,0x74,0x72,0x69,0x6e,0x67,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };
	void f90_lexer_i_malformed(i8 /* s */);
	void f91_lexer_i_get_escaped(i1* /* c */);
	void f74_StartError(void);
const i1 c02_s0038[] = { 0x73,0x74,0x72,0x69,0x6e,0x67,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x74,0x6f,0x6f,0x20,0x6c,0x6f,0x6e,0x67,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// lexer_i_read_string workspace at ws+3224 length ws+1
void f92_lexer_i_read_string(void) {

	i1 v1779 = (i1)+0;
	i8 v1780 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1780 = v1779;

c02_01ab:;

	i8 v1781 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v1782;

	((void(*)(i1* /* c */))(intptr_t)v1781)(&v1782);
	i8 v1783 = (i8)(intptr_t)(ws+3224);
	*(i1*)(intptr_t)v1783 = v1782;

	i8 v1784 = (i8)(intptr_t)(ws+3224);
	i1 v1785 = *(i1*)(intptr_t)v1784;
	i1 v1786 = (i1)+32;
	if (v1785<v1786) goto c02_01b0; else goto c02_01b1;

c02_01b0:;

	i8 v1787 = (i8)(intptr_t)c02_s0037;
	i8 v1788 = (i8)(intptr_t)(f90_lexer_i_malformed);

	((void(*)(i8 /* s */))(intptr_t)v1788)(v1787);

c02_01b1:;

c02_01ad:;

	i8 v1789 = (i8)(intptr_t)(ws+3224);
	i1 v1790 = *(i1*)(intptr_t)v1789;

	if (v1790 != +34) goto c02_01b3;

	goto c02_01ac;

c02_01b3:;

	if (v1790 != +92) goto c02_01b4;

	i8 v1791 = (i8)(intptr_t)(f91_lexer_i_get_escaped);
	i1 v1792;

	((void(*)(i1* /* c */))(intptr_t)v1791)(&v1792);
	i8 v1793 = (i8)(intptr_t)(ws+3224);
	*(i1*)(intptr_t)v1793 = v1792;

c02_01b4:;

c02_01b2:;


	i8 v1794 = (i8)(intptr_t)(ws+3224);
	i1 v1795 = *(i1*)(intptr_t)v1794;
	i8 v1796 = (i8)(intptr_t)(ws+265);
	i8 v1797 = (i8)(intptr_t)(ws+393);
	i1 v1798 = *(i1*)(intptr_t)v1797;
	i8 v1799 = v1798;
	i8 v1800 = v1796+v1799;
	*(i1*)(intptr_t)v1800 = v1795;

	i8 v1801 = (i8)(intptr_t)(ws+393);
	i1 v1802 = *(i1*)(intptr_t)v1801;
	i1 v1803 = v1802+(+1);
	i8 v1804 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1804 = v1803;

	i8 v1805 = (i8)(intptr_t)(ws+393);
	i1 v1806 = *(i1*)(intptr_t)v1805;
	i1 v1807 = (i1)+128;
	if (v1806==v1807) goto c02_01b8; else goto c02_01b9;

c02_01b8:;

	i8 v1808 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v1808)();

	i8 v1809 = (i8)(intptr_t)c02_s0038;
	i8 v1810 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1810)(v1809);

	i8 v1811 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v1811)();

c02_01b9:;

c02_01b5:;

	goto c02_01ab;

c02_01ac:;

	i1 v1812 = (i1)+0;
	i8 v1813 = (i8)(intptr_t)(ws+265);
	i8 v1814 = (i8)(intptr_t)(ws+393);
	i1 v1815 = *(i1*)(intptr_t)v1814;
	i8 v1816 = v1815;
	i8 v1817 = v1813+v1816;
	*(i1*)(intptr_t)v1817 = v1812;

endsub:;
}
const i1 c02_s0039[] = { 0x63,0x68,0x61,0x72,0x61,0x63,0x74,0x65,0x72,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };
	void f90_lexer_i_malformed(i8 /* s */);

// malformed workspace at ws+3224 length ws+0
void f94_malformed(void) {

	i8 v1818 = (i8)(intptr_t)c02_s0039;
	i8 v1819 = (i8)(intptr_t)(f90_lexer_i_malformed);

	((void(*)(i8 /* s */))(intptr_t)v1819)(v1818);

endsub:;
}
	void f84_lexer_i_getchar(i1* /* c */);
	void f94_malformed(void);
	void f91_lexer_i_get_escaped(i1* /* c */);
	void f84_lexer_i_getchar(i1* /* c */);
	void f94_malformed(void);

// lexer_i_read_char workspace at ws+3216 length ws+1
void f93_lexer_i_read_char(void) {


	i8 v1820 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v1821;

	((void(*)(i1* /* c */))(intptr_t)v1820)(&v1821);
	i8 v1822 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v1822 = v1821;

	i8 v1823 = (i8)(intptr_t)(ws+3216);
	i1 v1824 = *(i1*)(intptr_t)v1823;
	i1 v1825 = (i1)+32;
	if (v1824<v1825) goto c02_01bf; else goto c02_01c1;

c02_01c1:;

	i8 v1826 = (i8)(intptr_t)(ws+3216);
	i1 v1827 = *(i1*)(intptr_t)v1826;
	i1 v1828 = (i1)+39;
	if (v1827==v1828) goto c02_01bf; else goto c02_01c0;

c02_01bf:;

	i8 v1829 = (i8)(intptr_t)(f94_malformed);

	((void(*)(void))(intptr_t)v1829)();

c02_01c0:;

c02_01ba:;

	i8 v1830 = (i8)(intptr_t)(ws+3216);
	i1 v1831 = *(i1*)(intptr_t)v1830;
	i1 v1832 = (i1)+92;
	if (v1831==v1832) goto c02_01c5; else goto c02_01c6;

c02_01c5:;

	i8 v1833 = (i8)(intptr_t)(f91_lexer_i_get_escaped);
	i1 v1834;

	((void(*)(i1* /* c */))(intptr_t)v1833)(&v1834);
	i8 v1835 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v1835 = v1834;

c02_01c6:;

c02_01c2:;

	i8 v1836 = (i8)(intptr_t)(ws+3216);
	i1 v1837 = *(i1*)(intptr_t)v1836;
	i4 v1838 = v1837;
	i8 v1839 = (i8)(intptr_t)(ws+396);
	*(i4*)(intptr_t)v1839 = v1838;

	i8 v1840 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v1841;

	((void(*)(i1* /* c */))(intptr_t)v1840)(&v1841);
	i8 v1842 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v1842 = v1841;

	i8 v1843 = (i8)(intptr_t)(ws+3216);
	i1 v1844 = *(i1*)(intptr_t)v1843;
	i1 v1845 = (i1)+39;
	if (v1844==v1845) goto c02_01cb; else goto c02_01ca;

c02_01ca:;

	i8 v1846 = (i8)(intptr_t)(f94_malformed);

	((void(*)(void))(intptr_t)v1846)();

c02_01cb:;

c02_01c7:;

endsub:;
}
const i1 c02_s003a[] = { 0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x69,0x76,0x65,0 };
	void f90_lexer_i_malformed(i8 /* s */);

// malformed_include workspace at ws+3224 length ws+0
void f96_malformed_include(void) {

	i8 v1847 = (i8)(intptr_t)c02_s003a;
	i8 v1848 = (i8)(intptr_t)(f90_lexer_i_malformed);

	((void(*)(i8 /* s */))(intptr_t)v1848)(v1847);

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

// lexer_i_include workspace at ws+3216 length ws+1
void f95_lexer_i_include(void) {


	i8 v1849 = (i8)(intptr_t)(f86_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1849)();

	i8 v1850 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v1851;

	((void(*)(i1* /* c */))(intptr_t)v1850)(&v1851);
	i8 v1852 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v1852 = v1851;

	i8 v1853 = (i8)(intptr_t)(ws+3216);
	i1 v1854 = *(i1*)(intptr_t)v1853;
	i1 v1855 = (i1)+34;
	if (v1854==v1855) goto c02_01d0; else goto c02_01cf;

c02_01cf:;

	i8 v1856 = (i8)(intptr_t)(f96_malformed_include);

	((void(*)(void))(intptr_t)v1856)();

c02_01d0:;

c02_01cc:;

	i8 v1857 = (i8)(intptr_t)(f92_lexer_i_read_string);

	((void(*)(void))(intptr_t)v1857)();

	i8 v1858 = (i8)(intptr_t)(f86_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1858)();

	i8 v1859 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v1860;

	((void(*)(i1* /* c */))(intptr_t)v1859)(&v1860);
	i8 v1861 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v1861 = v1860;

	i8 v1862 = (i8)(intptr_t)(ws+3216);
	i1 v1863 = *(i1*)(intptr_t)v1862;
	i1 v1864 = (i1)+59;
	if (v1863==v1864) goto c02_01d5; else goto c02_01d4;

c02_01d4:;

	i8 v1865 = (i8)(intptr_t)(f96_malformed_include);

	((void(*)(void))(intptr_t)v1865)();

c02_01d5:;

c02_01d1:;

	i8 v1866 = (i8)(intptr_t)(ws+265);
	i8 v1867 = (i8)(intptr_t)(f81_LexerIncludeFile);

	((void(*)(i8 /* path */))(intptr_t)v1867)(v1866);

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

// lexer_i_line_directive workspace at ws+3216 length ws+1
void f97_lexer_i_line_directive(void) {

	i8 v1868 = (i8)(intptr_t)(f86_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1868)();

	i8 v1869 = (i8)(intptr_t)(f89_lexer_i_read_number);

	((void(*)(void))(intptr_t)v1869)();

	i8 v1870 = (i8)(intptr_t)(f86_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1870)();

	i8 v1871 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v1872;

	((void(*)(i1* /* c */))(intptr_t)v1871)(&v1872);
	i8 v1873 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v1873 = v1872;

	i8 v1874 = (i8)(intptr_t)(ws+3216);
	i1 v1875 = *(i1*)(intptr_t)v1874;
	i1 v1876 = (i1)+34;
	if (v1875==v1876) goto c02_01da; else goto c02_01d9;

c02_01d9:;

	i8 v1877 = (i8)(intptr_t)c02_s003b;
	i8 v1878 = (i8)(intptr_t)(f90_lexer_i_malformed);

	((void(*)(i8 /* s */))(intptr_t)v1878)(v1877);

c02_01da:;

c02_01d6:;

	i8 v1879 = (i8)(intptr_t)(f92_lexer_i_read_string);

	((void(*)(void))(intptr_t)v1879)();

	i8 v1880 = (i8)(intptr_t)(ws+396);
	i4 v1881 = *(i4*)(intptr_t)v1880;
	i2 v1882 = (s2)(s4)v1881;
	i8 v1883 = (i8)(intptr_t)(ws+256);
	i8 v1884 = *(i8*)(intptr_t)v1883;
	i8 v1885 = v1884+(+16);
	*(i2*)(intptr_t)v1885 = v1882;

	i8 v1886 = (i8)(intptr_t)(ws+256);
	i8 v1887 = *(i8*)(intptr_t)v1886;
	i8 v1888 = v1887+(+8);
	i8 v1889 = *(i8*)(intptr_t)v1888;
	i8 v1890 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v1890)(v1889);

	i8 v1891 = (i8)(intptr_t)(ws+265);
	i8 v1892 = (i8)(intptr_t)(f72_InternalStrDup);
	i8 v1893;

	((void(*)(i8* /* news */, i8 /* s */))(intptr_t)v1892)(&v1893, v1891);
	i8 v1894 = (i8)(intptr_t)(ws+256);
	i8 v1895 = *(i8*)(intptr_t)v1894;
	i8 v1896 = v1895+(+8);
	*(i8*)(intptr_t)v1896 = v1893;

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

// LexerReadToken workspace at ws+3208 length ws+3
void f82_LexerReadToken(i1* p1470 /* token */) {














c02_01db:;

	i8 v1897 = (i8)(intptr_t)(f86_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1897)();

	i8 v1898 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v1899;

	((void(*)(i1* /* c */))(intptr_t)v1898)(&v1899);
	i8 v1900 = (i8)(intptr_t)(ws+3209);
	*(i1*)(intptr_t)v1900 = v1899;

	i8 v1901 = (i8)(intptr_t)(ws+3209);
	i1 v1902 = *(i1*)(intptr_t)v1901;
	i1 v1903 = (i1)+35;
	if (v1902==v1903) goto c02_01e0; else goto c02_01e1;

c02_01e0:;

	i1 v1904 = (i1)+0;
	i8 v1905 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1905 = v1904;

	i8 v1906 = (i8)(intptr_t)(f87_lexer_i_read_identifier);

	((void(*)(void))(intptr_t)v1906)();

	i8 v1907 = (i8)(intptr_t)(ws+265);
	i8 v1908 = (i8)(intptr_t)c02_s003c;
	i8 v1909 = (i8)(intptr_t)(f26_StrCmp);
	i1 v1910;

	((void(*)(i1* /* res */, i8 /* s2 */, i8 /* s1 */))(intptr_t)v1909)(&v1910, v1908, v1907);
	i1 v1911 = (i1)+0;
	if (v1910==v1911) goto c02_01e5; else goto c02_01e6;

c02_01e5:;

	i8 v1912 = (i8)(intptr_t)(f97_lexer_i_line_directive);

	((void(*)(void))(intptr_t)v1912)();

c02_01e6:;

c02_01e2:;

c02_01e7:;

	i8 v1913 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v1914;

	((void(*)(i1* /* c */))(intptr_t)v1913)(&v1914);
	i8 v1915 = (i8)(intptr_t)(ws+3209);
	*(i1*)(intptr_t)v1915 = v1914;

	i8 v1916 = (i8)(intptr_t)(ws+3209);
	i1 v1917 = *(i1*)(intptr_t)v1916;
	i1 v1918 = (i1)+10;
	if (v1917==v1918) goto c02_01f0; else goto c02_01f3;

c02_01f3:;

	i8 v1919 = (i8)(intptr_t)(ws+3209);
	i1 v1920 = *(i1*)(intptr_t)v1919;
	i1 v1921 = (i1)+13;
	if (v1920==v1921) goto c02_01f0; else goto c02_01f2;

c02_01f2:;

	i8 v1922 = (i8)(intptr_t)(ws+3209);
	i1 v1923 = *(i1*)(intptr_t)v1922;
	i1 v1924 = (i1)+0;
	if (v1923==v1924) goto c02_01f0; else goto c02_01f1;

c02_01f0:;

	i8 v1925 = (i8)(intptr_t)(ws+3209);
	i1 v1926 = *(i1*)(intptr_t)v1925;
	i8 v1927 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1927 = v1926;

	goto c02_01e8;

c02_01f1:;

c02_01e9:;

	goto c02_01e7;

c02_01e8:;

	goto c02_01db;

c02_01e1:;

c02_01dd:;

	i8 v1928 = (i8)(intptr_t)(ws+3209);
	i1 v1929 = *(i1*)(intptr_t)v1928;

	if (v1929 != +0) goto c02_01f5;

	i1 v1930 = (i1)+0;
	i8 v1931 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1931 = v1930;

	goto c02_01f4;

c02_01f5:;

	if (v1929 != +58) goto c02_01f6;

	i8 v1932 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v1933;

	((void(*)(i1* /* c */))(intptr_t)v1932)(&v1933);
	i8 v1934 = (i8)(intptr_t)(ws+3209);
	*(i1*)(intptr_t)v1934 = v1933;

	i8 v1935 = (i8)(intptr_t)(ws+3209);
	i1 v1936 = *(i1*)(intptr_t)v1935;
	i1 v1937 = (i1)+61;
	if (v1936==v1937) goto c02_01fa; else goto c02_01fb;

c02_01fa:;

	i1 v1938 = (i1)+2;
	i8 v1939 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1939 = v1938;

	goto c02_01f7;

c02_01fb:;

	i8 v1940 = (i8)(intptr_t)(ws+3209);
	i1 v1941 = *(i1*)(intptr_t)v1940;
	i8 v1942 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1942 = v1941;

	i1 v1943 = (i1)+6;
	i8 v1944 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1944 = v1943;

c02_01f7:;

	goto c02_01f4;

c02_01f6:;

	if (v1929 != +60) goto c02_01fc;

	i8 v1945 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v1946;

	((void(*)(i1* /* c */))(intptr_t)v1945)(&v1946);
	i8 v1947 = (i8)(intptr_t)(ws+3209);
	*(i1*)(intptr_t)v1947 = v1946;

	i8 v1948 = (i8)(intptr_t)(ws+3209);
	i1 v1949 = *(i1*)(intptr_t)v1948;

	if (v1949 != +60) goto c02_01fe;

	i1 v1950 = (i1)+56;
	i8 v1951 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1951 = v1950;

	goto c02_01fd;

c02_01fe:;

	if (v1949 != +61) goto c02_01ff;

	i1 v1952 = (i1)+51;
	i8 v1953 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1953 = v1952;

	goto c02_01fd;

c02_01ff:;

	i8 v1954 = (i8)(intptr_t)(ws+3209);
	i1 v1955 = *(i1*)(intptr_t)v1954;
	i8 v1956 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1956 = v1955;

	i1 v1957 = (i1)+50;
	i8 v1958 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1958 = v1957;

c02_01fd:;


	goto c02_01f4;

c02_01fc:;

	if (v1929 != +61) goto c02_0200;

	i8 v1959 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v1960;

	((void(*)(i1* /* c */))(intptr_t)v1959)(&v1960);
	i8 v1961 = (i8)(intptr_t)(ws+3209);
	*(i1*)(intptr_t)v1961 = v1960;

	i8 v1962 = (i8)(intptr_t)(ws+3209);
	i1 v1963 = *(i1*)(intptr_t)v1962;
	i1 v1964 = (i1)+61;
	if (v1963==v1964) goto c02_0204; else goto c02_0205;

c02_0204:;

	i1 v1965 = (i1)+54;
	i8 v1966 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1966 = v1965;

	goto c02_0201;

c02_0205:;

	i8 v1967 = (i8)(intptr_t)(ws+3209);
	i1 v1968 = *(i1*)(intptr_t)v1967;
	i8 v1969 = (i8)(intptr_t)(f85_lexer_i_unparseable);

	((void(*)(i1 /* c */))(intptr_t)v1969)(v1968);

c02_0201:;

	goto c02_01f4;

c02_0200:;

	if (v1929 != +33) goto c02_0206;

	i8 v1970 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v1971;

	((void(*)(i1* /* c */))(intptr_t)v1970)(&v1971);
	i8 v1972 = (i8)(intptr_t)(ws+3209);
	*(i1*)(intptr_t)v1972 = v1971;

	i8 v1973 = (i8)(intptr_t)(ws+3209);
	i1 v1974 = *(i1*)(intptr_t)v1973;
	i1 v1975 = (i1)+61;
	if (v1974==v1975) goto c02_020a; else goto c02_020b;

c02_020a:;

	i1 v1976 = (i1)+55;
	i8 v1977 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1977 = v1976;

	goto c02_0207;

c02_020b:;

	i8 v1978 = (i8)(intptr_t)(ws+3209);
	i1 v1979 = *(i1*)(intptr_t)v1978;
	i8 v1980 = (i8)(intptr_t)(f85_lexer_i_unparseable);

	((void(*)(i1 /* c */))(intptr_t)v1980)(v1979);

c02_0207:;

	goto c02_01f4;

c02_0206:;

	if (v1929 != +62) goto c02_020c;

	i8 v1981 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v1982;

	((void(*)(i1* /* c */))(intptr_t)v1981)(&v1982);
	i8 v1983 = (i8)(intptr_t)(ws+3209);
	*(i1*)(intptr_t)v1983 = v1982;

	i8 v1984 = (i8)(intptr_t)(ws+3209);
	i1 v1985 = *(i1*)(intptr_t)v1984;

	if (v1985 != +62) goto c02_020e;

	i1 v1986 = (i1)+57;
	i8 v1987 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1987 = v1986;

	goto c02_020d;

c02_020e:;

	if (v1985 != +61) goto c02_020f;

	i1 v1988 = (i1)+53;
	i8 v1989 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1989 = v1988;

	goto c02_020d;

c02_020f:;

	i8 v1990 = (i8)(intptr_t)(ws+3209);
	i1 v1991 = *(i1*)(intptr_t)v1990;
	i8 v1992 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1992 = v1991;

	i1 v1993 = (i1)+52;
	i8 v1994 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1994 = v1993;

c02_020d:;


	goto c02_01f4;

c02_020c:;

	if (v1929 != +34) goto c02_0210;

	i8 v1995 = (i8)(intptr_t)(f92_lexer_i_read_string);

	((void(*)(void))(intptr_t)v1995)();

	i1 v1996 = (i1)+41;
	i8 v1997 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1997 = v1996;

	goto c02_01f4;

c02_0210:;

	if (v1929 != +39) goto c02_0211;

	i8 v1998 = (i8)(intptr_t)(f93_lexer_i_read_char);

	((void(*)(void))(intptr_t)v1998)();

	i1 v1999 = (i1)+34;
	i8 v2000 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v2000 = v1999;

	goto c02_01f4;

c02_0211:;

	i8 v2001 = (i8)(intptr_t)(ws+3209);
	i1 v2002 = *(i1*)(intptr_t)v2001;
	i8 v2003 = (i8)(intptr_t)(f83_lexer_i_ctype);
	i1 v2004;
	i1 v2005;

	((void(*)(i1* /* type */, i1* /* token */, i1 /* c */))(intptr_t)v2003)(&v2004, &v2005, v2002);

	i8 v2006 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v2006 = v2005;

	i8 v2007 = (i8)(intptr_t)(ws+3210);
	*(i1*)(intptr_t)v2007 = v2004;

	i8 v2008 = (i8)(intptr_t)(ws+3210);
	i1 v2009 = *(i1*)(intptr_t)v2008;
	i1 v2010 = v2009&(+128);
	i1 v2011 = (i1)+0;
	if (v2010==v2011) goto c02_0216; else goto c02_0215;

c02_0215:;

	goto c02_0212;

c02_0216:;

	i8 v2012 = (i8)(intptr_t)(ws+3210);
	i1 v2013 = *(i1*)(intptr_t)v2012;
	i1 v2014 = v2013&(+1);
	i1 v2015 = (i1)+0;
	if (v2014==v2015) goto c02_021a; else goto c02_0219;

c02_0219:;

	i8 v2016 = (i8)(intptr_t)(ws+3209);
	i1 v2017 = *(i1*)(intptr_t)v2016;
	i8 v2018 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v2018 = v2017;

	i8 v2019 = (i8)(intptr_t)(f89_lexer_i_read_number);

	((void(*)(void))(intptr_t)v2019)();

	i1 v2020 = (i1)+34;
	i8 v2021 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v2021 = v2020;

	goto c02_0212;

c02_021a:;

	i8 v2022 = (i8)(intptr_t)(ws+3210);
	i1 v2023 = *(i1*)(intptr_t)v2022;
	i1 v2024 = v2023&(+16);
	i1 v2025 = (i1)+0;
	if (v2024==v2025) goto c02_021e; else goto c02_021d;

c02_021d:;

	i1 v2026 = (i1)+1;
	i8 v2027 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v2027 = v2026;

	i8 v2028 = (i8)(intptr_t)(ws+3209);
	i1 v2029 = *(i1*)(intptr_t)v2028;
	i8 v2030 = (i8)(intptr_t)(ws+265);
	*(i1*)(intptr_t)v2030 = v2029;

	i8 v2031 = (i8)(intptr_t)(f87_lexer_i_read_identifier);

	((void(*)(void))(intptr_t)v2031)();

	i8 v2032 = (i8)(intptr_t)(f88_lexer_i_match_keyword);
	i1 v2033;

	((void(*)(i1* /* token */))(intptr_t)v2032)(&v2033);
	i8 v2034 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v2034 = v2033;

	goto c02_0212;

c02_021e:;

	i8 v2035 = (i8)(intptr_t)(ws+3209);
	i1 v2036 = *(i1*)(intptr_t)v2035;
	i8 v2037 = (i8)(intptr_t)(f85_lexer_i_unparseable);

	((void(*)(i1 /* c */))(intptr_t)v2037)(v2036);

c02_0212:;

c02_01f4:;


	i8 v2038 = (i8)(intptr_t)(ws+3208);
	i1 v2039 = *(i1*)(intptr_t)v2038;
	i1 v2040 = (i1)+255;
	if (v2039==v2040) goto c02_0222; else goto c02_0223;

c02_0222:;

	i8 v2041 = (i8)(intptr_t)(f95_lexer_i_include);

	((void(*)(void))(intptr_t)v2041)();

	goto c02_021f;

c02_0223:;

	goto c02_01dc;

c02_021f:;

	goto c02_01db;

c02_01dc:;

endsub:;
	*p1470 = *(i1*)(intptr_t)(ws+3208);
}

// CountParameters workspace at ws+3328 length ws+9
void f98_CountParameters(i1* p2042 /* count */, i8 p2043 /* param */) {
	*(i8*)(intptr_t)(ws+3328) = p2043; /*param */

	i1 v2044 = (i1)+0;
	i8 v2045 = (i8)(intptr_t)(ws+3336);
	*(i1*)(intptr_t)v2045 = v2044;

c02_0226:;

	i8 v2046 = (i8)(intptr_t)(ws+3328);
	i8 v2047 = *(i8*)(intptr_t)v2046;
	i8 v2048 = (i8)+0;
	if (v2047==v2048) goto c02_0229; else goto c02_0228;

c02_0228:;

	i8 v2049 = (i8)(intptr_t)(ws+3336);
	i1 v2050 = *(i1*)(intptr_t)v2049;
	i1 v2051 = v2050+(+1);
	i8 v2052 = (i8)(intptr_t)(ws+3336);
	*(i1*)(intptr_t)v2052 = v2051;

	i8 v2053 = (i8)(intptr_t)(ws+3328);
	i8 v2054 = *(i8*)(intptr_t)v2053;
	i8 v2055 = *(i8*)(intptr_t)v2054;
	i8 v2056 = v2055+(+16);
	i8 v2057 = *(i8*)(intptr_t)v2056;
	i8 v2058 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v2058 = v2057;

	goto c02_0226;

c02_0229:;

endsub:;
	*p2042 = *(i1*)(intptr_t)(ws+3336);
}

// GetInputParameter workspace at ws+3384 length ws+24
void f99_GetInputParameter(i8* p2059 /* param */, i1 p2060 /* count */, i8 p2061 /* subr */) {
	*(i8*)(intptr_t)(ws+3384) = p2061; /*subr */
	*(i1*)(intptr_t)(ws+3392) = p2060; /*count */

	i8 v2062 = (i8)(intptr_t)(ws+3384);
	i8 v2063 = *(i8*)(intptr_t)v2062;
	i8 v2064 = v2063+(+80);
	i1 v2065 = *(i1*)(intptr_t)v2064;
	i1 v2066 = (i1)+0;
	if (v2065==v2066) goto c02_022e; else goto c02_022d;

c02_022d:;

	i8 v2067 = (i8)(intptr_t)(ws+3384);
	i8 v2068 = *(i8*)(intptr_t)v2067;
	i8 v2069 = v2068+(+16);
	i8 v2070 = *(i8*)(intptr_t)v2069;
	i8 v2071 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2071 = v2070;

c02_0231:;

	i8 v2072 = (i8)(intptr_t)(ws+3392);
	i1 v2073 = *(i1*)(intptr_t)v2072;
	i1 v2074 = (i1)+0;
	if (v2073==v2074) goto c02_0234; else goto c02_0233;

c02_0233:;

	i8 v2075 = (i8)(intptr_t)(ws+3400);
	i8 v2076 = *(i8*)(intptr_t)v2075;
	i8 v2077 = v2076+(+24);
	i8 v2078 = *(i8*)(intptr_t)v2077;
	i8 v2079 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2079 = v2078;

	i8 v2080 = (i8)(intptr_t)(ws+3392);
	i1 v2081 = *(i1*)(intptr_t)v2080;
	i1 v2082 = v2081+(-1);
	i8 v2083 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v2083 = v2082;

	goto c02_0231;

c02_0234:;

	goto c02_022a;

c02_022e:;

	i8 v2084 = (i8)+0;
	i8 v2085 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2085 = v2084;

c02_022a:;

endsub:;
	*p2059 = *(i8*)(intptr_t)(ws+3400);
}

// GetOutputParameter workspace at ws+3384 length ws+24
void f100_GetOutputParameter(i8* p2086 /* param */, i1 p2087 /* count */, i8 p2088 /* subr */) {
	*(i8*)(intptr_t)(ws+3384) = p2088; /*subr */
	*(i1*)(intptr_t)(ws+3392) = p2087; /*count */

	i8 v2089 = (i8)(intptr_t)(ws+3384);
	i8 v2090 = *(i8*)(intptr_t)v2089;
	i8 v2091 = v2090+(+81);
	i1 v2092 = *(i1*)(intptr_t)v2091;
	i1 v2093 = (i1)+0;
	if (v2092==v2093) goto c02_0239; else goto c02_0238;

c02_0238:;

	i8 v2094 = (i8)(intptr_t)(ws+3392);
	i1 v2095 = *(i1*)(intptr_t)v2094;
	i8 v2096 = (i8)(intptr_t)(ws+3384);
	i8 v2097 = *(i8*)(intptr_t)v2096;
	i8 v2098 = v2097+(+80);
	i1 v2099 = *(i1*)(intptr_t)v2098;
	i1 v2100 = v2095+v2099;
	i8 v2101 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v2101 = v2100;

	i8 v2102 = (i8)(intptr_t)(ws+3384);
	i8 v2103 = *(i8*)(intptr_t)v2102;
	i8 v2104 = v2103+(+16);
	i8 v2105 = *(i8*)(intptr_t)v2104;
	i8 v2106 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2106 = v2105;

c02_023c:;

	i8 v2107 = (i8)(intptr_t)(ws+3392);
	i1 v2108 = *(i1*)(intptr_t)v2107;
	i1 v2109 = (i1)+0;
	if (v2108==v2109) goto c02_023f; else goto c02_023e;

c02_023e:;

	i8 v2110 = (i8)(intptr_t)(ws+3400);
	i8 v2111 = *(i8*)(intptr_t)v2110;
	i8 v2112 = v2111+(+24);
	i8 v2113 = *(i8*)(intptr_t)v2112;
	i8 v2114 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2114 = v2113;

	i8 v2115 = (i8)(intptr_t)(ws+3392);
	i1 v2116 = *(i1*)(intptr_t)v2115;
	i1 v2117 = v2116+(-1);
	i8 v2118 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v2118 = v2117;

	goto c02_023c;

c02_023f:;

	goto c02_0235;

c02_0239:;

	i8 v2119 = (i8)+0;
	i8 v2120 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2120 = v2119;

c02_0235:;

endsub:;
	*p2086 = *(i8*)(intptr_t)(ws+3400);
}

// WidthToIndex workspace at ws+3432 length ws+2
void f102_WidthToIndex(i1* p2129 /* index */, i1 p2130 /* width */) {
	*(i1*)(intptr_t)(ws+3432) = p2130; /*width */

	i8 v2131 = (i8)(intptr_t)(ws+3432);
	i1 v2132 = *(i1*)(intptr_t)v2131;

	if (v2132 != +4) goto c02_0241;

	i1 v2133 = (i1)+3;
	i8 v2134 = (i8)(intptr_t)(ws+3433);
	*(i1*)(intptr_t)v2134 = v2133;

	goto c02_0240;

c02_0241:;

	if (v2132 != +8) goto c02_0242;

	i1 v2135 = (i1)+4;
	i8 v2136 = (i8)(intptr_t)(ws+3433);
	*(i1*)(intptr_t)v2136 = v2135;

	goto c02_0240;

c02_0242:;

	i8 v2137 = (i8)(intptr_t)(ws+3432);
	i1 v2138 = *(i1*)(intptr_t)v2137;
	i8 v2139 = (i8)(intptr_t)(ws+3433);
	*(i1*)(intptr_t)v2139 = v2138;

c02_0240:;


endsub:;
	*p2129 = *(i1*)(intptr_t)(ws+3433);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndfile workspace at ws+3208 length ws+8
void f106_MidEndfile(i8* p2177 /* m */) {

	i1 v2178 = (i1)+3;
	i8 v2179 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2180;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2179)(&v2180, v2178);
	i8 v2181 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v2181 = v2180;

endsub:;
	*p2177 = *(i8*)(intptr_t)(ws+3208);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndcase workspace at ws+3336 length ws+16
void f107_MidEndcase(i8* p2182 /* m */, i1 p2183 /* width */) {
	*(i1*)(intptr_t)(ws+3336) = p2183; /*width */

	i8 v2184 = (i8)(intptr_t)(ws+3336);
	i1 v2185 = *(i1*)(intptr_t)v2184;
	i8 v2186 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v2187;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2186)(&v2187, v2185);
	i1 v2188 = v2187+(+86);
	i8 v2189 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2190;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2189)(&v2190, v2188);
	i8 v2191 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v2191 = v2190;

endsub:;
	*p2182 = *(i8*)(intptr_t)(ws+3344);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBor workspace at ws+3328 length ws+32
void f108_MidBor(i8* p2192 /* m */, i1 p2193 /* negated */, i2 p2194 /* fallthrough */, i2 p2195 /* falselabel */, i2 p2196 /* truelabel */, i8 p2197 /* right */, i8 p2198 /* left */) {
	*(i8*)(intptr_t)(ws+3328) = p2198; /*left */
	*(i8*)(intptr_t)(ws+3336) = p2197; /*right */
	*(i2*)(intptr_t)(ws+3344) = p2196; /*truelabel */
	*(i2*)(intptr_t)(ws+3346) = p2195; /*falselabel */
	*(i2*)(intptr_t)(ws+3348) = p2194; /*fallthrough */
	*(i1*)(intptr_t)(ws+3350) = p2193; /*negated */

	i1 v2199 = (i1)+60;
	i8 v2200 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2201;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2200)(&v2201, v2199);
	i8 v2202 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v2202 = v2201;

	i8 v2203 = (i8)(intptr_t)(ws+3328);
	i8 v2204 = *(i8*)(intptr_t)v2203;
	i8 v2205 = (i8)(intptr_t)(ws+3352);
	i8 v2206 = *(i8*)(intptr_t)v2205;
	i8 v2207 = v2206+(+24);
	*(i8*)(intptr_t)v2207 = v2204;

	i8 v2208 = (i8)(intptr_t)(ws+3336);
	i8 v2209 = *(i8*)(intptr_t)v2208;
	i8 v2210 = (i8)(intptr_t)(ws+3352);
	i8 v2211 = *(i8*)(intptr_t)v2210;
	i8 v2212 = v2211+(+32);
	*(i8*)(intptr_t)v2212 = v2209;

	i8 v2213 = (i8)(intptr_t)(ws+3344);
	i2 v2214 = *(i2*)(intptr_t)v2213;
	i8 v2215 = (i8)(intptr_t)(ws+3352);
	i8 v2216 = *(i8*)(intptr_t)v2215;
	*(i2*)(intptr_t)v2216 = v2214;

	i8 v2217 = (i8)(intptr_t)(ws+3346);
	i2 v2218 = *(i2*)(intptr_t)v2217;
	i8 v2219 = (i8)(intptr_t)(ws+3352);
	i8 v2220 = *(i8*)(intptr_t)v2219;
	i8 v2221 = v2220+(+2);
	*(i2*)(intptr_t)v2221 = v2218;

	i8 v2222 = (i8)(intptr_t)(ws+3348);
	i2 v2223 = *(i2*)(intptr_t)v2222;
	i8 v2224 = (i8)(intptr_t)(ws+3352);
	i8 v2225 = *(i8*)(intptr_t)v2224;
	i8 v2226 = v2225+(+4);
	*(i2*)(intptr_t)v2226 = v2223;

	i8 v2227 = (i8)(intptr_t)(ws+3350);
	i1 v2228 = *(i1*)(intptr_t)v2227;
	i8 v2229 = (i8)(intptr_t)(ws+3352);
	i8 v2230 = *(i8*)(intptr_t)v2229;
	i8 v2231 = v2230+(+6);
	*(i1*)(intptr_t)v2231 = v2228;

endsub:;
	*p2192 = *(i8*)(intptr_t)(ws+3352);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartfile workspace at ws+3208 length ws+8
void f110_MidStartfile(i8* p2253 /* m */) {

	i1 v2254 = (i1)+2;
	i8 v2255 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2256;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2255)(&v2256, v2254);
	i8 v2257 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v2257 = v2256;

endsub:;
	*p2253 = *(i8*)(intptr_t)(ws+3208);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmgroupend workspace at ws+3408 length ws+8
void f111_MidAsmgroupend(i8* p2258 /* m */) {

	i1 v2259 = (i1)+17;
	i8 v2260 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2261;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2260)(&v2261, v2259);
	i8 v2262 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v2262 = v2261;

endsub:;
	*p2258 = *(i8*)(intptr_t)(ws+3408);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidReturn workspace at ws+3328 length ws+8
void f114_MidReturn(i8* p2301 /* m */) {

	i1 v2302 = (i1)+28;
	i8 v2303 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2304;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2303)(&v2304, v2302);
	i8 v2305 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v2305 = v2304;

endsub:;
	*p2301 = *(i8*)(intptr_t)(ws+3328);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidCalle workspace at ws+3344 length ws+40
void f115_MidCalle(i8* p2306 /* m */, i8 p2307 /* subr */, i8 p2308 /* right */, i8 p2309 /* left */, i1 p2310 /* width */) {
	*(i1*)(intptr_t)(ws+3344) = p2310; /*width */
	*(i8*)(intptr_t)(ws+3352) = p2309; /*left */
	*(i8*)(intptr_t)(ws+3360) = p2308; /*right */
	*(i8*)(intptr_t)(ws+3368) = p2307; /*subr */

	i8 v2311 = (i8)(intptr_t)(ws+3344);
	i1 v2312 = *(i1*)(intptr_t)v2311;
	i8 v2313 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v2314;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2313)(&v2314, v2312);
	i1 v2315 = v2314+(+30);
	i8 v2316 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2317;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2316)(&v2317, v2315);
	i8 v2318 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v2318 = v2317;

	i8 v2319 = (i8)(intptr_t)(ws+3352);
	i8 v2320 = *(i8*)(intptr_t)v2319;
	i8 v2321 = (i8)(intptr_t)(ws+3376);
	i8 v2322 = *(i8*)(intptr_t)v2321;
	i8 v2323 = v2322+(+24);
	*(i8*)(intptr_t)v2323 = v2320;

	i8 v2324 = (i8)(intptr_t)(ws+3360);
	i8 v2325 = *(i8*)(intptr_t)v2324;
	i8 v2326 = (i8)(intptr_t)(ws+3376);
	i8 v2327 = *(i8*)(intptr_t)v2326;
	i8 v2328 = v2327+(+32);
	*(i8*)(intptr_t)v2328 = v2325;

	i8 v2329 = (i8)(intptr_t)(ws+3368);
	i8 v2330 = *(i8*)(intptr_t)v2329;
	i8 v2331 = (i8)(intptr_t)(ws+3376);
	i8 v2332 = *(i8*)(intptr_t)v2331;
	*(i8*)(intptr_t)v2332 = v2330;

endsub:;
	*p2306 = *(i8*)(intptr_t)(ws+3376);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBlts workspace at ws+3368 length ws+40
void f116_MidBlts(i8* p2333 /* m */, i1 p2334 /* negated */, i2 p2335 /* fallthrough */, i2 p2336 /* falselabel */, i2 p2337 /* truelabel */, i8 p2338 /* right */, i8 p2339 /* left */, i1 p2340 /* width */) {
	*(i1*)(intptr_t)(ws+3368) = p2340; /*width */
	*(i8*)(intptr_t)(ws+3376) = p2339; /*left */
	*(i8*)(intptr_t)(ws+3384) = p2338; /*right */
	*(i2*)(intptr_t)(ws+3392) = p2337; /*truelabel */
	*(i2*)(intptr_t)(ws+3394) = p2336; /*falselabel */
	*(i2*)(intptr_t)(ws+3396) = p2335; /*fallthrough */
	*(i1*)(intptr_t)(ws+3398) = p2334; /*negated */

	i8 v2341 = (i8)(intptr_t)(ws+3368);
	i1 v2342 = *(i1*)(intptr_t)v2341;
	i8 v2343 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v2344;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2343)(&v2344, v2342);
	i1 v2345 = v2344+(+66);
	i8 v2346 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2347;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2346)(&v2347, v2345);
	i8 v2348 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2348 = v2347;

	i8 v2349 = (i8)(intptr_t)(ws+3376);
	i8 v2350 = *(i8*)(intptr_t)v2349;
	i8 v2351 = (i8)(intptr_t)(ws+3400);
	i8 v2352 = *(i8*)(intptr_t)v2351;
	i8 v2353 = v2352+(+24);
	*(i8*)(intptr_t)v2353 = v2350;

	i8 v2354 = (i8)(intptr_t)(ws+3384);
	i8 v2355 = *(i8*)(intptr_t)v2354;
	i8 v2356 = (i8)(intptr_t)(ws+3400);
	i8 v2357 = *(i8*)(intptr_t)v2356;
	i8 v2358 = v2357+(+32);
	*(i8*)(intptr_t)v2358 = v2355;

	i8 v2359 = (i8)(intptr_t)(ws+3392);
	i2 v2360 = *(i2*)(intptr_t)v2359;
	i8 v2361 = (i8)(intptr_t)(ws+3400);
	i8 v2362 = *(i8*)(intptr_t)v2361;
	*(i2*)(intptr_t)v2362 = v2360;

	i8 v2363 = (i8)(intptr_t)(ws+3394);
	i2 v2364 = *(i2*)(intptr_t)v2363;
	i8 v2365 = (i8)(intptr_t)(ws+3400);
	i8 v2366 = *(i8*)(intptr_t)v2365;
	i8 v2367 = v2366+(+2);
	*(i2*)(intptr_t)v2367 = v2364;

	i8 v2368 = (i8)(intptr_t)(ws+3396);
	i2 v2369 = *(i2*)(intptr_t)v2368;
	i8 v2370 = (i8)(intptr_t)(ws+3400);
	i8 v2371 = *(i8*)(intptr_t)v2370;
	i8 v2372 = v2371+(+4);
	*(i2*)(intptr_t)v2372 = v2369;

	i8 v2373 = (i8)(intptr_t)(ws+3398);
	i1 v2374 = *(i1*)(intptr_t)v2373;
	i8 v2375 = (i8)(intptr_t)(ws+3400);
	i8 v2376 = *(i8*)(intptr_t)v2375;
	i8 v2377 = v2376+(+6);
	*(i1*)(intptr_t)v2377 = v2374;

endsub:;
	*p2333 = *(i8*)(intptr_t)(ws+3400);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmsubref workspace at ws+3328 length ws+16
void f117_MidAsmsubref(i8* p2378 /* m */, i8 p2379 /* subr */) {
	*(i8*)(intptr_t)(ws+3328) = p2379; /*subr */

	i1 v2380 = (i1)+21;
	i8 v2381 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2382;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2381)(&v2382, v2380);
	i8 v2383 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v2383 = v2382;

	i8 v2384 = (i8)(intptr_t)(ws+3328);
	i8 v2385 = *(i8*)(intptr_t)v2384;
	i8 v2386 = (i8)(intptr_t)(ws+3336);
	i8 v2387 = *(i8*)(intptr_t)v2386;
	*(i8*)(intptr_t)v2387 = v2385;

endsub:;
	*p2378 = *(i8*)(intptr_t)(ws+3336);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidConstant workspace at ws+3424 length ws+16
void f118_MidConstant(i8* p2388 /* m */, i4 p2389 /* value */) {
	*(i4*)(intptr_t)(ws+3424) = p2389; /*value */

	i1 v2390 = (i1)+45;
	i8 v2391 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2392;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2391)(&v2392, v2390);
	i8 v2393 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v2393 = v2392;

	i8 v2394 = (i8)(intptr_t)(ws+3424);
	i4 v2395 = *(i4*)(intptr_t)v2394;
	i8 v2396 = (i8)(intptr_t)(ws+3432);
	i8 v2397 = *(i8*)(intptr_t)v2396;
	*(i4*)(intptr_t)v2397 = v2395;

endsub:;
	*p2388 = *(i8*)(intptr_t)(ws+3432);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartinit workspace at ws+3328 length ws+16
void f119_MidStartinit(i8* p2398 /* m */, i8 p2399 /* sym */) {
	*(i8*)(intptr_t)(ws+3328) = p2399; /*sym */

	i1 v2400 = (i1)+6;
	i8 v2401 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2402;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2401)(&v2402, v2400);
	i8 v2403 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v2403 = v2402;

	i8 v2404 = (i8)(intptr_t)(ws+3328);
	i8 v2405 = *(i8*)(intptr_t)v2404;
	i8 v2406 = (i8)(intptr_t)(ws+3336);
	i8 v2407 = *(i8*)(intptr_t)v2406;
	*(i8*)(intptr_t)v2407 = v2405;

endsub:;
	*p2398 = *(i8*)(intptr_t)(ws+3336);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAddress workspace at ws+3344 length ws+24
void f120_MidAddress(i8* p2408 /* m */, i2 p2409 /* off */, i8 p2410 /* sym */) {
	*(i8*)(intptr_t)(ws+3344) = p2410; /*sym */
	*(i2*)(intptr_t)(ws+3352) = p2409; /*off */

	i1 v2411 = (i1)+47;
	i8 v2412 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2413;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2412)(&v2413, v2411);
	i8 v2414 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v2414 = v2413;

	i8 v2415 = (i8)(intptr_t)(ws+3344);
	i8 v2416 = *(i8*)(intptr_t)v2415;
	i8 v2417 = (i8)(intptr_t)(ws+3360);
	i8 v2418 = *(i8*)(intptr_t)v2417;
	*(i8*)(intptr_t)v2418 = v2416;

	i8 v2419 = (i8)(intptr_t)(ws+3352);
	i2 v2420 = *(i2*)(intptr_t)v2419;
	i8 v2421 = (i8)(intptr_t)(ws+3360);
	i8 v2422 = *(i8*)(intptr_t)v2421;
	i8 v2423 = v2422+(+8);
	*(i2*)(intptr_t)v2423 = v2420;

endsub:;
	*p2408 = *(i8*)(intptr_t)(ws+3360);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStore workspace at ws+3376 length ws+32
void f121_MidStore(i8* p2424 /* m */, i8 p2425 /* right */, i8 p2426 /* left */, i1 p2427 /* width */) {
	*(i1*)(intptr_t)(ws+3376) = p2427; /*width */
	*(i8*)(intptr_t)(ws+3384) = p2426; /*left */
	*(i8*)(intptr_t)(ws+3392) = p2425; /*right */

	i8 v2428 = (i8)(intptr_t)(ws+3376);
	i1 v2429 = *(i1*)(intptr_t)v2428;
	i8 v2430 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v2431;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2430)(&v2431, v2429);
	i1 v2432 = v2431+(+54);
	i8 v2433 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2434;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2433)(&v2434, v2432);
	i8 v2435 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2435 = v2434;

	i8 v2436 = (i8)(intptr_t)(ws+3384);
	i8 v2437 = *(i8*)(intptr_t)v2436;
	i8 v2438 = (i8)(intptr_t)(ws+3400);
	i8 v2439 = *(i8*)(intptr_t)v2438;
	i8 v2440 = v2439+(+24);
	*(i8*)(intptr_t)v2440 = v2437;

	i8 v2441 = (i8)(intptr_t)(ws+3392);
	i8 v2442 = *(i8*)(intptr_t)v2441;
	i8 v2443 = (i8)(intptr_t)(ws+3400);
	i8 v2444 = *(i8*)(intptr_t)v2443;
	i8 v2445 = v2444+(+32);
	*(i8*)(intptr_t)v2445 = v2442;

endsub:;
	*p2424 = *(i8*)(intptr_t)(ws+3400);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartcase workspace at ws+3336 length ws+24
void f122_MidStartcase(i8* p2446 /* m */, i8 p2447 /* left */, i1 p2448 /* width */) {
	*(i1*)(intptr_t)(ws+3336) = p2448; /*width */
	*(i8*)(intptr_t)(ws+3344) = p2447; /*left */

	i8 v2449 = (i8)(intptr_t)(ws+3336);
	i1 v2450 = *(i1*)(intptr_t)v2449;
	i8 v2451 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v2452;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2451)(&v2452, v2450);
	i1 v2453 = v2452+(+76);
	i8 v2454 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2455;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2454)(&v2455, v2453);
	i8 v2456 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v2456 = v2455;

	i8 v2457 = (i8)(intptr_t)(ws+3344);
	i8 v2458 = *(i8*)(intptr_t)v2457;
	i8 v2459 = (i8)(intptr_t)(ws+3352);
	i8 v2460 = *(i8*)(intptr_t)v2459;
	i8 v2461 = v2460+(+24);
	*(i8*)(intptr_t)v2461 = v2458;

endsub:;
	*p2446 = *(i8*)(intptr_t)(ws+3352);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndinit workspace at ws+3328 length ws+8
void f123_MidEndinit(i8* p2462 /* m */) {

	i1 v2463 = (i1)+15;
	i8 v2464 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2465;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2464)(&v2465, v2463);
	i8 v2466 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v2466 = v2465;

endsub:;
	*p2462 = *(i8*)(intptr_t)(ws+3328);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmend workspace at ws+3328 length ws+8
void f124_MidAsmend(i8* p2467 /* m */) {

	i1 v2468 = (i1)+23;
	i8 v2469 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2470;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2469)(&v2470, v2468);
	i8 v2471 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v2471 = v2470;

endsub:;
	*p2467 = *(i8*)(intptr_t)(ws+3328);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmtext workspace at ws+3328 length ws+16
void f126_MidAsmtext(i8* p2494 /* m */, i8 p2495 /* text */) {
	*(i8*)(intptr_t)(ws+3328) = p2495; /*text */

	i1 v2496 = (i1)+19;
	i8 v2497 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2498;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2497)(&v2498, v2496);
	i8 v2499 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v2499 = v2498;

	i8 v2500 = (i8)(intptr_t)(ws+3328);
	i8 v2501 = *(i8*)(intptr_t)v2500;
	i8 v2502 = (i8)(intptr_t)(ws+3336);
	i8 v2503 = *(i8*)(intptr_t)v2502;
	*(i8*)(intptr_t)v2503 = v2501;

endsub:;
	*p2494 = *(i8*)(intptr_t)(ws+3336);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidWhencase workspace at ws+3328 length ws+24
void f127_MidWhencase(i8* p2504 /* m */, i2 p2505 /* falselabel */, i4 p2506 /* value */, i1 p2507 /* width */) {
	*(i1*)(intptr_t)(ws+3328) = p2507; /*width */
	*(i4*)(intptr_t)(ws+3332) = p2506; /*value */
	*(i2*)(intptr_t)(ws+3336) = p2505; /*falselabel */

	i8 v2508 = (i8)(intptr_t)(ws+3328);
	i1 v2509 = *(i1*)(intptr_t)v2508;
	i8 v2510 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v2511;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2510)(&v2511, v2509);
	i1 v2512 = v2511+(+81);
	i8 v2513 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2514;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2513)(&v2514, v2512);
	i8 v2515 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v2515 = v2514;

	i8 v2516 = (i8)(intptr_t)(ws+3332);
	i4 v2517 = *(i4*)(intptr_t)v2516;
	i8 v2518 = (i8)(intptr_t)(ws+3344);
	i8 v2519 = *(i8*)(intptr_t)v2518;
	*(i4*)(intptr_t)v2519 = v2517;

	i8 v2520 = (i8)(intptr_t)(ws+3336);
	i2 v2521 = *(i2*)(intptr_t)v2520;
	i8 v2522 = (i8)(intptr_t)(ws+3344);
	i8 v2523 = *(i8*)(intptr_t)v2522;
	i8 v2524 = v2523+(+4);
	*(i2*)(intptr_t)v2524 = v2521;

endsub:;
	*p2504 = *(i8*)(intptr_t)(ws+3344);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmvalue workspace at ws+3328 length ws+16
void f129_MidAsmvalue(i8* p2547 /* m */, i4 p2548 /* value */) {
	*(i4*)(intptr_t)(ws+3328) = p2548; /*value */

	i1 v2549 = (i1)+22;
	i8 v2550 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2551;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2550)(&v2551, v2549);
	i8 v2552 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v2552 = v2551;

	i8 v2553 = (i8)(intptr_t)(ws+3328);
	i4 v2554 = *(i4*)(intptr_t)v2553;
	i8 v2555 = (i8)(intptr_t)(ws+3336);
	i8 v2556 = *(i8*)(intptr_t)v2555;
	*(i4*)(intptr_t)v2556 = v2554;

endsub:;
	*p2547 = *(i8*)(intptr_t)(ws+3336);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidLabel workspace at ws+3392 length ws+16
void f130_MidLabel(i8* p2557 /* m */, i2 p2558 /* label */) {
	*(i2*)(intptr_t)(ws+3392) = p2558; /*label */

	i1 v2559 = (i1)+26;
	i8 v2560 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2561;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2560)(&v2561, v2559);
	i8 v2562 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2562 = v2561;

	i8 v2563 = (i8)(intptr_t)(ws+3392);
	i2 v2564 = *(i2*)(intptr_t)v2563;
	i8 v2565 = (i8)(intptr_t)(ws+3400);
	i8 v2566 = *(i8*)(intptr_t)v2565;
	*(i2*)(intptr_t)v2566 = v2564;

endsub:;
	*p2557 = *(i8*)(intptr_t)(ws+3400);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBeq workspace at ws+3368 length ws+40
void f131_MidBeq(i8* p2567 /* m */, i1 p2568 /* negated */, i2 p2569 /* fallthrough */, i2 p2570 /* falselabel */, i2 p2571 /* truelabel */, i8 p2572 /* right */, i8 p2573 /* left */, i1 p2574 /* width */) {
	*(i1*)(intptr_t)(ws+3368) = p2574; /*width */
	*(i8*)(intptr_t)(ws+3376) = p2573; /*left */
	*(i8*)(intptr_t)(ws+3384) = p2572; /*right */
	*(i2*)(intptr_t)(ws+3392) = p2571; /*truelabel */
	*(i2*)(intptr_t)(ws+3394) = p2570; /*falselabel */
	*(i2*)(intptr_t)(ws+3396) = p2569; /*fallthrough */
	*(i1*)(intptr_t)(ws+3398) = p2568; /*negated */

	i8 v2575 = (i8)(intptr_t)(ws+3368);
	i1 v2576 = *(i1*)(intptr_t)v2575;
	i8 v2577 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v2578;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2577)(&v2578, v2576);
	i1 v2579 = v2578+(+61);
	i8 v2580 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2581;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2580)(&v2581, v2579);
	i8 v2582 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2582 = v2581;

	i8 v2583 = (i8)(intptr_t)(ws+3376);
	i8 v2584 = *(i8*)(intptr_t)v2583;
	i8 v2585 = (i8)(intptr_t)(ws+3400);
	i8 v2586 = *(i8*)(intptr_t)v2585;
	i8 v2587 = v2586+(+24);
	*(i8*)(intptr_t)v2587 = v2584;

	i8 v2588 = (i8)(intptr_t)(ws+3384);
	i8 v2589 = *(i8*)(intptr_t)v2588;
	i8 v2590 = (i8)(intptr_t)(ws+3400);
	i8 v2591 = *(i8*)(intptr_t)v2590;
	i8 v2592 = v2591+(+32);
	*(i8*)(intptr_t)v2592 = v2589;

	i8 v2593 = (i8)(intptr_t)(ws+3392);
	i2 v2594 = *(i2*)(intptr_t)v2593;
	i8 v2595 = (i8)(intptr_t)(ws+3400);
	i8 v2596 = *(i8*)(intptr_t)v2595;
	*(i2*)(intptr_t)v2596 = v2594;

	i8 v2597 = (i8)(intptr_t)(ws+3394);
	i2 v2598 = *(i2*)(intptr_t)v2597;
	i8 v2599 = (i8)(intptr_t)(ws+3400);
	i8 v2600 = *(i8*)(intptr_t)v2599;
	i8 v2601 = v2600+(+2);
	*(i2*)(intptr_t)v2601 = v2598;

	i8 v2602 = (i8)(intptr_t)(ws+3396);
	i2 v2603 = *(i2*)(intptr_t)v2602;
	i8 v2604 = (i8)(intptr_t)(ws+3400);
	i8 v2605 = *(i8*)(intptr_t)v2604;
	i8 v2606 = v2605+(+4);
	*(i2*)(intptr_t)v2606 = v2603;

	i8 v2607 = (i8)(intptr_t)(ws+3398);
	i1 v2608 = *(i1*)(intptr_t)v2607;
	i8 v2609 = (i8)(intptr_t)(ws+3400);
	i8 v2610 = *(i8*)(intptr_t)v2609;
	i8 v2611 = v2610+(+6);
	*(i1*)(intptr_t)v2611 = v2608;

endsub:;
	*p2567 = *(i8*)(intptr_t)(ws+3400);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBand workspace at ws+3328 length ws+32
void f132_MidBand(i8* p2612 /* m */, i1 p2613 /* negated */, i2 p2614 /* fallthrough */, i2 p2615 /* falselabel */, i2 p2616 /* truelabel */, i8 p2617 /* right */, i8 p2618 /* left */) {
	*(i8*)(intptr_t)(ws+3328) = p2618; /*left */
	*(i8*)(intptr_t)(ws+3336) = p2617; /*right */
	*(i2*)(intptr_t)(ws+3344) = p2616; /*truelabel */
	*(i2*)(intptr_t)(ws+3346) = p2615; /*falselabel */
	*(i2*)(intptr_t)(ws+3348) = p2614; /*fallthrough */
	*(i1*)(intptr_t)(ws+3350) = p2613; /*negated */

	i1 v2619 = (i1)+59;
	i8 v2620 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2621;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2620)(&v2621, v2619);
	i8 v2622 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v2622 = v2621;

	i8 v2623 = (i8)(intptr_t)(ws+3328);
	i8 v2624 = *(i8*)(intptr_t)v2623;
	i8 v2625 = (i8)(intptr_t)(ws+3352);
	i8 v2626 = *(i8*)(intptr_t)v2625;
	i8 v2627 = v2626+(+24);
	*(i8*)(intptr_t)v2627 = v2624;

	i8 v2628 = (i8)(intptr_t)(ws+3336);
	i8 v2629 = *(i8*)(intptr_t)v2628;
	i8 v2630 = (i8)(intptr_t)(ws+3352);
	i8 v2631 = *(i8*)(intptr_t)v2630;
	i8 v2632 = v2631+(+32);
	*(i8*)(intptr_t)v2632 = v2629;

	i8 v2633 = (i8)(intptr_t)(ws+3344);
	i2 v2634 = *(i2*)(intptr_t)v2633;
	i8 v2635 = (i8)(intptr_t)(ws+3352);
	i8 v2636 = *(i8*)(intptr_t)v2635;
	*(i2*)(intptr_t)v2636 = v2634;

	i8 v2637 = (i8)(intptr_t)(ws+3346);
	i2 v2638 = *(i2*)(intptr_t)v2637;
	i8 v2639 = (i8)(intptr_t)(ws+3352);
	i8 v2640 = *(i8*)(intptr_t)v2639;
	i8 v2641 = v2640+(+2);
	*(i2*)(intptr_t)v2641 = v2638;

	i8 v2642 = (i8)(intptr_t)(ws+3348);
	i2 v2643 = *(i2*)(intptr_t)v2642;
	i8 v2644 = (i8)(intptr_t)(ws+3352);
	i8 v2645 = *(i8*)(intptr_t)v2644;
	i8 v2646 = v2645+(+4);
	*(i2*)(intptr_t)v2646 = v2643;

	i8 v2647 = (i8)(intptr_t)(ws+3350);
	i1 v2648 = *(i1*)(intptr_t)v2647;
	i8 v2649 = (i8)(intptr_t)(ws+3352);
	i8 v2650 = *(i8*)(intptr_t)v2649;
	i8 v2651 = v2650+(+6);
	*(i1*)(intptr_t)v2651 = v2648;

endsub:;
	*p2612 = *(i8*)(intptr_t)(ws+3352);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidInitstring workspace at ws+3352 length ws+16
void f134_MidInitstring(i8* p2674 /* m */, i8 p2675 /* text */) {
	*(i8*)(intptr_t)(ws+3352) = p2675; /*text */

	i1 v2676 = (i1)+12;
	i8 v2677 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2678;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2677)(&v2678, v2676);
	i8 v2679 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v2679 = v2678;

	i8 v2680 = (i8)(intptr_t)(ws+3352);
	i8 v2681 = *(i8*)(intptr_t)v2680;
	i8 v2682 = (i8)(intptr_t)(ws+3360);
	i8 v2683 = *(i8*)(intptr_t)v2682;
	*(i8*)(intptr_t)v2683 = v2681;

endsub:;
	*p2674 = *(i8*)(intptr_t)(ws+3360);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidPair workspace at ws+3328 length ws+24
void f135_MidPair(i8* p2684 /* m */, i8 p2685 /* right */, i8 p2686 /* left */) {
	*(i8*)(intptr_t)(ws+3328) = p2686; /*left */
	*(i8*)(intptr_t)(ws+3336) = p2685; /*right */

	i1 v2687 = (i1)+25;
	i8 v2688 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2689;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2688)(&v2689, v2687);
	i8 v2690 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v2690 = v2689;

	i8 v2691 = (i8)(intptr_t)(ws+3328);
	i8 v2692 = *(i8*)(intptr_t)v2691;
	i8 v2693 = (i8)(intptr_t)(ws+3344);
	i8 v2694 = *(i8*)(intptr_t)v2693;
	i8 v2695 = v2694+(+24);
	*(i8*)(intptr_t)v2695 = v2692;

	i8 v2696 = (i8)(intptr_t)(ws+3336);
	i8 v2697 = *(i8*)(intptr_t)v2696;
	i8 v2698 = (i8)(intptr_t)(ws+3344);
	i8 v2699 = *(i8*)(intptr_t)v2698;
	i8 v2700 = v2699+(+32);
	*(i8*)(intptr_t)v2700 = v2697;

endsub:;
	*p2684 = *(i8*)(intptr_t)(ws+3344);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidDeref workspace at ws+3408 length ws+24
void f138_MidDeref(i8* p2744 /* m */, i8 p2745 /* left */, i1 p2746 /* width */) {
	*(i1*)(intptr_t)(ws+3408) = p2746; /*width */
	*(i8*)(intptr_t)(ws+3416) = p2745; /*left */

	i8 v2747 = (i8)(intptr_t)(ws+3408);
	i1 v2748 = *(i1*)(intptr_t)v2747;
	i8 v2749 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v2750;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2749)(&v2750, v2748);
	i1 v2751 = v2750+(+49);
	i8 v2752 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2753;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2752)(&v2753, v2751);
	i8 v2754 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2754 = v2753;

	i8 v2755 = (i8)(intptr_t)(ws+3416);
	i8 v2756 = *(i8*)(intptr_t)v2755;
	i8 v2757 = (i8)(intptr_t)(ws+3424);
	i8 v2758 = *(i8*)(intptr_t)v2757;
	i8 v2759 = v2758+(+24);
	*(i8*)(intptr_t)v2759 = v2756;

endsub:;
	*p2744 = *(i8*)(intptr_t)(ws+3424);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidInitaddress workspace at ws+3352 length ws+24
void f143_MidInitaddress(i8* p2837 /* m */, i2 p2838 /* off */, i8 p2839 /* sym */) {
	*(i8*)(intptr_t)(ws+3352) = p2839; /*sym */
	*(i2*)(intptr_t)(ws+3360) = p2838; /*off */

	i1 v2840 = (i1)+13;
	i8 v2841 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2842;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2841)(&v2842, v2840);
	i8 v2843 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v2843 = v2842;

	i8 v2844 = (i8)(intptr_t)(ws+3352);
	i8 v2845 = *(i8*)(intptr_t)v2844;
	i8 v2846 = (i8)(intptr_t)(ws+3368);
	i8 v2847 = *(i8*)(intptr_t)v2846;
	*(i8*)(intptr_t)v2847 = v2845;

	i8 v2848 = (i8)(intptr_t)(ws+3360);
	i2 v2849 = *(i2*)(intptr_t)v2848;
	i8 v2850 = (i8)(intptr_t)(ws+3368);
	i8 v2851 = *(i8*)(intptr_t)v2850;
	i8 v2852 = v2851+(+8);
	*(i2*)(intptr_t)v2852 = v2849;

endsub:;
	*p2837 = *(i8*)(intptr_t)(ws+3368);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidInitsubref workspace at ws+3352 length ws+16
void f145_MidInitsubref(i8* p2874 /* m */, i8 p2875 /* subr */) {
	*(i8*)(intptr_t)(ws+3352) = p2875; /*subr */

	i1 v2876 = (i1)+14;
	i8 v2877 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2878;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2877)(&v2878, v2876);
	i8 v2879 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v2879 = v2878;

	i8 v2880 = (i8)(intptr_t)(ws+3352);
	i8 v2881 = *(i8*)(intptr_t)v2880;
	i8 v2882 = (i8)(intptr_t)(ws+3360);
	i8 v2883 = *(i8*)(intptr_t)v2882;
	*(i8*)(intptr_t)v2883 = v2881;

endsub:;
	*p2874 = *(i8*)(intptr_t)(ws+3360);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartsub workspace at ws+3336 length ws+16
void f148_MidStartsub(i8* p2928 /* m */, i8 p2929 /* subr */) {
	*(i8*)(intptr_t)(ws+3336) = p2929; /*subr */

	i1 v2930 = (i1)+4;
	i8 v2931 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2932;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2931)(&v2932, v2930);
	i8 v2933 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v2933 = v2932;

	i8 v2934 = (i8)(intptr_t)(ws+3336);
	i8 v2935 = *(i8*)(intptr_t)v2934;
	i8 v2936 = (i8)(intptr_t)(ws+3344);
	i8 v2937 = *(i8*)(intptr_t)v2936;
	*(i8*)(intptr_t)v2937 = v2935;

endsub:;
	*p2928 = *(i8*)(intptr_t)(ws+3344);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidPoparg workspace at ws+3376 length ws+32
void f149_MidPoparg(i8* p2938 /* m */, i1 p2939 /* remaining */, i8 p2940 /* subr */, i1 p2941 /* width */) {
	*(i1*)(intptr_t)(ws+3376) = p2941; /*width */
	*(i8*)(intptr_t)(ws+3384) = p2940; /*subr */
	*(i1*)(intptr_t)(ws+3392) = p2939; /*remaining */

	i8 v2942 = (i8)(intptr_t)(ws+3376);
	i1 v2943 = *(i1*)(intptr_t)v2942;
	i8 v2944 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v2945;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2944)(&v2945, v2943);
	i1 v2946 = v2945+(+40);
	i8 v2947 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2948;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2947)(&v2948, v2946);
	i8 v2949 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2949 = v2948;

	i8 v2950 = (i8)(intptr_t)(ws+3384);
	i8 v2951 = *(i8*)(intptr_t)v2950;
	i8 v2952 = (i8)(intptr_t)(ws+3400);
	i8 v2953 = *(i8*)(intptr_t)v2952;
	*(i8*)(intptr_t)v2953 = v2951;

	i8 v2954 = (i8)(intptr_t)(ws+3392);
	i1 v2955 = *(i1*)(intptr_t)v2954;
	i8 v2956 = (i8)(intptr_t)(ws+3400);
	i8 v2957 = *(i8*)(intptr_t)v2956;
	i8 v2958 = v2957+(+8);
	*(i1*)(intptr_t)v2958 = v2955;

endsub:;
	*p2938 = *(i8*)(intptr_t)(ws+3400);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmsymbol workspace at ws+3328 length ws+16
void f152_MidAsmsymbol(i8* p3003 /* m */, i8 p3004 /* sym */) {
	*(i8*)(intptr_t)(ws+3328) = p3004; /*sym */

	i1 v3005 = (i1)+20;
	i8 v3006 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3007;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3006)(&v3007, v3005);
	i8 v3008 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v3008 = v3007;

	i8 v3009 = (i8)(intptr_t)(ws+3328);
	i8 v3010 = *(i8*)(intptr_t)v3009;
	i8 v3011 = (i8)(intptr_t)(ws+3336);
	i8 v3012 = *(i8*)(intptr_t)v3011;
	*(i8*)(intptr_t)v3012 = v3010;

endsub:;
	*p3003 = *(i8*)(intptr_t)(ws+3336);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmstart workspace at ws+3328 length ws+8
void f154_MidAsmstart(i8* p3035 /* m */) {

	i1 v3036 = (i1)+18;
	i8 v3037 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3038;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3037)(&v3038, v3036);
	i8 v3039 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v3039 = v3038;

endsub:;
	*p3035 = *(i8*)(intptr_t)(ws+3328);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidSubref workspace at ws+3328 length ws+16
void f155_MidSubref(i8* p3040 /* m */, i8 p3041 /* subr */) {
	*(i8*)(intptr_t)(ws+3328) = p3041; /*subr */

	i1 v3042 = (i1)+48;
	i8 v3043 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3044;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3043)(&v3044, v3042);
	i8 v3045 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v3045 = v3044;

	i8 v3046 = (i8)(intptr_t)(ws+3328);
	i8 v3047 = *(i8*)(intptr_t)v3046;
	i8 v3048 = (i8)(intptr_t)(ws+3336);
	i8 v3049 = *(i8*)(intptr_t)v3048;
	*(i8*)(intptr_t)v3049 = v3047;

endsub:;
	*p3040 = *(i8*)(intptr_t)(ws+3336);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidString workspace at ws+3328 length ws+16
void f156_MidString(i8* p3050 /* m */, i8 p3051 /* text */) {
	*(i8*)(intptr_t)(ws+3328) = p3051; /*text */

	i1 v3052 = (i1)+46;
	i8 v3053 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3054;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3053)(&v3054, v3052);
	i8 v3055 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v3055 = v3054;

	i8 v3056 = (i8)(intptr_t)(ws+3328);
	i8 v3057 = *(i8*)(intptr_t)v3056;
	i8 v3058 = (i8)(intptr_t)(ws+3336);
	i8 v3059 = *(i8*)(intptr_t)v3058;
	*(i8*)(intptr_t)v3059 = v3057;

endsub:;
	*p3050 = *(i8*)(intptr_t)(ws+3336);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidInit workspace at ws+3376 length ws+16
void f157_MidInit(i8* p3060 /* m */, i4 p3061 /* value */, i1 p3062 /* width */) {
	*(i1*)(intptr_t)(ws+3376) = p3062; /*width */
	*(i4*)(intptr_t)(ws+3380) = p3061; /*value */

	i8 v3063 = (i8)(intptr_t)(ws+3376);
	i1 v3064 = *(i1*)(intptr_t)v3063;
	i8 v3065 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v3066;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v3065)(&v3066, v3064);
	i1 v3067 = v3066+(+7);
	i8 v3068 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3069;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3068)(&v3069, v3067);
	i8 v3070 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v3070 = v3069;

	i8 v3071 = (i8)(intptr_t)(ws+3380);
	i4 v3072 = *(i4*)(intptr_t)v3071;
	i8 v3073 = (i8)(intptr_t)(ws+3384);
	i8 v3074 = *(i8*)(intptr_t)v3073;
	*(i4*)(intptr_t)v3074 = v3072;

endsub:;
	*p3060 = *(i8*)(intptr_t)(ws+3384);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidArg workspace at ws+3336 length ws+48
void f158_MidArg(i8* p3075 /* m */, i1 p3076 /* remaining */, i8 p3077 /* subr */, i8 p3078 /* right */, i8 p3079 /* left */, i1 p3080 /* width */) {
	*(i1*)(intptr_t)(ws+3336) = p3080; /*width */
	*(i8*)(intptr_t)(ws+3344) = p3079; /*left */
	*(i8*)(intptr_t)(ws+3352) = p3078; /*right */
	*(i8*)(intptr_t)(ws+3360) = p3077; /*subr */
	*(i1*)(intptr_t)(ws+3368) = p3076; /*remaining */

	i8 v3081 = (i8)(intptr_t)(ws+3336);
	i1 v3082 = *(i1*)(intptr_t)v3081;
	i8 v3083 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v3084;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v3083)(&v3084, v3082);
	i1 v3085 = v3084+(+35);
	i8 v3086 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3087;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3086)(&v3087, v3085);
	i8 v3088 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v3088 = v3087;

	i8 v3089 = (i8)(intptr_t)(ws+3344);
	i8 v3090 = *(i8*)(intptr_t)v3089;
	i8 v3091 = (i8)(intptr_t)(ws+3376);
	i8 v3092 = *(i8*)(intptr_t)v3091;
	i8 v3093 = v3092+(+24);
	*(i8*)(intptr_t)v3093 = v3090;

	i8 v3094 = (i8)(intptr_t)(ws+3352);
	i8 v3095 = *(i8*)(intptr_t)v3094;
	i8 v3096 = (i8)(intptr_t)(ws+3376);
	i8 v3097 = *(i8*)(intptr_t)v3096;
	i8 v3098 = v3097+(+32);
	*(i8*)(intptr_t)v3098 = v3095;

	i8 v3099 = (i8)(intptr_t)(ws+3360);
	i8 v3100 = *(i8*)(intptr_t)v3099;
	i8 v3101 = (i8)(intptr_t)(ws+3376);
	i8 v3102 = *(i8*)(intptr_t)v3101;
	*(i8*)(intptr_t)v3102 = v3100;

	i8 v3103 = (i8)(intptr_t)(ws+3368);
	i1 v3104 = *(i1*)(intptr_t)v3103;
	i8 v3105 = (i8)(intptr_t)(ws+3376);
	i8 v3106 = *(i8*)(intptr_t)v3105;
	i8 v3107 = v3106+(+8);
	*(i1*)(intptr_t)v3107 = v3104;

endsub:;
	*p3075 = *(i8*)(intptr_t)(ws+3376);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndsub workspace at ws+3344 length ws+16
void f159_MidEndsub(i8* p3108 /* m */, i8 p3109 /* subr */) {
	*(i8*)(intptr_t)(ws+3344) = p3109; /*subr */

	i1 v3110 = (i1)+5;
	i8 v3111 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3112;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3111)(&v3112, v3110);
	i8 v3113 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v3113 = v3112;

	i8 v3114 = (i8)(intptr_t)(ws+3344);
	i8 v3115 = *(i8*)(intptr_t)v3114;
	i8 v3116 = (i8)(intptr_t)(ws+3352);
	i8 v3117 = *(i8*)(intptr_t)v3116;
	*(i8*)(intptr_t)v3117 = v3115;

endsub:;
	*p3108 = *(i8*)(intptr_t)(ws+3352);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidCall workspace at ws+3376 length ws+32
void f160_MidCall(i8* p3118 /* m */, i8 p3119 /* subr */, i8 p3120 /* right */, i8 p3121 /* left */) {
	*(i8*)(intptr_t)(ws+3376) = p3121; /*left */
	*(i8*)(intptr_t)(ws+3384) = p3120; /*right */
	*(i8*)(intptr_t)(ws+3392) = p3119; /*subr */

	i1 v3122 = (i1)+29;
	i8 v3123 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3124;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3123)(&v3124, v3122);
	i8 v3125 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3125 = v3124;

	i8 v3126 = (i8)(intptr_t)(ws+3376);
	i8 v3127 = *(i8*)(intptr_t)v3126;
	i8 v3128 = (i8)(intptr_t)(ws+3400);
	i8 v3129 = *(i8*)(intptr_t)v3128;
	i8 v3130 = v3129+(+24);
	*(i8*)(intptr_t)v3130 = v3127;

	i8 v3131 = (i8)(intptr_t)(ws+3384);
	i8 v3132 = *(i8*)(intptr_t)v3131;
	i8 v3133 = (i8)(intptr_t)(ws+3400);
	i8 v3134 = *(i8*)(intptr_t)v3133;
	i8 v3135 = v3134+(+32);
	*(i8*)(intptr_t)v3135 = v3132;

	i8 v3136 = (i8)(intptr_t)(ws+3392);
	i8 v3137 = *(i8*)(intptr_t)v3136;
	i8 v3138 = (i8)(intptr_t)(ws+3400);
	i8 v3139 = *(i8*)(intptr_t)v3138;
	*(i8*)(intptr_t)v3139 = v3137;

endsub:;
	*p3118 = *(i8*)(intptr_t)(ws+3400);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmgroupstart workspace at ws+3408 length ws+8
void f161_MidAsmgroupstart(i8* p3140 /* m */) {

	i1 v3141 = (i1)+16;
	i8 v3142 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3143;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3142)(&v3143, v3141);
	i8 v3144 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v3144 = v3143;

endsub:;
	*p3140 = *(i8*)(intptr_t)(ws+3408);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEnd workspace at ws+3336 length ws+8
void f162_MidEnd(i8* p3145 /* m */) {

	i1 v3146 = (i1)+1;
	i8 v3147 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3148;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3147)(&v3148, v3146);
	i8 v3149 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v3149 = v3148;

endsub:;
	*p3145 = *(i8*)(intptr_t)(ws+3336);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBltu workspace at ws+3368 length ws+40
void f163_MidBltu(i8* p3150 /* m */, i1 p3151 /* negated */, i2 p3152 /* fallthrough */, i2 p3153 /* falselabel */, i2 p3154 /* truelabel */, i8 p3155 /* right */, i8 p3156 /* left */, i1 p3157 /* width */) {
	*(i1*)(intptr_t)(ws+3368) = p3157; /*width */
	*(i8*)(intptr_t)(ws+3376) = p3156; /*left */
	*(i8*)(intptr_t)(ws+3384) = p3155; /*right */
	*(i2*)(intptr_t)(ws+3392) = p3154; /*truelabel */
	*(i2*)(intptr_t)(ws+3394) = p3153; /*falselabel */
	*(i2*)(intptr_t)(ws+3396) = p3152; /*fallthrough */
	*(i1*)(intptr_t)(ws+3398) = p3151; /*negated */

	i8 v3158 = (i8)(intptr_t)(ws+3368);
	i1 v3159 = *(i1*)(intptr_t)v3158;
	i8 v3160 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v3161;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v3160)(&v3161, v3159);
	i1 v3162 = v3161+(+71);
	i8 v3163 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3164;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3163)(&v3164, v3162);
	i8 v3165 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3165 = v3164;

	i8 v3166 = (i8)(intptr_t)(ws+3376);
	i8 v3167 = *(i8*)(intptr_t)v3166;
	i8 v3168 = (i8)(intptr_t)(ws+3400);
	i8 v3169 = *(i8*)(intptr_t)v3168;
	i8 v3170 = v3169+(+24);
	*(i8*)(intptr_t)v3170 = v3167;

	i8 v3171 = (i8)(intptr_t)(ws+3384);
	i8 v3172 = *(i8*)(intptr_t)v3171;
	i8 v3173 = (i8)(intptr_t)(ws+3400);
	i8 v3174 = *(i8*)(intptr_t)v3173;
	i8 v3175 = v3174+(+32);
	*(i8*)(intptr_t)v3175 = v3172;

	i8 v3176 = (i8)(intptr_t)(ws+3392);
	i2 v3177 = *(i2*)(intptr_t)v3176;
	i8 v3178 = (i8)(intptr_t)(ws+3400);
	i8 v3179 = *(i8*)(intptr_t)v3178;
	*(i2*)(intptr_t)v3179 = v3177;

	i8 v3180 = (i8)(intptr_t)(ws+3394);
	i2 v3181 = *(i2*)(intptr_t)v3180;
	i8 v3182 = (i8)(intptr_t)(ws+3400);
	i8 v3183 = *(i8*)(intptr_t)v3182;
	i8 v3184 = v3183+(+2);
	*(i2*)(intptr_t)v3184 = v3181;

	i8 v3185 = (i8)(intptr_t)(ws+3396);
	i2 v3186 = *(i2*)(intptr_t)v3185;
	i8 v3187 = (i8)(intptr_t)(ws+3400);
	i8 v3188 = *(i8*)(intptr_t)v3187;
	i8 v3189 = v3188+(+4);
	*(i2*)(intptr_t)v3189 = v3186;

	i8 v3190 = (i8)(intptr_t)(ws+3398);
	i1 v3191 = *(i1*)(intptr_t)v3190;
	i8 v3192 = (i8)(intptr_t)(ws+3400);
	i8 v3193 = *(i8*)(intptr_t)v3192;
	i8 v3194 = v3193+(+6);
	*(i1*)(intptr_t)v3194 = v3191;

endsub:;
	*p3150 = *(i8*)(intptr_t)(ws+3400);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidJump workspace at ws+3336 length ws+16
void f164_MidJump(i8* p3195 /* m */, i2 p3196 /* label */) {
	*(i2*)(intptr_t)(ws+3336) = p3196; /*label */

	i1 v3197 = (i1)+27;
	i8 v3198 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3199;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3198)(&v3199, v3197);
	i8 v3200 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v3200 = v3199;

	i8 v3201 = (i8)(intptr_t)(ws+3336);
	i2 v3202 = *(i2*)(intptr_t)v3201;
	i8 v3203 = (i8)(intptr_t)(ws+3344);
	i8 v3204 = *(i8*)(intptr_t)v3203;
	*(i2*)(intptr_t)v3204 = v3202;

endsub:;
	*p3195 = *(i8*)(intptr_t)(ws+3344);
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);

// AllocateNewNode workspace at ws+3440 length ws+16
void f103_AllocateNewNode(i8* p3219 /* m */, i1 p3220 /* code */) {
	*(i1*)(intptr_t)(ws+3440) = p3220; /*code */

	i8 v3221 = (i8)(intptr_t)(ws+928);
	i8 v3222 = *(i8*)(intptr_t)v3221;
	i8 v3223 = (i8)+0;
	if (v3222==v3223) goto c02_0248; else goto c02_0247;

c02_0247:;

	i8 v3224 = (i8)(intptr_t)(ws+928);
	i8 v3225 = *(i8*)(intptr_t)v3224;
	i8 v3226 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v3226 = v3225;

	i8 v3227 = (i8)(intptr_t)(ws+928);
	i8 v3228 = *(i8*)(intptr_t)v3227;
	i8 v3229 = v3228+(+24);
	i8 v3230 = *(i8*)(intptr_t)v3229;
	i8 v3231 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3231 = v3230;

	i8 v3232 = (i8)(intptr_t)(ws+3448);
	i8 v3233 = *(i8*)(intptr_t)v3232;
	i1 v3234 = (i1)+0;
	i8 v3235 = (i8)+41;
	i8 v3236 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v3236)(v3235, v3234, v3233);

	goto c02_0244;

c02_0248:;

	i8 v3237 = (i8)+41;
	i8 v3238 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v3239;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v3238)(&v3239, v3237);
	i8 v3240 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v3240 = v3239;

c02_0244:;

	i8 v3241 = (i8)(intptr_t)(ws+3440);
	i1 v3242 = *(i1*)(intptr_t)v3241;
	i8 v3243 = (i8)(intptr_t)(ws+3448);
	i8 v3244 = *(i8*)(intptr_t)v3243;
	i8 v3245 = v3244+(+40);
	*(i1*)(intptr_t)v3245 = v3242;

endsub:;
	*p3219 = *(i8*)(intptr_t)(ws+3448);
}

// FreeNode workspace at ws+3464 length ws+8
void f166_FreeNode(i8 p3246 /* node */) {
	*(i8*)(intptr_t)(ws+3464) = p3246; /*node */

	i8 v3247 = (i8)(intptr_t)(ws+928);
	i8 v3248 = *(i8*)(intptr_t)v3247;
	i8 v3249 = (i8)(intptr_t)(ws+3464);
	i8 v3250 = *(i8*)(intptr_t)v3249;
	i8 v3251 = v3250+(+24);
	*(i8*)(intptr_t)v3251 = v3248;

	i8 v3252 = (i8)(intptr_t)(ws+3464);
	i8 v3253 = *(i8*)(intptr_t)v3252;
	i8 v3254 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3254 = v3253;

endsub:;
}
	void f34_Free(i8 /* block */);

// PurgeAllFreeNodes workspace at ws+3472 length ws+8
void f73_PurgeAllFreeNodes(void) {

c02_024b:;

	i8 v3255 = (i8)(intptr_t)(ws+928);
	i8 v3256 = *(i8*)(intptr_t)v3255;
	i8 v3257 = (i8)+0;
	if (v3256==v3257) goto c02_024e; else goto c02_024d;

c02_024d:;

	i8 v3258 = (i8)(intptr_t)(ws+928);
	i8 v3259 = *(i8*)(intptr_t)v3258;
	i8 v3260 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v3260 = v3259;

	i8 v3261 = (i8)(intptr_t)(ws+928);
	i8 v3262 = *(i8*)(intptr_t)v3261;
	i8 v3263 = v3262+(+24);
	i8 v3264 = *(i8*)(intptr_t)v3263;
	i8 v3265 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3265 = v3264;

	i8 v3266 = (i8)(intptr_t)(ws+3472);
	i8 v3267 = *(i8*)(intptr_t)v3266;
	i8 v3268 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v3268)(v3267);

	goto c02_024b;

c02_024e:;

endsub:;
}

// NodeWidth workspace at ws+3376 length ws+9
void f167_NodeWidth(i1* p3269 /* width */, i8 p3270 /* node */) {
	*(i8*)(intptr_t)(ws+3376) = p3270; /*node */

	i1 v3271 = (i1)+0;
	i8 v3272 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v3272 = v3271;

	i8 v3273 = (i8)(intptr_t)(ws+3376);
	i8 v3274 = *(i8*)(intptr_t)v3273;
	i8 v3275 = v3274+(+16);
	i8 v3276 = *(i8*)(intptr_t)v3275;
	i8 v3277 = (i8)+0;
	if (v3276==v3277) goto c02_0253; else goto c02_0252;

c02_0252:;

	i8 v3278 = (i8)(intptr_t)(ws+3376);
	i8 v3279 = *(i8*)(intptr_t)v3278;
	i8 v3280 = v3279+(+16);
	i8 v3281 = *(i8*)(intptr_t)v3280;
	i8 v3282 = v3281+(+48);
	i2 v3283 = *(i2*)(intptr_t)v3282;
	i1 v3284 = v3283;
	i8 v3285 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v3285 = v3284;

c02_0253:;

c02_024f:;

endsub:;
	*p3269 = *(i1*)(intptr_t)(ws+3384);
}
const i1 c02_s00f7[] = { 0x62,0x61,0x64,0x20,0x66,0x6f,0x6c,0x64,0 };
	void f76_SimpleError(i8 /* message */);

// midcodec_i_bad_fold workspace at ws+3464 length ws+0
void f168_midcodec_i_bad_fold(void) {

	i8 v3286 = (i8)(intptr_t)c02_s00f7;
	i8 v3287 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v3287)(v3286);

endsub:;
}
	void f168_midcodec_i_bad_fold(void);

// FoldConstant1 workspace at ws+3376 length ws+24
void f169_FoldConstant1(i4* p3288 /* result */, i8 p3289 /* lhsp */, i1 p3290 /* op */) {
	*(i1*)(intptr_t)(ws+3376) = p3290; /*op */
	*(i8*)(intptr_t)(ws+3384) = p3289; /*lhsp */

	i8 v3291 = (i8)(intptr_t)(ws+3384);
	i8 v3292 = *(i8*)(intptr_t)v3291;
	i4 v3293 = *(i4*)(intptr_t)v3292;
	i8 v3294 = (i8)(intptr_t)(ws+3396);
	*(i4*)(intptr_t)v3294 = v3293;

	i8 v3295 = (i8)(intptr_t)(ws+3376);
	i1 v3296 = *(i1*)(intptr_t)v3295;

	if (v3296 != +111) goto c02_0255;

	i8 v3297 = (i8)(intptr_t)(ws+3396);
	i4 v3298 = *(i4*)(intptr_t)v3297;
	i4 v3299 = ~v3298;
	i8 v3300 = (i8)(intptr_t)(ws+3392);
	*(i4*)(intptr_t)v3300 = v3299;

	goto c02_0254;

c02_0255:;

	if (v3296 != +116) goto c02_0256;

	i8 v3301 = (i8)(intptr_t)(ws+3396);
	i4 v3302 = *(i4*)(intptr_t)v3301;
	i4 v3303 = -v3302;
	i8 v3304 = (i8)(intptr_t)(ws+3392);
	*(i4*)(intptr_t)v3304 = v3303;

	goto c02_0254;

c02_0256:;

	i8 v3305 = (i8)(intptr_t)(f168_midcodec_i_bad_fold);

	((void(*)(void))(intptr_t)v3305)();

c02_0254:;


endsub:;
	*p3288 = *(i4*)(intptr_t)(ws+3392);
}
	void f168_midcodec_i_bad_fold(void);

// FoldConstant2 workspace at ws+3424 length ws+36
void f170_FoldConstant2(i4* p3306 /* result */, i8 p3307 /* rhsp */, i8 p3308 /* lhsp */, i1 p3309 /* op */) {
	*(i1*)(intptr_t)(ws+3424) = p3309; /*op */
	*(i8*)(intptr_t)(ws+3432) = p3308; /*lhsp */
	*(i8*)(intptr_t)(ws+3440) = p3307; /*rhsp */

	i8 v3310 = (i8)(intptr_t)(ws+3432);
	i8 v3311 = *(i8*)(intptr_t)v3310;
	i4 v3312 = *(i4*)(intptr_t)v3311;
	i8 v3313 = (i8)(intptr_t)(ws+3452);
	*(i4*)(intptr_t)v3313 = v3312;

	i8 v3314 = (i8)(intptr_t)(ws+3440);
	i8 v3315 = *(i8*)(intptr_t)v3314;
	i4 v3316 = *(i4*)(intptr_t)v3315;
	i8 v3317 = (i8)(intptr_t)(ws+3456);
	*(i4*)(intptr_t)v3317 = v3316;

	i8 v3318 = (i8)(intptr_t)(ws+3424);
	i1 v3319 = *(i1*)(intptr_t)v3318;

	if (v3319 != +161) goto c02_0258;

	i8 v3320 = (i8)(intptr_t)(ws+3452);
	i4 v3321 = *(i4*)(intptr_t)v3320;
	i8 v3322 = (i8)(intptr_t)(ws+3456);
	i4 v3323 = *(i4*)(intptr_t)v3322;
	i4 v3324 = v3321+v3323;
	i8 v3325 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3325 = v3324;

	goto c02_0257;

c02_0258:;

	if (v3319 != +136) goto c02_0259;

	i8 v3326 = (i8)(intptr_t)(ws+3452);
	i4 v3327 = *(i4*)(intptr_t)v3326;
	i8 v3328 = (i8)(intptr_t)(ws+3456);
	i4 v3329 = *(i4*)(intptr_t)v3328;
	i4 v3330 = v3327-v3329;
	i8 v3331 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3331 = v3330;

	goto c02_0257;

c02_0259:;

	if (v3319 != +166) goto c02_025a;

	i8 v3332 = (i8)(intptr_t)(ws+3452);
	i4 v3333 = *(i4*)(intptr_t)v3332;
	i8 v3334 = (i8)(intptr_t)(ws+3456);
	i4 v3335 = *(i4*)(intptr_t)v3334;
	i4 v3336 = v3333*v3335;
	i8 v3337 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3337 = v3336;

	goto c02_0257;

c02_025a:;

	if (v3319 != +141) goto c02_025b;

	i8 v3338 = (i8)(intptr_t)(ws+3452);
	i4 v3339 = *(i4*)(intptr_t)v3338;
	i8 v3340 = (i8)(intptr_t)(ws+3456);
	i4 v3341 = *(i4*)(intptr_t)v3340;
	i4 v3342 = v3339/v3341;
	i8 v3343 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3343 = v3342;

	goto c02_0257;

c02_025b:;

	if (v3319 != +146) goto c02_025c;

	i8 v3344 = (i8)(intptr_t)(ws+3452);
	i4 v3345 = *(i4*)(intptr_t)v3344;
	i8 v3346 = (i8)(intptr_t)(ws+3456);
	i4 v3347 = *(i4*)(intptr_t)v3346;
	i4 v3348 = (s4)v3345/(s4)v3347;
	i8 v3349 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3349 = v3348;

	goto c02_0257;

c02_025c:;

	if (v3319 != +151) goto c02_025d;

	i8 v3350 = (i8)(intptr_t)(ws+3452);
	i4 v3351 = *(i4*)(intptr_t)v3350;
	i8 v3352 = (i8)(intptr_t)(ws+3456);
	i4 v3353 = *(i4*)(intptr_t)v3352;
	i4 v3354 = v3351%v3353;
	i8 v3355 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3355 = v3354;

	goto c02_0257;

c02_025d:;

	if (v3319 != +156) goto c02_025e;

	i8 v3356 = (i8)(intptr_t)(ws+3452);
	i4 v3357 = *(i4*)(intptr_t)v3356;
	i8 v3358 = (i8)(intptr_t)(ws+3456);
	i4 v3359 = *(i4*)(intptr_t)v3358;
	i4 v3360 = (s4)v3357%(s4)v3359;
	i8 v3361 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3361 = v3360;

	goto c02_0257;

c02_025e:;

	if (v3319 != +171) goto c02_025f;

	i8 v3362 = (i8)(intptr_t)(ws+3452);
	i4 v3363 = *(i4*)(intptr_t)v3362;
	i8 v3364 = (i8)(intptr_t)(ws+3456);
	i4 v3365 = *(i4*)(intptr_t)v3364;
	i4 v3366 = v3363&v3365;
	i8 v3367 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3367 = v3366;

	goto c02_0257;

c02_025f:;

	if (v3319 != +176) goto c02_0260;

	i8 v3368 = (i8)(intptr_t)(ws+3452);
	i4 v3369 = *(i4*)(intptr_t)v3368;
	i8 v3370 = (i8)(intptr_t)(ws+3456);
	i4 v3371 = *(i4*)(intptr_t)v3370;
	i4 v3372 = v3369|v3371;
	i8 v3373 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3373 = v3372;

	goto c02_0257;

c02_0260:;

	if (v3319 != +181) goto c02_0261;

	i8 v3374 = (i8)(intptr_t)(ws+3452);
	i4 v3375 = *(i4*)(intptr_t)v3374;
	i8 v3376 = (i8)(intptr_t)(ws+3456);
	i4 v3377 = *(i4*)(intptr_t)v3376;
	i4 v3378 = v3375^v3377;
	i8 v3379 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3379 = v3378;

	goto c02_0257;

c02_0261:;

	if (v3319 != +121) goto c02_0262;

	i8 v3380 = (i8)(intptr_t)(ws+3452);
	i4 v3381 = *(i4*)(intptr_t)v3380;
	i8 v3382 = (i8)(intptr_t)(ws+3456);
	i4 v3383 = *(i4*)(intptr_t)v3382;
	i1 v3384 = (s1)(s4)v3383;
	i4 v3385 = ((i4)v3381)<<v3384;
	i8 v3386 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3386 = v3385;

	goto c02_0257;

c02_0262:;

	if (v3319 != +126) goto c02_0263;

	i8 v3387 = (i8)(intptr_t)(ws+3452);
	i4 v3388 = *(i4*)(intptr_t)v3387;
	i8 v3389 = (i8)(intptr_t)(ws+3456);
	i4 v3390 = *(i4*)(intptr_t)v3389;
	i1 v3391 = (s1)(s4)v3390;
	i4 v3392 = ((i4)v3388)>>v3391;
	i8 v3393 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3393 = v3392;

	goto c02_0257;

c02_0263:;

	if (v3319 != +131) goto c02_0264;

	i8 v3394 = (i8)(intptr_t)(ws+3452);
	i4 v3395 = *(i4*)(intptr_t)v3394;
	i8 v3396 = (i8)(intptr_t)(ws+3456);
	i4 v3397 = *(i4*)(intptr_t)v3396;
	i1 v3398 = (s1)(s4)v3397;
	i4 v3399 = ((s4)v3395)>>v3398;
	i8 v3400 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3400 = v3399;

	goto c02_0257;

c02_0264:;

	i8 v3401 = (i8)(intptr_t)(f168_midcodec_i_bad_fold);

	((void(*)(void))(intptr_t)v3401)();

c02_0257:;


endsub:;
	*p3306 = *(i4*)(intptr_t)(ws+3448);
}
	void f169_FoldConstant1(i4* /* result */, i8 /* lhsp */, i1 /* op */);
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidC1Op workspace at ws+3352 length ws+24
void f171_MidC1Op(i8* p3402 /* result */, i8 p3403 /* lhs */, i1 p3404 /* width */, i1 p3405 /* op */) {
	*(i1*)(intptr_t)(ws+3352) = p3405; /*op */
	*(i1*)(intptr_t)(ws+3353) = p3404; /*width */
	*(i8*)(intptr_t)(ws+3360) = p3403; /*lhs */

	i8 v3406 = (i8)(intptr_t)(ws+3360);
	i8 v3407 = *(i8*)(intptr_t)v3406;
	i8 v3408 = v3407+(+40);
	i1 v3409 = *(i1*)(intptr_t)v3408;
	i1 v3410 = (i1)+45;
	if (v3409==v3410) goto c02_0268; else goto c02_0269;

c02_0268:;

	i8 v3411 = (i8)(intptr_t)(ws+3352);
	i1 v3412 = *(i1*)(intptr_t)v3411;
	i8 v3413 = (i8)(intptr_t)(ws+3360);
	i8 v3414 = *(i8*)(intptr_t)v3413;
	i8 v3415 = (i8)(intptr_t)(f169_FoldConstant1);
	i4 v3416;

	((void(*)(i4* /* result */, i8 /* lhsp */, i1 /* op */))(intptr_t)v3415)(&v3416, v3414, v3412);
	i8 v3417 = (i8)(intptr_t)(ws+3360);
	i8 v3418 = *(i8*)(intptr_t)v3417;
	*(i4*)(intptr_t)v3418 = v3416;

	i8 v3419 = (i8)(intptr_t)(ws+3360);
	i8 v3420 = *(i8*)(intptr_t)v3419;
	i8 v3421 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v3421 = v3420;

	goto c02_0265;

c02_0269:;

	i8 v3422 = (i8)(intptr_t)(ws+3352);
	i1 v3423 = *(i1*)(intptr_t)v3422;
	i8 v3424 = (i8)(intptr_t)(ws+3353);
	i1 v3425 = *(i1*)(intptr_t)v3424;
	i8 v3426 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v3427;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v3426)(&v3427, v3425);
	i1 v3428 = v3423+v3427;
	i8 v3429 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3430;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3429)(&v3430, v3428);
	i8 v3431 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v3431 = v3430;

	i8 v3432 = (i8)(intptr_t)(ws+3360);
	i8 v3433 = *(i8*)(intptr_t)v3432;
	i8 v3434 = (i8)(intptr_t)(ws+3368);
	i8 v3435 = *(i8*)(intptr_t)v3434;
	i8 v3436 = v3435+(+24);
	*(i8*)(intptr_t)v3436 = v3433;

c02_0265:;

endsub:;
	*p3402 = *(i8*)(intptr_t)(ws+3368);
}

// GetPowerOfTwo workspace at ws+3424 length ws+5
void f172_GetPowerOfTwo(i1* p3437 /* exp */, i4 p3438 /* value */) {
	*(i4*)(intptr_t)(ws+3424) = p3438; /*value */

	i1 v3439 = (i1)+0;
	i8 v3440 = (i8)(intptr_t)(ws+3428);
	*(i1*)(intptr_t)v3440 = v3439;

	i4 v3441 = (i4)+0;
	i8 v3442 = (i8)(intptr_t)(ws+3424);
	i4 v3443 = *(i4*)(intptr_t)v3442;
	if ((s4)v3441<(s4)v3443) goto c02_0271; else goto c02_0270;

c02_0271:;

	i8 v3444 = (i8)(intptr_t)(ws+3424);
	i4 v3445 = *(i4*)(intptr_t)v3444;
	i8 v3446 = (i8)(intptr_t)(ws+3424);
	i4 v3447 = *(i4*)(intptr_t)v3446;
	i4 v3448 = v3447+(-1);
	i4 v3449 = v3445&v3448;
	i4 v3450 = (i4)+0;
	if (v3449==v3450) goto c02_026f; else goto c02_0270;

c02_026f:;

c02_0274:;

	i8 v3451 = (i8)(intptr_t)(ws+3424);
	i4 v3452 = *(i4*)(intptr_t)v3451;
	i4 v3453 = (i4)+0;
	if (v3452==v3453) goto c02_0277; else goto c02_0276;

c02_0276:;

	i8 v3454 = (i8)(intptr_t)(ws+3428);
	i1 v3455 = *(i1*)(intptr_t)v3454;
	i1 v3456 = v3455+(+1);
	i8 v3457 = (i8)(intptr_t)(ws+3428);
	*(i1*)(intptr_t)v3457 = v3456;

	i8 v3458 = (i8)(intptr_t)(ws+3424);
	i4 v3459 = *(i4*)(intptr_t)v3458;
	i1 v3460 = (i1)+1;
	i4 v3461 = ((s4)v3459)>>v3460;
	i8 v3462 = (i8)(intptr_t)(ws+3424);
	*(i4*)(intptr_t)v3462 = v3461;

	goto c02_0274;

c02_0277:;

c02_0270:;

c02_026a:;

endsub:;
	*p3437 = *(i1*)(intptr_t)(ws+3428);
}
	void f170_FoldConstant2(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */);
	void f118_MidConstant(i8* /* m */, i4 /* value */);
	void f63_Discard(i8 /* node */);
	void f63_Discard(i8 /* node */);
	void f172_GetPowerOfTwo(i1* /* exp */, i4 /* value */);
	void f63_Discard(i8 /* node */);
	void f118_MidConstant(i8* /* m */, i4 /* value */);
	void f63_Discard(i8 /* node */);
	void f63_Discard(i8 /* node */);
	void f63_Discard(i8 /* node */);
	void f63_Discard(i8 /* node */);
	void f170_FoldConstant2(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */);
	void f63_Discard(i8 /* node */);
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidC2Op workspace at ws+3376 length ws+48
void f173_MidC2Op(i8* p3463 /* result */, i8 p3464 /* rhs */, i8 p3465 /* lhs */, i1 p3466 /* width */, i1 p3467 /* op */) {
	*(i1*)(intptr_t)(ws+3376) = p3467; /*op */
	*(i1*)(intptr_t)(ws+3377) = p3466; /*width */
	*(i8*)(intptr_t)(ws+3384) = p3465; /*lhs */
	*(i8*)(intptr_t)(ws+3392) = p3464; /*rhs */

	i8 v3468 = (i8)(intptr_t)(ws+3376);
	i1 v3469 = *(i1*)(intptr_t)v3468;
	i1 v3470 = (i1)+136;
	if (v3469==v3470) goto c02_027f; else goto c02_027e;

c02_027f:;

	i8 v3471 = (i8)(intptr_t)(ws+3392);
	i8 v3472 = *(i8*)(intptr_t)v3471;
	i8 v3473 = v3472+(+40);
	i1 v3474 = *(i1*)(intptr_t)v3473;
	i1 v3475 = (i1)+45;
	if (v3474==v3475) goto c02_027d; else goto c02_027e;

c02_027d:;

	i8 v3476 = (i8)(intptr_t)(ws+3392);
	i8 v3477 = *(i8*)(intptr_t)v3476;
	i4 v3478 = *(i4*)(intptr_t)v3477;
	i4 v3479 = -v3478;
	i8 v3480 = (i8)(intptr_t)(ws+3392);
	i8 v3481 = *(i8*)(intptr_t)v3480;
	*(i4*)(intptr_t)v3481 = v3479;

	i1 v3482 = (i1)+161;
	i8 v3483 = (i8)(intptr_t)(ws+3376);
	*(i1*)(intptr_t)v3483 = v3482;

c02_027e:;

c02_0278:;

	i8 v3484 = (i8)(intptr_t)(ws+3376);
	i1 v3485 = *(i1*)(intptr_t)v3484;
	i1 v3486 = (i1)+161;
	if (v3485<v3486) goto c02_0284; else goto c02_0283;

c02_0283:;

	i8 v3487 = (i8)(intptr_t)(ws+3384);
	i8 v3488 = *(i8*)(intptr_t)v3487;
	i8 v3489 = v3488+(+40);
	i1 v3490 = *(i1*)(intptr_t)v3489;
	i1 v3491 = (i1)+45;
	if (v3490==v3491) goto c02_0288; else goto c02_0289;

c02_0288:;

	i8 v3492 = (i8)(intptr_t)(ws+3384);
	i8 v3493 = *(i8*)(intptr_t)v3492;
	i8 v3494 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v3494 = v3493;

	i8 v3495 = (i8)(intptr_t)(ws+3392);
	i8 v3496 = *(i8*)(intptr_t)v3495;
	i8 v3497 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v3497 = v3496;

	i8 v3498 = (i8)(intptr_t)(ws+3408);
	i8 v3499 = *(i8*)(intptr_t)v3498;
	i8 v3500 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v3500 = v3499;

c02_0289:;

c02_0285:;

	i8 v3501 = (i8)(intptr_t)(ws+3392);
	i8 v3502 = *(i8*)(intptr_t)v3501;
	i8 v3503 = v3502+(+40);
	i1 v3504 = *(i1*)(intptr_t)v3503;
	i1 v3505 = (i1)+45;
	if (v3504==v3505) goto c02_0297; else goto c02_0294;

c02_0297:;

	i8 v3506 = (i8)(intptr_t)(ws+3384);
	i8 v3507 = *(i8*)(intptr_t)v3506;
	i8 v3508 = v3507+(+40);
	i1 v3509 = *(i1*)(intptr_t)v3508;
	i8 v3510 = (i8)(intptr_t)(ws+3376);
	i1 v3511 = *(i1*)(intptr_t)v3510;
	if (v3509<v3511) goto c02_0294; else goto c02_0296;

c02_0296:;

	i8 v3512 = (i8)(intptr_t)(ws+3376);
	i1 v3513 = *(i1*)(intptr_t)v3512;
	i1 v3514 = v3513+(+4);
	i8 v3515 = (i8)(intptr_t)(ws+3384);
	i8 v3516 = *(i8*)(intptr_t)v3515;
	i8 v3517 = v3516+(+40);
	i1 v3518 = *(i1*)(intptr_t)v3517;
	if (v3514<v3518) goto c02_0294; else goto c02_0295;

c02_0295:;

	i8 v3519 = (i8)(intptr_t)(ws+3384);
	i8 v3520 = *(i8*)(intptr_t)v3519;
	i8 v3521 = v3520+(+32);
	i8 v3522 = *(i8*)(intptr_t)v3521;
	i8 v3523 = v3522+(+40);
	i1 v3524 = *(i1*)(intptr_t)v3523;
	i1 v3525 = (i1)+45;
	if (v3524==v3525) goto c02_0293; else goto c02_0294;

c02_0293:;

	i8 v3526 = (i8)(intptr_t)(ws+3376);
	i1 v3527 = *(i1*)(intptr_t)v3526;
	i8 v3528 = (i8)(intptr_t)(ws+3384);
	i8 v3529 = *(i8*)(intptr_t)v3528;
	i8 v3530 = v3529+(+32);
	i8 v3531 = *(i8*)(intptr_t)v3530;
	i8 v3532 = (i8)(intptr_t)(ws+3392);
	i8 v3533 = *(i8*)(intptr_t)v3532;
	i8 v3534 = (i8)(intptr_t)(f170_FoldConstant2);
	i4 v3535;

	((void(*)(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */))(intptr_t)v3534)(&v3535, v3533, v3531, v3527);
	i8 v3536 = (i8)(intptr_t)(f118_MidConstant);
	i8 v3537;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v3536)(&v3537, v3535);
	i8 v3538 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v3538 = v3537;

	i8 v3539 = (i8)(intptr_t)(ws+3392);
	i8 v3540 = *(i8*)(intptr_t)v3539;
	i8 v3541 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3541)(v3540);

	i8 v3542 = (i8)(intptr_t)(ws+3408);
	i8 v3543 = *(i8*)(intptr_t)v3542;
	i8 v3544 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v3544 = v3543;

	i8 v3545 = (i8)(intptr_t)(ws+3384);
	i8 v3546 = *(i8*)(intptr_t)v3545;
	i8 v3547 = v3546+(+24);
	i8 v3548 = *(i8*)(intptr_t)v3547;
	i8 v3549 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v3549 = v3548;

	i8 v3550 = (i8)+0;
	i8 v3551 = (i8)(intptr_t)(ws+3384);
	i8 v3552 = *(i8*)(intptr_t)v3551;
	i8 v3553 = v3552+(+24);
	*(i8*)(intptr_t)v3553 = v3550;

	i8 v3554 = (i8)(intptr_t)(ws+3384);
	i8 v3555 = *(i8*)(intptr_t)v3554;
	i8 v3556 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3556)(v3555);

	i8 v3557 = (i8)(intptr_t)(ws+3408);
	i8 v3558 = *(i8*)(intptr_t)v3557;
	i8 v3559 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v3559 = v3558;

c02_0294:;

c02_028a:;

c02_0284:;

c02_0280:;

	i8 v3560 = (i8)(intptr_t)(ws+3384);
	i8 v3561 = *(i8*)(intptr_t)v3560;
	i8 v3562 = v3561+(+40);
	i1 v3563 = *(i1*)(intptr_t)v3562;
	i1 v3564 = (i1)+45;
	if (v3563==v3564) goto c02_029e; else goto c02_029f;

c02_029f:;

	i8 v3565 = (i8)(intptr_t)(ws+3392);
	i8 v3566 = *(i8*)(intptr_t)v3565;
	i8 v3567 = v3566+(+40);
	i1 v3568 = *(i1*)(intptr_t)v3567;
	i1 v3569 = (i1)+45;
	if (v3568==v3569) goto c02_029d; else goto c02_029e;

c02_029d:;

	i8 v3570 = (i8)(intptr_t)(ws+3376);
	i1 v3571 = *(i1*)(intptr_t)v3570;
	i1 v3572 = (i1)+166;
	if (v3571==v3572) goto c02_02a7; else goto c02_02aa;

c02_02aa:;

	i8 v3573 = (i8)(intptr_t)(ws+3376);
	i1 v3574 = *(i1*)(intptr_t)v3573;
	i1 v3575 = (i1)+146;
	if (v3574==v3575) goto c02_02a7; else goto c02_02a9;

c02_02a9:;

	i8 v3576 = (i8)(intptr_t)(ws+3376);
	i1 v3577 = *(i1*)(intptr_t)v3576;
	i1 v3578 = (i1)+141;
	if (v3577==v3578) goto c02_02a7; else goto c02_02a8;

c02_02a7:;

	i8 v3579 = (i8)(intptr_t)(ws+3392);
	i8 v3580 = *(i8*)(intptr_t)v3579;
	i4 v3581 = *(i4*)(intptr_t)v3580;
	i8 v3582 = (i8)(intptr_t)(ws+3416);
	*(i4*)(intptr_t)v3582 = v3581;

	i8 v3583 = (i8)(intptr_t)(ws+3416);
	i4 v3584 = *(i4*)(intptr_t)v3583;
	i8 v3585 = (i8)(intptr_t)(f172_GetPowerOfTwo);
	i1 v3586;

	((void(*)(i1* /* exp */, i4 /* value */))(intptr_t)v3585)(&v3586, v3584);
	i8 v3587 = (i8)(intptr_t)(ws+3420);
	*(i1*)(intptr_t)v3587 = v3586;

	i8 v3588 = (i8)(intptr_t)(ws+3420);
	i1 v3589 = *(i1*)(intptr_t)v3588;
	i1 v3590 = (i1)+0;
	if (v3589==v3590) goto c02_02af; else goto c02_02ae;

c02_02ae:;

	i8 v3591 = (i8)(intptr_t)(ws+3392);
	i8 v3592 = *(i8*)(intptr_t)v3591;
	i8 v3593 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3593)(v3592);

	i8 v3594 = (i8)(intptr_t)(ws+3420);
	i1 v3595 = *(i1*)(intptr_t)v3594;
	i1 v3596 = v3595+(-1);
	i4 v3597 = v3596;
	i8 v3598 = (i8)(intptr_t)(f118_MidConstant);
	i8 v3599;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v3598)(&v3599, v3597);
	i8 v3600 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v3600 = v3599;

	i8 v3601 = (i8)(intptr_t)(ws+3376);
	i1 v3602 = *(i1*)(intptr_t)v3601;

	if (v3602 != +166) goto c02_02b1;

	i1 v3603 = (i1)+121;
	i8 v3604 = (i8)(intptr_t)(ws+3376);
	*(i1*)(intptr_t)v3604 = v3603;

	goto c02_02b0;

c02_02b1:;

	if (v3602 != +146) goto c02_02b2;

	i1 v3605 = (i1)+131;
	i8 v3606 = (i8)(intptr_t)(ws+3376);
	*(i1*)(intptr_t)v3606 = v3605;

	goto c02_02b0;

c02_02b2:;

	if (v3602 != +141) goto c02_02b3;

	i1 v3607 = (i1)+126;
	i8 v3608 = (i8)(intptr_t)(ws+3376);
	*(i1*)(intptr_t)v3608 = v3607;

c02_02b3:;

c02_02b0:;


c02_02af:;

c02_02ab:;

c02_02a8:;

c02_02a0:;

	i8 v3609 = (i8)(intptr_t)(ws+3376);
	i1 v3610 = *(i1*)(intptr_t)v3609;
	i1 v3611 = (i1)+121;
	if (v3610==v3611) goto c02_02bb; else goto c02_02be;

c02_02be:;

	i8 v3612 = (i8)(intptr_t)(ws+3376);
	i1 v3613 = *(i1*)(intptr_t)v3612;
	i1 v3614 = (i1)+126;
	if (v3613==v3614) goto c02_02bb; else goto c02_02bd;

c02_02bd:;

	i8 v3615 = (i8)(intptr_t)(ws+3376);
	i1 v3616 = *(i1*)(intptr_t)v3615;
	i1 v3617 = (i1)+131;
	if (v3616==v3617) goto c02_02bb; else goto c02_02bc;

c02_02bb:;

	i8 v3618 = (i8)(intptr_t)(ws+3392);
	i8 v3619 = *(i8*)(intptr_t)v3618;
	i4 v3620 = *(i4*)(intptr_t)v3619;
	i4 v3621 = (i4)+0;
	if (v3620==v3621) goto c02_02c2; else goto c02_02c3;

c02_02c2:;

	i8 v3622 = (i8)(intptr_t)(ws+3392);
	i8 v3623 = *(i8*)(intptr_t)v3622;
	i8 v3624 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3624)(v3623);

	i8 v3625 = (i8)(intptr_t)(ws+3384);
	i8 v3626 = *(i8*)(intptr_t)v3625;
	i8 v3627 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3627 = v3626;

	goto endsub;

c02_02c3:;

c02_02bf:;

c02_02bc:;

c02_02b4:;

	i8 v3628 = (i8)(intptr_t)(ws+3376);
	i1 v3629 = *(i1*)(intptr_t)v3628;
	i1 v3630 = (i1)+161;
	if (v3629==v3630) goto c02_02c9; else goto c02_02cb;

c02_02cb:;

	i8 v3631 = (i8)(intptr_t)(ws+3376);
	i1 v3632 = *(i1*)(intptr_t)v3631;
	i1 v3633 = (i1)+136;
	if (v3632==v3633) goto c02_02c9; else goto c02_02ca;

c02_02c9:;

	i8 v3634 = (i8)(intptr_t)(ws+3392);
	i8 v3635 = *(i8*)(intptr_t)v3634;
	i4 v3636 = *(i4*)(intptr_t)v3635;
	i4 v3637 = (i4)+0;
	if (v3636==v3637) goto c02_02cf; else goto c02_02d0;

c02_02cf:;

	i8 v3638 = (i8)(intptr_t)(ws+3392);
	i8 v3639 = *(i8*)(intptr_t)v3638;
	i8 v3640 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3640)(v3639);

	i8 v3641 = (i8)(intptr_t)(ws+3384);
	i8 v3642 = *(i8*)(intptr_t)v3641;
	i8 v3643 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3643 = v3642;

	goto endsub;

c02_02d0:;

c02_02cc:;

	i8 v3644 = (i8)(intptr_t)(ws+3384);
	i8 v3645 = *(i8*)(intptr_t)v3644;
	i8 v3646 = v3645+(+40);
	i1 v3647 = *(i1*)(intptr_t)v3646;
	i1 v3648 = (i1)+47;
	if (v3647==v3648) goto c02_02d4; else goto c02_02d5;

c02_02d4:;

	i8 v3649 = (i8)(intptr_t)(ws+3392);
	i8 v3650 = *(i8*)(intptr_t)v3649;
	i4 v3651 = *(i4*)(intptr_t)v3650;
	i2 v3652 = (s2)(s4)v3651;
	i8 v3653 = (i8)(intptr_t)(ws+3422);
	*(i2*)(intptr_t)v3653 = v3652;

	i8 v3654 = (i8)(intptr_t)(ws+3376);
	i1 v3655 = *(i1*)(intptr_t)v3654;

	if (v3655 != +161) goto c02_02d7;

	i8 v3656 = (i8)(intptr_t)(ws+3384);
	i8 v3657 = *(i8*)(intptr_t)v3656;
	i8 v3658 = v3657+(+8);
	i2 v3659 = *(i2*)(intptr_t)v3658;
	i8 v3660 = (i8)(intptr_t)(ws+3422);
	i2 v3661 = *(i2*)(intptr_t)v3660;
	i2 v3662 = v3659+v3661;
	i8 v3663 = (i8)(intptr_t)(ws+3384);
	i8 v3664 = *(i8*)(intptr_t)v3663;
	i8 v3665 = v3664+(+8);
	*(i2*)(intptr_t)v3665 = v3662;

	i8 v3666 = (i8)(intptr_t)(ws+3392);
	i8 v3667 = *(i8*)(intptr_t)v3666;
	i8 v3668 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3668)(v3667);

	i8 v3669 = (i8)(intptr_t)(ws+3384);
	i8 v3670 = *(i8*)(intptr_t)v3669;
	i8 v3671 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3671 = v3670;

	goto endsub;

c02_02d7:;

	if (v3655 != +136) goto c02_02d8;

	i8 v3672 = (i8)(intptr_t)(ws+3384);
	i8 v3673 = *(i8*)(intptr_t)v3672;
	i8 v3674 = v3673+(+8);
	i2 v3675 = *(i2*)(intptr_t)v3674;
	i8 v3676 = (i8)(intptr_t)(ws+3422);
	i2 v3677 = *(i2*)(intptr_t)v3676;
	i2 v3678 = v3675-v3677;
	i8 v3679 = (i8)(intptr_t)(ws+3384);
	i8 v3680 = *(i8*)(intptr_t)v3679;
	i8 v3681 = v3680+(+8);
	*(i2*)(intptr_t)v3681 = v3678;

	i8 v3682 = (i8)(intptr_t)(ws+3392);
	i8 v3683 = *(i8*)(intptr_t)v3682;
	i8 v3684 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3684)(v3683);

	i8 v3685 = (i8)(intptr_t)(ws+3384);
	i8 v3686 = *(i8*)(intptr_t)v3685;
	i8 v3687 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3687 = v3686;

	goto endsub;

c02_02d8:;

c02_02d6:;


c02_02d5:;

c02_02d1:;

c02_02ca:;

c02_02c4:;

c02_029e:;

c02_0298:;

	i8 v3688 = (i8)(intptr_t)(ws+3384);
	i8 v3689 = *(i8*)(intptr_t)v3688;
	i8 v3690 = v3689+(+40);
	i1 v3691 = *(i1*)(intptr_t)v3690;
	i1 v3692 = (i1)+45;
	if (v3691==v3692) goto c02_02e0; else goto c02_02df;

c02_02e0:;

	i8 v3693 = (i8)(intptr_t)(ws+3392);
	i8 v3694 = *(i8*)(intptr_t)v3693;
	i8 v3695 = v3694+(+40);
	i1 v3696 = *(i1*)(intptr_t)v3695;
	i1 v3697 = (i1)+45;
	if (v3696==v3697) goto c02_02de; else goto c02_02df;

c02_02de:;

	i8 v3698 = (i8)(intptr_t)(ws+3376);
	i1 v3699 = *(i1*)(intptr_t)v3698;
	i8 v3700 = (i8)(intptr_t)(ws+3384);
	i8 v3701 = *(i8*)(intptr_t)v3700;
	i8 v3702 = (i8)(intptr_t)(ws+3392);
	i8 v3703 = *(i8*)(intptr_t)v3702;
	i8 v3704 = (i8)(intptr_t)(f170_FoldConstant2);
	i4 v3705;

	((void(*)(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */))(intptr_t)v3704)(&v3705, v3703, v3701, v3699);
	i8 v3706 = (i8)(intptr_t)(ws+3384);
	i8 v3707 = *(i8*)(intptr_t)v3706;
	*(i4*)(intptr_t)v3707 = v3705;

	i8 v3708 = (i8)(intptr_t)(ws+3392);
	i8 v3709 = *(i8*)(intptr_t)v3708;
	i8 v3710 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3710)(v3709);

	i8 v3711 = (i8)(intptr_t)(ws+3384);
	i8 v3712 = *(i8*)(intptr_t)v3711;
	i8 v3713 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3713 = v3712;

	goto endsub;

c02_02df:;

c02_02d9:;

	i8 v3714 = (i8)(intptr_t)(ws+3376);
	i1 v3715 = *(i1*)(intptr_t)v3714;
	i8 v3716 = (i8)(intptr_t)(ws+3377);
	i1 v3717 = *(i1*)(intptr_t)v3716;
	i8 v3718 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v3719;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v3718)(&v3719, v3717);
	i1 v3720 = v3715+v3719;
	i8 v3721 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3722;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3721)(&v3722, v3720);
	i8 v3723 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3723 = v3722;

	i8 v3724 = (i8)(intptr_t)(ws+3384);
	i8 v3725 = *(i8*)(intptr_t)v3724;
	i8 v3726 = (i8)(intptr_t)(ws+3400);
	i8 v3727 = *(i8*)(intptr_t)v3726;
	i8 v3728 = v3727+(+24);
	*(i8*)(intptr_t)v3728 = v3725;

	i8 v3729 = (i8)(intptr_t)(ws+3392);
	i8 v3730 = *(i8*)(intptr_t)v3729;
	i8 v3731 = (i8)(intptr_t)(ws+3400);
	i8 v3732 = *(i8*)(intptr_t)v3731;
	i8 v3733 = v3732+(+32);
	*(i8*)(intptr_t)v3733 = v3730;

endsub:;
	*p3463 = *(i8*)(intptr_t)(ws+3400);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidCCast workspace at ws+3376 length ws+34
void f174_MidCCast(i8* p3734 /* result */, i1 p3735 /* issigned */, i8 p3736 /* lhs */, i1 p3737 /* width */) {
	*(i1*)(intptr_t)(ws+3376) = p3737; /*width */
	*(i8*)(intptr_t)(ws+3384) = p3736; /*lhs */
	*(i1*)(intptr_t)(ws+3392) = p3735; /*issigned */

	i8 v3738 = (i8)(intptr_t)(ws+3384);
	i8 v3739 = *(i8*)(intptr_t)v3738;
	i8 v3740 = v3739+(+40);
	i1 v3741 = *(i1*)(intptr_t)v3740;
	i1 v3742 = (i1)+45;
	if (v3741==v3742) goto c02_02e4; else goto c02_02e5;

c02_02e4:;

	i8 v3743 = (i8)(intptr_t)(ws+3384);
	i8 v3744 = *(i8*)(intptr_t)v3743;
	i8 v3745 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3745 = v3744;

	goto endsub;

c02_02e5:;

c02_02e1:;

	i8 v3746 = (i8)(intptr_t)(ws+3384);
	i8 v3747 = *(i8*)(intptr_t)v3746;
	i8 v3748 = v3747+(+16);
	i8 v3749 = *(i8*)(intptr_t)v3748;
	i8 v3750 = v3749+(+48);
	i2 v3751 = *(i2*)(intptr_t)v3750;
	i1 v3752 = v3751;
	i8 v3753 = (i8)(intptr_t)(ws+3408);
	*(i1*)(intptr_t)v3753 = v3752;

	i8 v3754 = (i8)(intptr_t)(ws+3408);
	i1 v3755 = *(i1*)(intptr_t)v3754;
	i8 v3756 = (i8)(intptr_t)(ws+3376);
	i1 v3757 = *(i1*)(intptr_t)v3756;
	if (v3755==v3757) goto c02_02e9; else goto c02_02ea;

c02_02e9:;

	i8 v3758 = (i8)(intptr_t)(ws+3384);
	i8 v3759 = *(i8*)(intptr_t)v3758;
	i8 v3760 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3760 = v3759;

	goto c02_02e6;

c02_02ea:;

	i8 v3761 = (i8)(intptr_t)(ws+3408);
	i1 v3762 = *(i1*)(intptr_t)v3761;

	if (v3762 != +1) goto c02_02ec;

	i1 v3763 = (i1)+91;
	i8 v3764 = (i8)(intptr_t)(ws+3409);
	*(i1*)(intptr_t)v3764 = v3763;

	goto c02_02eb;

c02_02ec:;

	if (v3762 != +2) goto c02_02ed;

	i1 v3765 = (i1)+96;
	i8 v3766 = (i8)(intptr_t)(ws+3409);
	*(i1*)(intptr_t)v3766 = v3765;

	goto c02_02eb;

c02_02ed:;

	if (v3762 != +4) goto c02_02ee;

	i1 v3767 = (i1)+101;
	i8 v3768 = (i8)(intptr_t)(ws+3409);
	*(i1*)(intptr_t)v3768 = v3767;

	goto c02_02eb;

c02_02ee:;

	if (v3762 != +8) goto c02_02ef;

	i1 v3769 = (i1)+106;
	i8 v3770 = (i8)(intptr_t)(ws+3409);
	*(i1*)(intptr_t)v3770 = v3769;

c02_02ef:;

c02_02eb:;


	i8 v3771 = (i8)(intptr_t)(ws+3409);
	i1 v3772 = *(i1*)(intptr_t)v3771;
	i8 v3773 = (i8)(intptr_t)(ws+3376);
	i1 v3774 = *(i1*)(intptr_t)v3773;
	i8 v3775 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v3776;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v3775)(&v3776, v3774);
	i1 v3777 = v3772+v3776;
	i8 v3778 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3779;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3778)(&v3779, v3777);
	i8 v3780 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3780 = v3779;

	i8 v3781 = (i8)(intptr_t)(ws+3384);
	i8 v3782 = *(i8*)(intptr_t)v3781;
	i8 v3783 = (i8)(intptr_t)(ws+3400);
	i8 v3784 = *(i8*)(intptr_t)v3783;
	i8 v3785 = v3784+(+24);
	*(i8*)(intptr_t)v3785 = v3782;

	i8 v3786 = (i8)(intptr_t)(ws+3392);
	i1 v3787 = *(i1*)(intptr_t)v3786;
	i8 v3788 = (i8)(intptr_t)(ws+3400);
	i8 v3789 = *(i8*)(intptr_t)v3788;
	*(i1*)(intptr_t)v3789 = v3787;

c02_02e6:;

endsub:;
	*p3734 = *(i8*)(intptr_t)(ws+3400);
}
	void f47_FCBPutChar(i1 /* b */, i8 /* fcb */);

// E_b8 workspace at ws+3472 length ws+1
void f175_E_b8(i1 p3790 /* byte */) {
	*(i1*)(intptr_t)(ws+3472) = p3790; /*byte */

	i8 v3791 = (i8)(intptr_t)(ws+936);
	i8 v3792 = (i8)(intptr_t)(ws+3472);
	i1 v3793 = *(i1*)(intptr_t)v3792;
	i8 v3794 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(i1 /* b */, i8 /* fcb */))(intptr_t)v3794)(v3793, v3791);

endsub:;
}
	void f175_E_b8(i1 /* byte */);
	void f175_E_b8(i1 /* byte */);

// E_b16 workspace at ws+3456 length ws+2
void f176_E_b16(i2 p3795 /* word */) {
	*(i2*)(intptr_t)(ws+3456) = p3795; /*word */

	i8 v3796 = (i8)(intptr_t)(ws+3456);
	i2 v3797 = *(i2*)(intptr_t)v3796;
	i1 v3798 = v3797;
	i8 v3799 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3799)(v3798);

	i8 v3800 = (i8)(intptr_t)(ws+3456);
	i2 v3801 = *(i2*)(intptr_t)v3800;
	i1 v3802 = (i1)+8;
	i2 v3803 = ((i2)v3801)>>v3802;
	i1 v3804 = v3803;
	i8 v3805 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3805)(v3804);

endsub:;
}
	void f176_E_b16(i2 /* word */);
	void f176_E_b16(i2 /* word */);

// E_b32 workspace at ws+3448 length ws+4
void f177_E_b32(i4 p3806 /* quad */) {
	*(i4*)(intptr_t)(ws+3448) = p3806; /*quad */

	i8 v3807 = (i8)(intptr_t)(ws+3448);
	i4 v3808 = *(i4*)(intptr_t)v3807;
	i2 v3809 = v3808;
	i8 v3810 = (i8)(intptr_t)(f176_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3810)(v3809);

	i8 v3811 = (i8)(intptr_t)(ws+3448);
	i4 v3812 = *(i4*)(intptr_t)v3811;
	i1 v3813 = (i1)+16;
	i4 v3814 = ((i4)v3812)>>v3813;
	i2 v3815 = v3814;
	i8 v3816 = (i8)(intptr_t)(f176_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3816)(v3815);

endsub:;
}
	void f176_E_b16(i2 /* word */);

// E_bsize workspace at ws+3448 length ws+2
void f178_E_bsize(i2 p3817 /* size */) {
	*(i2*)(intptr_t)(ws+3448) = p3817; /*size */

	i8 v3818 = (i8)(intptr_t)(ws+3448);
	i2 v3819 = *(i2*)(intptr_t)v3818;
	i8 v3820 = (i8)(intptr_t)(f176_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3820)(v3819);

endsub:;
}
	void f175_E_b8(i1 /* byte */);

// E workspace at ws+3456 length ws+9
void f185_E(i8 p3833 /* text */) {
	*(i8*)(intptr_t)(ws+3456) = p3833; /*text */

c02_02f0:;

	i8 v3834 = (i8)(intptr_t)(ws+3456);
	i8 v3835 = *(i8*)(intptr_t)v3834;
	i1 v3836 = *(i1*)(intptr_t)v3835;
	i8 v3837 = (i8)(intptr_t)(ws+3464);
	*(i1*)(intptr_t)v3837 = v3836;

	i8 v3838 = (i8)(intptr_t)(ws+3456);
	i8 v3839 = *(i8*)(intptr_t)v3838;
	i8 v3840 = v3839+(+1);
	i8 v3841 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v3841 = v3840;

	i8 v3842 = (i8)(intptr_t)(ws+3464);
	i1 v3843 = *(i1*)(intptr_t)v3842;
	i1 v3844 = (i1)+0;
	if (v3843==v3844) goto c02_02f5; else goto c02_02f6;

c02_02f5:;

	goto c02_02f1;

c02_02f6:;

c02_02f2:;

	i8 v3845 = (i8)(intptr_t)(ws+3464);
	i1 v3846 = *(i1*)(intptr_t)v3845;
	i8 v3847 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3847)(v3846);

	goto c02_02f0;

c02_02f1:;

endsub:;
}
	void f29_StrLen(i8* /* size */, i8 /* s */);
	void f175_E_b8(i1 /* byte */);
	void f185_E(i8 /* text */);

// E_countedstring workspace at ws+3448 length ws+8
void f186_E_countedstring(i8 p3848 /* text */) {
	*(i8*)(intptr_t)(ws+3448) = p3848; /*text */

	i8 v3849 = (i8)(intptr_t)(ws+3448);
	i8 v3850 = *(i8*)(intptr_t)v3849;
	i8 v3851 = (i8)(intptr_t)(f29_StrLen);
	i8 v3852;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v3851)(&v3852, v3850);
	i1 v3853 = v3852;
	i8 v3854 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3854)(v3853);

	i8 v3855 = (i8)(intptr_t)(ws+3448);
	i8 v3856 = *(i8*)(intptr_t)v3855;
	i8 v3857 = (i8)(intptr_t)(f185_E);

	((void(*)(i8 /* text */))(intptr_t)v3857)(v3856);

endsub:;
}
	void f54_FCBOpenOut(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
const i1 c02_s00f8[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f76_SimpleError(i8 /* message */);

// EmitterOpenfile workspace at ws+3208 length ws+8
void f197_EmitterOpenfile(i8 p3984 /* filename */) {
	*(i8*)(intptr_t)(ws+3208) = p3984; /*filename */

	i8 v3985 = (i8)(intptr_t)(ws+936);
	i8 v3986 = (i8)(intptr_t)(ws+3208);
	i8 v3987 = *(i8*)(intptr_t)v3986;
	i8 v3988 = (i8)(intptr_t)(f54_FCBOpenOut);
	i1 v3989;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v3988)(&v3989, v3987, v3985);
	i1 v3990 = (i1)+0;
	if (v3989==v3990) goto c02_0317; else goto c02_0316;

c02_0316:;

	i8 v3991 = (i8)(intptr_t)c02_s00f8;
	i8 v3992 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v3992)(v3991);

c02_0317:;

c02_0313:;

endsub:;
}
	void f175_E_b8(i1 /* byte */);
	void f55_FCBClose(i1* /* errno */, i8 /* fcb */);
const i1 c02_s00f9[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f76_SimpleError(i8 /* message */);

// EmitterClosefile workspace at ws+3208 length ws+0
void f198_EmitterClosefile(void) {

	i1 v3993 = (i1)+69;
	i8 v3994 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3994)(v3993);

	i8 v3995 = (i8)(intptr_t)(ws+936);
	i8 v3996 = (i8)(intptr_t)(f55_FCBClose);
	i1 v3997;

	((void(*)(i1* /* errno */, i8 /* fcb */))(intptr_t)v3996)(&v3997, v3995);
	i1 v3998 = (i1)+0;
	if (v3997==v3998) goto c02_031c; else goto c02_031b;

c02_031b:;

	i8 v3999 = (i8)(intptr_t)c02_s00f9;
	i8 v4000 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v4000)(v3999);

c02_031c:;

c02_0318:;

endsub:;
}
	void f175_E_b8(i1 /* byte */);
	void f176_E_b16(i2 /* word */);
	void f186_E_countedstring(i8 /* text */);

// EmitterDeclareSubroutine workspace at ws+3336 length ws+8
void f199_EmitterDeclareSubroutine(i8 p4001 /* subr */) {
	*(i8*)(intptr_t)(ws+3336) = p4001; /*subr */

	i1 v4002 = (i1)+78;
	i8 v4003 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4003)(v4002);

	i8 v4004 = (i8)(intptr_t)(ws+3336);
	i8 v4005 = *(i8*)(intptr_t)v4004;
	i8 v4006 = v4005+(+56);
	i2 v4007 = *(i2*)(intptr_t)v4006;
	i8 v4008 = (i8)(intptr_t)(f176_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4008)(v4007);

	i8 v4009 = (i8)(intptr_t)(ws+3336);
	i8 v4010 = *(i8*)(intptr_t)v4009;
	i8 v4011 = *(i8*)(intptr_t)v4010;
	i8 v4012 = v4011+(+8);
	i8 v4013 = *(i8*)(intptr_t)v4012;
	i8 v4014 = (i8)(intptr_t)(f186_E_countedstring);

	((void(*)(i8 /* text */))(intptr_t)v4014)(v4013);

endsub:;
}
	void f175_E_b8(i1 /* byte */);
	void f176_E_b16(i2 /* word */);
	void f186_E_countedstring(i8 /* text */);

// EmitterDeclareExternalSubroutine workspace at ws+3328 length ws+16
void f200_EmitterDeclareExternalSubroutine(i8 p4015 /* external */, i2 p4016 /* id */) {
	*(i2*)(intptr_t)(ws+3328) = p4016; /*id */
	*(i8*)(intptr_t)(ws+3336) = p4015; /*external */

	i1 v4017 = (i1)+88;
	i8 v4018 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4018)(v4017);

	i8 v4019 = (i8)(intptr_t)(ws+3328);
	i2 v4020 = *(i2*)(intptr_t)v4019;
	i8 v4021 = (i8)(intptr_t)(f176_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4021)(v4020);

	i8 v4022 = (i8)(intptr_t)(ws+3336);
	i8 v4023 = *(i8*)(intptr_t)v4022;
	i8 v4024 = (i8)(intptr_t)(f186_E_countedstring);

	((void(*)(i8 /* text */))(intptr_t)v4024)(v4023);

endsub:;
}
	void f175_E_b8(i1 /* byte */);
	void f176_E_b16(i2 /* word */);
	void f176_E_b16(i2 /* word */);

// EmitterReferenceSubroutineById workspace at ws+3400 length ws+4
void f201_EmitterReferenceSubroutineById(i2 p4025 /* used */, i2 p4026 /* user */) {
	*(i2*)(intptr_t)(ws+3400) = p4026; /*user */
	*(i2*)(intptr_t)(ws+3402) = p4025; /*used */

	i1 v4027 = (i1)+82;
	i8 v4028 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4028)(v4027);

	i8 v4029 = (i8)(intptr_t)(ws+3400);
	i2 v4030 = *(i2*)(intptr_t)v4029;
	i8 v4031 = (i8)(intptr_t)(f176_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4031)(v4030);

	i8 v4032 = (i8)(intptr_t)(ws+3402);
	i2 v4033 = *(i2*)(intptr_t)v4032;
	i8 v4034 = (i8)(intptr_t)(f176_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4034)(v4033);

endsub:;
}
	void f201_EmitterReferenceSubroutineById(i2 /* used */, i2 /* user */);

// EmitterReferenceSubroutine workspace at ws+3384 length ws+16
void f202_EmitterReferenceSubroutine(i8 p4035 /* used */, i8 p4036 /* user */) {
	*(i8*)(intptr_t)(ws+3384) = p4036; /*user */
	*(i8*)(intptr_t)(ws+3392) = p4035; /*used */

	i8 v4037 = (i8)(intptr_t)(ws+3384);
	i8 v4038 = *(i8*)(intptr_t)v4037;
	i8 v4039 = v4038+(+56);
	i2 v4040 = *(i2*)(intptr_t)v4039;
	i8 v4041 = (i8)(intptr_t)(ws+3392);
	i8 v4042 = *(i8*)(intptr_t)v4041;
	i8 v4043 = v4042+(+56);
	i2 v4044 = *(i2*)(intptr_t)v4043;
	i8 v4045 = (i8)(intptr_t)(f201_EmitterReferenceSubroutineById);

	((void(*)(i2 /* used */, i2 /* user */))(intptr_t)v4045)(v4044, v4040);

endsub:;
}
	void f175_E_b8(i1 /* byte */);
	void f176_E_b16(i2 /* word */);
	void f175_E_b8(i1 /* byte */);
	void f178_E_bsize(i2 /* size */);

// EmitterDeclareWorkspace workspace at ws+3360 length ws+12
void f203_EmitterDeclareWorkspace(i2 p4046 /* workspace */, i1 p4047 /* wid */, i8 p4048 /* subr */) {
	*(i8*)(intptr_t)(ws+3360) = p4048; /*subr */
	*(i1*)(intptr_t)(ws+3368) = p4047; /*wid */
	*(i2*)(intptr_t)(ws+3370) = p4046; /*workspace */

	i1 v4049 = (i1)+87;
	i8 v4050 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4050)(v4049);

	i8 v4051 = (i8)(intptr_t)(ws+3360);
	i8 v4052 = *(i8*)(intptr_t)v4051;
	i8 v4053 = v4052+(+56);
	i2 v4054 = *(i2*)(intptr_t)v4053;
	i8 v4055 = (i8)(intptr_t)(f176_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4055)(v4054);

	i8 v4056 = (i8)(intptr_t)(ws+3368);
	i1 v4057 = *(i1*)(intptr_t)v4056;
	i8 v4058 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4058)(v4057);

	i8 v4059 = (i8)(intptr_t)(ws+3370);
	i2 v4060 = *(i2*)(intptr_t)v4059;
	i8 v4061 = (i8)(intptr_t)(f178_E_bsize);

	((void(*)(i2 /* size */))(intptr_t)v4061)(v4060);

endsub:;
}
	void f176_E_b16(i2 /* word */);
	void f175_E_b8(i1 /* byte */);
	void f178_E_bsize(i2 /* size */);
	void f186_E_countedstring(i8 /* text */);
	void f175_E_b8(i1 /* byte */);

// EmitParameterList workspace at ws+3344 length ws+8
void f204_EmitParameterList(i8 p4062 /* param */) {
	*(i8*)(intptr_t)(ws+3344) = p4062; /*param */

c02_031f:;

	i8 v4063 = (i8)(intptr_t)(ws+3344);
	i8 v4064 = *(i8*)(intptr_t)v4063;
	i8 v4065 = (i8)+0;
	if (v4064==v4065) goto c02_0322; else goto c02_0321;

c02_0321:;

	i8 v4066 = (i8)(intptr_t)(ws+3344);
	i8 v4067 = *(i8*)(intptr_t)v4066;
	i8 v4068 = *(i8*)(intptr_t)v4067;
	i8 v4069 = v4068+(+8);
	i8 v4070 = *(i8*)(intptr_t)v4069;
	i8 v4071 = v4070+(+56);
	i2 v4072 = *(i2*)(intptr_t)v4071;
	i8 v4073 = (i8)(intptr_t)(f176_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4073)(v4072);

	i8 v4074 = (i8)(intptr_t)(ws+3344);
	i8 v4075 = *(i8*)(intptr_t)v4074;
	i8 v4076 = *(i8*)(intptr_t)v4075;
	i8 v4077 = v4076+(+26);
	i1 v4078 = *(i1*)(intptr_t)v4077;
	i8 v4079 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4079)(v4078);

	i8 v4080 = (i8)(intptr_t)(ws+3344);
	i8 v4081 = *(i8*)(intptr_t)v4080;
	i8 v4082 = *(i8*)(intptr_t)v4081;
	i8 v4083 = v4082+(+24);
	i2 v4084 = *(i2*)(intptr_t)v4083;
	i8 v4085 = (i8)(intptr_t)(f178_E_bsize);

	((void(*)(i2 /* size */))(intptr_t)v4085)(v4084);

	i8 v4086 = (i8)(intptr_t)(ws+3344);
	i8 v4087 = *(i8*)(intptr_t)v4086;
	i8 v4088 = v4087+(+8);
	i8 v4089 = *(i8*)(intptr_t)v4088;
	i8 v4090 = (i8)(intptr_t)(f186_E_countedstring);

	((void(*)(i8 /* text */))(intptr_t)v4090)(v4089);

	i8 v4091 = (i8)(intptr_t)(ws+3344);
	i8 v4092 = *(i8*)(intptr_t)v4091;
	i8 v4093 = *(i8*)(intptr_t)v4092;
	i8 v4094 = *(i8*)(intptr_t)v4093;
	i8 v4095 = v4094+(+48);
	i2 v4096 = *(i2*)(intptr_t)v4095;
	i1 v4097 = v4096;
	i8 v4098 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4098)(v4097);

	i8 v4099 = (i8)(intptr_t)(ws+3344);
	i8 v4100 = *(i8*)(intptr_t)v4099;
	i8 v4101 = *(i8*)(intptr_t)v4100;
	i8 v4102 = v4101+(+16);
	i8 v4103 = *(i8*)(intptr_t)v4102;
	i8 v4104 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v4104 = v4103;

	goto c02_031f;

c02_0322:;

endsub:;
}
	void f175_E_b8(i1 /* byte */);
	void f176_E_b16(i2 /* word */);
	void f175_E_b8(i1 /* byte */);
	void f99_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f204_EmitParameterList(i8 /* param */);

// EmitterEmitInputParameters workspace at ws+3336 length ws+8
void f205_EmitterEmitInputParameters(i8 p4105 /* subr */) {
	*(i8*)(intptr_t)(ws+3336) = p4105; /*subr */

	i1 v4106 = (i1)+73;
	i8 v4107 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4107)(v4106);

	i8 v4108 = (i8)(intptr_t)(ws+3336);
	i8 v4109 = *(i8*)(intptr_t)v4108;
	i8 v4110 = v4109+(+56);
	i2 v4111 = *(i2*)(intptr_t)v4110;
	i8 v4112 = (i8)(intptr_t)(f176_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4112)(v4111);

	i8 v4113 = (i8)(intptr_t)(ws+3336);
	i8 v4114 = *(i8*)(intptr_t)v4113;
	i8 v4115 = v4114+(+80);
	i1 v4116 = *(i1*)(intptr_t)v4115;
	i8 v4117 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4117)(v4116);

	i8 v4118 = (i8)(intptr_t)(ws+3336);
	i8 v4119 = *(i8*)(intptr_t)v4118;
	i1 v4120 = (i1)+0;
	i8 v4121 = (i8)(intptr_t)(f99_GetInputParameter);
	i8 v4122;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v4121)(&v4122, v4120, v4119);
	i8 v4123 = (i8)(intptr_t)(f204_EmitParameterList);

	((void(*)(i8 /* param */))(intptr_t)v4123)(v4122);

endsub:;
}
	void f175_E_b8(i1 /* byte */);
	void f176_E_b16(i2 /* word */);
	void f175_E_b8(i1 /* byte */);
	void f100_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f204_EmitParameterList(i8 /* param */);

// EmitterEmitOutputParameters workspace at ws+3336 length ws+8
void f206_EmitterEmitOutputParameters(i8 p4124 /* subr */) {
	*(i8*)(intptr_t)(ws+3336) = p4124; /*subr */

	i1 v4125 = (i1)+79;
	i8 v4126 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4126)(v4125);

	i8 v4127 = (i8)(intptr_t)(ws+3336);
	i8 v4128 = *(i8*)(intptr_t)v4127;
	i8 v4129 = v4128+(+56);
	i2 v4130 = *(i2*)(intptr_t)v4129;
	i8 v4131 = (i8)(intptr_t)(f176_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4131)(v4130);

	i8 v4132 = (i8)(intptr_t)(ws+3336);
	i8 v4133 = *(i8*)(intptr_t)v4132;
	i8 v4134 = v4133+(+81);
	i1 v4135 = *(i1*)(intptr_t)v4134;
	i8 v4136 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4136)(v4135);

	i8 v4137 = (i8)(intptr_t)(ws+3336);
	i8 v4138 = *(i8*)(intptr_t)v4137;
	i1 v4139 = (i1)+0;
	i8 v4140 = (i8)(intptr_t)(f100_GetOutputParameter);
	i8 v4141;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v4140)(&v4141, v4139, v4138);
	i8 v4142 = (i8)(intptr_t)(f204_EmitParameterList);

	((void(*)(i8 /* param */))(intptr_t)v4142)(v4141);

endsub:;
}
	void f175_E_b8(i1 /* byte */);
	void f176_E_b16(i2 /* word */);
	void f175_E_b8(i1 /* byte */);

// EmitterEmitSubroutineFlags workspace at ws+3336 length ws+8
void f207_EmitterEmitSubroutineFlags(i8 p4143 /* subr */) {
	*(i8*)(intptr_t)(ws+3336) = p4143; /*subr */

	i1 v4144 = (i1)+70;
	i8 v4145 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4145)(v4144);

	i8 v4146 = (i8)(intptr_t)(ws+3336);
	i8 v4147 = *(i8*)(intptr_t)v4146;
	i8 v4148 = v4147+(+56);
	i2 v4149 = *(i2*)(intptr_t)v4148;
	i8 v4150 = (i8)(intptr_t)(f176_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4150)(v4149);

	i8 v4151 = (i8)(intptr_t)(ws+3336);
	i8 v4152 = *(i8*)(intptr_t)v4151;
	i8 v4153 = v4152+(+82);
	i1 v4154 = *(i1*)(intptr_t)v4153;
	i8 v4155 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4155)(v4154);

endsub:;
}
	void f26_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);

// LookupSymbolInNamespace workspace at ws+3392 length ws+24
void f217_LookupSymbolInNamespace(i8* p4484 /* symbol */, i8 p4485 /* name */, i8 p4486 /* namespace */) {
	*(i8*)(intptr_t)(ws+3392) = p4486; /*namespace */
	*(i8*)(intptr_t)(ws+3400) = p4485; /*name */

	i8 v4487 = (i8)(intptr_t)(ws+3392);
	i8 v4488 = *(i8*)(intptr_t)v4487;
	i8 v4489 = *(i8*)(intptr_t)v4488;
	i8 v4490 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v4490 = v4489;

c02_03ad:;

	i8 v4491 = (i8)(intptr_t)(ws+3408);
	i8 v4492 = *(i8*)(intptr_t)v4491;
	i8 v4493 = (i8)+0;
	if (v4492==v4493) goto c02_03b0; else goto c02_03af;

c02_03af:;

	i8 v4494 = (i8)(intptr_t)(ws+3408);
	i8 v4495 = *(i8*)(intptr_t)v4494;
	i8 v4496 = v4495+(+8);
	i8 v4497 = *(i8*)(intptr_t)v4496;
	i8 v4498 = (i8)(intptr_t)(ws+3400);
	i8 v4499 = *(i8*)(intptr_t)v4498;
	i8 v4500 = (i8)(intptr_t)(f26_StrCmp);
	i1 v4501;

	((void(*)(i1* /* res */, i8 /* s2 */, i8 /* s1 */))(intptr_t)v4500)(&v4501, v4499, v4497);
	i1 v4502 = (i1)+0;
	if (v4501==v4502) goto c02_03b4; else goto c02_03b5;

c02_03b4:;

c02_03b8:;

	i8 v4503 = (i8)(intptr_t)(ws+3408);
	i8 v4504 = *(i8*)(intptr_t)v4503;
	i8 v4505 = v4504+(+32);
	i1 v4506 = *(i1*)(intptr_t)v4505;
	i1 v4507 = (i1)+39;
	if (v4506==v4507) goto c02_03ba; else goto c02_03bb;

c02_03ba:;

	i8 v4508 = (i8)(intptr_t)(ws+3408);
	i8 v4509 = *(i8*)(intptr_t)v4508;
	i8 v4510 = *(i8*)(intptr_t)v4509;
	i8 v4511 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v4511 = v4510;

	goto c02_03b8;

c02_03bb:;

	goto endsub;

c02_03b5:;

c02_03b1:;

	i8 v4512 = (i8)(intptr_t)(ws+3408);
	i8 v4513 = *(i8*)(intptr_t)v4512;
	i8 v4514 = v4513+(+24);
	i8 v4515 = *(i8*)(intptr_t)v4514;
	i8 v4516 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v4516 = v4515;

	goto c02_03ad;

c02_03b0:;

	i8 v4517 = (i8)+0;
	i8 v4518 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v4518 = v4517;

endsub:;
	*p4484 = *(i8*)(intptr_t)(ws+3408);
}
	void f217_LookupSymbolInNamespace(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// LookupSymbol workspace at ws+3352 length ws+24
void f218_LookupSymbol(i8* p4519 /* symbol */, i8 p4520 /* name */, i8 p4521 /* namespace */) {
	*(i8*)(intptr_t)(ws+3352) = p4521; /*namespace */
	*(i8*)(intptr_t)(ws+3360) = p4520; /*name */

	i8 v4522 = (i8)(intptr_t)(ws+3352);
	i8 v4523 = *(i8*)(intptr_t)v4522;
	i8 v4524 = (i8)+0;
	if (v4523==v4524) goto c02_03bf; else goto c02_03c0;

c02_03bf:;

	i8 v4525 = (i8)(intptr_t)(ws+40);
	i8 v4526 = *(i8*)(intptr_t)v4525;
	i8 v4527 = v4526+(+16);
	i8 v4528 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v4528 = v4527;

c02_03c0:;

c02_03bc:;

c02_03c3:;

	i8 v4529 = (i8)(intptr_t)(ws+3352);
	i8 v4530 = *(i8*)(intptr_t)v4529;
	i8 v4531 = (i8)+0;
	if (v4530==v4531) goto c02_03c6; else goto c02_03c5;

c02_03c5:;

	i8 v4532 = (i8)(intptr_t)(ws+3352);
	i8 v4533 = *(i8*)(intptr_t)v4532;
	i8 v4534 = (i8)(intptr_t)(ws+3360);
	i8 v4535 = *(i8*)(intptr_t)v4534;
	i8 v4536 = (i8)(intptr_t)(f217_LookupSymbolInNamespace);
	i8 v4537;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v4536)(&v4537, v4535, v4533);
	i8 v4538 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v4538 = v4537;

	i8 v4539 = (i8)(intptr_t)(ws+3368);
	i8 v4540 = *(i8*)(intptr_t)v4539;
	i8 v4541 = (i8)+0;
	if (v4540==v4541) goto c02_03cb; else goto c02_03ca;

c02_03ca:;

	goto endsub;

c02_03cb:;

c02_03c7:;

	i8 v4542 = (i8)(intptr_t)(ws+3352);
	i8 v4543 = *(i8*)(intptr_t)v4542;
	i8 v4544 = v4543+(+16);
	i8 v4545 = *(i8*)(intptr_t)v4544;
	i8 v4546 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v4546 = v4545;

	goto c02_03c3;

c02_03c6:;

	i8 v4547 = (i8)+0;
	i8 v4548 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v4548 = v4547;

endsub:;
	*p4519 = *(i8*)(intptr_t)(ws+3368);
}

// AddToNamespace workspace at ws+3424 length ws+16
void f219_AddToNamespace(i8 p4549 /* symbol */, i8 p4550 /* namespace */) {
	*(i8*)(intptr_t)(ws+3424) = p4550; /*namespace */
	*(i8*)(intptr_t)(ws+3432) = p4549; /*symbol */

	i8 v4551 = (i8)(intptr_t)(ws+3424);
	i8 v4552 = *(i8*)(intptr_t)v4551;
	i8 v4553 = v4552+(+8);
	i8 v4554 = *(i8*)(intptr_t)v4553;
	i8 v4555 = (i8)+0;
	if (v4554==v4555) goto c02_03cf; else goto c02_03d0;

c02_03cf:;

	i8 v4556 = (i8)(intptr_t)(ws+3432);
	i8 v4557 = *(i8*)(intptr_t)v4556;
	i8 v4558 = (i8)(intptr_t)(ws+3424);
	i8 v4559 = *(i8*)(intptr_t)v4558;
	*(i8*)(intptr_t)v4559 = v4557;

	i8 v4560 = (i8)(intptr_t)(ws+3432);
	i8 v4561 = *(i8*)(intptr_t)v4560;
	i8 v4562 = (i8)(intptr_t)(ws+3424);
	i8 v4563 = *(i8*)(intptr_t)v4562;
	i8 v4564 = v4563+(+8);
	*(i8*)(intptr_t)v4564 = v4561;

	goto c02_03cc;

c02_03d0:;

	i8 v4565 = (i8)(intptr_t)(ws+3432);
	i8 v4566 = *(i8*)(intptr_t)v4565;
	i8 v4567 = (i8)(intptr_t)(ws+3424);
	i8 v4568 = *(i8*)(intptr_t)v4567;
	i8 v4569 = v4568+(+8);
	i8 v4570 = *(i8*)(intptr_t)v4569;
	i8 v4571 = v4570+(+24);
	*(i8*)(intptr_t)v4571 = v4566;

	i8 v4572 = (i8)(intptr_t)(ws+3432);
	i8 v4573 = *(i8*)(intptr_t)v4572;
	i8 v4574 = (i8)(intptr_t)(ws+3424);
	i8 v4575 = *(i8*)(intptr_t)v4574;
	i8 v4576 = v4575+(+8);
	*(i8*)(intptr_t)v4576 = v4573;

c02_03cc:;

	i8 v4577 = (i8)(intptr_t)(ws+3424);
	i8 v4578 = *(i8*)(intptr_t)v4577;
	i8 v4579 = (i8)(intptr_t)(ws+3432);
	i8 v4580 = *(i8*)(intptr_t)v4579;
	i8 v4581 = v4580+(+16);
	*(i8*)(intptr_t)v4581 = v4578;

endsub:;
}
	void f64_AllocNewSymbol(i8* /* symbol */);
	void f217_LookupSymbolInNamespace(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f74_StartError(void);
const i1 c02_s00fa[] = { 0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s00fb[] = { 0x27,0x20,0x69,0x73,0x20,0x61,0x6c,0x72,0x65,0x61,0x64,0x79,0x20,0x64,0x65,0x66,0x69,0x6e,0x65,0x64,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);
	void f219_AddToNamespace(i8 /* symbol */, i8 /* namespace */);

// AddSymbol workspace at ws+3368 length ws+24
void f220_AddSymbol(i8* p4582 /* symbol */, i8 p4583 /* name */, i8 p4584 /* namespace */) {
	*(i8*)(intptr_t)(ws+3368) = p4584; /*namespace */
	*(i8*)(intptr_t)(ws+3376) = p4583; /*name */

	i8 v4585 = (i8)(intptr_t)(ws+3368);
	i8 v4586 = *(i8*)(intptr_t)v4585;
	i8 v4587 = (i8)+0;
	if (v4586==v4587) goto c02_03d4; else goto c02_03d5;

c02_03d4:;

	i8 v4588 = (i8)(intptr_t)(ws+40);
	i8 v4589 = *(i8*)(intptr_t)v4588;
	i8 v4590 = v4589+(+16);
	i8 v4591 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v4591 = v4590;

c02_03d5:;

c02_03d1:;

	i8 v4592 = (i8)(intptr_t)(f64_AllocNewSymbol);
	i8 v4593;

	((void(*)(i8* /* symbol */))(intptr_t)v4592)(&v4593);
	i8 v4594 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v4594 = v4593;

	i8 v4595 = (i8)(intptr_t)(ws+3376);
	i8 v4596 = *(i8*)(intptr_t)v4595;
	i8 v4597 = (i8)+0;
	if (v4596==v4597) goto c02_03da; else goto c02_03d9;

c02_03d9:;

	i8 v4598 = (i8)(intptr_t)(ws+3368);
	i8 v4599 = *(i8*)(intptr_t)v4598;
	i8 v4600 = (i8)(intptr_t)(ws+3376);
	i8 v4601 = *(i8*)(intptr_t)v4600;
	i8 v4602 = (i8)(intptr_t)(f217_LookupSymbolInNamespace);
	i8 v4603;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v4602)(&v4603, v4601, v4599);
	i8 v4604 = (i8)+0;
	if (v4603==v4604) goto c02_03df; else goto c02_03de;

c02_03de:;

	i8 v4605 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v4605)();

	i8 v4606 = (i8)(intptr_t)c02_s00fa;
	i8 v4607 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4607)(v4606);

	i8 v4608 = (i8)(intptr_t)(ws+3376);
	i8 v4609 = *(i8*)(intptr_t)v4608;
	i8 v4610 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4610)(v4609);

	i8 v4611 = (i8)(intptr_t)c02_s00fb;
	i8 v4612 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4612)(v4611);

	i8 v4613 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v4613)();

c02_03df:;

c02_03db:;

	i8 v4614 = (i8)(intptr_t)(ws+3376);
	i8 v4615 = *(i8*)(intptr_t)v4614;
	i8 v4616 = (i8)(intptr_t)(ws+3384);
	i8 v4617 = *(i8*)(intptr_t)v4616;
	i8 v4618 = v4617+(+8);
	*(i8*)(intptr_t)v4618 = v4615;

	i8 v4619 = (i8)(intptr_t)(ws+3368);
	i8 v4620 = *(i8*)(intptr_t)v4619;
	i8 v4621 = (i8)(intptr_t)(ws+3384);
	i8 v4622 = *(i8*)(intptr_t)v4621;
	i8 v4623 = (i8)(intptr_t)(f219_AddToNamespace);

	((void(*)(i8 /* symbol */, i8 /* namespace */))(intptr_t)v4623)(v4622, v4620);

c02_03da:;

c02_03d6:;

endsub:;
	*p4582 = *(i8*)(intptr_t)(ws+3384);
}
	void f220_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// AddAlias workspace at ws+3336 length ws+32
void f221_AddAlias(i8* p4624 /* symbol */, i8 p4625 /* real */, i8 p4626 /* name */, i8 p4627 /* namespace */) {
	*(i8*)(intptr_t)(ws+3336) = p4627; /*namespace */
	*(i8*)(intptr_t)(ws+3344) = p4626; /*name */
	*(i8*)(intptr_t)(ws+3352) = p4625; /*real */

	i8 v4628 = (i8)(intptr_t)(ws+3336);
	i8 v4629 = *(i8*)(intptr_t)v4628;
	i8 v4630 = (i8)(intptr_t)(ws+3344);
	i8 v4631 = *(i8*)(intptr_t)v4630;
	i8 v4632 = (i8)(intptr_t)(f220_AddSymbol);
	i8 v4633;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v4632)(&v4633, v4631, v4629);
	i8 v4634 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v4634 = v4633;

	i1 v4635 = (i1)+39;
	i8 v4636 = (i8)(intptr_t)(ws+3360);
	i8 v4637 = *(i8*)(intptr_t)v4636;
	i8 v4638 = v4637+(+32);
	*(i1*)(intptr_t)v4638 = v4635;

	i8 v4639 = (i8)(intptr_t)(ws+3352);
	i8 v4640 = *(i8*)(intptr_t)v4639;
	i8 v4641 = (i8)(intptr_t)(ws+3360);
	i8 v4642 = *(i8*)(intptr_t)v4641;
	*(i8*)(intptr_t)v4642 = v4640;

endsub:;
	*p4624 = *(i8*)(intptr_t)(ws+3360);
}
	void f221_AddAlias(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */);

// AddAliasString workspace at ws+3208 length ws+24
void f222_AddAliasString(i8 p4643 /* real */, i8 p4644 /* name */) {
	*(i8*)(intptr_t)(ws+3208) = p4644; /*name */
	*(i8*)(intptr_t)(ws+3216) = p4643; /*real */

	i8 v4645 = (i8)+0;
	i8 v4646 = (i8)(intptr_t)(ws+3208);
	i8 v4647 = *(i8*)(intptr_t)v4646;
	i8 v4648 = (i8)(intptr_t)(ws+3216);
	i8 v4649 = *(i8*)(intptr_t)v4648;
	i8 v4650 = (i8)(intptr_t)(f221_AddAlias);
	i8 v4651;

	((void(*)(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */))(intptr_t)v4650)(&v4651, v4649, v4647, v4645);
	i8 v4652 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v4652 = v4651;

endsub:;
}
	void f74_StartError(void);
const i1 c02_s00fc[] = { 0x27,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s00fd[] = { 0x27,0x20,0x69,0x73,0x20,0x61,0x20,0x70,0x61,0x72,0x74,0x69,0x61,0x6c,0x20,0x74,0x79,0x70,0x65,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// CheckNotPartialType workspace at ws+3376 length ws+8
void f223_CheckNotPartialType(i8 p4653 /* type */) {
	*(i8*)(intptr_t)(ws+3376) = p4653; /*type */

	i8 v4654 = (i8)(intptr_t)(ws+3376);
	i8 v4655 = *(i8*)(intptr_t)v4654;
	i8 v4656 = v4655+(+52);
	i1 v4657 = *(i1*)(intptr_t)v4656;
	i1 v4658 = (i1)+1;
	if (v4657==v4658) goto c02_03e3; else goto c02_03e4;

c02_03e3:;

	i8 v4659 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v4659)();

	i8 v4660 = (i8)(intptr_t)c02_s00fc;
	i8 v4661 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4661)(v4660);

	i8 v4662 = (i8)(intptr_t)(ws+3376);
	i8 v4663 = *(i8*)(intptr_t)v4662;
	i8 v4664 = v4663+(+32);
	i8 v4665 = *(i8*)(intptr_t)v4664;
	i8 v4666 = v4665+(+8);
	i8 v4667 = *(i8*)(intptr_t)v4666;
	i8 v4668 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4668)(v4667);

	i8 v4669 = (i8)(intptr_t)c02_s00fd;
	i8 v4670 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4670)(v4669);

	i8 v4671 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v4671)();

c02_03e4:;

c02_03e0:;

endsub:;
}
	void f64_AllocNewSymbol(i8* /* symbol */);
	void f219_AddToNamespace(i8 /* symbol */, i8 /* namespace */);

// AddTypeToNamespace workspace at ws+3392 length ws+32
void f224_AddTypeToNamespace(i8 p4672 /* name */, i8 p4673 /* type */, i8 p4674 /* namespace */) {
	*(i8*)(intptr_t)(ws+3392) = p4674; /*namespace */
	*(i8*)(intptr_t)(ws+3400) = p4673; /*type */
	*(i8*)(intptr_t)(ws+3408) = p4672; /*name */

	i8 v4675 = (i8)(intptr_t)(f64_AllocNewSymbol);
	i8 v4676;

	((void(*)(i8* /* symbol */))(intptr_t)v4675)(&v4676);
	i8 v4677 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v4677 = v4676;

	i1 v4678 = (i1)+30;
	i8 v4679 = (i8)(intptr_t)(ws+3416);
	i8 v4680 = *(i8*)(intptr_t)v4679;
	i8 v4681 = v4680+(+32);
	*(i1*)(intptr_t)v4681 = v4678;

	i8 v4682 = (i8)(intptr_t)(ws+3400);
	i8 v4683 = *(i8*)(intptr_t)v4682;
	i8 v4684 = (i8)(intptr_t)(ws+3416);
	i8 v4685 = *(i8*)(intptr_t)v4684;
	*(i8*)(intptr_t)v4685 = v4683;

	i8 v4686 = (i8)(intptr_t)(ws+3408);
	i8 v4687 = *(i8*)(intptr_t)v4686;
	i8 v4688 = (i8)(intptr_t)(ws+3416);
	i8 v4689 = *(i8*)(intptr_t)v4688;
	i8 v4690 = v4689+(+8);
	*(i8*)(intptr_t)v4690 = v4687;

	i8 v4691 = (i8)(intptr_t)(ws+3416);
	i8 v4692 = *(i8*)(intptr_t)v4691;
	i8 v4693 = (i8)(intptr_t)(ws+3400);
	i8 v4694 = *(i8*)(intptr_t)v4693;
	i8 v4695 = v4694+(+32);
	*(i8*)(intptr_t)v4695 = v4692;

	i8 v4696 = (i8)(intptr_t)(ws+3392);
	i8 v4697 = *(i8*)(intptr_t)v4696;
	i8 v4698 = (i8)(intptr_t)(ws+3416);
	i8 v4699 = *(i8*)(intptr_t)v4698;
	i8 v4700 = (i8)(intptr_t)(f219_AddToNamespace);

	((void(*)(i8 /* symbol */, i8 /* namespace */))(intptr_t)v4700)(v4699, v4697);

endsub:;
}
	void f66_AllocNewType(i8* /* type */);
	void f224_AddTypeToNamespace(i8 /* name */, i8 /* type */, i8 /* namespace */);

// MakeNumberType workspace at ws+3208 length ws+24
void f225_MakeNumberType(i8* p4701 /* type */, i8 p4702 /* name */, i1 p4703 /* is_signed */, i1 p4704 /* alignment */, i1 p4705 /* width */) {
	*(i1*)(intptr_t)(ws+3208) = p4705; /*width */
	*(i1*)(intptr_t)(ws+3209) = p4704; /*alignment */
	*(i1*)(intptr_t)(ws+3210) = p4703; /*is_signed */
	*(i8*)(intptr_t)(ws+3216) = p4702; /*name */

	i8 v4706 = (i8)(intptr_t)(f66_AllocNewType);
	i8 v4707;

	((void(*)(i8* /* type */))(intptr_t)v4706)(&v4707);
	i8 v4708 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v4708 = v4707;

	i1 v4709 = (i1)+2;
	i8 v4710 = (i8)(intptr_t)(ws+3224);
	i8 v4711 = *(i8*)(intptr_t)v4710;
	i8 v4712 = v4711+(+52);
	*(i1*)(intptr_t)v4712 = v4709;

	i8 v4713 = (i8)(intptr_t)(ws+3208);
	i1 v4714 = *(i1*)(intptr_t)v4713;
	i2 v4715 = v4714;
	i8 v4716 = (i8)(intptr_t)(ws+3224);
	i8 v4717 = *(i8*)(intptr_t)v4716;
	i8 v4718 = v4717+(+48);
	*(i2*)(intptr_t)v4718 = v4715;

	i8 v4719 = (i8)(intptr_t)(ws+3208);
	i1 v4720 = *(i1*)(intptr_t)v4719;
	i2 v4721 = v4720;
	i8 v4722 = (i8)(intptr_t)(ws+3224);
	i8 v4723 = *(i8*)(intptr_t)v4722;
	i8 v4724 = v4723+(+50);
	*(i2*)(intptr_t)v4724 = v4721;

	i8 v4725 = (i8)(intptr_t)(ws+3209);
	i1 v4726 = *(i1*)(intptr_t)v4725;
	i8 v4727 = (i8)(intptr_t)(ws+3224);
	i8 v4728 = *(i8*)(intptr_t)v4727;
	i8 v4729 = v4728+(+53);
	*(i1*)(intptr_t)v4729 = v4726;

	i8 v4730 = (i8)(intptr_t)(ws+3210);
	i1 v4731 = *(i1*)(intptr_t)v4730;
	i8 v4732 = (i8)(intptr_t)(ws+3224);
	i8 v4733 = *(i8*)(intptr_t)v4732;
	*(i1*)(intptr_t)v4733 = v4731;

	i8 v4734 = (i8)(intptr_t)(ws+40);
	i8 v4735 = *(i8*)(intptr_t)v4734;
	i8 v4736 = v4735+(+16);
	i8 v4737 = (i8)(intptr_t)(ws+3224);
	i8 v4738 = *(i8*)(intptr_t)v4737;
	i8 v4739 = (i8)(intptr_t)(ws+3216);
	i8 v4740 = *(i8*)(intptr_t)v4739;
	i8 v4741 = (i8)(intptr_t)(f224_AddTypeToNamespace);

	((void(*)(i8 /* name */, i8 /* type */, i8 /* namespace */))(intptr_t)v4741)(v4740, v4738, v4736);

endsub:;
	*p4701 = *(i8*)(intptr_t)(ws+3224);
}

// IsTypeOfKind workspace at ws+3440 length ws+10
void f226_IsTypeOfKind(i1* p4742 /* result */, i1 p4743 /* kind */, i8 p4744 /* type */) {
	*(i8*)(intptr_t)(ws+3440) = p4744; /*type */
	*(i1*)(intptr_t)(ws+3448) = p4743; /*kind */

	i1 v4745 = (i1)+0;
	i8 v4746 = (i8)(intptr_t)(ws+3449);
	*(i1*)(intptr_t)v4746 = v4745;

	i8 v4747 = (i8)(intptr_t)(ws+3440);
	i8 v4748 = *(i8*)(intptr_t)v4747;
	i8 v4749 = (i8)+0;
	if (v4748==v4749) goto c02_03eb; else goto c02_03ec;

c02_03ec:;

	i8 v4750 = (i8)(intptr_t)(ws+3440);
	i8 v4751 = *(i8*)(intptr_t)v4750;
	i8 v4752 = v4751+(+52);
	i1 v4753 = *(i1*)(intptr_t)v4752;
	i8 v4754 = (i8)(intptr_t)(ws+3448);
	i1 v4755 = *(i1*)(intptr_t)v4754;
	if (v4753==v4755) goto c02_03ea; else goto c02_03eb;

c02_03ea:;

	i1 v4756 = (i1)+1;
	i8 v4757 = (i8)(intptr_t)(ws+3449);
	*(i1*)(intptr_t)v4757 = v4756;

c02_03eb:;

c02_03e5:;

endsub:;
	*p4742 = *(i1*)(intptr_t)(ws+3449);
}
	void f226_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsArray workspace at ws+3384 length ws+9
void f227_IsArray(i1* p4758 /* result */, i8 p4759 /* type */) {
	*(i8*)(intptr_t)(ws+3384) = p4759; /*type */

	i8 v4760 = (i8)(intptr_t)(ws+3384);
	i8 v4761 = *(i8*)(intptr_t)v4760;
	i1 v4762 = (i1)+4;
	i8 v4763 = (i8)(intptr_t)(f226_IsTypeOfKind);
	i1 v4764;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4763)(&v4764, v4762, v4761);
	i8 v4765 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v4765 = v4764;

endsub:;
	*p4758 = *(i1*)(intptr_t)(ws+3392);
}
	void f226_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsPtr workspace at ws+3424 length ws+9
void f68_IsPtr(i1* p4766 /* result */, i8 p4767 /* type */) {
	*(i8*)(intptr_t)(ws+3424) = p4767; /*type */

	i8 v4768 = (i8)(intptr_t)(ws+3424);
	i8 v4769 = *(i8*)(intptr_t)v4768;
	i1 v4770 = (i1)+3;
	i8 v4771 = (i8)(intptr_t)(f226_IsTypeOfKind);
	i1 v4772;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4771)(&v4772, v4770, v4769);
	i8 v4773 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v4773 = v4772;

endsub:;
	*p4766 = *(i1*)(intptr_t)(ws+3432);
}
	void f226_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsSubroutine workspace at ws+3424 length ws+9
void f228_IsSubroutine(i1* p4774 /* result */, i8 p4775 /* type */) {
	*(i8*)(intptr_t)(ws+3424) = p4775; /*type */

	i8 v4776 = (i8)(intptr_t)(ws+3424);
	i8 v4777 = *(i8*)(intptr_t)v4776;
	i1 v4778 = (i1)+6;
	i8 v4779 = (i8)(intptr_t)(f226_IsTypeOfKind);
	i1 v4780;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4779)(&v4780, v4778, v4777);
	i8 v4781 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v4781 = v4780;

endsub:;
	*p4774 = *(i1*)(intptr_t)(ws+3432);
}
	void f226_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsNum workspace at ws+3424 length ws+9
void f229_IsNum(i1* p4782 /* result */, i8 p4783 /* type */) {
	*(i8*)(intptr_t)(ws+3424) = p4783; /*type */

	i8 v4784 = (i8)(intptr_t)(ws+3424);
	i8 v4785 = *(i8*)(intptr_t)v4784;
	i8 v4786 = (i8)+0;
	if (v4785==v4786) goto c02_03f0; else goto c02_03f1;

c02_03f0:;

	i1 v4787 = (i1)+1;
	i8 v4788 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v4788 = v4787;

	goto c02_03ed;

c02_03f1:;

	i8 v4789 = (i8)(intptr_t)(ws+3424);
	i8 v4790 = *(i8*)(intptr_t)v4789;
	i1 v4791 = (i1)+2;
	i8 v4792 = (i8)(intptr_t)(f226_IsTypeOfKind);
	i1 v4793;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4792)(&v4793, v4791, v4790);
	i8 v4794 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v4794 = v4793;

c02_03ed:;

endsub:;
	*p4782 = *(i1*)(intptr_t)(ws+3432);
}
	void f226_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsSNum workspace at ws+3376 length ws+9
void f230_IsSNum(i1* p4795 /* result */, i8 p4796 /* type */) {
	*(i8*)(intptr_t)(ws+3376) = p4796; /*type */

	i8 v4797 = (i8)(intptr_t)(ws+3376);
	i8 v4798 = *(i8*)(intptr_t)v4797;
	i8 v4799 = (i8)+0;
	if (v4798==v4799) goto c02_03f5; else goto c02_03f6;

c02_03f5:;

	i1 v4800 = (i1)+1;
	i8 v4801 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v4801 = v4800;

	goto c02_03f2;

c02_03f6:;

	i8 v4802 = (i8)(intptr_t)(ws+3376);
	i8 v4803 = *(i8*)(intptr_t)v4802;
	i1 v4804 = (i1)+2;
	i8 v4805 = (i8)(intptr_t)(f226_IsTypeOfKind);
	i1 v4806;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4805)(&v4806, v4804, v4803);
	i1 v4807 = (i1)+0;
	if (v4806==v4807) goto c02_03fc; else goto c02_03fd;

c02_03fd:;

	i8 v4808 = (i8)(intptr_t)(ws+3376);
	i8 v4809 = *(i8*)(intptr_t)v4808;
	i1 v4810 = *(i1*)(intptr_t)v4809;
	i1 v4811 = (i1)+0;
	if (v4810==v4811) goto c02_03fc; else goto c02_03fb;

c02_03fb:;

	i1 v4812 = (i1)+1;
	i8 v4813 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v4813 = v4812;

	goto c02_03f2;

c02_03fc:;

	i1 v4814 = (i1)+0;
	i8 v4815 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v4815 = v4814;

c02_03f2:;

endsub:;
	*p4795 = *(i1*)(intptr_t)(ws+3384);
}
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f229_IsNum(i1* /* result */, i8 /* type */);
	void f228_IsSubroutine(i1* /* result */, i8 /* type */);

// IsScalar workspace at ws+3408 length ws+9
void f231_IsScalar(i1* p4816 /* result */, i8 p4817 /* type */) {
	*(i8*)(intptr_t)(ws+3408) = p4817; /*type */

	i8 v4818 = (i8)(intptr_t)(ws+3408);
	i8 v4819 = *(i8*)(intptr_t)v4818;
	i8 v4820 = (i8)(intptr_t)(f68_IsPtr);
	i1 v4821;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v4820)(&v4821, v4819);
	i1 v4822 = (i1)+0;
	if (v4821==v4822) goto c02_0408; else goto c02_0405;

c02_0408:;

	i8 v4823 = (i8)(intptr_t)(ws+3408);
	i8 v4824 = *(i8*)(intptr_t)v4823;
	i8 v4825 = (i8)(intptr_t)(f229_IsNum);
	i1 v4826;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v4825)(&v4826, v4824);
	i1 v4827 = (i1)+0;
	if (v4826==v4827) goto c02_0407; else goto c02_0405;

c02_0407:;

	i8 v4828 = (i8)(intptr_t)(ws+3408);
	i8 v4829 = *(i8*)(intptr_t)v4828;
	i8 v4830 = (i8)(intptr_t)(f228_IsSubroutine);
	i1 v4831;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v4830)(&v4831, v4829);
	i1 v4832 = (i1)+0;
	if (v4831==v4832) goto c02_0406; else goto c02_0405;

c02_0405:;

	i1 v4833 = (i1)+1;
	i8 v4834 = (i8)(intptr_t)(ws+3416);
	*(i1*)(intptr_t)v4834 = v4833;

	goto c02_03fe;

c02_0406:;

	i1 v4835 = (i1)+0;
	i8 v4836 = (i8)(intptr_t)(ws+3416);
	*(i1*)(intptr_t)v4836 = v4835;

c02_03fe:;

endsub:;
	*p4816 = *(i1*)(intptr_t)(ws+3416);
}
	void f226_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsRecord workspace at ws+3352 length ws+9
void f232_IsRecord(i1* p4837 /* result */, i8 p4838 /* type */) {
	*(i8*)(intptr_t)(ws+3352) = p4838; /*type */

	i8 v4839 = (i8)(intptr_t)(ws+3352);
	i8 v4840 = *(i8*)(intptr_t)v4839;
	i1 v4841 = (i1)+5;
	i8 v4842 = (i8)(intptr_t)(f226_IsTypeOfKind);
	i1 v4843;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4842)(&v4843, v4841, v4840);
	i8 v4844 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v4844 = v4843;

endsub:;
	*p4837 = *(i1*)(intptr_t)(ws+3360);
}
	void f231_IsScalar(i1* /* result */, i8 /* type */);
	void f138_MidDeref(i8* /* m */, i8 /* left */, i1 /* width */);

// MakeLValue workspace at ws+3376 length ws+32
void f233_MakeLValue(i8* p4845 /* lvalue */, i8 p4846 /* address */) {
	*(i8*)(intptr_t)(ws+3376) = p4846; /*address */

	i1 v4847 = (i1)+0;
	i8 v4848 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v4848 = v4847;

	i8 v4849 = (i8)(intptr_t)(ws+3376);
	i8 v4850 = *(i8*)(intptr_t)v4849;
	i8 v4851 = v4850+(+16);
	i8 v4852 = *(i8*)(intptr_t)v4851;
	i8 v4853 = *(i8*)(intptr_t)v4852;
	i8 v4854 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v4854 = v4853;

	i8 v4855 = (i8)(intptr_t)(ws+3400);
	i8 v4856 = *(i8*)(intptr_t)v4855;
	i8 v4857 = (i8)(intptr_t)(f231_IsScalar);
	i1 v4858;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v4857)(&v4858, v4856);
	i1 v4859 = (i1)+0;
	if (v4858==v4859) goto c02_040d; else goto c02_040c;

c02_040c:;

	i8 v4860 = (i8)(intptr_t)(ws+3400);
	i8 v4861 = *(i8*)(intptr_t)v4860;
	i8 v4862 = v4861+(+48);
	i2 v4863 = *(i2*)(intptr_t)v4862;
	i1 v4864 = v4863;
	i8 v4865 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v4865 = v4864;

c02_040d:;

c02_0409:;

	i8 v4866 = (i8)(intptr_t)(ws+3392);
	i1 v4867 = *(i1*)(intptr_t)v4866;
	i8 v4868 = (i8)(intptr_t)(ws+3376);
	i8 v4869 = *(i8*)(intptr_t)v4868;
	i8 v4870 = (i8)(intptr_t)(f138_MidDeref);
	i8 v4871;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v4870)(&v4871, v4869, v4867);
	i8 v4872 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v4872 = v4871;

	i8 v4873 = (i8)(intptr_t)(ws+3400);
	i8 v4874 = *(i8*)(intptr_t)v4873;
	i8 v4875 = (i8)(intptr_t)(ws+3384);
	i8 v4876 = *(i8*)(intptr_t)v4875;
	i8 v4877 = v4876+(+16);
	*(i8*)(intptr_t)v4877 = v4874;

endsub:;
	*p4845 = *(i8*)(intptr_t)(ws+3384);
}
const i1 c02_s00fe[] = { 0x6c,0x76,0x61,0x6c,0x75,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };
	void f76_SimpleError(i8 /* message */);
	void f63_Discard(i8 /* node */);

// UndoLValue workspace at ws+3376 length ws+17
void f234_UndoLValue(i8* p4878 /* address */, i8 p4879 /* lvalue */) {
	*(i8*)(intptr_t)(ws+3376) = p4879; /*lvalue */

	i8 v4880 = (i8)(intptr_t)(ws+3376);
	i8 v4881 = *(i8*)(intptr_t)v4880;
	i8 v4882 = v4881+(+40);
	i1 v4883 = *(i1*)(intptr_t)v4882;
	i8 v4884 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v4884 = v4883;

	i8 v4885 = (i8)(intptr_t)(ws+3392);
	i1 v4886 = *(i1*)(intptr_t)v4885;
	i1 v4887 = (i1)+49;
	if (v4886<v4887) goto c02_0413; else goto c02_0415;

c02_0415:;

	i1 v4888 = (i1)+53;
	i8 v4889 = (i8)(intptr_t)(ws+3392);
	i1 v4890 = *(i1*)(intptr_t)v4889;
	if (v4888<v4890) goto c02_0413; else goto c02_0414;

c02_0413:;

	i8 v4891 = (i8)(intptr_t)c02_s00fe;
	i8 v4892 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v4892)(v4891);

c02_0414:;

c02_040e:;

	i8 v4893 = (i8)(intptr_t)(ws+3376);
	i8 v4894 = *(i8*)(intptr_t)v4893;
	i8 v4895 = v4894+(+24);
	i8 v4896 = *(i8*)(intptr_t)v4895;
	i8 v4897 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v4897 = v4896;

	i8 v4898 = (i8)+0;
	i8 v4899 = (i8)(intptr_t)(ws+3376);
	i8 v4900 = *(i8*)(intptr_t)v4899;
	i8 v4901 = v4900+(+24);
	*(i8*)(intptr_t)v4901 = v4898;

	i8 v4902 = (i8)(intptr_t)(ws+3376);
	i8 v4903 = *(i8*)(intptr_t)v4902;
	i8 v4904 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v4904)(v4903);

endsub:;
	*p4878 = *(i8*)(intptr_t)(ws+3384);
}

// AllocLabel workspace at ws+3392 length ws+2
void f235_AllocLabel(i2* p4905 /* label */) {

	i8 v4906 = (i8)(intptr_t)(ws+48);
	i2 v4907 = *(i2*)(intptr_t)v4906;
	i8 v4908 = (i8)(intptr_t)(ws+3392);
	*(i2*)(intptr_t)v4908 = v4907;

	i8 v4909 = (i8)(intptr_t)(ws+48);
	i2 v4910 = *(i2*)(intptr_t)v4909;
	i2 v4911 = v4910+(+1);
	i8 v4912 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v4912 = v4911;

endsub:;
	*p4905 = *(i2*)(intptr_t)(ws+3392);
}

// AllocSubrId workspace at ws+3336 length ws+2
void f236_AllocSubrId(i2* p4913 /* id */) {

	i8 v4914 = (i8)(intptr_t)(ws+50);
	i2 v4915 = *(i2*)(intptr_t)v4914;
	i8 v4916 = (i8)(intptr_t)(ws+3336);
	*(i2*)(intptr_t)v4916 = v4915;

	i8 v4917 = (i8)(intptr_t)(ws+50);
	i2 v4918 = *(i2*)(intptr_t)v4917;
	i2 v4919 = v4918+(+1);
	i8 v4920 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v4920 = v4919;

endsub:;
	*p4913 = *(i2*)(intptr_t)(ws+3336);
}

// MidWriter workspace at ws+3440 length ws+8
void f237_MidWriter(i8 p4921 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p4921; /*node */

endsub:;
}

// ArchAlignUp workspace at ws+3392 length ws+8
void f238_ArchAlignUp(i2* p4922 /* newvalue */, i1 p4923 /* alignment */, i2 p4924 /* value */) {
	*(i2*)(intptr_t)(ws+3392) = p4924; /*value */
	*(i1*)(intptr_t)(ws+3394) = p4923; /*alignment */

	i8 v4925 = (i8)(intptr_t)(ws+3394);
	i1 v4926 = *(i1*)(intptr_t)v4925;
	i1 v4927 = v4926+(-1);
	i2 v4928 = v4927;
	i8 v4929 = (i8)(intptr_t)(ws+3398);
	*(i2*)(intptr_t)v4929 = v4928;

	i8 v4930 = (i8)(intptr_t)(ws+3392);
	i2 v4931 = *(i2*)(intptr_t)v4930;
	i8 v4932 = (i8)(intptr_t)(ws+3398);
	i2 v4933 = *(i2*)(intptr_t)v4932;
	i2 v4934 = v4931+v4933;
	i8 v4935 = (i8)(intptr_t)(ws+3398);
	i2 v4936 = *(i2*)(intptr_t)v4935;
	i2 v4937 = ~v4936;
	i2 v4938 = v4934&v4937;
	i8 v4939 = (i8)(intptr_t)(ws+3396);
	*(i2*)(intptr_t)v4939 = v4938;

endsub:;
	*p4922 = *(i2*)(intptr_t)(ws+3396);
}
const i1 c02_s00ff[] = { 0x75,0x69,0x6e,0x74,0x36,0x34,0 };
	void f225_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0100[] = { 0x69,0x6e,0x74,0x36,0x34,0 };
	void f225_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0101[] = { 0x75,0x69,0x6e,0x74,0x33,0x32,0 };
	void f225_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0102[] = { 0x69,0x6e,0x74,0x33,0x32,0 };
	void f225_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0103[] = { 0x75,0x69,0x6e,0x74,0x31,0x36,0 };
	void f225_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0104[] = { 0x69,0x6e,0x74,0x31,0x36,0 };
	void f225_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0105[] = { 0x75,0x69,0x6e,0x74,0x38,0 };
	void f225_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0106[] = { 0x69,0x6e,0x74,0x38,0 };
	void f225_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0107[] = { 0x69,0x6e,0x74,0x70,0x74,0x72,0 };
const i1 c02_s0108[] = { 0x75,0x69,0x6e,0x74,0x36,0x34,0 };
	void f218_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f222_AddAliasString(i8 /* real */, i8 /* name */);

// ArchInitTypes workspace at ws+3208 length ws+0
void f239_ArchInitTypes(void) {

	i1 v4940 = (i1)+8;
	i1 v4941 = (i1)+8;
	i1 v4942 = (i1)+0;
	i8 v4943 = (i8)(intptr_t)c02_s00ff;
	i8 v4944 = (i8)(intptr_t)(f225_MakeNumberType);
	i8 v4945;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4944)(&v4945, v4943, v4942, v4941, v4940);
	i8 v4946 = (i8)(intptr_t)(ws+1464);
	*(i8*)(intptr_t)v4946 = v4945;

	i1 v4947 = (i1)+8;
	i1 v4948 = (i1)+8;
	i1 v4949 = (i1)+1;
	i8 v4950 = (i8)(intptr_t)c02_s0100;
	i8 v4951 = (i8)(intptr_t)(f225_MakeNumberType);
	i8 v4952;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4951)(&v4952, v4950, v4949, v4948, v4947);
	i8 v4953 = (i8)(intptr_t)(ws+1472);
	*(i8*)(intptr_t)v4953 = v4952;

	i1 v4954 = (i1)+4;
	i1 v4955 = (i1)+4;
	i1 v4956 = (i1)+0;
	i8 v4957 = (i8)(intptr_t)c02_s0101;
	i8 v4958 = (i8)(intptr_t)(f225_MakeNumberType);
	i8 v4959;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4958)(&v4959, v4957, v4956, v4955, v4954);
	i8 v4960 = (i8)(intptr_t)(ws+1480);
	*(i8*)(intptr_t)v4960 = v4959;

	i1 v4961 = (i1)+4;
	i1 v4962 = (i1)+4;
	i1 v4963 = (i1)+1;
	i8 v4964 = (i8)(intptr_t)c02_s0102;
	i8 v4965 = (i8)(intptr_t)(f225_MakeNumberType);
	i8 v4966;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4965)(&v4966, v4964, v4963, v4962, v4961);
	i8 v4967 = (i8)(intptr_t)(ws+1488);
	*(i8*)(intptr_t)v4967 = v4966;

	i1 v4968 = (i1)+2;
	i1 v4969 = (i1)+2;
	i1 v4970 = (i1)+0;
	i8 v4971 = (i8)(intptr_t)c02_s0103;
	i8 v4972 = (i8)(intptr_t)(f225_MakeNumberType);
	i8 v4973;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4972)(&v4973, v4971, v4970, v4969, v4968);
	i8 v4974 = (i8)(intptr_t)(ws+1496);
	*(i8*)(intptr_t)v4974 = v4973;

	i1 v4975 = (i1)+2;
	i1 v4976 = (i1)+2;
	i1 v4977 = (i1)+1;
	i8 v4978 = (i8)(intptr_t)c02_s0104;
	i8 v4979 = (i8)(intptr_t)(f225_MakeNumberType);
	i8 v4980;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4979)(&v4980, v4978, v4977, v4976, v4975);
	i8 v4981 = (i8)(intptr_t)(ws+1504);
	*(i8*)(intptr_t)v4981 = v4980;

	i1 v4982 = (i1)+1;
	i1 v4983 = (i1)+1;
	i1 v4984 = (i1)+0;
	i8 v4985 = (i8)(intptr_t)c02_s0105;
	i8 v4986 = (i8)(intptr_t)(f225_MakeNumberType);
	i8 v4987;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4986)(&v4987, v4985, v4984, v4983, v4982);
	i8 v4988 = (i8)(intptr_t)(ws+1512);
	*(i8*)(intptr_t)v4988 = v4987;

	i1 v4989 = (i1)+1;
	i1 v4990 = (i1)+1;
	i1 v4991 = (i1)+1;
	i8 v4992 = (i8)(intptr_t)c02_s0106;
	i8 v4993 = (i8)(intptr_t)(f225_MakeNumberType);
	i8 v4994;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4993)(&v4994, v4992, v4991, v4990, v4989);
	i8 v4995 = (i8)(intptr_t)(ws+1520);
	*(i8*)(intptr_t)v4995 = v4994;

	i8 v4996 = (i8)(intptr_t)(ws+1464);
	i8 v4997 = *(i8*)(intptr_t)v4996;
	i8 v4998 = (i8)(intptr_t)(ws+1528);
	*(i8*)(intptr_t)v4998 = v4997;

	i8 v4999 = (i8)(intptr_t)c02_s0107;
	i8 v5000 = (i8)+0;
	i8 v5001 = (i8)(intptr_t)c02_s0108;
	i8 v5002 = (i8)(intptr_t)(f218_LookupSymbol);
	i8 v5003;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v5002)(&v5003, v5001, v5000);
	i8 v5004 = (i8)(intptr_t)(f222_AddAliasString);

	((void(*)(i8 /* real */, i8 /* name */))(intptr_t)v5004)(v5003, v4999);

endsub:;
}

// ArchGuessIntType workspace at ws+3360 length ws+16
void f240_ArchGuessIntType(i8* p5005 /* symbol */, i4 p5006 /* max */, i4 p5007 /* min */) {
	*(i4*)(intptr_t)(ws+3360) = p5007; /*min */
	*(i4*)(intptr_t)(ws+3364) = p5006; /*max */

	i8 v5008 = (i8)(intptr_t)(ws+3360);
	i4 v5009 = *(i4*)(intptr_t)v5008;
	i4 v5010 = (i4)+0;
	if ((s4)v5009<(s4)v5010) goto c02_041c; else goto c02_041d;

c02_041d:;

	i4 v5011 = (i4)+255;
	i8 v5012 = (i8)(intptr_t)(ws+3364);
	i4 v5013 = *(i4*)(intptr_t)v5012;
	if ((s4)v5011<(s4)v5013) goto c02_041c; else goto c02_041b;

c02_041b:;

	i8 v5014 = (i8)(intptr_t)(ws+1512);
	i8 v5015 = *(i8*)(intptr_t)v5014;
	i8 v5016 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v5016 = v5015;

	goto c02_0416;

c02_041c:;

	i8 v5017 = (i8)(intptr_t)(ws+3360);
	i4 v5018 = *(i4*)(intptr_t)v5017;
	i4 v5019 = (i4)-128;
	if ((s4)v5018<(s4)v5019) goto c02_0423; else goto c02_0424;

c02_0424:;

	i4 v5020 = (i4)+127;
	i8 v5021 = (i8)(intptr_t)(ws+3364);
	i4 v5022 = *(i4*)(intptr_t)v5021;
	if ((s4)v5020<(s4)v5022) goto c02_0423; else goto c02_0422;

c02_0422:;

	i8 v5023 = (i8)(intptr_t)(ws+1520);
	i8 v5024 = *(i8*)(intptr_t)v5023;
	i8 v5025 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v5025 = v5024;

	goto c02_0416;

c02_0423:;

	i8 v5026 = (i8)(intptr_t)(ws+3360);
	i4 v5027 = *(i4*)(intptr_t)v5026;
	i4 v5028 = (i4)+0;
	if ((s4)v5027<(s4)v5028) goto c02_042a; else goto c02_042b;

c02_042b:;

	i4 v5029 = (i4)+65535;
	i8 v5030 = (i8)(intptr_t)(ws+3364);
	i4 v5031 = *(i4*)(intptr_t)v5030;
	if ((s4)v5029<(s4)v5031) goto c02_042a; else goto c02_0429;

c02_0429:;

	i8 v5032 = (i8)(intptr_t)(ws+1496);
	i8 v5033 = *(i8*)(intptr_t)v5032;
	i8 v5034 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v5034 = v5033;

	goto c02_0416;

c02_042a:;

	i8 v5035 = (i8)(intptr_t)(ws+3360);
	i4 v5036 = *(i4*)(intptr_t)v5035;
	i4 v5037 = (i4)-32768;
	if ((s4)v5036<(s4)v5037) goto c02_0431; else goto c02_0432;

c02_0432:;

	i4 v5038 = (i4)+32767;
	i8 v5039 = (i8)(intptr_t)(ws+3364);
	i4 v5040 = *(i4*)(intptr_t)v5039;
	if ((s4)v5038<(s4)v5040) goto c02_0431; else goto c02_0430;

c02_0430:;

	i8 v5041 = (i8)(intptr_t)(ws+1504);
	i8 v5042 = *(i8*)(intptr_t)v5041;
	i8 v5043 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v5043 = v5042;

	goto c02_0416;

c02_0431:;

	i8 v5044 = (i8)(intptr_t)(ws+3360);
	i4 v5045 = *(i4*)(intptr_t)v5044;
	i4 v5046 = (i4)+0;
	if ((s4)v5045<(s4)v5046) goto c02_0436; else goto c02_0435;

c02_0435:;

	i8 v5047 = (i8)(intptr_t)(ws+1480);
	i8 v5048 = *(i8*)(intptr_t)v5047;
	i8 v5049 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v5049 = v5048;

	goto c02_0416;

c02_0436:;

	i8 v5050 = (i8)(intptr_t)(ws+1488);
	i8 v5051 = *(i8*)(intptr_t)v5050;
	i8 v5052 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v5052 = v5051;

c02_0416:;

endsub:;
	*p5005 = *(i8*)(intptr_t)(ws+3368);
}
	void f238_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);

// ArchInitVariable workspace at ws+3368 length ws+18
void f241_ArchInitVariable(i8 p5053 /* symbol */) {
	*(i8*)(intptr_t)(ws+3368) = p5053; /*symbol */

	i8 v5054 = (i8)(intptr_t)(ws+3368);
	i8 v5055 = *(i8*)(intptr_t)v5054;
	i8 v5056 = *(i8*)(intptr_t)v5055;
	i8 v5057 = v5056+(+8);
	i8 v5058 = *(i8*)(intptr_t)v5057;
	i8 v5059 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v5059 = v5058;

	i8 v5060 = (i8)(intptr_t)(ws+3376);
	i8 v5061 = *(i8*)(intptr_t)v5060;
	i8 v5062 = v5061+(+58);
	i2 v5063 = *(i2*)(intptr_t)v5062;
	i8 v5064 = (i8)(intptr_t)(ws+3384);
	*(i2*)(intptr_t)v5064 = v5063;

	i8 v5065 = (i8)(intptr_t)(ws+3384);
	i2 v5066 = *(i2*)(intptr_t)v5065;
	i8 v5067 = (i8)(intptr_t)(ws+3368);
	i8 v5068 = *(i8*)(intptr_t)v5067;
	i8 v5069 = *(i8*)(intptr_t)v5068;
	i8 v5070 = *(i8*)(intptr_t)v5069;
	i8 v5071 = v5070+(+53);
	i1 v5072 = *(i1*)(intptr_t)v5071;
	i8 v5073 = (i8)(intptr_t)(f238_ArchAlignUp);
	i2 v5074;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v5073)(&v5074, v5072, v5066);
	i8 v5075 = (i8)(intptr_t)(ws+3384);
	*(i2*)(intptr_t)v5075 = v5074;

	i8 v5076 = (i8)(intptr_t)(ws+3384);
	i2 v5077 = *(i2*)(intptr_t)v5076;
	i8 v5078 = (i8)(intptr_t)(ws+3368);
	i8 v5079 = *(i8*)(intptr_t)v5078;
	i8 v5080 = *(i8*)(intptr_t)v5079;
	i8 v5081 = v5080+(+24);
	*(i2*)(intptr_t)v5081 = v5077;

	i8 v5082 = (i8)(intptr_t)(ws+3384);
	i2 v5083 = *(i2*)(intptr_t)v5082;
	i8 v5084 = (i8)(intptr_t)(ws+3368);
	i8 v5085 = *(i8*)(intptr_t)v5084;
	i8 v5086 = *(i8*)(intptr_t)v5085;
	i8 v5087 = *(i8*)(intptr_t)v5086;
	i8 v5088 = v5087+(+48);
	i2 v5089 = *(i2*)(intptr_t)v5088;
	i2 v5090 = v5083+v5089;
	i8 v5091 = (i8)(intptr_t)(ws+3376);
	i8 v5092 = *(i8*)(intptr_t)v5091;
	i8 v5093 = v5092+(+58);
	*(i2*)(intptr_t)v5093 = v5090;

endsub:;
}
	void f238_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);

// ArchInitMember workspace at ws+3328 length ws+18
void f242_ArchInitMember(i2 p5094 /* position */, i8 p5095 /* member */, i8 p5096 /* containing */) {
	*(i8*)(intptr_t)(ws+3328) = p5096; /*containing */
	*(i8*)(intptr_t)(ws+3336) = p5095; /*member */
	*(i2*)(intptr_t)(ws+3344) = p5094; /*position */

	i8 v5097 = (i8)(intptr_t)(ws+3344);
	i2 v5098 = *(i2*)(intptr_t)v5097;
	i8 v5099 = (i8)(intptr_t)(ws+3336);
	i8 v5100 = *(i8*)(intptr_t)v5099;
	i8 v5101 = *(i8*)(intptr_t)v5100;
	i8 v5102 = *(i8*)(intptr_t)v5101;
	i8 v5103 = v5102+(+53);
	i1 v5104 = *(i1*)(intptr_t)v5103;
	i8 v5105 = (i8)(intptr_t)(f238_ArchAlignUp);
	i2 v5106;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v5105)(&v5106, v5104, v5098);
	i8 v5107 = (i8)(intptr_t)(ws+3344);
	*(i2*)(intptr_t)v5107 = v5106;

	i8 v5108 = (i8)(intptr_t)(ws+3344);
	i2 v5109 = *(i2*)(intptr_t)v5108;
	i8 v5110 = (i8)(intptr_t)(ws+3336);
	i8 v5111 = *(i8*)(intptr_t)v5110;
	i8 v5112 = *(i8*)(intptr_t)v5111;
	i8 v5113 = v5112+(+24);
	*(i2*)(intptr_t)v5113 = v5109;

	i8 v5114 = (i8)(intptr_t)(ws+3344);
	i2 v5115 = *(i2*)(intptr_t)v5114;
	i8 v5116 = (i8)(intptr_t)(ws+3336);
	i8 v5117 = *(i8*)(intptr_t)v5116;
	i8 v5118 = *(i8*)(intptr_t)v5117;
	i8 v5119 = *(i8*)(intptr_t)v5118;
	i8 v5120 = v5119+(+48);
	i2 v5121 = *(i2*)(intptr_t)v5120;
	i2 v5122 = v5115+v5121;
	i8 v5123 = (i8)(intptr_t)(ws+3344);
	*(i2*)(intptr_t)v5123 = v5122;

	i8 v5124 = (i8)(intptr_t)(ws+3328);
	i8 v5125 = *(i8*)(intptr_t)v5124;
	i8 v5126 = v5125+(+48);
	i2 v5127 = *(i2*)(intptr_t)v5126;
	i8 v5128 = (i8)(intptr_t)(ws+3344);
	i2 v5129 = *(i2*)(intptr_t)v5128;
	if (v5127<v5129) goto c02_043a; else goto c02_043b;

c02_043a:;

	i8 v5130 = (i8)(intptr_t)(ws+3344);
	i2 v5131 = *(i2*)(intptr_t)v5130;
	i8 v5132 = (i8)(intptr_t)(ws+3328);
	i8 v5133 = *(i8*)(intptr_t)v5132;
	i8 v5134 = v5133+(+48);
	*(i2*)(intptr_t)v5134 = v5131;

c02_043b:;

c02_0437:;

endsub:;
}
	void f176_E_b16(i2 /* word */);
	void f175_E_b8(i1 /* byte */);
	void f178_E_bsize(i2 /* size */);
	void f175_E_b8(i1 /* byte */);
	void f178_E_bsize(i2 /* size */);

// WriteMid1 workspace at ws+3448 length ws+0
void f243_WriteMid1(i8 p5135 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5135; /*node */

	i8 v5136 = (i8)(intptr_t)(ws+3440);
	i8 v5137 = *(i8*)(intptr_t)v5136;
	i8 v5138 = *(i8*)(intptr_t)v5137;
	i8 v5139 = *(i8*)(intptr_t)v5138;
	i8 v5140 = v5139+(+8);
	i8 v5141 = *(i8*)(intptr_t)v5140;
	i8 v5142 = v5141+(+56);
	i2 v5143 = *(i2*)(intptr_t)v5142;
	i8 v5144 = (i8)(intptr_t)(f176_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5144)(v5143);

	i8 v5145 = (i8)(intptr_t)(ws+3440);
	i8 v5146 = *(i8*)(intptr_t)v5145;
	i8 v5147 = *(i8*)(intptr_t)v5146;
	i8 v5148 = *(i8*)(intptr_t)v5147;
	i8 v5149 = v5148+(+26);
	i1 v5150 = *(i1*)(intptr_t)v5149;
	i8 v5151 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5151)(v5150);

	i8 v5152 = (i8)(intptr_t)(ws+3440);
	i8 v5153 = *(i8*)(intptr_t)v5152;
	i8 v5154 = *(i8*)(intptr_t)v5153;
	i8 v5155 = *(i8*)(intptr_t)v5154;
	i8 v5156 = v5155+(+24);
	i2 v5157 = *(i2*)(intptr_t)v5156;
	i8 v5158 = (i8)(intptr_t)(f178_E_bsize);

	((void(*)(i2 /* size */))(intptr_t)v5158)(v5157);

	i8 v5159 = (i8)(intptr_t)(ws+3440);
	i8 v5160 = *(i8*)(intptr_t)v5159;
	i8 v5161 = *(i8*)(intptr_t)v5160;
	i8 v5162 = *(i8*)(intptr_t)v5161;
	i8 v5163 = *(i8*)(intptr_t)v5162;
	i8 v5164 = v5163+(+48);
	i2 v5165 = *(i2*)(intptr_t)v5164;
	i1 v5166 = v5165;
	i8 v5167 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5167)(v5166);

	i8 v5168 = (i8)(intptr_t)(ws+3440);
	i8 v5169 = *(i8*)(intptr_t)v5168;
	i8 v5170 = v5169+(+8);
	i2 v5171 = *(i2*)(intptr_t)v5170;
	i8 v5172 = (i8)(intptr_t)(f178_E_bsize);

	((void(*)(i2 /* size */))(intptr_t)v5172)(v5171);

endsub:;
}
	void f176_E_b16(i2 /* word */);

// WriteMid2 workspace at ws+3448 length ws+0
void f244_WriteMid2(i8 p5173 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5173; /*node */

	i8 v5174 = (i8)(intptr_t)(ws+3440);
	i8 v5175 = *(i8*)(intptr_t)v5174;
	i8 v5176 = *(i8*)(intptr_t)v5175;
	i8 v5177 = v5176+(+56);
	i2 v5178 = *(i2*)(intptr_t)v5177;
	i8 v5179 = (i8)(intptr_t)(f176_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5179)(v5178);

endsub:;
}
	void f176_E_b16(i2 /* word */);
	void f176_E_b16(i2 /* word */);
	void f176_E_b16(i2 /* word */);
	void f175_E_b8(i1 /* byte */);

// WriteMid3 workspace at ws+3448 length ws+0
void f245_WriteMid3(i8 p5180 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5180; /*node */

	i8 v5181 = (i8)(intptr_t)(ws+3440);
	i8 v5182 = *(i8*)(intptr_t)v5181;
	i2 v5183 = *(i2*)(intptr_t)v5182;
	i8 v5184 = (i8)(intptr_t)(f176_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5184)(v5183);

	i8 v5185 = (i8)(intptr_t)(ws+3440);
	i8 v5186 = *(i8*)(intptr_t)v5185;
	i8 v5187 = v5186+(+2);
	i2 v5188 = *(i2*)(intptr_t)v5187;
	i8 v5189 = (i8)(intptr_t)(f176_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5189)(v5188);

	i8 v5190 = (i8)(intptr_t)(ws+3440);
	i8 v5191 = *(i8*)(intptr_t)v5190;
	i8 v5192 = v5191+(+4);
	i2 v5193 = *(i2*)(intptr_t)v5192;
	i8 v5194 = (i8)(intptr_t)(f176_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5194)(v5193);

	i8 v5195 = (i8)(intptr_t)(ws+3440);
	i8 v5196 = *(i8*)(intptr_t)v5195;
	i8 v5197 = v5196+(+6);
	i1 v5198 = *(i1*)(intptr_t)v5197;
	i8 v5199 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5199)(v5198);

endsub:;
}
	void f177_E_b32(i4 /* quad */);
	void f176_E_b16(i2 /* word */);

// WriteMid4 workspace at ws+3448 length ws+0
void f246_WriteMid4(i8 p5200 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5200; /*node */

	i8 v5201 = (i8)(intptr_t)(ws+3440);
	i8 v5202 = *(i8*)(intptr_t)v5201;
	i4 v5203 = *(i4*)(intptr_t)v5202;
	i8 v5204 = (i8)(intptr_t)(f177_E_b32);

	((void(*)(i4 /* quad */))(intptr_t)v5204)(v5203);

	i8 v5205 = (i8)(intptr_t)(ws+3440);
	i8 v5206 = *(i8*)(intptr_t)v5205;
	i8 v5207 = v5206+(+4);
	i2 v5208 = *(i2*)(intptr_t)v5207;
	i8 v5209 = (i8)(intptr_t)(f176_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5209)(v5208);

endsub:;
}
	void f186_E_countedstring(i8 /* text */);

// WriteMid5 workspace at ws+3448 length ws+0
void f247_WriteMid5(i8 p5210 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5210; /*node */

	i8 v5211 = (i8)(intptr_t)(ws+3440);
	i8 v5212 = *(i8*)(intptr_t)v5211;
	i8 v5213 = *(i8*)(intptr_t)v5212;
	i8 v5214 = (i8)(intptr_t)(f186_E_countedstring);

	((void(*)(i8 /* text */))(intptr_t)v5214)(v5213);

endsub:;
}

// WriteMid6 workspace at ws+3448 length ws+0
void f248_WriteMid6(i8 p5215 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5215; /*node */

endsub:;
}
	void f176_E_b16(i2 /* word */);
	void f175_E_b8(i1 /* byte */);

// WriteMid7 workspace at ws+3448 length ws+0
void f249_WriteMid7(i8 p5216 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5216; /*node */

	i8 v5217 = (i8)(intptr_t)(ws+3440);
	i8 v5218 = *(i8*)(intptr_t)v5217;
	i8 v5219 = *(i8*)(intptr_t)v5218;
	i8 v5220 = v5219+(+56);
	i2 v5221 = *(i2*)(intptr_t)v5220;
	i8 v5222 = (i8)(intptr_t)(f176_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5222)(v5221);

	i8 v5223 = (i8)(intptr_t)(ws+3440);
	i8 v5224 = *(i8*)(intptr_t)v5223;
	i8 v5225 = v5224+(+8);
	i1 v5226 = *(i1*)(intptr_t)v5225;
	i8 v5227 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5227)(v5226);

endsub:;
}
	void f176_E_b16(i2 /* word */);

// WriteMid8 workspace at ws+3448 length ws+0
void f250_WriteMid8(i8 p5228 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5228; /*node */

	i8 v5229 = (i8)(intptr_t)(ws+3440);
	i8 v5230 = *(i8*)(intptr_t)v5229;
	i2 v5231 = *(i2*)(intptr_t)v5230;
	i8 v5232 = (i8)(intptr_t)(f176_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5232)(v5231);

endsub:;
}
	void f176_E_b16(i2 /* word */);
	void f175_E_b8(i1 /* byte */);
	void f178_E_bsize(i2 /* size */);
	void f175_E_b8(i1 /* byte */);

// WriteMid9 workspace at ws+3448 length ws+0
void f251_WriteMid9(i8 p5233 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5233; /*node */

	i8 v5234 = (i8)(intptr_t)(ws+3440);
	i8 v5235 = *(i8*)(intptr_t)v5234;
	i8 v5236 = *(i8*)(intptr_t)v5235;
	i8 v5237 = *(i8*)(intptr_t)v5236;
	i8 v5238 = v5237+(+8);
	i8 v5239 = *(i8*)(intptr_t)v5238;
	i8 v5240 = v5239+(+56);
	i2 v5241 = *(i2*)(intptr_t)v5240;
	i8 v5242 = (i8)(intptr_t)(f176_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5242)(v5241);

	i8 v5243 = (i8)(intptr_t)(ws+3440);
	i8 v5244 = *(i8*)(intptr_t)v5243;
	i8 v5245 = *(i8*)(intptr_t)v5244;
	i8 v5246 = *(i8*)(intptr_t)v5245;
	i8 v5247 = v5246+(+26);
	i1 v5248 = *(i1*)(intptr_t)v5247;
	i8 v5249 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5249)(v5248);

	i8 v5250 = (i8)(intptr_t)(ws+3440);
	i8 v5251 = *(i8*)(intptr_t)v5250;
	i8 v5252 = *(i8*)(intptr_t)v5251;
	i8 v5253 = *(i8*)(intptr_t)v5252;
	i8 v5254 = v5253+(+24);
	i2 v5255 = *(i2*)(intptr_t)v5254;
	i8 v5256 = (i8)(intptr_t)(f178_E_bsize);

	((void(*)(i2 /* size */))(intptr_t)v5256)(v5255);

	i8 v5257 = (i8)(intptr_t)(ws+3440);
	i8 v5258 = *(i8*)(intptr_t)v5257;
	i8 v5259 = *(i8*)(intptr_t)v5258;
	i8 v5260 = *(i8*)(intptr_t)v5259;
	i8 v5261 = *(i8*)(intptr_t)v5260;
	i8 v5262 = v5261+(+48);
	i2 v5263 = *(i2*)(intptr_t)v5262;
	i1 v5264 = v5263;
	i8 v5265 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5265)(v5264);

endsub:;
}
	void f175_E_b8(i1 /* byte */);

// WriteMid10 workspace at ws+3448 length ws+0
void f252_WriteMid10(i8 p5266 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5266; /*node */

	i8 v5267 = (i8)(intptr_t)(ws+3440);
	i8 v5268 = *(i8*)(intptr_t)v5267;
	i1 v5269 = *(i1*)(intptr_t)v5268;
	i8 v5270 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5270)(v5269);

endsub:;
}
	void f177_E_b32(i4 /* quad */);

// WriteMid11 workspace at ws+3448 length ws+0
void f253_WriteMid11(i8 p5271 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5271; /*node */

	i8 v5272 = (i8)(intptr_t)(ws+3440);
	i8 v5273 = *(i8*)(intptr_t)v5272;
	i4 v5274 = *(i4*)(intptr_t)v5273;
	i8 v5275 = (i8)(intptr_t)(f177_E_b32);

	((void(*)(i4 /* quad */))(intptr_t)v5275)(v5274);

endsub:;
}
	void f243_WriteMid1(i8 /* node */);
	void f244_WriteMid2(i8 /* node */);
	void f245_WriteMid3(i8 /* node */);
	void f246_WriteMid4(i8 /* node */);
	void f247_WriteMid5(i8 /* node */);
	void f248_WriteMid6(i8 /* node */);
	void f249_WriteMid7(i8 /* node */);
	void f250_WriteMid8(i8 /* node */);
	void f251_WriteMid9(i8 /* node */);
	void f252_WriteMid10(i8 /* node */);
	void f253_WriteMid11(i8 /* node */);
static data f3___main_s043c[] = {

	{ .ptr = (void*)f243_WriteMid1 },

	{ .ptr = (void*)f244_WriteMid2 },

	{ .ptr = (void*)f245_WriteMid3 },

	{ .ptr = (void*)f246_WriteMid4 },

	{ .ptr = (void*)f247_WriteMid5 },

	{ .ptr = (void*)f248_WriteMid6 },

	{ .ptr = (void*)f249_WriteMid7 },

	{ .ptr = (void*)f250_WriteMid8 },

	{ .ptr = (void*)f251_WriteMid9 },

	{ .ptr = (void*)f252_WriteMid10 },

	{ .ptr = (void*)f253_WriteMid11 },

};
static data f3___main_s043d[] = {








	{ .i1 = { 0x05,0x05,0x05,0x01,0x01,0x08,0x0a,0x0a}},








	{ .i1 = { 0x0a,0x0a,0x0a,0x04,0x00,0x01,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x04,0x08,0x01,0x0a,0x05,0x05}},








	{ .i1 = { 0x05,0x07,0x07,0x05,0x01,0x01,0x01,0x01}},








	{ .i1 = { 0x01,0x01,0x06,0x06,0x06,0x06,0x06,0x06}},








	{ .i1 = { 0x06,0x06,0x06,0x06,0x0a,0x04,0x00,0x01}},








	{ .i1 = { 0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x05,0x05,0x05,0x05,0x05}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x05,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x09,0x09,0x09,0x09,0x09,0x09}},








	{ .i1 = { 0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09}},








	{ .i1 = { 0x09,0x09,0x09,0x09,0x09,0x09,0x05,0x05}},








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
	void f175_E_b8(i1 /* byte */);
	void f60_PushNode(i8 /* node */);
	void f62_NextNode(i8* /* node */);
	void f175_E_b8(i1 /* byte */);
	void f63_Discard(i8 /* node */);

// ReallyGenerate workspace at ws+3408 length ws+25
void f255_ReallyGenerate(i8 p5321 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3408) = p5321; /*rootnode */

	i1 v5322 = (i1)+77;
	i8 v5323 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5323)(v5322);

	i8 v5324 = (i8)(intptr_t)(ws+224);
	i8 v5325 = *(i8*)(intptr_t)v5324;
	i8 v5326 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v5326 = v5325;

	i8 v5327 = (i8)(intptr_t)(ws+3408);
	i8 v5328 = *(i8*)(intptr_t)v5327;
	i8 v5329 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v5329)(v5328);

c02_044b:;

	i8 v5330 = (i8)(intptr_t)(ws+224);
	i8 v5331 = *(i8*)(intptr_t)v5330;
	i8 v5332 = (i8)(intptr_t)(ws+3416);
	i8 v5333 = *(i8*)(intptr_t)v5332;
	if (v5331==v5333) goto c02_044e; else goto c02_044d;

c02_044d:;

	i8 v5334 = (i8)(intptr_t)(f62_NextNode);
	i8 v5335;

	((void(*)(i8* /* node */))(intptr_t)v5334)(&v5335);
	i8 v5336 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v5336 = v5335;

	i8 v5337 = (i8)(intptr_t)(ws+3424);
	i8 v5338 = *(i8*)(intptr_t)v5337;
	i8 v5339 = v5338+(+40);
	i1 v5340 = *(i1*)(intptr_t)v5339;
	i8 v5341 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5341)(v5340);

	i8 v5342 = (i8)(intptr_t)((i1*)f3___main_s043d);
	i8 v5343 = (i8)(intptr_t)(ws+3424);
	i8 v5344 = *(i8*)(intptr_t)v5343;
	i8 v5345 = v5344+(+40);
	i1 v5346 = *(i1*)(intptr_t)v5345;
	i1 v5347 = v5346+(-1);
	i8 v5348 = v5347;
	i8 v5349 = v5342+v5348;
	i1 v5350 = *(i1*)(intptr_t)v5349;
	i8 v5351 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v5351 = v5350;

	i8 v5352 = (i8)(intptr_t)(ws+3424);
	i8 v5353 = *(i8*)(intptr_t)v5352;
	i8 v5354 = (i8)(intptr_t)((i1*)f3___main_s043c);
	i8 v5355 = (i8)(intptr_t)(ws+3432);
	i1 v5356 = *(i1*)(intptr_t)v5355;
	i8 v5357 = v5356;
	i1 v5358 = (i1)+3;
	i8 v5359 = ((i8)v5357)<<v5358;
	i8 v5360 = v5354+v5359;
	i8 v5361 = *(i8*)(intptr_t)v5360;

	((void(*)(i8 /* node */))(intptr_t)v5361)(v5353);

	goto c02_044b;

c02_044e:;

	i8 v5362 = (i8)(intptr_t)(ws+3408);
	i8 v5363 = *(i8*)(intptr_t)v5362;
	i8 v5364 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v5364)(v5363);

endsub:;
}
	void f63_Discard(i8 /* node */);
	void f161_MidAsmgroupstart(i8* /* m */);
	void f255_ReallyGenerate(i8 /* rootnode */);
	void f111_MidAsmgroupend(i8* /* m */);
	void f255_ReallyGenerate(i8 /* rootnode */);
	void f255_ReallyGenerate(i8 /* rootnode */);

// Generate workspace at ws+3392 length ws+9
void f256_Generate(i8 p5367 /* statement */) {
	*(i8*)(intptr_t)(ws+3392) = p5367; /*statement */

	i8 v5368 = (i8)(intptr_t)(ws+3392);
	i8 v5369 = *(i8*)(intptr_t)v5368;
	i8 v5370 = v5369+(+40);
	i1 v5371 = *(i1*)(intptr_t)v5370;
	i8 v5372 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v5372 = v5371;

	i8 v5373 = (i8)(intptr_t)(ws+1536);
	i1 v5374 = *(i1*)(intptr_t)v5373;
	i1 v5375 = (i1)+27;
	if (v5374==v5375) goto c02_0454; else goto c02_0456;

c02_0456:;

	i8 v5376 = (i8)(intptr_t)(ws+1536);
	i1 v5377 = *(i1*)(intptr_t)v5376;
	i1 v5378 = (i1)+28;
	if (v5377==v5378) goto c02_0454; else goto c02_0455;

c02_0454:;

	i8 v5379 = (i8)(intptr_t)(ws+3400);
	i1 v5380 = *(i1*)(intptr_t)v5379;
	i1 v5381 = (i1)+26;
	if (v5380==v5381) goto c02_045d; else goto c02_045e;

c02_045e:;

	i8 v5382 = (i8)(intptr_t)(ws+3400);
	i1 v5383 = *(i1*)(intptr_t)v5382;
	i1 v5384 = (i1)+5;
	if (v5383==v5384) goto c02_045d; else goto c02_045c;

c02_045c:;

	i8 v5385 = (i8)(intptr_t)(ws+3392);
	i8 v5386 = *(i8*)(intptr_t)v5385;
	i8 v5387 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v5387)(v5386);

	goto endsub;

c02_045d:;

c02_0457:;

c02_0455:;

c02_044f:;

	i8 v5388 = (i8)(intptr_t)(ws+3400);
	i1 v5389 = *(i1*)(intptr_t)v5388;
	i1 v5390 = (i1)+18;
	if (v5389==v5390) goto c02_0466; else goto c02_0465;

c02_0466:;

	i8 v5391 = (i8)(intptr_t)(ws+1536);
	i1 v5392 = *(i1*)(intptr_t)v5391;
	i1 v5393 = (i1)+23;
	if (v5392==v5393) goto c02_0465; else goto c02_0464;

c02_0464:;

	i8 v5394 = (i8)(intptr_t)(f161_MidAsmgroupstart);
	i8 v5395;

	((void(*)(i8* /* m */))(intptr_t)v5394)(&v5395);
	i8 v5396 = (i8)(intptr_t)(f255_ReallyGenerate);

	((void(*)(i8 /* rootnode */))(intptr_t)v5396)(v5395);

c02_0465:;

c02_045f:;

	i8 v5397 = (i8)(intptr_t)(ws+1536);
	i1 v5398 = *(i1*)(intptr_t)v5397;
	i1 v5399 = (i1)+23;
	if (v5398==v5399) goto c02_046e; else goto c02_046d;

c02_046e:;

	i8 v5400 = (i8)(intptr_t)(ws+3400);
	i1 v5401 = *(i1*)(intptr_t)v5400;
	i1 v5402 = (i1)+18;
	if (v5401==v5402) goto c02_046d; else goto c02_046c;

c02_046c:;

	i8 v5403 = (i8)(intptr_t)(f111_MidAsmgroupend);
	i8 v5404;

	((void(*)(i8* /* m */))(intptr_t)v5403)(&v5404);
	i8 v5405 = (i8)(intptr_t)(f255_ReallyGenerate);

	((void(*)(i8 /* rootnode */))(intptr_t)v5405)(v5404);

c02_046d:;

c02_0467:;

	i8 v5406 = (i8)(intptr_t)(ws+3400);
	i1 v5407 = *(i1*)(intptr_t)v5406;
	i8 v5408 = (i8)(intptr_t)(ws+1536);
	*(i1*)(intptr_t)v5408 = v5407;

	i8 v5409 = (i8)(intptr_t)(ws+3392);
	i8 v5410 = *(i8*)(intptr_t)v5409;
	i8 v5411 = (i8)(intptr_t)(f255_ReallyGenerate);

	((void(*)(i8 /* rootnode */))(intptr_t)v5411)(v5410);

endsub:;
}
	void f60_PushNode(i8 /* node */);
	void f61_PopNode(i8* /* node */);
	void f60_PushNode(i8 /* node */);
	void f60_PushNode(i8 /* node */);
	void f63_Discard(i8 /* node */);

// push_and_free workspace at ws+3392 length ws+0
void f258_push_and_free(void) {

	i8 v5469 = (i8)(intptr_t)(ws+3360);
	i2 v5470 = *(i2*)(intptr_t)v5469;
	i8 v5471 = (i8)(intptr_t)(ws+3376);
	i8 v5472 = *(i8*)(intptr_t)v5471;
	*(i2*)(intptr_t)v5472 = v5470;

	i8 v5473 = (i8)(intptr_t)(ws+3362);
	i2 v5474 = *(i2*)(intptr_t)v5473;
	i8 v5475 = (i8)(intptr_t)(ws+3376);
	i8 v5476 = *(i8*)(intptr_t)v5475;
	i8 v5477 = v5476+(+2);
	*(i2*)(intptr_t)v5477 = v5474;

	i8 v5478 = (i8)(intptr_t)(ws+3364);
	i2 v5479 = *(i2*)(intptr_t)v5478;
	i8 v5480 = (i8)(intptr_t)(ws+3376);
	i8 v5481 = *(i8*)(intptr_t)v5480;
	i8 v5482 = v5481+(+4);
	*(i2*)(intptr_t)v5482 = v5479;

	i8 v5483 = (i8)+0;
	i8 v5484 = (i8)(intptr_t)(ws+3352);
	i8 v5485 = *(i8*)(intptr_t)v5484;
	i8 v5486 = v5485+(+24);
	*(i8*)(intptr_t)v5486 = v5483;

	i8 v5487 = (i8)+0;
	i8 v5488 = (i8)(intptr_t)(ws+3352);
	i8 v5489 = *(i8*)(intptr_t)v5488;
	i8 v5490 = v5489+(+32);
	*(i8*)(intptr_t)v5490 = v5487;

	i8 v5491 = (i8)(intptr_t)(ws+3376);
	i8 v5492 = *(i8*)(intptr_t)v5491;
	i8 v5493 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v5493)(v5492);

	i8 v5494 = (i8)(intptr_t)(ws+3368);
	i8 v5495 = *(i8*)(intptr_t)v5494;
	i8 v5496 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v5496)(v5495);

	i8 v5497 = (i8)(intptr_t)(ws+3352);
	i8 v5498 = *(i8*)(intptr_t)v5497;
	i8 v5499 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v5499)(v5498);

endsub:;
}
	void f235_AllocLabel(i2* /* label */);
	void f258_push_and_free(void);
	void f235_AllocLabel(i2* /* label */);
	void f258_push_and_free(void);
	void f256_Generate(i8 /* statement */);
	void f130_MidLabel(i8* /* m */, i2 /* label */);
	void f256_Generate(i8 /* statement */);

// GenerateConditional workspace at ws+3336 length ws+54
void f257_GenerateConditional(i8 p5412 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3336) = p5412; /*rootnode */

	i8 v5413 = (i8)(intptr_t)(ws+224);
	i8 v5414 = *(i8*)(intptr_t)v5413;
	i8 v5415 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v5415 = v5414;

	i8 v5416 = (i8)(intptr_t)(ws+3336);
	i8 v5417 = *(i8*)(intptr_t)v5416;
	i8 v5418 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v5418)(v5417);

c02_0471:;

	i8 v5419 = (i8)(intptr_t)(ws+224);
	i8 v5420 = *(i8*)(intptr_t)v5419;
	i8 v5421 = (i8)(intptr_t)(ws+3344);
	i8 v5422 = *(i8*)(intptr_t)v5421;
	if (v5420==v5422) goto c02_0474; else goto c02_0473;

c02_0473:;

	i8 v5423 = (i8)(intptr_t)(f61_PopNode);
	i8 v5424;

	((void(*)(i8* /* node */))(intptr_t)v5423)(&v5424);
	i8 v5425 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5425 = v5424;

	i8 v5426 = (i8)(intptr_t)(ws+3352);
	i8 v5427 = *(i8*)(intptr_t)v5426;
	i2 v5428 = *(i2*)(intptr_t)v5427;
	i8 v5429 = (i8)(intptr_t)(ws+3360);
	*(i2*)(intptr_t)v5429 = v5428;

	i8 v5430 = (i8)(intptr_t)(ws+3352);
	i8 v5431 = *(i8*)(intptr_t)v5430;
	i8 v5432 = v5431+(+2);
	i2 v5433 = *(i2*)(intptr_t)v5432;
	i8 v5434 = (i8)(intptr_t)(ws+3362);
	*(i2*)(intptr_t)v5434 = v5433;

	i8 v5435 = (i8)(intptr_t)(ws+3352);
	i8 v5436 = *(i8*)(intptr_t)v5435;
	i8 v5437 = v5436+(+4);
	i2 v5438 = *(i2*)(intptr_t)v5437;
	i8 v5439 = (i8)(intptr_t)(ws+3364);
	*(i2*)(intptr_t)v5439 = v5438;

	i8 v5440 = (i8)(intptr_t)(ws+3352);
	i8 v5441 = *(i8*)(intptr_t)v5440;
	i8 v5442 = v5441+(+24);
	i8 v5443 = *(i8*)(intptr_t)v5442;
	i8 v5444 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v5444 = v5443;

	i8 v5445 = (i8)(intptr_t)(ws+3352);
	i8 v5446 = *(i8*)(intptr_t)v5445;
	i8 v5447 = v5446+(+32);
	i8 v5448 = *(i8*)(intptr_t)v5447;
	i8 v5449 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v5449 = v5448;

	i8 v5450 = (i8)(intptr_t)(ws+3352);
	i8 v5451 = *(i8*)(intptr_t)v5450;
	i8 v5452 = v5451+(+40);
	i1 v5453 = *(i1*)(intptr_t)v5452;
	i8 v5454 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v5454 = v5453;

	i8 v5455 = (i8)(intptr_t)(ws+3352);
	i8 v5456 = *(i8*)(intptr_t)v5455;
	i8 v5457 = v5456+(+6);
	i1 v5458 = *(i1*)(intptr_t)v5457;
	i1 v5459 = (i1)+0;
	if (v5458==v5459) goto c02_0479; else goto c02_0478;

c02_0478:;

	i8 v5460 = (i8)(intptr_t)(ws+3360);
	i2 v5461 = *(i2*)(intptr_t)v5460;
	i8 v5462 = (i8)(intptr_t)(ws+3386);
	*(i2*)(intptr_t)v5462 = v5461;

	i8 v5463 = (i8)(intptr_t)(ws+3362);
	i2 v5464 = *(i2*)(intptr_t)v5463;
	i8 v5465 = (i8)(intptr_t)(ws+3360);
	*(i2*)(intptr_t)v5465 = v5464;

	i8 v5466 = (i8)(intptr_t)(ws+3386);
	i2 v5467 = *(i2*)(intptr_t)v5466;
	i8 v5468 = (i8)(intptr_t)(ws+3362);
	*(i2*)(intptr_t)v5468 = v5467;

c02_0479:;

c02_0475:;


	i8 v5500 = (i8)(intptr_t)(ws+3384);
	i1 v5501 = *(i1*)(intptr_t)v5500;

	if (v5501 != +60) goto c02_047b;

	i8 v5502 = (i8)(intptr_t)(f235_AllocLabel);
	i2 v5503;

	((void(*)(i2* /* label */))(intptr_t)v5502)(&v5503);
	i8 v5504 = (i8)(intptr_t)(ws+3388);
	*(i2*)(intptr_t)v5504 = v5503;

	i8 v5505 = (i8)(intptr_t)(ws+3360);
	i2 v5506 = *(i2*)(intptr_t)v5505;
	i8 v5507 = (i8)(intptr_t)(ws+3368);
	i8 v5508 = *(i8*)(intptr_t)v5507;
	*(i2*)(intptr_t)v5508 = v5506;

	i8 v5509 = (i8)(intptr_t)(ws+3388);
	i2 v5510 = *(i2*)(intptr_t)v5509;
	i8 v5511 = (i8)(intptr_t)(ws+3368);
	i8 v5512 = *(i8*)(intptr_t)v5511;
	i8 v5513 = v5512+(+2);
	*(i2*)(intptr_t)v5513 = v5510;

	i8 v5514 = (i8)(intptr_t)(ws+3388);
	i2 v5515 = *(i2*)(intptr_t)v5514;
	i8 v5516 = (i8)(intptr_t)(ws+3368);
	i8 v5517 = *(i8*)(intptr_t)v5516;
	i8 v5518 = v5517+(+4);
	*(i2*)(intptr_t)v5518 = v5515;

	i8 v5519 = (i8)(intptr_t)(f258_push_and_free);

	((void(*)(void))(intptr_t)v5519)();

	goto c02_047a;

c02_047b:;

	if (v5501 != +59) goto c02_047c;

	i8 v5520 = (i8)(intptr_t)(f235_AllocLabel);
	i2 v5521;

	((void(*)(i2* /* label */))(intptr_t)v5520)(&v5521);
	i8 v5522 = (i8)(intptr_t)(ws+3388);
	*(i2*)(intptr_t)v5522 = v5521;

	i8 v5523 = (i8)(intptr_t)(ws+3388);
	i2 v5524 = *(i2*)(intptr_t)v5523;
	i8 v5525 = (i8)(intptr_t)(ws+3368);
	i8 v5526 = *(i8*)(intptr_t)v5525;
	*(i2*)(intptr_t)v5526 = v5524;

	i8 v5527 = (i8)(intptr_t)(ws+3362);
	i2 v5528 = *(i2*)(intptr_t)v5527;
	i8 v5529 = (i8)(intptr_t)(ws+3368);
	i8 v5530 = *(i8*)(intptr_t)v5529;
	i8 v5531 = v5530+(+2);
	*(i2*)(intptr_t)v5531 = v5528;

	i8 v5532 = (i8)(intptr_t)(ws+3388);
	i2 v5533 = *(i2*)(intptr_t)v5532;
	i8 v5534 = (i8)(intptr_t)(ws+3368);
	i8 v5535 = *(i8*)(intptr_t)v5534;
	i8 v5536 = v5535+(+4);
	*(i2*)(intptr_t)v5536 = v5533;

	i8 v5537 = (i8)(intptr_t)(f258_push_and_free);

	((void(*)(void))(intptr_t)v5537)();

	goto c02_047a;

c02_047c:;

	i8 v5538 = (i8)(intptr_t)(ws+3360);
	i2 v5539 = *(i2*)(intptr_t)v5538;
	i8 v5540 = (i8)(intptr_t)(ws+3352);
	i8 v5541 = *(i8*)(intptr_t)v5540;
	*(i2*)(intptr_t)v5541 = v5539;

	i8 v5542 = (i8)(intptr_t)(ws+3362);
	i2 v5543 = *(i2*)(intptr_t)v5542;
	i8 v5544 = (i8)(intptr_t)(ws+3352);
	i8 v5545 = *(i8*)(intptr_t)v5544;
	i8 v5546 = v5545+(+2);
	*(i2*)(intptr_t)v5546 = v5543;

	i8 v5547 = (i8)(intptr_t)(ws+3352);
	i8 v5548 = *(i8*)(intptr_t)v5547;
	i8 v5549 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v5549)(v5548);

	i8 v5550 = (i8)(intptr_t)(ws+3364);
	i2 v5551 = *(i2*)(intptr_t)v5550;
	i8 v5552 = (i8)(intptr_t)(f130_MidLabel);
	i8 v5553;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v5552)(&v5553, v5551);
	i8 v5554 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v5554)(v5553);

c02_047a:;


	goto c02_0471;

c02_0474:;

endsub:;
}
	void f223_CheckNotPartialType(i8 /* type */);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f241_ArchInitVariable(i8 /* symbol */);

// InitVariable workspace at ws+3344 length ws+24
void f259_InitVariable(i8 p5555 /* type */, i8 p5556 /* symbol */, i8 p5557 /* subr */) {
	*(i8*)(intptr_t)(ws+3344) = p5557; /*subr */
	*(i8*)(intptr_t)(ws+3352) = p5556; /*symbol */
	*(i8*)(intptr_t)(ws+3360) = p5555; /*type */

	i8 v5558 = (i8)(intptr_t)(ws+3360);
	i8 v5559 = *(i8*)(intptr_t)v5558;
	i8 v5560 = (i8)(intptr_t)(f223_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v5560)(v5559);

	i1 v5561 = (i1)+28;
	i8 v5562 = (i8)(intptr_t)(ws+3352);
	i8 v5563 = *(i8*)(intptr_t)v5562;
	i8 v5564 = v5563+(+32);
	*(i1*)(intptr_t)v5564 = v5561;

	i8 v5565 = (i8)+27;
	i8 v5566 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v5567;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v5566)(&v5567, v5565);
	i8 v5568 = (i8)(intptr_t)(ws+3352);
	i8 v5569 = *(i8*)(intptr_t)v5568;
	*(i8*)(intptr_t)v5569 = v5567;

	i8 v5570 = (i8)(intptr_t)(ws+3360);
	i8 v5571 = *(i8*)(intptr_t)v5570;
	i8 v5572 = (i8)(intptr_t)(ws+3352);
	i8 v5573 = *(i8*)(intptr_t)v5572;
	i8 v5574 = *(i8*)(intptr_t)v5573;
	*(i8*)(intptr_t)v5574 = v5571;

	i8 v5575 = (i8)(intptr_t)(ws+3344);
	i8 v5576 = *(i8*)(intptr_t)v5575;
	i8 v5577 = (i8)(intptr_t)(ws+3352);
	i8 v5578 = *(i8*)(intptr_t)v5577;
	i8 v5579 = *(i8*)(intptr_t)v5578;
	i8 v5580 = v5579+(+8);
	*(i8*)(intptr_t)v5580 = v5576;

	i8 v5581 = (i8)(intptr_t)(ws+3352);
	i8 v5582 = *(i8*)(intptr_t)v5581;
	i8 v5583 = (i8)(intptr_t)(f241_ArchInitVariable);

	((void(*)(i8 /* symbol */))(intptr_t)v5583)(v5582);

endsub:;
}
	void f66_AllocNewType(i8* /* type */);
	void f70_StrDupBraced(i8* /* news */, i8 /* s */);
	void f224_AddTypeToNamespace(i8 /* name */, i8 /* type */, i8 /* namespace */);

// MakePointerType workspace at ws+3376 length ws+16
void f260_MakePointerType(i8* p5584 /* ptrtype */, i8 p5585 /* type */) {
	*(i8*)(intptr_t)(ws+3376) = p5585; /*type */

	i8 v5586 = (i8)(intptr_t)(ws+3376);
	i8 v5587 = *(i8*)(intptr_t)v5586;
	i8 v5588 = v5587+(+40);
	i8 v5589 = *(i8*)(intptr_t)v5588;
	i8 v5590 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v5590 = v5589;

	i8 v5591 = (i8)(intptr_t)(ws+3384);
	i8 v5592 = *(i8*)(intptr_t)v5591;
	i8 v5593 = (i8)+0;
	if (v5592==v5593) goto c02_0480; else goto c02_0481;

c02_0480:;

	i8 v5594 = (i8)(intptr_t)(f66_AllocNewType);
	i8 v5595;

	((void(*)(i8* /* type */))(intptr_t)v5594)(&v5595);
	i8 v5596 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v5596 = v5595;

	i1 v5597 = (i1)+3;
	i8 v5598 = (i8)(intptr_t)(ws+3384);
	i8 v5599 = *(i8*)(intptr_t)v5598;
	i8 v5600 = v5599+(+52);
	*(i1*)(intptr_t)v5600 = v5597;

	i8 v5601 = (i8)(intptr_t)(ws+1528);
	i8 v5602 = *(i8*)(intptr_t)v5601;
	i8 v5603 = v5602+(+48);
	i2 v5604 = *(i2*)(intptr_t)v5603;
	i8 v5605 = (i8)(intptr_t)(ws+3384);
	i8 v5606 = *(i8*)(intptr_t)v5605;
	i8 v5607 = v5606+(+48);
	*(i2*)(intptr_t)v5607 = v5604;

	i8 v5608 = (i8)(intptr_t)(ws+1528);
	i8 v5609 = *(i8*)(intptr_t)v5608;
	i8 v5610 = v5609+(+53);
	i1 v5611 = *(i1*)(intptr_t)v5610;
	i8 v5612 = (i8)(intptr_t)(ws+3384);
	i8 v5613 = *(i8*)(intptr_t)v5612;
	i8 v5614 = v5613+(+53);
	*(i1*)(intptr_t)v5614 = v5611;

	i8 v5615 = (i8)(intptr_t)(ws+1528);
	i8 v5616 = *(i8*)(intptr_t)v5615;
	i8 v5617 = v5616+(+50);
	i2 v5618 = *(i2*)(intptr_t)v5617;
	i8 v5619 = (i8)(intptr_t)(ws+3384);
	i8 v5620 = *(i8*)(intptr_t)v5619;
	i8 v5621 = v5620+(+50);
	*(i2*)(intptr_t)v5621 = v5618;

	i8 v5622 = (i8)(intptr_t)(ws+3376);
	i8 v5623 = *(i8*)(intptr_t)v5622;
	i8 v5624 = (i8)(intptr_t)(ws+3384);
	i8 v5625 = *(i8*)(intptr_t)v5624;
	*(i8*)(intptr_t)v5625 = v5623;

	i8 v5626 = (i8)(intptr_t)(ws+3384);
	i8 v5627 = *(i8*)(intptr_t)v5626;
	i8 v5628 = (i8)(intptr_t)(ws+3376);
	i8 v5629 = *(i8*)(intptr_t)v5628;
	i8 v5630 = v5629+(+40);
	*(i8*)(intptr_t)v5630 = v5627;

	i8 v5631 = (i8)(intptr_t)(ws+3376);
	i8 v5632 = *(i8*)(intptr_t)v5631;
	i8 v5633 = v5632+(+32);
	i8 v5634 = *(i8*)(intptr_t)v5633;
	i8 v5635 = v5634+(+16);
	i8 v5636 = *(i8*)(intptr_t)v5635;
	i8 v5637 = (i8)(intptr_t)(ws+3384);
	i8 v5638 = *(i8*)(intptr_t)v5637;
	i8 v5639 = (i8)(intptr_t)(ws+3376);
	i8 v5640 = *(i8*)(intptr_t)v5639;
	i8 v5641 = v5640+(+32);
	i8 v5642 = *(i8*)(intptr_t)v5641;
	i8 v5643 = v5642+(+8);
	i8 v5644 = *(i8*)(intptr_t)v5643;
	i8 v5645 = (i8)(intptr_t)(f70_StrDupBraced);
	i8 v5646;

	((void(*)(i8* /* news */, i8 /* s */))(intptr_t)v5645)(&v5646, v5644);
	i8 v5647 = (i8)(intptr_t)(f224_AddTypeToNamespace);

	((void(*)(i8 /* name */, i8 /* type */, i8 /* namespace */))(intptr_t)v5647)(v5646, v5638, v5636);

c02_0481:;

c02_047d:;

endsub:;
	*p5584 = *(i8*)(intptr_t)(ws+3384);
}
	void f223_CheckNotPartialType(i8 /* type */);
	void f66_AllocNewType(i8* /* type */);
	void f240_ArchGuessIntType(i8* /* symbol */, i4 /* max */, i4 /* min */);
	void f71_StrDupArrayed(i8* /* news */, i2 /* i */, i8 /* s */);
	void f224_AddTypeToNamespace(i8 /* name */, i8 /* type */, i8 /* namespace */);

// MakeArrayType workspace at ws+3328 length ws+26
void f261_MakeArrayType(i8* p5648 /* arraytype */, i2 p5649 /* size */, i8 p5650 /* type */) {
	*(i8*)(intptr_t)(ws+3328) = p5650; /*type */
	*(i2*)(intptr_t)(ws+3336) = p5649; /*size */

	i8 v5651 = (i8)(intptr_t)(ws+3328);
	i8 v5652 = *(i8*)(intptr_t)v5651;
	i8 v5653 = (i8)(intptr_t)(f223_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v5653)(v5652);

	i8 v5654 = (i8)(intptr_t)(f66_AllocNewType);
	i8 v5655;

	((void(*)(i8* /* type */))(intptr_t)v5654)(&v5655);
	i8 v5656 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v5656 = v5655;

	i1 v5657 = (i1)+4;
	i8 v5658 = (i8)(intptr_t)(ws+3344);
	i8 v5659 = *(i8*)(intptr_t)v5658;
	i8 v5660 = v5659+(+52);
	*(i1*)(intptr_t)v5660 = v5657;

	i2 v5661 = (i2)+0;
	i8 v5662 = (i8)(intptr_t)(ws+3352);
	*(i2*)(intptr_t)v5662 = v5661;

	i2 v5663 = (i2)+0;
	i8 v5664 = (i8)(intptr_t)(ws+3336);
	i2 v5665 = *(i2*)(intptr_t)v5664;
	if (v5663<v5665) goto c02_0485; else goto c02_0486;

c02_0485:;

	i8 v5666 = (i8)(intptr_t)(ws+3328);
	i8 v5667 = *(i8*)(intptr_t)v5666;
	i8 v5668 = v5667+(+50);
	i2 v5669 = *(i2*)(intptr_t)v5668;
	i8 v5670 = (i8)(intptr_t)(ws+3336);
	i2 v5671 = *(i2*)(intptr_t)v5670;
	i2 v5672 = v5671+(-1);
	i2 v5673 = v5669*v5672;
	i8 v5674 = (i8)(intptr_t)(ws+3328);
	i8 v5675 = *(i8*)(intptr_t)v5674;
	i8 v5676 = v5675+(+48);
	i2 v5677 = *(i2*)(intptr_t)v5676;
	i2 v5678 = v5673+v5677;
	i8 v5679 = (i8)(intptr_t)(ws+3352);
	*(i2*)(intptr_t)v5679 = v5678;

c02_0486:;

c02_0482:;

	i8 v5680 = (i8)(intptr_t)(ws+3352);
	i2 v5681 = *(i2*)(intptr_t)v5680;
	i8 v5682 = (i8)(intptr_t)(ws+3344);
	i8 v5683 = *(i8*)(intptr_t)v5682;
	i8 v5684 = v5683+(+48);
	*(i2*)(intptr_t)v5684 = v5681;

	i8 v5685 = (i8)(intptr_t)(ws+3328);
	i8 v5686 = *(i8*)(intptr_t)v5685;
	i8 v5687 = v5686+(+53);
	i1 v5688 = *(i1*)(intptr_t)v5687;
	i8 v5689 = (i8)(intptr_t)(ws+3344);
	i8 v5690 = *(i8*)(intptr_t)v5689;
	i8 v5691 = v5690+(+53);
	*(i1*)(intptr_t)v5691 = v5688;

	i8 v5692 = (i8)(intptr_t)(ws+3328);
	i8 v5693 = *(i8*)(intptr_t)v5692;
	i8 v5694 = v5693+(+50);
	i2 v5695 = *(i2*)(intptr_t)v5694;
	i8 v5696 = (i8)(intptr_t)(ws+3336);
	i2 v5697 = *(i2*)(intptr_t)v5696;
	i2 v5698 = v5695*v5697;
	i8 v5699 = (i8)(intptr_t)(ws+3344);
	i8 v5700 = *(i8*)(intptr_t)v5699;
	i8 v5701 = v5700+(+50);
	*(i2*)(intptr_t)v5701 = v5698;

	i8 v5702 = (i8)(intptr_t)(ws+3328);
	i8 v5703 = *(i8*)(intptr_t)v5702;
	i8 v5704 = (i8)(intptr_t)(ws+3344);
	i8 v5705 = *(i8*)(intptr_t)v5704;
	*(i8*)(intptr_t)v5705 = v5703;

	i8 v5706 = (i8)(intptr_t)(ws+3336);
	i2 v5707 = *(i2*)(intptr_t)v5706;
	i8 v5708 = (i8)(intptr_t)(ws+3344);
	i8 v5709 = *(i8*)(intptr_t)v5708;
	i8 v5710 = v5709+(+8);
	*(i2*)(intptr_t)v5710 = v5707;

	i4 v5711 = (i4)+0;
	i8 v5712 = (i8)(intptr_t)(ws+3336);
	i2 v5713 = *(i2*)(intptr_t)v5712;
	i2 v5714 = v5713+(-1);
	i4 v5715 = v5714;
	i8 v5716 = (i8)(intptr_t)(f240_ArchGuessIntType);
	i8 v5717;

	((void(*)(i8* /* symbol */, i4 /* max */, i4 /* min */))(intptr_t)v5716)(&v5717, v5715, v5711);
	i8 v5718 = (i8)(intptr_t)(ws+3344);
	i8 v5719 = *(i8*)(intptr_t)v5718;
	i8 v5720 = v5719+(+16);
	*(i8*)(intptr_t)v5720 = v5717;

	i8 v5721 = (i8)(intptr_t)(ws+3328);
	i8 v5722 = *(i8*)(intptr_t)v5721;
	i8 v5723 = v5722+(+32);
	i8 v5724 = *(i8*)(intptr_t)v5723;
	i8 v5725 = v5724+(+16);
	i8 v5726 = *(i8*)(intptr_t)v5725;
	i8 v5727 = (i8)(intptr_t)(ws+3344);
	i8 v5728 = *(i8*)(intptr_t)v5727;
	i8 v5729 = (i8)(intptr_t)(ws+3328);
	i8 v5730 = *(i8*)(intptr_t)v5729;
	i8 v5731 = v5730+(+32);
	i8 v5732 = *(i8*)(intptr_t)v5731;
	i8 v5733 = v5732+(+8);
	i8 v5734 = *(i8*)(intptr_t)v5733;
	i8 v5735 = (i8)(intptr_t)(ws+3336);
	i2 v5736 = *(i2*)(intptr_t)v5735;
	i8 v5737 = (i8)(intptr_t)(f71_StrDupArrayed);
	i8 v5738;

	((void(*)(i8* /* news */, i2 /* i */, i8 /* s */))(intptr_t)v5737)(&v5738, v5736, v5734);
	i8 v5739 = (i8)(intptr_t)(f224_AddTypeToNamespace);

	((void(*)(i8 /* name */, i8 /* type */, i8 /* namespace */))(intptr_t)v5739)(v5738, v5728, v5726);

endsub:;
	*p5648 = *(i8*)(intptr_t)(ws+3344);
}

// QueueNamespace workspace at ws+3384 length ws+16
void f263_QueueNamespace(i8 p5743 /* namespace */) {
	*(i8*)(intptr_t)(ws+3384) = p5743; /*namespace */

c02_0489:;

	i8 v5744 = (i8)(intptr_t)(ws+3384);
	i8 v5745 = *(i8*)(intptr_t)v5744;
	i8 v5746 = *(i8*)(intptr_t)v5745;
	i8 v5747 = (i8)+0;
	if (v5746==v5747) goto c02_048c; else goto c02_048b;

c02_048b:;

	i8 v5748 = (i8)(intptr_t)(ws+3384);
	i8 v5749 = *(i8*)(intptr_t)v5748;
	i8 v5750 = *(i8*)(intptr_t)v5749;
	i8 v5751 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v5751 = v5750;

	i8 v5752 = (i8)(intptr_t)(ws+3392);
	i8 v5753 = *(i8*)(intptr_t)v5752;
	i8 v5754 = v5753+(+24);
	i8 v5755 = *(i8*)(intptr_t)v5754;
	i8 v5756 = (i8)(intptr_t)(ws+3384);
	i8 v5757 = *(i8*)(intptr_t)v5756;
	*(i8*)(intptr_t)v5757 = v5755;

	i8 v5758 = (i8)(intptr_t)(ws+3352);
	i8 v5759 = *(i8*)(intptr_t)v5758;
	i8 v5760 = (i8)(intptr_t)(ws+3392);
	i8 v5761 = *(i8*)(intptr_t)v5760;
	i8 v5762 = v5761+(+24);
	*(i8*)(intptr_t)v5762 = v5759;

	i8 v5763 = (i8)(intptr_t)(ws+3392);
	i8 v5764 = *(i8*)(intptr_t)v5763;
	i8 v5765 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5765 = v5764;

	goto c02_0489;

c02_048c:;

endsub:;
}
	void f100_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f99_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f263_QueueNamespace(i8 /* namespace */);
	void f263_QueueNamespace(i8 /* namespace */);
	void f34_Free(i8 /* block */);
	void f67_FreeType(i8 /* type */);
	void f34_Free(i8 /* block */);
	void f34_Free(i8 /* block */);
	void f65_FreeSymbol(i8 /* symbol */);

// DestructSubroutineContents workspace at ws+3344 length ws+40
void f262_DestructSubroutineContents(i8 p5740 /* subr */) {
	*(i8*)(intptr_t)(ws+3344) = p5740; /*subr */

	i8 v5741 = (i8)+0;
	i8 v5742 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5742 = v5741;


	i8 v5766 = (i8)(intptr_t)(ws+3344);
	i8 v5767 = *(i8*)(intptr_t)v5766;
	i8 v5768 = v5767+(+81);
	i1 v5769 = *(i1*)(intptr_t)v5768;
	i1 v5770 = (i1)+0;
	if (v5769==v5770) goto c02_0491; else goto c02_0490;

c02_0490:;

	i8 v5771 = (i8)(intptr_t)(ws+3344);
	i8 v5772 = *(i8*)(intptr_t)v5771;
	i8 v5773 = (i8)(intptr_t)(ws+3344);
	i8 v5774 = *(i8*)(intptr_t)v5773;
	i8 v5775 = v5774+(+81);
	i1 v5776 = *(i1*)(intptr_t)v5775;
	i1 v5777 = v5776+(-1);
	i8 v5778 = (i8)(intptr_t)(f100_GetOutputParameter);
	i8 v5779;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v5778)(&v5779, v5777, v5772);
	i8 v5780 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v5780 = v5779;

	goto c02_048d;

c02_0491:;

	i8 v5781 = (i8)(intptr_t)(ws+3344);
	i8 v5782 = *(i8*)(intptr_t)v5781;
	i8 v5783 = v5782+(+80);
	i1 v5784 = *(i1*)(intptr_t)v5783;
	i1 v5785 = (i1)+0;
	if (v5784==v5785) goto c02_0495; else goto c02_0494;

c02_0494:;

	i8 v5786 = (i8)(intptr_t)(ws+3344);
	i8 v5787 = *(i8*)(intptr_t)v5786;
	i8 v5788 = (i8)(intptr_t)(ws+3344);
	i8 v5789 = *(i8*)(intptr_t)v5788;
	i8 v5790 = v5789+(+80);
	i1 v5791 = *(i1*)(intptr_t)v5790;
	i1 v5792 = v5791+(-1);
	i8 v5793 = (i8)(intptr_t)(f99_GetInputParameter);
	i8 v5794;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v5793)(&v5794, v5792, v5787);
	i8 v5795 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v5795 = v5794;

	goto c02_048d;

c02_0495:;

	i8 v5796 = (i8)+0;
	i8 v5797 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v5797 = v5796;

c02_048d:;

	i8 v5798 = (i8)(intptr_t)(ws+3344);
	i8 v5799 = *(i8*)(intptr_t)v5798;
	i8 v5800 = v5799+(+16);
	i8 v5801 = *(i8*)(intptr_t)v5800;
	i8 v5802 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5802 = v5801;

	i8 v5803 = (i8)(intptr_t)(ws+3360);
	i8 v5804 = *(i8*)(intptr_t)v5803;
	i8 v5805 = (i8)+0;
	if (v5804==v5805) goto c02_049a; else goto c02_0499;

c02_0499:;

	i8 v5806 = (i8)(intptr_t)(ws+3360);
	i8 v5807 = *(i8*)(intptr_t)v5806;
	i8 v5808 = v5807+(+24);
	i8 v5809 = *(i8*)(intptr_t)v5808;
	i8 v5810 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5810 = v5809;

c02_049a:;

c02_0496:;

c02_049d:;

	i8 v5811 = (i8)(intptr_t)(ws+3352);
	i8 v5812 = *(i8*)(intptr_t)v5811;
	i8 v5813 = (i8)+0;
	if (v5812==v5813) goto c02_04a0; else goto c02_049f;

c02_049f:;

	i8 v5814 = (i8)(intptr_t)(ws+3352);
	i8 v5815 = *(i8*)(intptr_t)v5814;
	i8 v5816 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v5816 = v5815;

	i8 v5817 = (i8)(intptr_t)(ws+3352);
	i8 v5818 = *(i8*)(intptr_t)v5817;
	i8 v5819 = v5818+(+24);
	i8 v5820 = *(i8*)(intptr_t)v5819;
	i8 v5821 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5821 = v5820;

	i8 v5822 = (i8)(intptr_t)(ws+3368);
	i8 v5823 = *(i8*)(intptr_t)v5822;
	i8 v5824 = v5823+(+32);
	i1 v5825 = *(i1*)(intptr_t)v5824;

	if (v5825 != +30) goto c02_04a2;

	i8 v5826 = (i8)(intptr_t)(ws+3368);
	i8 v5827 = *(i8*)(intptr_t)v5826;
	i8 v5828 = *(i8*)(intptr_t)v5827;
	i8 v5829 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v5829 = v5828;

	i8 v5830 = (i8)(intptr_t)(ws+3376);
	i8 v5831 = *(i8*)(intptr_t)v5830;
	i8 v5832 = v5831+(+52);
	i1 v5833 = *(i1*)(intptr_t)v5832;

	if (v5833 != +5) goto c02_04a4;

	i8 v5834 = (i8)(intptr_t)(ws+3376);
	i8 v5835 = *(i8*)(intptr_t)v5834;
	i8 v5836 = (i8)(intptr_t)(f263_QueueNamespace);

	((void(*)(i8 /* namespace */))(intptr_t)v5836)(v5835);

	goto c02_04a3;

c02_04a4:;

	if (v5833 != +6) goto c02_04a5;

	i8 v5837 = (i8)(intptr_t)(ws+3376);
	i8 v5838 = *(i8*)(intptr_t)v5837;
	i8 v5839 = *(i8*)(intptr_t)v5838;
	i8 v5840 = v5839+(+16);
	i8 v5841 = (i8)(intptr_t)(f263_QueueNamespace);

	((void(*)(i8 /* namespace */))(intptr_t)v5841)(v5840);

	i8 v5842 = (i8)(intptr_t)(ws+3376);
	i8 v5843 = *(i8*)(intptr_t)v5842;
	i8 v5844 = *(i8*)(intptr_t)v5843;
	i8 v5845 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v5845)(v5844);

c02_04a5:;

c02_04a3:;


	i8 v5846 = (i8)(intptr_t)(ws+3376);
	i8 v5847 = *(i8*)(intptr_t)v5846;
	i8 v5848 = (i8)(intptr_t)(f67_FreeType);

	((void(*)(i8 /* type */))(intptr_t)v5848)(v5847);

	goto c02_04a1;

c02_04a2:;

	if (v5825 != +28) goto c02_04a6;

	i8 v5849 = (i8)(intptr_t)(ws+3368);
	i8 v5850 = *(i8*)(intptr_t)v5849;
	i8 v5851 = *(i8*)(intptr_t)v5850;
	i8 v5852 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v5852)(v5851);

c02_04a6:;

c02_04a1:;


	i8 v5853 = (i8)(intptr_t)(ws+3368);
	i8 v5854 = *(i8*)(intptr_t)v5853;
	i8 v5855 = v5854+(+8);
	i8 v5856 = *(i8*)(intptr_t)v5855;
	i8 v5857 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v5857)(v5856);

	i8 v5858 = (i8)(intptr_t)(ws+3368);
	i8 v5859 = *(i8*)(intptr_t)v5858;
	i8 v5860 = (i8)(intptr_t)(f65_FreeSymbol);

	((void(*)(i8 /* symbol */))(intptr_t)v5860)(v5859);

	goto c02_049d;

c02_04a0:;

	i8 v5861 = (i8)(intptr_t)(ws+3360);
	i8 v5862 = *(i8*)(intptr_t)v5861;
	i8 v5863 = (i8)+0;
	if (v5862==v5863) goto c02_04ab; else goto c02_04aa;

c02_04aa:;

	i8 v5864 = (i8)+0;
	i8 v5865 = (i8)(intptr_t)(ws+3360);
	i8 v5866 = *(i8*)(intptr_t)v5865;
	i8 v5867 = v5866+(+24);
	*(i8*)(intptr_t)v5867 = v5864;

	goto c02_04a7;

c02_04ab:;

	i8 v5868 = (i8)+0;
	i8 v5869 = (i8)(intptr_t)(ws+3344);
	i8 v5870 = *(i8*)(intptr_t)v5869;
	i8 v5871 = v5870+(+16);
	*(i8*)(intptr_t)v5871 = v5868;

c02_04a7:;

	i8 v5872 = (i8)(intptr_t)(ws+3360);
	i8 v5873 = *(i8*)(intptr_t)v5872;
	i8 v5874 = (i8)(intptr_t)(ws+3344);
	i8 v5875 = *(i8*)(intptr_t)v5874;
	i8 v5876 = v5875+(+24);
	*(i8*)(intptr_t)v5876 = v5873;

endsub:;
}
	void f72_InternalStrDup(i8* /* news */, i8 /* s */);
	void f220_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);

// CopyParameterList workspace at ws+3336 length ws+32
void f264_CopyParameterList(i8 p5877 /* subr */, i8 p5878 /* param */) {
	*(i8*)(intptr_t)(ws+3336) = p5878; /*param */
	*(i8*)(intptr_t)(ws+3344) = p5877; /*subr */

	i8 v5879 = (i8)+0;
	i8 v5880 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5880 = v5879;

c02_04ae:;

	i8 v5881 = (i8)(intptr_t)(ws+3336);
	i8 v5882 = *(i8*)(intptr_t)v5881;
	i8 v5883 = (i8)+0;
	if (v5882==v5883) goto c02_04b1; else goto c02_04b0;

c02_04b0:;

	i8 v5884 = (i8)(intptr_t)(ws+3344);
	i8 v5885 = *(i8*)(intptr_t)v5884;
	i8 v5886 = v5885+(+16);
	i8 v5887 = (i8)(intptr_t)(ws+3336);
	i8 v5888 = *(i8*)(intptr_t)v5887;
	i8 v5889 = v5888+(+8);
	i8 v5890 = *(i8*)(intptr_t)v5889;
	i8 v5891 = (i8)(intptr_t)(f72_InternalStrDup);
	i8 v5892;

	((void(*)(i8* /* news */, i8 /* s */))(intptr_t)v5891)(&v5892, v5890);
	i8 v5893 = (i8)(intptr_t)(f220_AddSymbol);
	i8 v5894;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v5893)(&v5894, v5892, v5886);
	i8 v5895 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v5895 = v5894;

	i1 v5896 = (i1)+28;
	i8 v5897 = (i8)(intptr_t)(ws+3360);
	i8 v5898 = *(i8*)(intptr_t)v5897;
	i8 v5899 = v5898+(+32);
	*(i1*)(intptr_t)v5899 = v5896;

	i8 v5900 = (i8)+27;
	i8 v5901 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v5902;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v5901)(&v5902, v5900);
	i8 v5903 = (i8)(intptr_t)(ws+3360);
	i8 v5904 = *(i8*)(intptr_t)v5903;
	*(i8*)(intptr_t)v5904 = v5902;

	i8 v5905 = (i8)(intptr_t)(ws+3336);
	i8 v5906 = *(i8*)(intptr_t)v5905;
	i8 v5907 = *(i8*)(intptr_t)v5906;
	i8 v5908 = *(i8*)(intptr_t)v5907;
	i8 v5909 = (i8)(intptr_t)(ws+3360);
	i8 v5910 = *(i8*)(intptr_t)v5909;
	i8 v5911 = *(i8*)(intptr_t)v5910;
	*(i8*)(intptr_t)v5911 = v5908;

	i8 v5912 = (i8)(intptr_t)(ws+3336);
	i8 v5913 = *(i8*)(intptr_t)v5912;
	i8 v5914 = *(i8*)(intptr_t)v5913;
	i8 v5915 = v5914+(+8);
	i8 v5916 = *(i8*)(intptr_t)v5915;
	i8 v5917 = (i8)(intptr_t)(ws+3360);
	i8 v5918 = *(i8*)(intptr_t)v5917;
	i8 v5919 = *(i8*)(intptr_t)v5918;
	i8 v5920 = v5919+(+8);
	*(i8*)(intptr_t)v5920 = v5916;

	i8 v5921 = (i8)(intptr_t)(ws+3336);
	i8 v5922 = *(i8*)(intptr_t)v5921;
	i8 v5923 = *(i8*)(intptr_t)v5922;
	i8 v5924 = v5923+(+26);
	i1 v5925 = *(i1*)(intptr_t)v5924;
	i8 v5926 = (i8)(intptr_t)(ws+3360);
	i8 v5927 = *(i8*)(intptr_t)v5926;
	i8 v5928 = *(i8*)(intptr_t)v5927;
	i8 v5929 = v5928+(+26);
	*(i1*)(intptr_t)v5929 = v5925;

	i8 v5930 = (i8)(intptr_t)(ws+3336);
	i8 v5931 = *(i8*)(intptr_t)v5930;
	i8 v5932 = *(i8*)(intptr_t)v5931;
	i8 v5933 = v5932+(+24);
	i2 v5934 = *(i2*)(intptr_t)v5933;
	i8 v5935 = (i8)(intptr_t)(ws+3360);
	i8 v5936 = *(i8*)(intptr_t)v5935;
	i8 v5937 = *(i8*)(intptr_t)v5936;
	i8 v5938 = v5937+(+24);
	*(i2*)(intptr_t)v5938 = v5934;

	i8 v5939 = (i8)(intptr_t)(ws+3352);
	i8 v5940 = *(i8*)(intptr_t)v5939;
	i8 v5941 = (i8)+0;
	if (v5940==v5941) goto c02_04b6; else goto c02_04b5;

c02_04b5:;

	i8 v5942 = (i8)(intptr_t)(ws+3360);
	i8 v5943 = *(i8*)(intptr_t)v5942;
	i8 v5944 = (i8)(intptr_t)(ws+3352);
	i8 v5945 = *(i8*)(intptr_t)v5944;
	i8 v5946 = *(i8*)(intptr_t)v5945;
	i8 v5947 = v5946+(+16);
	*(i8*)(intptr_t)v5947 = v5943;

c02_04b6:;

c02_04b2:;

	i8 v5948 = (i8)(intptr_t)(ws+3360);
	i8 v5949 = *(i8*)(intptr_t)v5948;
	i8 v5950 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5950 = v5949;

	i8 v5951 = (i8)(intptr_t)(ws+3336);
	i8 v5952 = *(i8*)(intptr_t)v5951;
	i8 v5953 = *(i8*)(intptr_t)v5952;
	i8 v5954 = v5953+(+16);
	i8 v5955 = *(i8*)(intptr_t)v5954;
	i8 v5956 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v5956 = v5955;

	goto c02_04ae;

c02_04b1:;

endsub:;
}
	void f66_AllocNewType(i8* /* type */);
	void f64_AllocNewSymbol(i8* /* symbol */);
const i1 c02_s0109[] = { 0x5f,0x5f,0x6d,0x61,0x69,0x6e,0 };
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f219_AddToNamespace(i8 /* symbol */, i8 /* namespace */);

// CreateMainSubroutine workspace at ws+3208 length ws+16
void f265_CreateMainSubroutine(void) {

	i8 v5957 = (i8)(intptr_t)(f66_AllocNewType);
	i8 v5958;

	((void(*)(i8* /* type */))(intptr_t)v5957)(&v5958);
	i8 v5959 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v5959 = v5958;

	i1 v5960 = (i1)+6;
	i8 v5961 = (i8)(intptr_t)(ws+3208);
	i8 v5962 = *(i8*)(intptr_t)v5961;
	i8 v5963 = v5962+(+52);
	*(i1*)(intptr_t)v5963 = v5960;

	i8 v5964 = (i8)(intptr_t)(f64_AllocNewSymbol);
	i8 v5965;

	((void(*)(i8* /* symbol */))(intptr_t)v5964)(&v5965);
	i8 v5966 = (i8)(intptr_t)(ws+3216);
	*(i8*)(intptr_t)v5966 = v5965;

	i1 v5967 = (i1)+30;
	i8 v5968 = (i8)(intptr_t)(ws+3216);
	i8 v5969 = *(i8*)(intptr_t)v5968;
	i8 v5970 = v5969+(+32);
	*(i1*)(intptr_t)v5970 = v5967;

	i8 v5971 = (i8)(intptr_t)c02_s0109;
	i8 v5972 = (i8)(intptr_t)(ws+3216);
	i8 v5973 = *(i8*)(intptr_t)v5972;
	i8 v5974 = v5973+(+8);
	*(i8*)(intptr_t)v5974 = v5971;

	i8 v5975 = (i8)(intptr_t)(ws+3208);
	i8 v5976 = *(i8*)(intptr_t)v5975;
	i8 v5977 = (i8)(intptr_t)(ws+3216);
	i8 v5978 = *(i8*)(intptr_t)v5977;
	*(i8*)(intptr_t)v5978 = v5976;

	i8 v5979 = (i8)(intptr_t)(ws+3216);
	i8 v5980 = *(i8*)(intptr_t)v5979;
	i8 v5981 = (i8)(intptr_t)(ws+3208);
	i8 v5982 = *(i8*)(intptr_t)v5981;
	i8 v5983 = v5982+(+32);
	*(i8*)(intptr_t)v5983 = v5980;

	i8 v5984 = (i8)+83;
	i8 v5985 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v5986;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v5985)(&v5986, v5984);
	i8 v5987 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v5987 = v5986;

	i8 v5988 = (i8)(intptr_t)(ws+3216);
	i8 v5989 = *(i8*)(intptr_t)v5988;
	i8 v5990 = (i8)(intptr_t)(ws+40);
	i8 v5991 = *(i8*)(intptr_t)v5990;
	*(i8*)(intptr_t)v5991 = v5989;

	i8 v5992 = (i8)(intptr_t)(ws+3208);
	i8 v5993 = *(i8*)(intptr_t)v5992;
	i8 v5994 = (i8)(intptr_t)(ws+40);
	i8 v5995 = *(i8*)(intptr_t)v5994;
	i8 v5996 = v5995+(+40);
	*(i8*)(intptr_t)v5996 = v5993;

	i8 v5997 = (i8)(intptr_t)(ws+40);
	i8 v5998 = *(i8*)(intptr_t)v5997;
	i8 v5999 = (i8)(intptr_t)(ws+40);
	i8 v6000 = *(i8*)(intptr_t)v5999;
	i8 v6001 = v6000+(+48);
	*(i8*)(intptr_t)v6001 = v5998;

	i8 v6002 = (i8)(intptr_t)(ws+40);
	i8 v6003 = *(i8*)(intptr_t)v6002;
	i8 v6004 = (i8)(intptr_t)(ws+3208);
	i8 v6005 = *(i8*)(intptr_t)v6004;
	*(i8*)(intptr_t)v6005 = v6003;

	i8 v6006 = (i8)(intptr_t)(ws+40);
	i8 v6007 = *(i8*)(intptr_t)v6006;
	i8 v6008 = v6007+(+16);
	i8 v6009 = (i8)(intptr_t)(ws+3216);
	i8 v6010 = *(i8*)(intptr_t)v6009;
	i8 v6011 = (i8)(intptr_t)(f219_AddToNamespace);

	((void(*)(i8 /* symbol */, i8 /* namespace */))(intptr_t)v6011)(v6010, v6008);

endsub:;
}
	void f203_EmitterDeclareWorkspace(i2 /* workspace */, i1 /* wid */, i8 /* subr */);

// ReportWorkspaces workspace at ws+3344 length ws+12
void f266_ReportWorkspaces(i8 p6012 /* subr */) {
	*(i8*)(intptr_t)(ws+3344) = p6012; /*subr */

	i1 v6013 = (i1)+0;
	i8 v6014 = (i8)(intptr_t)(ws+3352);
	*(i1*)(intptr_t)v6014 = v6013;

c02_04b9:;

	i8 v6015 = (i8)(intptr_t)(ws+3352);
	i1 v6016 = *(i1*)(intptr_t)v6015;
	i1 v6017 = (i1)+4;
	if (v6016==v6017) goto c02_04bc; else goto c02_04bb;

c02_04bb:;

	i8 v6018 = (i8)(intptr_t)(ws+3344);
	i8 v6019 = *(i8*)(intptr_t)v6018;
	i8 v6020 = v6019+(+58);
	i8 v6021 = (i8)(intptr_t)(ws+3352);
	i1 v6022 = *(i1*)(intptr_t)v6021;
	i8 v6023 = v6022;
	i1 v6024 = (i1)+1;
	i8 v6025 = ((i8)v6023)<<v6024;
	i8 v6026 = v6020+v6025;
	i2 v6027 = *(i2*)(intptr_t)v6026;
	i8 v6028 = (i8)(intptr_t)(ws+3354);
	*(i2*)(intptr_t)v6028 = v6027;

	i8 v6029 = (i8)(intptr_t)(ws+3354);
	i2 v6030 = *(i2*)(intptr_t)v6029;
	i2 v6031 = (i2)+0;
	if (v6030==v6031) goto c02_04c1; else goto c02_04c0;

c02_04c0:;

	i8 v6032 = (i8)(intptr_t)(ws+3344);
	i8 v6033 = *(i8*)(intptr_t)v6032;
	i8 v6034 = (i8)(intptr_t)(ws+3352);
	i1 v6035 = *(i1*)(intptr_t)v6034;
	i8 v6036 = (i8)(intptr_t)(ws+3354);
	i2 v6037 = *(i2*)(intptr_t)v6036;
	i8 v6038 = (i8)(intptr_t)(f203_EmitterDeclareWorkspace);

	((void(*)(i2 /* workspace */, i1 /* wid */, i8 /* subr */))(intptr_t)v6038)(v6037, v6035, v6033);

c02_04c1:;

c02_04bd:;

	i8 v6039 = (i8)(intptr_t)(ws+3352);
	i1 v6040 = *(i1*)(intptr_t)v6039;
	i1 v6041 = v6040+(+1);
	i8 v6042 = (i8)(intptr_t)(ws+3352);
	*(i1*)(intptr_t)v6042 = v6041;

	goto c02_04b9;

c02_04bc:;

endsub:;
}
	void f74_StartError(void);
	void f12_print(i8 /* ptr */);
const i1 c02_s010a[] = { 0x20,0x61,0x6e,0x64,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s010b[] = { 0x20,0x61,0x72,0x65,0x20,0x6e,0x6f,0x74,0x20,0x63,0x6f,0x6d,0x70,0x61,0x74,0x69,0x62,0x6c,0x65,0x20,0x69,0x6e,0x20,0x74,0x68,0x69,0x73,0x20,0x63,0x6f,0x6e,0x74,0x65,0x78,0x74,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// expr_i_cant_do_that workspace at ws+3424 length ws+16
void f267_expr_i_cant_do_that(i8 p6043 /* rhs */, i8 p6044 /* lhs */) {
	*(i8*)(intptr_t)(ws+3424) = p6044; /*lhs */
	*(i8*)(intptr_t)(ws+3432) = p6043; /*rhs */

	i8 v6045 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v6045)();

	i8 v6046 = (i8)(intptr_t)(ws+3424);
	i8 v6047 = *(i8*)(intptr_t)v6046;
	i8 v6048 = v6047+(+16);
	i8 v6049 = *(i8*)(intptr_t)v6048;
	i8 v6050 = v6049+(+32);
	i8 v6051 = *(i8*)(intptr_t)v6050;
	i8 v6052 = v6051+(+8);
	i8 v6053 = *(i8*)(intptr_t)v6052;
	i8 v6054 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6054)(v6053);

	i8 v6055 = (i8)(intptr_t)c02_s010a;
	i8 v6056 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6056)(v6055);

	i8 v6057 = (i8)(intptr_t)(ws+3432);
	i8 v6058 = *(i8*)(intptr_t)v6057;
	i8 v6059 = v6058+(+16);
	i8 v6060 = *(i8*)(intptr_t)v6059;
	i8 v6061 = v6060+(+32);
	i8 v6062 = *(i8*)(intptr_t)v6061;
	i8 v6063 = v6062+(+8);
	i8 v6064 = *(i8*)(intptr_t)v6063;
	i8 v6065 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6065)(v6064);

	i8 v6066 = (i8)(intptr_t)c02_s010b;
	i8 v6067 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6067)(v6066);

	i8 v6068 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v6068)();

endsub:;
}
	void f74_StartError(void);
const i1 c02_s010c[] = { 0x74,0x79,0x70,0x65,0x20,0x6d,0x69,0x73,0x6d,0x61,0x74,0x63,0x68,0x3a,0x20,0x65,0x78,0x70,0x72,0x65,0x73,0x73,0x69,0x6f,0x6e,0x20,0x77,0x61,0x73,0x20,0x61,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s010d[] = { 0x2c,0x20,0x75,0x73,0x65,0x64,0x20,0x77,0x68,0x65,0x6e,0x20,0x61,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s010e[] = { 0x20,0x77,0x61,0x73,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);
	void f231_IsScalar(i1* /* result */, i8 /* type */);
	void f74_StartError(void);
	void f12_print(i8 /* ptr */);
const i1 c02_s010f[] = { 0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x62,0x65,0x20,0x75,0x73,0x65,0x64,0x20,0x68,0x65,0x72,0x65,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// CheckExpressionType workspace at ws+3392 length ws+16
void f268_CheckExpressionType(i8 p6069 /* type */, i8 p6070 /* node */) {
	*(i8*)(intptr_t)(ws+3392) = p6070; /*node */
	*(i8*)(intptr_t)(ws+3400) = p6069; /*type */

	i8 v6071 = (i8)(intptr_t)(ws+3392);
	i8 v6072 = *(i8*)(intptr_t)v6071;
	i8 v6073 = v6072+(+16);
	i8 v6074 = *(i8*)(intptr_t)v6073;
	i8 v6075 = (i8)+0;
	if (v6074==v6075) goto c02_04c5; else goto c02_04c6;

c02_04c5:;

	i8 v6076 = (i8)(intptr_t)(ws+3400);
	i8 v6077 = *(i8*)(intptr_t)v6076;
	i8 v6078 = (i8)(intptr_t)(ws+3392);
	i8 v6079 = *(i8*)(intptr_t)v6078;
	i8 v6080 = v6079+(+16);
	*(i8*)(intptr_t)v6080 = v6077;

c02_04c6:;

c02_04c2:;

	i8 v6081 = (i8)(intptr_t)(ws+3392);
	i8 v6082 = *(i8*)(intptr_t)v6081;
	i8 v6083 = v6082+(+16);
	i8 v6084 = *(i8*)(intptr_t)v6083;
	i8 v6085 = (i8)(intptr_t)(ws+3400);
	i8 v6086 = *(i8*)(intptr_t)v6085;
	if (v6084==v6086) goto c02_04cb; else goto c02_04ca;

c02_04ca:;

	i8 v6087 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v6087)();

	i8 v6088 = (i8)(intptr_t)c02_s010c;
	i8 v6089 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6089)(v6088);

	i8 v6090 = (i8)(intptr_t)(ws+3392);
	i8 v6091 = *(i8*)(intptr_t)v6090;
	i8 v6092 = v6091+(+16);
	i8 v6093 = *(i8*)(intptr_t)v6092;
	i8 v6094 = v6093+(+32);
	i8 v6095 = *(i8*)(intptr_t)v6094;
	i8 v6096 = v6095+(+8);
	i8 v6097 = *(i8*)(intptr_t)v6096;
	i8 v6098 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6098)(v6097);

	i8 v6099 = (i8)(intptr_t)c02_s010d;
	i8 v6100 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6100)(v6099);

	i8 v6101 = (i8)(intptr_t)(ws+3400);
	i8 v6102 = *(i8*)(intptr_t)v6101;
	i8 v6103 = v6102+(+32);
	i8 v6104 = *(i8*)(intptr_t)v6103;
	i8 v6105 = v6104+(+8);
	i8 v6106 = *(i8*)(intptr_t)v6105;
	i8 v6107 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6107)(v6106);

	i8 v6108 = (i8)(intptr_t)c02_s010e;
	i8 v6109 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6109)(v6108);

	i8 v6110 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v6110)();

c02_04cb:;

c02_04c7:;

	i8 v6111 = (i8)(intptr_t)(ws+3400);
	i8 v6112 = *(i8*)(intptr_t)v6111;
	i8 v6113 = (i8)(intptr_t)(f231_IsScalar);
	i1 v6114;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6113)(&v6114, v6112);
	i1 v6115 = (i1)+0;
	if (v6114==v6115) goto c02_04cf; else goto c02_04d0;

c02_04cf:;

	i8 v6116 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v6116)();

	i8 v6117 = (i8)(intptr_t)(ws+3400);
	i8 v6118 = *(i8*)(intptr_t)v6117;
	i8 v6119 = v6118+(+32);
	i8 v6120 = *(i8*)(intptr_t)v6119;
	i8 v6121 = v6120+(+8);
	i8 v6122 = *(i8*)(intptr_t)v6121;
	i8 v6123 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6123)(v6122);

	i8 v6124 = (i8)(intptr_t)c02_s010f;
	i8 v6125 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6125)(v6124);

	i8 v6126 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v6126)();

c02_04d0:;

c02_04cc:;

endsub:;
}
	void f229_IsNum(i1* /* result */, i8 /* type */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s0110[] = { 0x6c,0x68,0x73,0x2e,0x74,0x79,0x70,0x65,0x3d,0 };
	void f12_print(i8 /* ptr */);
	void f21_print_hex_i32(i4 /* value */);
	void f13_print_nl(void);
const i1 c02_s0111[] = { 0x72,0x68,0x73,0x2e,0x74,0x79,0x70,0x65,0x3d,0 };
	void f12_print(i8 /* ptr */);
	void f21_print_hex_i32(i4 /* value */);
	void f13_print_nl(void);
const i1 c02_s0112[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x75,0x73,0x65,0x20,0x61,0x6e,0x20,0x75,0x6e,0x74,0x79,0x70,0x65,0x64,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x69,0x6e,0x20,0x74,0x68,0x69,0x73,0x20,0x63,0x6f,0x6e,0x74,0x65,0x78,0x74,0 };
	void f76_SimpleError(i8 /* message */);
	void f229_IsNum(i1* /* result */, i8 /* type */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s0113[] = { 0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0x20,0x6d,0x61,0x79,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x70,0x70,0x65,0x61,0x72,0x20,0x6f,0x6e,0x20,0x74,0x68,0x65,0x20,0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x61,0x6e,0x20,0x61,0x64,0x64,0x69,0x74,0x69,0x6f,0x6e,0x20,0x6f,0x72,0x20,0x73,0x75,0x62,0x74,0x72,0x61,0x63,0x74,0x69,0x6f,0x6e,0 };
	void f76_SimpleError(i8 /* message */);

// ResolveUntypedConstantsForAddOrSub workspace at ws+3368 length ws+16
void f269_ResolveUntypedConstantsForAddOrSub(i8 p6127 /* rhs */, i8 p6128 /* lhs */) {
	*(i8*)(intptr_t)(ws+3368) = p6128; /*lhs */
	*(i8*)(intptr_t)(ws+3376) = p6127; /*rhs */

	i8 v6129 = (i8)(intptr_t)(ws+3368);
	i8 v6130 = *(i8*)(intptr_t)v6129;
	i8 v6131 = v6130+(+16);
	i8 v6132 = *(i8*)(intptr_t)v6131;
	i8 v6133 = (i8)+0;
	if (v6132==v6133) goto c02_04d7; else goto c02_04d8;

c02_04d8:;

	i8 v6134 = (i8)(intptr_t)(ws+3376);
	i8 v6135 = *(i8*)(intptr_t)v6134;
	i8 v6136 = v6135+(+16);
	i8 v6137 = *(i8*)(intptr_t)v6136;
	i8 v6138 = (i8)+0;
	if (v6137==v6138) goto c02_04d6; else goto c02_04d7;

c02_04d6:;

	i8 v6139 = (i8)(intptr_t)(ws+3368);
	i8 v6140 = *(i8*)(intptr_t)v6139;
	i8 v6141 = v6140+(+16);
	i8 v6142 = *(i8*)(intptr_t)v6141;
	i8 v6143 = (i8)(intptr_t)(f229_IsNum);
	i1 v6144;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6143)(&v6144, v6142);
	i1 v6145 = (i1)+0;
	if (v6144==v6145) goto c02_04dd; else goto c02_04dc;

c02_04dc:;

	i8 v6146 = (i8)(intptr_t)(ws+3368);
	i8 v6147 = *(i8*)(intptr_t)v6146;
	i8 v6148 = v6147+(+16);
	i8 v6149 = *(i8*)(intptr_t)v6148;
	i8 v6150 = (i8)(intptr_t)(ws+3376);
	i8 v6151 = *(i8*)(intptr_t)v6150;
	i8 v6152 = v6151+(+16);
	*(i8*)(intptr_t)v6152 = v6149;

	goto c02_04d9;

c02_04dd:;

	i8 v6153 = (i8)(intptr_t)(ws+3368);
	i8 v6154 = *(i8*)(intptr_t)v6153;
	i8 v6155 = v6154+(+16);
	i8 v6156 = *(i8*)(intptr_t)v6155;
	i8 v6157 = (i8)(intptr_t)(f68_IsPtr);
	i1 v6158;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6157)(&v6158, v6156);
	i1 v6159 = (i1)+0;
	if (v6158==v6159) goto c02_04e1; else goto c02_04e0;

c02_04e0:;

	i8 v6160 = (i8)(intptr_t)(ws+1528);
	i8 v6161 = *(i8*)(intptr_t)v6160;
	i8 v6162 = (i8)(intptr_t)(ws+3376);
	i8 v6163 = *(i8*)(intptr_t)v6162;
	i8 v6164 = v6163+(+16);
	*(i8*)(intptr_t)v6164 = v6161;

	goto c02_04d9;

c02_04e1:;

	i8 v6165 = (i8)(intptr_t)c02_s0110;
	i8 v6166 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6166)(v6165);

	i8 v6167 = (i8)(intptr_t)(ws+3368);
	i8 v6168 = *(i8*)(intptr_t)v6167;
	i8 v6169 = v6168+(+16);
	i8 v6170 = *(i8*)(intptr_t)v6169;
	i4 v6171 = v6170;
	i8 v6172 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v6172)(v6171);

	i8 v6173 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6173)();

	i8 v6174 = (i8)(intptr_t)c02_s0111;
	i8 v6175 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6175)(v6174);

	i8 v6176 = (i8)(intptr_t)(ws+3376);
	i8 v6177 = *(i8*)(intptr_t)v6176;
	i8 v6178 = v6177+(+16);
	i8 v6179 = *(i8*)(intptr_t)v6178;
	i4 v6180 = v6179;
	i8 v6181 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v6181)(v6180);

	i8 v6182 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6182)();

	i8 v6183 = (i8)(intptr_t)c02_s0112;
	i8 v6184 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6184)(v6183);

c02_04d9:;

c02_04d7:;

c02_04d1:;

	i8 v6185 = (i8)(intptr_t)(ws+3368);
	i8 v6186 = *(i8*)(intptr_t)v6185;
	i8 v6187 = v6186+(+16);
	i8 v6188 = *(i8*)(intptr_t)v6187;
	i8 v6189 = (i8)+0;
	if (v6188==v6189) goto c02_04e9; else goto c02_04e8;

c02_04e9:;

	i8 v6190 = (i8)(intptr_t)(ws+3376);
	i8 v6191 = *(i8*)(intptr_t)v6190;
	i8 v6192 = v6191+(+16);
	i8 v6193 = *(i8*)(intptr_t)v6192;
	i8 v6194 = (i8)+0;
	if (v6193==v6194) goto c02_04e8; else goto c02_04e7;

c02_04e7:;

	i8 v6195 = (i8)(intptr_t)(ws+3376);
	i8 v6196 = *(i8*)(intptr_t)v6195;
	i8 v6197 = v6196+(+16);
	i8 v6198 = *(i8*)(intptr_t)v6197;
	i8 v6199 = (i8)(intptr_t)(f229_IsNum);
	i1 v6200;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6199)(&v6200, v6198);
	i1 v6201 = (i1)+0;
	if (v6200==v6201) goto c02_04ee; else goto c02_04ed;

c02_04ed:;

	i8 v6202 = (i8)(intptr_t)(ws+3376);
	i8 v6203 = *(i8*)(intptr_t)v6202;
	i8 v6204 = v6203+(+16);
	i8 v6205 = *(i8*)(intptr_t)v6204;
	i8 v6206 = (i8)(intptr_t)(ws+3368);
	i8 v6207 = *(i8*)(intptr_t)v6206;
	i8 v6208 = v6207+(+16);
	*(i8*)(intptr_t)v6208 = v6205;

	goto c02_04ea;

c02_04ee:;

	i8 v6209 = (i8)(intptr_t)(ws+3376);
	i8 v6210 = *(i8*)(intptr_t)v6209;
	i8 v6211 = v6210+(+16);
	i8 v6212 = *(i8*)(intptr_t)v6211;
	i8 v6213 = (i8)(intptr_t)(f68_IsPtr);
	i1 v6214;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6213)(&v6214, v6212);
	i1 v6215 = (i1)+0;
	if (v6214==v6215) goto c02_04f2; else goto c02_04f1;

c02_04f1:;

	i8 v6216 = (i8)(intptr_t)c02_s0113;
	i8 v6217 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6217)(v6216);

c02_04f2:;

c02_04ea:;

c02_04e8:;

c02_04e2:;

endsub:;
}
	void f267_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// ResolveUntypedConstantsSimply workspace at ws+3392 length ws+32
void f270_ResolveUntypedConstantsSimply(i8 p6218 /* rhs */, i8 p6219 /* lhs */) {
	*(i8*)(intptr_t)(ws+3392) = p6219; /*lhs */
	*(i8*)(intptr_t)(ws+3400) = p6218; /*rhs */

	i8 v6220 = (i8)(intptr_t)(ws+3392);
	i8 v6221 = *(i8*)(intptr_t)v6220;
	i8 v6222 = v6221+(+16);
	i8 v6223 = *(i8*)(intptr_t)v6222;
	i8 v6224 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v6224 = v6223;

	i8 v6225 = (i8)(intptr_t)(ws+3400);
	i8 v6226 = *(i8*)(intptr_t)v6225;
	i8 v6227 = v6226+(+16);
	i8 v6228 = *(i8*)(intptr_t)v6227;
	i8 v6229 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6229 = v6228;

	i8 v6230 = (i8)(intptr_t)(ws+3408);
	i8 v6231 = *(i8*)(intptr_t)v6230;
	i8 v6232 = (i8)+0;
	if (v6231==v6232) goto c02_04f9; else goto c02_04fa;

c02_04fa:;

	i8 v6233 = (i8)(intptr_t)(ws+3416);
	i8 v6234 = *(i8*)(intptr_t)v6233;
	i8 v6235 = (i8)+0;
	if (v6234==v6235) goto c02_04f8; else goto c02_04f9;

c02_04f8:;

	i8 v6236 = (i8)(intptr_t)(ws+3408);
	i8 v6237 = *(i8*)(intptr_t)v6236;
	i8 v6238 = (i8)(intptr_t)(ws+3400);
	i8 v6239 = *(i8*)(intptr_t)v6238;
	i8 v6240 = v6239+(+16);
	*(i8*)(intptr_t)v6240 = v6237;

	goto c02_04f3;

c02_04f9:;

	i8 v6241 = (i8)(intptr_t)(ws+3408);
	i8 v6242 = *(i8*)(intptr_t)v6241;
	i8 v6243 = (i8)+0;
	if (v6242==v6243) goto c02_0501; else goto c02_0500;

c02_0501:;

	i8 v6244 = (i8)(intptr_t)(ws+3416);
	i8 v6245 = *(i8*)(intptr_t)v6244;
	i8 v6246 = (i8)+0;
	if (v6245==v6246) goto c02_0500; else goto c02_04ff;

c02_04ff:;

	i8 v6247 = (i8)(intptr_t)(ws+3416);
	i8 v6248 = *(i8*)(intptr_t)v6247;
	i8 v6249 = (i8)(intptr_t)(ws+3392);
	i8 v6250 = *(i8*)(intptr_t)v6249;
	i8 v6251 = v6250+(+16);
	*(i8*)(intptr_t)v6251 = v6248;

	goto c02_04f3;

c02_0500:;

	i8 v6252 = (i8)(intptr_t)(ws+3408);
	i8 v6253 = *(i8*)(intptr_t)v6252;
	i8 v6254 = (i8)(intptr_t)(ws+3416);
	i8 v6255 = *(i8*)(intptr_t)v6254;
	if (v6253==v6255) goto c02_0505; else goto c02_0504;

c02_0504:;

	i8 v6256 = (i8)(intptr_t)(ws+3392);
	i8 v6257 = *(i8*)(intptr_t)v6256;
	i8 v6258 = (i8)(intptr_t)(ws+3400);
	i8 v6259 = *(i8*)(intptr_t)v6258;
	i8 v6260 = (i8)(intptr_t)(f267_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6260)(v6259, v6257);

c02_0505:;

c02_04f3:;

endsub:;
}
	void f229_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s0114[] = { 0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };
	void f76_SimpleError(i8 /* message */);

// CheckNumber workspace at ws+3392 length ws+8
void f271_CheckNumber(i8 p6261 /* node */) {
	*(i8*)(intptr_t)(ws+3392) = p6261; /*node */

	i8 v6262 = (i8)(intptr_t)(ws+3392);
	i8 v6263 = *(i8*)(intptr_t)v6262;
	i8 v6264 = v6263+(+16);
	i8 v6265 = *(i8*)(intptr_t)v6264;
	i8 v6266 = (i8)(intptr_t)(f229_IsNum);
	i1 v6267;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6266)(&v6267, v6265);
	i1 v6268 = (i1)+0;
	if (v6267==v6268) goto c02_0509; else goto c02_050a;

c02_0509:;

	i8 v6269 = (i8)(intptr_t)c02_s0114;
	i8 v6270 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6270)(v6269);

c02_050a:;

c02_0506:;

endsub:;
}
	void f270_ResolveUntypedConstantsSimply(i8 /* rhs */, i8 /* lhs */);
	void f271_CheckNumber(i8 /* node */);
	void f271_CheckNumber(i8 /* node */);

// ResolveUntypedConstantsNeedingNumbers workspace at ws+3376 length ws+16
void f272_ResolveUntypedConstantsNeedingNumbers(i8 p6271 /* rhs */, i8 p6272 /* lhs */) {
	*(i8*)(intptr_t)(ws+3376) = p6272; /*lhs */
	*(i8*)(intptr_t)(ws+3384) = p6271; /*rhs */

	i8 v6273 = (i8)(intptr_t)(ws+3376);
	i8 v6274 = *(i8*)(intptr_t)v6273;
	i8 v6275 = (i8)(intptr_t)(ws+3384);
	i8 v6276 = *(i8*)(intptr_t)v6275;
	i8 v6277 = (i8)(intptr_t)(f270_ResolveUntypedConstantsSimply);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6277)(v6276, v6274);

	i8 v6278 = (i8)(intptr_t)(ws+3376);
	i8 v6279 = *(i8*)(intptr_t)v6278;
	i8 v6280 = (i8)(intptr_t)(f271_CheckNumber);

	((void(*)(i8 /* node */))(intptr_t)v6280)(v6279);

	i8 v6281 = (i8)(intptr_t)(ws+3384);
	i8 v6282 = *(i8*)(intptr_t)v6281;
	i8 v6283 = (i8)(intptr_t)(f271_CheckNumber);

	((void(*)(i8 /* node */))(intptr_t)v6283)(v6282);

endsub:;
}
	void f270_ResolveUntypedConstantsSimply(i8 /* rhs */, i8 /* lhs */);
	void f267_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// CondSimple workspace at ws+3368 length ws+16
void f273_CondSimple(i8 p6284 /* rhs */, i8 p6285 /* lhs */) {
	*(i8*)(intptr_t)(ws+3368) = p6285; /*lhs */
	*(i8*)(intptr_t)(ws+3376) = p6284; /*rhs */

	i8 v6286 = (i8)(intptr_t)(ws+3368);
	i8 v6287 = *(i8*)(intptr_t)v6286;
	i8 v6288 = (i8)(intptr_t)(ws+3376);
	i8 v6289 = *(i8*)(intptr_t)v6288;
	i8 v6290 = (i8)(intptr_t)(f270_ResolveUntypedConstantsSimply);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6290)(v6289, v6287);

	i8 v6291 = (i8)(intptr_t)(ws+3368);
	i8 v6292 = *(i8*)(intptr_t)v6291;
	i8 v6293 = v6292+(+16);
	i8 v6294 = *(i8*)(intptr_t)v6293;
	i8 v6295 = (i8)(intptr_t)(ws+3376);
	i8 v6296 = *(i8*)(intptr_t)v6295;
	i8 v6297 = v6296+(+16);
	i8 v6298 = *(i8*)(intptr_t)v6297;
	if (v6294==v6298) goto c02_050f; else goto c02_050e;

c02_050e:;

	i8 v6299 = (i8)(intptr_t)(ws+3368);
	i8 v6300 = *(i8*)(intptr_t)v6299;
	i8 v6301 = (i8)(intptr_t)(ws+3376);
	i8 v6302 = *(i8*)(intptr_t)v6301;
	i8 v6303 = (i8)(intptr_t)(f267_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6303)(v6302, v6300);

c02_050f:;

c02_050b:;

endsub:;
}
	void f167_NodeWidth(i1* /* width */, i8 /* node */);
	void f171_MidC1Op(i8* /* result */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// Expr1Simple workspace at ws+3328 length ws+24
void f274_Expr1Simple(i8* p6304 /* result */, i8 p6305 /* lhs */, i1 p6306 /* op */) {
	*(i1*)(intptr_t)(ws+3328) = p6306; /*op */
	*(i8*)(intptr_t)(ws+3336) = p6305; /*lhs */

	i8 v6307 = (i8)(intptr_t)(ws+3328);
	i1 v6308 = *(i1*)(intptr_t)v6307;
	i8 v6309 = (i8)(intptr_t)(ws+3336);
	i8 v6310 = *(i8*)(intptr_t)v6309;
	i8 v6311 = (i8)(intptr_t)(f167_NodeWidth);
	i1 v6312;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v6311)(&v6312, v6310);
	i8 v6313 = (i8)(intptr_t)(ws+3336);
	i8 v6314 = *(i8*)(intptr_t)v6313;
	i8 v6315 = (i8)(intptr_t)(f171_MidC1Op);
	i8 v6316;

	((void(*)(i8* /* result */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v6315)(&v6316, v6314, v6312, v6308);
	i8 v6317 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v6317 = v6316;

	i8 v6318 = (i8)(intptr_t)(ws+3336);
	i8 v6319 = *(i8*)(intptr_t)v6318;
	i8 v6320 = v6319+(+16);
	i8 v6321 = *(i8*)(intptr_t)v6320;
	i8 v6322 = (i8)(intptr_t)(ws+3344);
	i8 v6323 = *(i8*)(intptr_t)v6322;
	i8 v6324 = v6323+(+16);
	*(i8*)(intptr_t)v6324 = v6321;

endsub:;
	*p6304 = *(i8*)(intptr_t)(ws+3344);
}
	void f269_ResolveUntypedConstantsForAddOrSub(i8 /* rhs */, i8 /* lhs */);
	void f267_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// cant_add_that workspace at ws+3368 length ws+0
void f276_cant_add_that(void) {

	i8 v6333 = (i8)(intptr_t)(ws+3328);
	i8 v6334 = *(i8*)(intptr_t)v6333;
	i8 v6335 = (i8)(intptr_t)(ws+3336);
	i8 v6336 = *(i8*)(intptr_t)v6335;
	i8 v6337 = (i8)(intptr_t)(f267_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6337)(v6336, v6334);

endsub:;
}
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f276_cant_add_that(void);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f276_cant_add_that(void);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f276_cant_add_that(void);
	void f167_NodeWidth(i1* /* width */, i8 /* node */);
	void f173_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// ExprAdd workspace at ws+3328 length ws+40
void f275_ExprAdd(i8* p6325 /* result */, i8 p6326 /* rhs */, i8 p6327 /* lhs */) {
	*(i8*)(intptr_t)(ws+3328) = p6327; /*lhs */
	*(i8*)(intptr_t)(ws+3336) = p6326; /*rhs */

	i8 v6328 = (i8)(intptr_t)(ws+3328);
	i8 v6329 = *(i8*)(intptr_t)v6328;
	i8 v6330 = (i8)(intptr_t)(ws+3336);
	i8 v6331 = *(i8*)(intptr_t)v6330;
	i8 v6332 = (i8)(intptr_t)(f269_ResolveUntypedConstantsForAddOrSub);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6332)(v6331, v6329);


	i8 v6338 = (i8)(intptr_t)(ws+3328);
	i8 v6339 = *(i8*)(intptr_t)v6338;
	i8 v6340 = v6339+(+16);
	i8 v6341 = *(i8*)(intptr_t)v6340;
	i8 v6342 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6342 = v6341;

	i8 v6343 = (i8)(intptr_t)(ws+3336);
	i8 v6344 = *(i8*)(intptr_t)v6343;
	i8 v6345 = v6344+(+16);
	i8 v6346 = *(i8*)(intptr_t)v6345;
	i8 v6347 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v6347 = v6346;

	i8 v6348 = (i8)(intptr_t)(ws+3352);
	i8 v6349 = *(i8*)(intptr_t)v6348;
	i8 v6350 = (i8)(intptr_t)(f68_IsPtr);
	i1 v6351;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6350)(&v6351, v6349);
	i1 v6352 = (i1)+0;
	if (v6351==v6352) goto c02_0514; else goto c02_0513;

c02_0513:;

	i8 v6353 = (i8)(intptr_t)(ws+3360);
	i8 v6354 = *(i8*)(intptr_t)v6353;
	i8 v6355 = (i8)(intptr_t)(f68_IsPtr);
	i1 v6356;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6355)(&v6356, v6354);
	i1 v6357 = (i1)+0;
	if (v6356==v6357) goto c02_051c; else goto c02_051a;

c02_051c:;

	i8 v6358 = (i8)(intptr_t)(ws+3360);
	i8 v6359 = *(i8*)(intptr_t)v6358;
	i8 v6360 = (i8)(intptr_t)(ws+1528);
	i8 v6361 = *(i8*)(intptr_t)v6360;
	if (v6359==v6361) goto c02_051b; else goto c02_051a;

c02_051a:;

	i8 v6362 = (i8)(intptr_t)(f276_cant_add_that);

	((void(*)(void))(intptr_t)v6362)();

c02_051b:;

c02_0515:;

	goto c02_0510;

c02_0514:;

	i8 v6363 = (i8)(intptr_t)(ws+3360);
	i8 v6364 = *(i8*)(intptr_t)v6363;
	i8 v6365 = (i8)(intptr_t)(f68_IsPtr);
	i1 v6366;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6365)(&v6366, v6364);
	i1 v6367 = (i1)+0;
	if (v6366==v6367) goto c02_0520; else goto c02_051f;

c02_051f:;

	i8 v6368 = (i8)(intptr_t)(f276_cant_add_that);

	((void(*)(void))(intptr_t)v6368)();

	goto c02_0510;

c02_0520:;

	i8 v6369 = (i8)(intptr_t)(ws+3352);
	i8 v6370 = *(i8*)(intptr_t)v6369;
	i8 v6371 = (i8)(intptr_t)(f68_IsPtr);
	i1 v6372;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6371)(&v6372, v6370);
	i1 v6373 = (i1)+0;
	if (v6372==v6373) goto c02_0527; else goto c02_0526;

c02_0527:;

	i8 v6374 = (i8)(intptr_t)(ws+3352);
	i8 v6375 = *(i8*)(intptr_t)v6374;
	i8 v6376 = (i8)(intptr_t)(ws+3360);
	i8 v6377 = *(i8*)(intptr_t)v6376;
	if (v6375==v6377) goto c02_0526; else goto c02_0525;

c02_0525:;

	i8 v6378 = (i8)(intptr_t)(f276_cant_add_that);

	((void(*)(void))(intptr_t)v6378)();

c02_0526:;

c02_0510:;

	i1 v6379 = (i1)+161;
	i8 v6380 = (i8)(intptr_t)(ws+3328);
	i8 v6381 = *(i8*)(intptr_t)v6380;
	i8 v6382 = (i8)(intptr_t)(f167_NodeWidth);
	i1 v6383;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v6382)(&v6383, v6381);
	i8 v6384 = (i8)(intptr_t)(ws+3328);
	i8 v6385 = *(i8*)(intptr_t)v6384;
	i8 v6386 = (i8)(intptr_t)(ws+3336);
	i8 v6387 = *(i8*)(intptr_t)v6386;
	i8 v6388 = (i8)(intptr_t)(f173_MidC2Op);
	i8 v6389;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v6388)(&v6389, v6387, v6385, v6383, v6379);
	i8 v6390 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v6390 = v6389;

	i8 v6391 = (i8)(intptr_t)(ws+3352);
	i8 v6392 = *(i8*)(intptr_t)v6391;
	i8 v6393 = (i8)(intptr_t)(ws+3344);
	i8 v6394 = *(i8*)(intptr_t)v6393;
	i8 v6395 = v6394+(+16);
	*(i8*)(intptr_t)v6395 = v6392;

endsub:;
	*p6325 = *(i8*)(intptr_t)(ws+3344);
}
	void f269_ResolveUntypedConstantsForAddOrSub(i8 /* rhs */, i8 /* lhs */);
	void f267_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// cant_sub_that workspace at ws+3368 length ws+0
void f278_cant_sub_that(void) {

	i8 v6404 = (i8)(intptr_t)(ws+3328);
	i8 v6405 = *(i8*)(intptr_t)v6404;
	i8 v6406 = (i8)(intptr_t)(ws+3336);
	i8 v6407 = *(i8*)(intptr_t)v6406;
	i8 v6408 = (i8)(intptr_t)(f267_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6408)(v6407, v6405);

endsub:;
}
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f278_cant_sub_that(void);
	void f229_IsNum(i1* /* result */, i8 /* type */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f278_cant_sub_that(void);
	void f229_IsNum(i1* /* result */, i8 /* type */);
	void f229_IsNum(i1* /* result */, i8 /* type */);
	void f278_cant_sub_that(void);
	void f167_NodeWidth(i1* /* width */, i8 /* node */);
	void f173_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);

// ExprSub workspace at ws+3328 length ws+40
void f277_ExprSub(i8* p6396 /* result */, i8 p6397 /* rhs */, i8 p6398 /* lhs */) {
	*(i8*)(intptr_t)(ws+3328) = p6398; /*lhs */
	*(i8*)(intptr_t)(ws+3336) = p6397; /*rhs */

	i8 v6399 = (i8)(intptr_t)(ws+3328);
	i8 v6400 = *(i8*)(intptr_t)v6399;
	i8 v6401 = (i8)(intptr_t)(ws+3336);
	i8 v6402 = *(i8*)(intptr_t)v6401;
	i8 v6403 = (i8)(intptr_t)(f269_ResolveUntypedConstantsForAddOrSub);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6403)(v6402, v6400);


	i8 v6409 = (i8)(intptr_t)(ws+3328);
	i8 v6410 = *(i8*)(intptr_t)v6409;
	i8 v6411 = v6410+(+16);
	i8 v6412 = *(i8*)(intptr_t)v6411;
	i8 v6413 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6413 = v6412;

	i8 v6414 = (i8)(intptr_t)(ws+3336);
	i8 v6415 = *(i8*)(intptr_t)v6414;
	i8 v6416 = v6415+(+16);
	i8 v6417 = *(i8*)(intptr_t)v6416;
	i8 v6418 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v6418 = v6417;

	i8 v6419 = (i8)(intptr_t)(ws+3352);
	i8 v6420 = *(i8*)(intptr_t)v6419;
	i8 v6421 = (i8)(intptr_t)(f68_IsPtr);
	i1 v6422;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6421)(&v6422, v6420);
	i1 v6423 = (i1)+0;
	if (v6422==v6423) goto c02_0530; else goto c02_0532;

c02_0532:;

	i8 v6424 = (i8)(intptr_t)(ws+3360);
	i8 v6425 = *(i8*)(intptr_t)v6424;
	i8 v6426 = (i8)(intptr_t)(f68_IsPtr);
	i1 v6427;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6426)(&v6427, v6425);
	i1 v6428 = (i1)+0;
	if (v6427==v6428) goto c02_0531; else goto c02_0530;

c02_0531:;

	i8 v6429 = (i8)(intptr_t)(ws+3360);
	i8 v6430 = *(i8*)(intptr_t)v6429;
	i8 v6431 = (i8)(intptr_t)(ws+1528);
	i8 v6432 = *(i8*)(intptr_t)v6431;
	if (v6430==v6432) goto c02_0530; else goto c02_052f;

c02_052f:;

	i8 v6433 = (i8)(intptr_t)(f278_cant_sub_that);

	((void(*)(void))(intptr_t)v6433)();

	goto c02_0528;

c02_0530:;

	i8 v6434 = (i8)(intptr_t)(ws+3352);
	i8 v6435 = *(i8*)(intptr_t)v6434;
	i8 v6436 = (i8)(intptr_t)(f229_IsNum);
	i1 v6437;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6436)(&v6437, v6435);
	i1 v6438 = (i1)+0;
	if (v6437==v6438) goto c02_0538; else goto c02_0539;

c02_0539:;

	i8 v6439 = (i8)(intptr_t)(ws+3360);
	i8 v6440 = *(i8*)(intptr_t)v6439;
	i8 v6441 = (i8)(intptr_t)(f68_IsPtr);
	i1 v6442;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6441)(&v6442, v6440);
	i1 v6443 = (i1)+0;
	if (v6442==v6443) goto c02_0538; else goto c02_0537;

c02_0537:;

	i8 v6444 = (i8)(intptr_t)(f278_cant_sub_that);

	((void(*)(void))(intptr_t)v6444)();

	goto c02_0528;

c02_0538:;

	i8 v6445 = (i8)(intptr_t)(ws+3352);
	i8 v6446 = *(i8*)(intptr_t)v6445;
	i8 v6447 = (i8)(intptr_t)(f229_IsNum);
	i1 v6448;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6447)(&v6448, v6446);
	i1 v6449 = (i1)+0;
	if (v6448==v6449) goto c02_0541; else goto c02_0543;

c02_0543:;

	i8 v6450 = (i8)(intptr_t)(ws+3360);
	i8 v6451 = *(i8*)(intptr_t)v6450;
	i8 v6452 = (i8)(intptr_t)(f229_IsNum);
	i1 v6453;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6452)(&v6453, v6451);
	i1 v6454 = (i1)+0;
	if (v6453==v6454) goto c02_0541; else goto c02_0542;

c02_0542:;

	i8 v6455 = (i8)(intptr_t)(ws+3352);
	i8 v6456 = *(i8*)(intptr_t)v6455;
	i8 v6457 = (i8)(intptr_t)(ws+3360);
	i8 v6458 = *(i8*)(intptr_t)v6457;
	if (v6456==v6458) goto c02_0541; else goto c02_0540;

c02_0540:;

	i8 v6459 = (i8)(intptr_t)(f278_cant_sub_that);

	((void(*)(void))(intptr_t)v6459)();

c02_0541:;

c02_0528:;

	i1 v6460 = (i1)+136;
	i8 v6461 = (i8)(intptr_t)(ws+3328);
	i8 v6462 = *(i8*)(intptr_t)v6461;
	i8 v6463 = (i8)(intptr_t)(f167_NodeWidth);
	i1 v6464;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v6463)(&v6464, v6462);
	i8 v6465 = (i8)(intptr_t)(ws+3328);
	i8 v6466 = *(i8*)(intptr_t)v6465;
	i8 v6467 = (i8)(intptr_t)(ws+3336);
	i8 v6468 = *(i8*)(intptr_t)v6467;
	i8 v6469 = (i8)(intptr_t)(f173_MidC2Op);
	i8 v6470;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v6469)(&v6470, v6468, v6466, v6464, v6460);
	i8 v6471 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v6471 = v6470;

	i8 v6472 = (i8)(intptr_t)(ws+3352);
	i8 v6473 = *(i8*)(intptr_t)v6472;
	i8 v6474 = (i8)(intptr_t)(f68_IsPtr);
	i1 v6475;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6474)(&v6475, v6473);
	i1 v6476 = (i1)+0;
	if (v6475==v6476) goto c02_054a; else goto c02_054b;

c02_054b:;

	i8 v6477 = (i8)(intptr_t)(ws+3352);
	i8 v6478 = *(i8*)(intptr_t)v6477;
	i8 v6479 = (i8)(intptr_t)(ws+3360);
	i8 v6480 = *(i8*)(intptr_t)v6479;
	if (v6478==v6480) goto c02_0549; else goto c02_054a;

c02_0549:;

	i8 v6481 = (i8)(intptr_t)(ws+1528);
	i8 v6482 = *(i8*)(intptr_t)v6481;
	i8 v6483 = (i8)(intptr_t)(ws+3344);
	i8 v6484 = *(i8*)(intptr_t)v6483;
	i8 v6485 = v6484+(+16);
	*(i8*)(intptr_t)v6485 = v6482;

	goto c02_0544;

c02_054a:;

	i8 v6486 = (i8)(intptr_t)(ws+3352);
	i8 v6487 = *(i8*)(intptr_t)v6486;
	i8 v6488 = (i8)(intptr_t)(ws+3344);
	i8 v6489 = *(i8*)(intptr_t)v6488;
	i8 v6490 = v6489+(+16);
	*(i8*)(intptr_t)v6490 = v6487;

c02_0544:;

endsub:;
	*p6396 = *(i8*)(intptr_t)(ws+3344);
}
	void f272_ResolveUntypedConstantsNeedingNumbers(i8 /* rhs */, i8 /* lhs */);
	void f230_IsSNum(i1* /* result */, i8 /* type */);
	void f167_NodeWidth(i1* /* width */, i8 /* node */);
	void f173_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// Expr2Simple workspace at ws+3328 length ws+48
void f279_Expr2Simple(i8* p6491 /* result */, i8 p6492 /* rhs */, i8 p6493 /* lhs */, i1 p6494 /* uop */, i1 p6495 /* sop */) {
	*(i1*)(intptr_t)(ws+3328) = p6495; /*sop */
	*(i1*)(intptr_t)(ws+3329) = p6494; /*uop */
	*(i8*)(intptr_t)(ws+3336) = p6493; /*lhs */
	*(i8*)(intptr_t)(ws+3344) = p6492; /*rhs */

	i8 v6496 = (i8)(intptr_t)(ws+3336);
	i8 v6497 = *(i8*)(intptr_t)v6496;
	i8 v6498 = (i8)(intptr_t)(ws+3344);
	i8 v6499 = *(i8*)(intptr_t)v6498;
	i8 v6500 = (i8)(intptr_t)(f272_ResolveUntypedConstantsNeedingNumbers);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6500)(v6499, v6497);

	i8 v6501 = (i8)(intptr_t)(ws+3329);
	i1 v6502 = *(i1*)(intptr_t)v6501;
	i8 v6503 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v6503 = v6502;

	i8 v6504 = (i8)(intptr_t)(ws+3336);
	i8 v6505 = *(i8*)(intptr_t)v6504;
	i8 v6506 = v6505+(+16);
	i8 v6507 = *(i8*)(intptr_t)v6506;
	i8 v6508 = (i8)(intptr_t)(f230_IsSNum);
	i1 v6509;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6508)(&v6509, v6507);
	i1 v6510 = (i1)+0;
	if (v6509==v6510) goto c02_0550; else goto c02_054f;

c02_054f:;

	i8 v6511 = (i8)(intptr_t)(ws+3328);
	i1 v6512 = *(i1*)(intptr_t)v6511;
	i8 v6513 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v6513 = v6512;

c02_0550:;

c02_054c:;

	i8 v6514 = (i8)(intptr_t)(ws+3336);
	i8 v6515 = *(i8*)(intptr_t)v6514;
	i8 v6516 = v6515+(+16);
	i8 v6517 = *(i8*)(intptr_t)v6516;
	i8 v6518 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v6518 = v6517;

	i8 v6519 = (i8)(intptr_t)(ws+3360);
	i1 v6520 = *(i1*)(intptr_t)v6519;
	i8 v6521 = (i8)(intptr_t)(ws+3336);
	i8 v6522 = *(i8*)(intptr_t)v6521;
	i8 v6523 = (i8)(intptr_t)(f167_NodeWidth);
	i1 v6524;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v6523)(&v6524, v6522);
	i8 v6525 = (i8)(intptr_t)(ws+3336);
	i8 v6526 = *(i8*)(intptr_t)v6525;
	i8 v6527 = (i8)(intptr_t)(ws+3344);
	i8 v6528 = *(i8*)(intptr_t)v6527;
	i8 v6529 = (i8)(intptr_t)(f173_MidC2Op);
	i8 v6530;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v6529)(&v6530, v6528, v6526, v6524, v6520);
	i8 v6531 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6531 = v6530;

	i8 v6532 = (i8)(intptr_t)(ws+3368);
	i8 v6533 = *(i8*)(intptr_t)v6532;
	i8 v6534 = (i8)(intptr_t)(ws+3352);
	i8 v6535 = *(i8*)(intptr_t)v6534;
	i8 v6536 = v6535+(+16);
	*(i8*)(intptr_t)v6536 = v6533;

endsub:;
	*p6491 = *(i8*)(intptr_t)(ws+3352);
}
const i1 c02_s0115[] = { 0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x73,0x68,0x69,0x66,0x74,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x62,0x65,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x69,0x66,0x20,0x74,0x68,0x65,0x20,0x52,0x48,0x53,0x20,0x69,0x73,0x20,0x61,0x6c,0x73,0x6f,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };
	void f76_SimpleError(i8 /* message */);

// expr_i_checkrhsconst workspace at ws+3376 length ws+8
void f280_expr_i_checkrhsconst(i8 p6537 /* rhs */) {
	*(i8*)(intptr_t)(ws+3376) = p6537; /*rhs */

	i8 v6538 = (i8)(intptr_t)(ws+3376);
	i8 v6539 = *(i8*)(intptr_t)v6538;
	i8 v6540 = v6539+(+40);
	i1 v6541 = *(i1*)(intptr_t)v6540;
	i1 v6542 = (i1)+45;
	if (v6541==v6542) goto c02_0555; else goto c02_0554;

c02_0554:;

	i8 v6543 = (i8)(intptr_t)c02_s0115;
	i8 v6544 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6544)(v6543);

c02_0555:;

c02_0551:;

endsub:;
}
	void f229_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s0116[] = { 0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0x20,0x6f,0x6e,0x20,0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x73,0x68,0x69,0x66,0x74,0 };
	void f76_SimpleError(i8 /* message */);
	void f268_CheckExpressionType(i8 /* type */, i8 /* node */);

// expr_i_checkshift workspace at ws+3376 length ws+16
void f281_expr_i_checkshift(i8 p6545 /* rhs */, i8 p6546 /* lhs */) {
	*(i8*)(intptr_t)(ws+3376) = p6546; /*lhs */
	*(i8*)(intptr_t)(ws+3384) = p6545; /*rhs */

	i8 v6547 = (i8)(intptr_t)(ws+3376);
	i8 v6548 = *(i8*)(intptr_t)v6547;
	i8 v6549 = v6548+(+16);
	i8 v6550 = *(i8*)(intptr_t)v6549;
	i8 v6551 = (i8)(intptr_t)(f229_IsNum);
	i1 v6552;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6551)(&v6552, v6550);
	i1 v6553 = (i1)+0;
	if (v6552==v6553) goto c02_0559; else goto c02_055a;

c02_0559:;

	i8 v6554 = (i8)(intptr_t)c02_s0116;
	i8 v6555 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6555)(v6554);

c02_055a:;

c02_0556:;

	i8 v6556 = (i8)(intptr_t)(ws+3384);
	i8 v6557 = *(i8*)(intptr_t)v6556;
	i8 v6558 = (i8)(intptr_t)(ws+1512);
	i8 v6559 = *(i8*)(intptr_t)v6558;
	i8 v6560 = (i8)(intptr_t)(f268_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v6560)(v6559, v6557);

endsub:;
}
	void f230_IsSNum(i1* /* result */, i8 /* type */);
	void f280_expr_i_checkrhsconst(i8 /* rhs */);
	void f170_FoldConstant2(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */);
	void f63_Discard(i8 /* node */);
	void f281_expr_i_checkshift(i8 /* rhs */, i8 /* lhs */);
	void f167_NodeWidth(i1* /* width */, i8 /* node */);
	void f173_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// ExprShift workspace at ws+3328 length ws+48
void f282_ExprShift(i8* p6561 /* result */, i8 p6562 /* rhs */, i8 p6563 /* lhs */, i1 p6564 /* uop */, i1 p6565 /* sop */) {
	*(i1*)(intptr_t)(ws+3328) = p6565; /*sop */
	*(i1*)(intptr_t)(ws+3329) = p6564; /*uop */
	*(i8*)(intptr_t)(ws+3336) = p6563; /*lhs */
	*(i8*)(intptr_t)(ws+3344) = p6562; /*rhs */

	i8 v6566 = (i8)(intptr_t)(ws+3329);
	i1 v6567 = *(i1*)(intptr_t)v6566;
	i8 v6568 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v6568 = v6567;

	i8 v6569 = (i8)(intptr_t)(ws+3336);
	i8 v6570 = *(i8*)(intptr_t)v6569;
	i8 v6571 = v6570+(+16);
	i8 v6572 = *(i8*)(intptr_t)v6571;
	i8 v6573 = (i8)(intptr_t)(f230_IsSNum);
	i1 v6574;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6573)(&v6574, v6572);
	i1 v6575 = (i1)+0;
	if (v6574==v6575) goto c02_055f; else goto c02_055e;

c02_055e:;

	i8 v6576 = (i8)(intptr_t)(ws+3328);
	i1 v6577 = *(i1*)(intptr_t)v6576;
	i8 v6578 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v6578 = v6577;

c02_055f:;

c02_055b:;

	i8 v6579 = (i8)(intptr_t)(ws+3336);
	i8 v6580 = *(i8*)(intptr_t)v6579;
	i8 v6581 = v6580+(+40);
	i1 v6582 = *(i1*)(intptr_t)v6581;
	i1 v6583 = (i1)+45;
	if (v6582==v6583) goto c02_0563; else goto c02_0564;

c02_0563:;

	i8 v6584 = (i8)(intptr_t)(ws+3344);
	i8 v6585 = *(i8*)(intptr_t)v6584;
	i8 v6586 = (i8)(intptr_t)(f280_expr_i_checkrhsconst);

	((void(*)(i8 /* rhs */))(intptr_t)v6586)(v6585);

	i8 v6587 = (i8)(intptr_t)(ws+3360);
	i1 v6588 = *(i1*)(intptr_t)v6587;
	i8 v6589 = (i8)(intptr_t)(ws+3336);
	i8 v6590 = *(i8*)(intptr_t)v6589;
	i8 v6591 = (i8)(intptr_t)(ws+3344);
	i8 v6592 = *(i8*)(intptr_t)v6591;
	i8 v6593 = (i8)(intptr_t)(f170_FoldConstant2);
	i4 v6594;

	((void(*)(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */))(intptr_t)v6593)(&v6594, v6592, v6590, v6588);
	i8 v6595 = (i8)(intptr_t)(ws+3336);
	i8 v6596 = *(i8*)(intptr_t)v6595;
	*(i4*)(intptr_t)v6596 = v6594;

	i8 v6597 = (i8)(intptr_t)(ws+3336);
	i8 v6598 = *(i8*)(intptr_t)v6597;
	i8 v6599 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6599 = v6598;

	i8 v6600 = (i8)(intptr_t)(ws+3344);
	i8 v6601 = *(i8*)(intptr_t)v6600;
	i8 v6602 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v6602)(v6601);

	goto endsub;

c02_0564:;

c02_0560:;

	i8 v6603 = (i8)(intptr_t)(ws+3336);
	i8 v6604 = *(i8*)(intptr_t)v6603;
	i8 v6605 = (i8)(intptr_t)(ws+3344);
	i8 v6606 = *(i8*)(intptr_t)v6605;
	i8 v6607 = (i8)(intptr_t)(f281_expr_i_checkshift);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6607)(v6606, v6604);

	i8 v6608 = (i8)(intptr_t)(ws+3336);
	i8 v6609 = *(i8*)(intptr_t)v6608;
	i8 v6610 = v6609+(+16);
	i8 v6611 = *(i8*)(intptr_t)v6610;
	i8 v6612 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v6612 = v6611;

	i8 v6613 = (i8)(intptr_t)(ws+3360);
	i1 v6614 = *(i1*)(intptr_t)v6613;
	i8 v6615 = (i8)(intptr_t)(ws+3336);
	i8 v6616 = *(i8*)(intptr_t)v6615;
	i8 v6617 = (i8)(intptr_t)(f167_NodeWidth);
	i1 v6618;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v6617)(&v6618, v6616);
	i8 v6619 = (i8)(intptr_t)(ws+3336);
	i8 v6620 = *(i8*)(intptr_t)v6619;
	i8 v6621 = (i8)(intptr_t)(ws+3344);
	i8 v6622 = *(i8*)(intptr_t)v6621;
	i8 v6623 = (i8)(intptr_t)(f173_MidC2Op);
	i8 v6624;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v6623)(&v6624, v6622, v6620, v6618, v6614);
	i8 v6625 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6625 = v6624;

	i8 v6626 = (i8)(intptr_t)(ws+3368);
	i8 v6627 = *(i8*)(intptr_t)v6626;
	i8 v6628 = (i8)(intptr_t)(ws+3352);
	i8 v6629 = *(i8*)(intptr_t)v6628;
	i8 v6630 = v6629+(+16);
	*(i8*)(intptr_t)v6630 = v6627;

endsub:;
	*p6561 = *(i8*)(intptr_t)(ws+3352);
}
const i1 c02_s0117[] = { 0x6e,0x6f,0x64,0x65,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f76_SimpleError(i8 /* message */);

// PushNode workspace at ws+3472 length ws+8
void f60_PushNode(i8 p6631 /* node */) {
	*(i8*)(intptr_t)(ws+3472) = p6631; /*node */

	i8 v6632 = (i8)(intptr_t)(ws+3472);
	i8 v6633 = *(i8*)(intptr_t)v6632;
	i8 v6634 = (i8)+0;
	if (v6633==v6634) goto c02_0569; else goto c02_0568;

c02_0568:;

	i8 v6635 = (i8)(intptr_t)(ws+224);
	i8 v6636 = *(i8*)(intptr_t)v6635;
	i8 v6637 = (i8)(intptr_t)(ws+224);
	if (v6636==v6637) goto c02_056d; else goto c02_056e;

c02_056d:;

	i8 v6638 = (i8)(intptr_t)c02_s0117;
	i8 v6639 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6639)(v6638);

c02_056e:;

c02_056a:;

	i8 v6640 = (i8)(intptr_t)(ws+3472);
	i8 v6641 = *(i8*)(intptr_t)v6640;
	i8 v6642 = (i8)(intptr_t)(ws+224);
	i8 v6643 = *(i8*)(intptr_t)v6642;
	*(i8*)(intptr_t)v6643 = v6641;

	i8 v6644 = (i8)(intptr_t)(ws+224);
	i8 v6645 = *(i8*)(intptr_t)v6644;
	i8 v6646 = v6645+(+8);
	i8 v6647 = (i8)(intptr_t)(ws+224);
	*(i8*)(intptr_t)v6647 = v6646;

c02_0569:;

c02_0565:;

endsub:;
}

// PopNode workspace at ws+3472 length ws+8
void f61_PopNode(i8* p6648 /* node */) {

	i8 v6649 = (i8)(intptr_t)(ws+224);
	i8 v6650 = *(i8*)(intptr_t)v6649;
	i8 v6651 = v6650+(-8);
	i8 v6652 = (i8)(intptr_t)(ws+224);
	*(i8*)(intptr_t)v6652 = v6651;

	i8 v6653 = (i8)(intptr_t)(ws+224);
	i8 v6654 = *(i8*)(intptr_t)v6653;
	i8 v6655 = *(i8*)(intptr_t)v6654;
	i8 v6656 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v6656 = v6655;

endsub:;
	*p6648 = *(i8*)(intptr_t)(ws+3472);
}
	void f61_PopNode(i8* /* node */);
	void f60_PushNode(i8 /* node */);
	void f60_PushNode(i8 /* node */);

// NextNode workspace at ws+3464 length ws+8
void f62_NextNode(i8* p6657 /* node */) {

	i8 v6658 = (i8)(intptr_t)(f61_PopNode);
	i8 v6659;

	((void(*)(i8* /* node */))(intptr_t)v6658)(&v6659);
	i8 v6660 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v6660 = v6659;

	i8 v6661 = (i8)(intptr_t)(ws+3464);
	i8 v6662 = *(i8*)(intptr_t)v6661;
	i8 v6663 = (i8)+0;
	if (v6662==v6663) goto c02_0573; else goto c02_0572;

c02_0572:;

	i8 v6664 = (i8)(intptr_t)(ws+3464);
	i8 v6665 = *(i8*)(intptr_t)v6664;
	i8 v6666 = v6665+(+24);
	i8 v6667 = *(i8*)(intptr_t)v6666;
	i8 v6668 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v6668)(v6667);

	i8 v6669 = (i8)(intptr_t)(ws+3464);
	i8 v6670 = *(i8*)(intptr_t)v6669;
	i8 v6671 = v6670+(+32);
	i8 v6672 = *(i8*)(intptr_t)v6671;
	i8 v6673 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v6673)(v6672);

c02_0573:;

c02_056f:;

endsub:;
	*p6657 = *(i8*)(intptr_t)(ws+3464);
}
	void f60_PushNode(i8 /* node */);
	void f62_NextNode(i8* /* node */);
	void f166_FreeNode(i8 /* node */);

// Discard workspace at ws+3440 length ws+24
void f63_Discard(i8 p6674 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p6674; /*node */

	i8 v6675 = (i8)(intptr_t)(ws+224);
	i8 v6676 = *(i8*)(intptr_t)v6675;
	i8 v6677 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v6677 = v6676;

	i8 v6678 = (i8)(intptr_t)(ws+3440);
	i8 v6679 = *(i8*)(intptr_t)v6678;
	i8 v6680 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v6680)(v6679);

c02_0576:;

	i8 v6681 = (i8)(intptr_t)(ws+224);
	i8 v6682 = *(i8*)(intptr_t)v6681;
	i8 v6683 = (i8)(intptr_t)(ws+3448);
	i8 v6684 = *(i8*)(intptr_t)v6683;
	if (v6682==v6684) goto c02_0579; else goto c02_0578;

c02_0578:;

	i8 v6685 = (i8)(intptr_t)(f62_NextNode);
	i8 v6686;

	((void(*)(i8* /* node */))(intptr_t)v6685)(&v6686);
	i8 v6687 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v6687 = v6686;

	i8 v6688 = (i8)(intptr_t)(ws+3456);
	i8 v6689 = *(i8*)(intptr_t)v6688;
	i8 v6690 = (i8)(intptr_t)(f166_FreeNode);

	((void(*)(i8 /* node */))(intptr_t)v6690)(v6689);

	goto c02_0576;

c02_0579:;

endsub:;
}
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f235_AllocLabel(i2* /* label */);
	void f235_AllocLabel(i2* /* label */);

// BeginNormalLoop workspace at ws+3336 length ws+8
void f283_BeginNormalLoop(i8* p6691 /* ll */) {

	i8 v6692 = (i8)+8;
	i8 v6693 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v6694;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v6693)(&v6694, v6692);
	i8 v6695 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v6695 = v6694;

	i8 v6696 = (i8)(intptr_t)(f235_AllocLabel);
	i2 v6697;

	((void(*)(i2* /* label */))(intptr_t)v6696)(&v6697);
	i8 v6698 = (i8)(intptr_t)(ws+3336);
	i8 v6699 = *(i8*)(intptr_t)v6698;
	*(i2*)(intptr_t)v6699 = v6697;

	i8 v6700 = (i8)(intptr_t)(f235_AllocLabel);
	i2 v6701;

	((void(*)(i2* /* label */))(intptr_t)v6700)(&v6701);
	i8 v6702 = (i8)(intptr_t)(ws+3336);
	i8 v6703 = *(i8*)(intptr_t)v6702;
	i8 v6704 = v6703+(+2);
	*(i2*)(intptr_t)v6704 = v6701;

	i8 v6705 = (i8)(intptr_t)(ws+52);
	i2 v6706 = *(i2*)(intptr_t)v6705;
	i8 v6707 = (i8)(intptr_t)(ws+3336);
	i8 v6708 = *(i8*)(intptr_t)v6707;
	i8 v6709 = v6708+(+4);
	*(i2*)(intptr_t)v6709 = v6706;

	i8 v6710 = (i8)(intptr_t)(ws+54);
	i2 v6711 = *(i2*)(intptr_t)v6710;
	i8 v6712 = (i8)(intptr_t)(ws+3336);
	i8 v6713 = *(i8*)(intptr_t)v6712;
	i8 v6714 = v6713+(+6);
	*(i2*)(intptr_t)v6714 = v6711;

	i8 v6715 = (i8)(intptr_t)(ws+3336);
	i8 v6716 = *(i8*)(intptr_t)v6715;
	i8 v6717 = v6716+(+2);
	i2 v6718 = *(i2*)(intptr_t)v6717;
	i8 v6719 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v6719 = v6718;

	i8 v6720 = (i8)(intptr_t)(ws+3336);
	i8 v6721 = *(i8*)(intptr_t)v6720;
	i2 v6722 = *(i2*)(intptr_t)v6721;
	i8 v6723 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v6723 = v6722;

endsub:;
	*p6691 = *(i8*)(intptr_t)(ws+3336);
}
	void f164_MidJump(i8* /* m */, i2 /* label */);
	void f256_Generate(i8 /* statement */);
	void f130_MidLabel(i8* /* m */, i2 /* label */);
	void f256_Generate(i8 /* statement */);
	void f34_Free(i8 /* block */);

// TerminateNormalLoop workspace at ws+3328 length ws+8
void f284_TerminateNormalLoop(i8 p6724 /* ll */) {
	*(i8*)(intptr_t)(ws+3328) = p6724; /*ll */

	i8 v6725 = (i8)(intptr_t)(ws+54);
	i2 v6726 = *(i2*)(intptr_t)v6725;
	i8 v6727 = (i8)(intptr_t)(f164_MidJump);
	i8 v6728;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v6727)(&v6728, v6726);
	i8 v6729 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v6729)(v6728);

	i8 v6730 = (i8)(intptr_t)(ws+52);
	i2 v6731 = *(i2*)(intptr_t)v6730;
	i8 v6732 = (i8)(intptr_t)(f130_MidLabel);
	i8 v6733;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v6732)(&v6733, v6731);
	i8 v6734 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v6734)(v6733);

	i8 v6735 = (i8)(intptr_t)(ws+3328);
	i8 v6736 = *(i8*)(intptr_t)v6735;
	i8 v6737 = v6736+(+4);
	i2 v6738 = *(i2*)(intptr_t)v6737;
	i8 v6739 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v6739 = v6738;

	i8 v6740 = (i8)(intptr_t)(ws+3328);
	i8 v6741 = *(i8*)(intptr_t)v6740;
	i8 v6742 = v6741+(+6);
	i2 v6743 = *(i2*)(intptr_t)v6742;
	i8 v6744 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v6744 = v6743;

	i8 v6745 = (i8)(intptr_t)(ws+3328);
	i8 v6746 = *(i8*)(intptr_t)v6745;
	i8 v6747 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v6747)(v6746);

endsub:;
}

// Negate workspace at ws+3328 length ws+8
void f285_Negate(i8 p6748 /* node */) {
	*(i8*)(intptr_t)(ws+3328) = p6748; /*node */

	i8 v6749 = (i8)(intptr_t)(ws+3328);
	i8 v6750 = *(i8*)(intptr_t)v6749;
	i8 v6751 = v6750+(+6);
	i1 v6752 = *(i1*)(intptr_t)v6751;
	i1 v6753 = v6752^(+1);
	i8 v6754 = (i8)(intptr_t)(ws+3328);
	i8 v6755 = *(i8*)(intptr_t)v6754;
	i8 v6756 = v6755+(+6);
	*(i1*)(intptr_t)v6756 = v6753;

endsub:;
}
	void f273_CondSimple(i8 /* rhs */, i8 /* lhs */);
	void f235_AllocLabel(i2* /* label */);
	void f235_AllocLabel(i2* /* label */);
	void f167_NodeWidth(i1* /* width */, i8 /* node */);
	void f131_MidBeq(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */);

// ConditionalEq workspace at ws+3328 length ws+37
void f286_ConditionalEq(i8* p6757 /* result */, i1 p6758 /* negated */, i8 p6759 /* rhs */, i8 p6760 /* lhs */) {
	*(i8*)(intptr_t)(ws+3328) = p6760; /*lhs */
	*(i8*)(intptr_t)(ws+3336) = p6759; /*rhs */
	*(i1*)(intptr_t)(ws+3344) = p6758; /*negated */

	i8 v6761 = (i8)(intptr_t)(ws+3328);
	i8 v6762 = *(i8*)(intptr_t)v6761;
	i8 v6763 = (i8)(intptr_t)(ws+3336);
	i8 v6764 = *(i8*)(intptr_t)v6763;
	i8 v6765 = (i8)(intptr_t)(f273_CondSimple);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6765)(v6764, v6762);

	i8 v6766 = (i8)(intptr_t)(f235_AllocLabel);
	i2 v6767;

	((void(*)(i2* /* label */))(intptr_t)v6766)(&v6767);
	i8 v6768 = (i8)(intptr_t)(ws+3360);
	*(i2*)(intptr_t)v6768 = v6767;

	i8 v6769 = (i8)(intptr_t)(f235_AllocLabel);
	i2 v6770;

	((void(*)(i2* /* label */))(intptr_t)v6769)(&v6770);
	i8 v6771 = (i8)(intptr_t)(ws+3362);
	*(i2*)(intptr_t)v6771 = v6770;

	i8 v6772 = (i8)(intptr_t)(ws+3328);
	i8 v6773 = *(i8*)(intptr_t)v6772;
	i8 v6774 = (i8)(intptr_t)(f167_NodeWidth);
	i1 v6775;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v6774)(&v6775, v6773);
	i8 v6776 = (i8)(intptr_t)(ws+3364);
	*(i1*)(intptr_t)v6776 = v6775;

	i8 v6777 = (i8)(intptr_t)(ws+3364);
	i1 v6778 = *(i1*)(intptr_t)v6777;
	i8 v6779 = (i8)(intptr_t)(ws+3328);
	i8 v6780 = *(i8*)(intptr_t)v6779;
	i8 v6781 = (i8)(intptr_t)(ws+3336);
	i8 v6782 = *(i8*)(intptr_t)v6781;
	i8 v6783 = (i8)(intptr_t)(ws+3360);
	i2 v6784 = *(i2*)(intptr_t)v6783;
	i8 v6785 = (i8)(intptr_t)(ws+3362);
	i2 v6786 = *(i2*)(intptr_t)v6785;
	i2 v6787 = (i2)+0;
	i8 v6788 = (i8)(intptr_t)(ws+3344);
	i1 v6789 = *(i1*)(intptr_t)v6788;
	i8 v6790 = (i8)(intptr_t)(f131_MidBeq);
	i8 v6791;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v6790)(&v6791, v6789, v6787, v6786, v6784, v6782, v6780, v6778);
	i8 v6792 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6792 = v6791;

endsub:;
	*p6757 = *(i8*)(intptr_t)(ws+3352);
}
	void f273_CondSimple(i8 /* rhs */, i8 /* lhs */);
	void f235_AllocLabel(i2* /* label */);
	void f235_AllocLabel(i2* /* label */);
	void f167_NodeWidth(i1* /* width */, i8 /* node */);
	void f230_IsSNum(i1* /* result */, i8 /* type */);
	void f116_MidBlts(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f163_MidBltu(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */);

// ConditionalLt workspace at ws+3328 length ws+37
void f287_ConditionalLt(i8* p6793 /* result */, i1 p6794 /* negated */, i8 p6795 /* rhs */, i8 p6796 /* lhs */) {
	*(i8*)(intptr_t)(ws+3328) = p6796; /*lhs */
	*(i8*)(intptr_t)(ws+3336) = p6795; /*rhs */
	*(i1*)(intptr_t)(ws+3344) = p6794; /*negated */

	i8 v6797 = (i8)(intptr_t)(ws+3328);
	i8 v6798 = *(i8*)(intptr_t)v6797;
	i8 v6799 = (i8)(intptr_t)(ws+3336);
	i8 v6800 = *(i8*)(intptr_t)v6799;
	i8 v6801 = (i8)(intptr_t)(f273_CondSimple);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6801)(v6800, v6798);

	i8 v6802 = (i8)(intptr_t)(f235_AllocLabel);
	i2 v6803;

	((void(*)(i2* /* label */))(intptr_t)v6802)(&v6803);
	i8 v6804 = (i8)(intptr_t)(ws+3360);
	*(i2*)(intptr_t)v6804 = v6803;

	i8 v6805 = (i8)(intptr_t)(f235_AllocLabel);
	i2 v6806;

	((void(*)(i2* /* label */))(intptr_t)v6805)(&v6806);
	i8 v6807 = (i8)(intptr_t)(ws+3362);
	*(i2*)(intptr_t)v6807 = v6806;

	i8 v6808 = (i8)(intptr_t)(ws+3328);
	i8 v6809 = *(i8*)(intptr_t)v6808;
	i8 v6810 = (i8)(intptr_t)(f167_NodeWidth);
	i1 v6811;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v6810)(&v6811, v6809);
	i8 v6812 = (i8)(intptr_t)(ws+3364);
	*(i1*)(intptr_t)v6812 = v6811;

	i8 v6813 = (i8)(intptr_t)(ws+3328);
	i8 v6814 = *(i8*)(intptr_t)v6813;
	i8 v6815 = v6814+(+16);
	i8 v6816 = *(i8*)(intptr_t)v6815;
	i8 v6817 = (i8)(intptr_t)(f230_IsSNum);
	i1 v6818;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6817)(&v6818, v6816);
	i1 v6819 = (i1)+0;
	if (v6818==v6819) goto c02_057e; else goto c02_057d;

c02_057d:;

	i8 v6820 = (i8)(intptr_t)(ws+3364);
	i1 v6821 = *(i1*)(intptr_t)v6820;
	i8 v6822 = (i8)(intptr_t)(ws+3328);
	i8 v6823 = *(i8*)(intptr_t)v6822;
	i8 v6824 = (i8)(intptr_t)(ws+3336);
	i8 v6825 = *(i8*)(intptr_t)v6824;
	i8 v6826 = (i8)(intptr_t)(ws+3360);
	i2 v6827 = *(i2*)(intptr_t)v6826;
	i8 v6828 = (i8)(intptr_t)(ws+3362);
	i2 v6829 = *(i2*)(intptr_t)v6828;
	i2 v6830 = (i2)+0;
	i8 v6831 = (i8)(intptr_t)(ws+3344);
	i1 v6832 = *(i1*)(intptr_t)v6831;
	i8 v6833 = (i8)(intptr_t)(f116_MidBlts);
	i8 v6834;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v6833)(&v6834, v6832, v6830, v6829, v6827, v6825, v6823, v6821);
	i8 v6835 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6835 = v6834;

	goto c02_057a;

c02_057e:;

	i8 v6836 = (i8)(intptr_t)(ws+3364);
	i1 v6837 = *(i1*)(intptr_t)v6836;
	i8 v6838 = (i8)(intptr_t)(ws+3328);
	i8 v6839 = *(i8*)(intptr_t)v6838;
	i8 v6840 = (i8)(intptr_t)(ws+3336);
	i8 v6841 = *(i8*)(intptr_t)v6840;
	i8 v6842 = (i8)(intptr_t)(ws+3360);
	i2 v6843 = *(i2*)(intptr_t)v6842;
	i8 v6844 = (i8)(intptr_t)(ws+3362);
	i2 v6845 = *(i2*)(intptr_t)v6844;
	i2 v6846 = (i2)+0;
	i8 v6847 = (i8)(intptr_t)(ws+3344);
	i1 v6848 = *(i1*)(intptr_t)v6847;
	i8 v6849 = (i8)(intptr_t)(f163_MidBltu);
	i8 v6850;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v6849)(&v6850, v6848, v6846, v6845, v6843, v6841, v6839, v6837);
	i8 v6851 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6851 = v6850;

c02_057a:;

endsub:;
	*p6793 = *(i8*)(intptr_t)(ws+3352);
}
const i1 c02_s0118[] = { 0x40,0x6e,0x65,0x78,0x74,0x20,0x61,0x6e,0x64,0x20,0x40,0x70,0x72,0x65,0x76,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x20,0x6f,0x6e,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0 };
	void f76_SimpleError(i8 /* message */);

// parser_i_bad_next_prev workspace at ws+3328 length ws+0
void f288_parser_i_bad_next_prev(void) {

	i8 v6852 = (i8)(intptr_t)c02_s0118;
	i8 v6853 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6853)(v6852);

endsub:;
}
const i1 c02_s0119[] = { 0x6f,0x6e,0x6c,0x79,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x76,0x61,0x6c,0x75,0x65,0x73,0x20,0x61,0x72,0x65,0x20,0x61,0x6c,0x6c,0x6f,0x77,0x65,0x64,0x20,0x68,0x65,0x72,0x65,0 };
	void f76_SimpleError(i8 /* message */);

// parser_i_constant_error workspace at ws+3352 length ws+0
void f289_parser_i_constant_error(void) {

	i8 v6854 = (i8)(intptr_t)c02_s0119;
	i8 v6855 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6855)(v6854);

endsub:;
}
	void f74_StartError(void);
const i1 c02_s011a[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s011b[] = { 0x20,0x74,0x61,0x6b,0x65,0x73,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f18_print_i8(i1 /* value */);
const i1 c02_s011c[] = { 0x20,0x62,0x75,0x74,0x20,0x77,0x61,0x73,0x20,0x67,0x69,0x76,0x65,0x6e,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f18_print_i8(i1 /* value */);
	void f75_EndError(void);

// i_check_sub_call_args workspace at ws+3376 length ws+8
void f290_i_check_sub_call_args(void) {

	i8 v6856 = (i8)(intptr_t)(ws+80);
	i8 v6857 = *(i8*)(intptr_t)v6856;
	i8 v6858 = v6857+(+8);
	i8 v6859 = *(i8*)(intptr_t)v6858;
	i8 v6860 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v6860 = v6859;

	i8 v6861 = (i8)(intptr_t)(ws+80);
	i8 v6862 = *(i8*)(intptr_t)v6861;
	i8 v6863 = v6862+(+40);
	i1 v6864 = *(i1*)(intptr_t)v6863;
	i8 v6865 = (i8)(intptr_t)(ws+3376);
	i8 v6866 = *(i8*)(intptr_t)v6865;
	i8 v6867 = v6866+(+80);
	i1 v6868 = *(i1*)(intptr_t)v6867;
	if (v6864==v6868) goto c02_0583; else goto c02_0582;

c02_0582:;

	i8 v6869 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v6869)();

	i8 v6870 = (i8)(intptr_t)c02_s011a;
	i8 v6871 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6871)(v6870);

	i8 v6872 = (i8)(intptr_t)(ws+3376);
	i8 v6873 = *(i8*)(intptr_t)v6872;
	i8 v6874 = *(i8*)(intptr_t)v6873;
	i8 v6875 = v6874+(+8);
	i8 v6876 = *(i8*)(intptr_t)v6875;
	i8 v6877 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6877)(v6876);

	i8 v6878 = (i8)(intptr_t)c02_s011b;
	i8 v6879 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6879)(v6878);

	i8 v6880 = (i8)(intptr_t)(ws+3376);
	i8 v6881 = *(i8*)(intptr_t)v6880;
	i8 v6882 = v6881+(+80);
	i1 v6883 = *(i1*)(intptr_t)v6882;
	i8 v6884 = (i8)(intptr_t)(f18_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v6884)(v6883);

	i8 v6885 = (i8)(intptr_t)c02_s011c;
	i8 v6886 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6886)(v6885);

	i8 v6887 = (i8)(intptr_t)(ws+80);
	i8 v6888 = *(i8*)(intptr_t)v6887;
	i8 v6889 = v6888+(+40);
	i1 v6890 = *(i1*)(intptr_t)v6889;
	i8 v6891 = (i8)(intptr_t)(f18_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v6891)(v6890);

	i8 v6892 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v6892)();

c02_0583:;

c02_057f:;

endsub:;
}
	void f202_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	void f34_Free(i8 /* block */);

// i_end_call workspace at ws+3376 length ws+8
void f291_i_end_call(void) {

	i8 v6893 = (i8)(intptr_t)(ws+40);
	i8 v6894 = *(i8*)(intptr_t)v6893;
	i8 v6895 = (i8)(intptr_t)(ws+80);
	i8 v6896 = *(i8*)(intptr_t)v6895;
	i8 v6897 = v6896+(+8);
	i8 v6898 = *(i8*)(intptr_t)v6897;
	i8 v6899 = (i8)(intptr_t)(f202_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v6899)(v6898, v6894);

	i8 v6900 = (i8)(intptr_t)(ws+80);
	i8 v6901 = *(i8*)(intptr_t)v6900;
	i8 v6902 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v6902 = v6901;

	i8 v6903 = (i8)(intptr_t)(ws+3376);
	i8 v6904 = *(i8*)(intptr_t)v6903;
	i8 v6905 = v6904+(+16);
	i8 v6906 = *(i8*)(intptr_t)v6905;
	i8 v6907 = (i8)(intptr_t)(ws+80);
	*(i8*)(intptr_t)v6907 = v6906;

	i8 v6908 = (i8)(intptr_t)(ws+3376);
	i8 v6909 = *(i8*)(intptr_t)v6908;
	i8 v6910 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v6910)(v6909);

endsub:;
}
	void f74_StartError(void);
const i1 c02_s011d[] = { 0x61,0x74,0x74,0x65,0x6d,0x70,0x74,0x20,0x74,0x6f,0x20,0x72,0x65,0x64,0x65,0x66,0x69,0x6e,0x65,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// SymbolRedeclarationError workspace at ws+3328 length ws+0
void f292_SymbolRedeclarationError(void) {

	i8 v6911 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v6911)();

	i8 v6912 = (i8)(intptr_t)c02_s011d;
	i8 v6913 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6913)(v6912);

	i8 v6914 = (i8)(intptr_t)(ws+72);
	i8 v6915 = *(i8*)(intptr_t)v6914;
	i8 v6916 = v6915+(+32);
	i8 v6917 = *(i8*)(intptr_t)v6916;
	i8 v6918 = v6917+(+8);
	i8 v6919 = *(i8*)(intptr_t)v6918;
	i8 v6920 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6920)(v6919);

	i8 v6921 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v6921)();

endsub:;
}
	void f74_StartError(void);
const i1 c02_s011e[] = { 0x77,0x72,0x6f,0x6e,0x67,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x6f,0x66,0x20,0x65,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x73,0x20,0x69,0x6e,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x66,0x6f,0x72,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// WrongNumberOfElementsError workspace at ws+3368 length ws+0
void f293_WrongNumberOfElementsError(void) {

	i8 v6922 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v6922)();

	i8 v6923 = (i8)(intptr_t)c02_s011e;
	i8 v6924 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6924)(v6923);

	i8 v6925 = (i8)(intptr_t)(ws+72);
	i8 v6926 = *(i8*)(intptr_t)v6925;
	i8 v6927 = v6926+(+32);
	i8 v6928 = *(i8*)(intptr_t)v6927;
	i8 v6929 = v6928+(+8);
	i8 v6930 = *(i8*)(intptr_t)v6929;
	i8 v6931 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6931)(v6930);

	i8 v6932 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v6932)();

endsub:;
}
	void f227_IsArray(i1* /* result */, i8 /* type */);
	void f238_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	void f240_ArchGuessIntType(i8* /* symbol */, i4 /* max */, i4 /* min */);
	void f293_WrongNumberOfElementsError(void);
	void f293_WrongNumberOfElementsError(void);

// CheckEndOfInitialiser workspace at ws+3328 length ws+4
void f294_CheckEndOfInitialiser(void) {

	i8 v6933 = (i8)(intptr_t)(ws+72);
	i8 v6934 = *(i8*)(intptr_t)v6933;
	i8 v6935 = (i8)(intptr_t)(f227_IsArray);
	i1 v6936;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6935)(&v6936, v6934);
	i1 v6937 = (i1)+0;
	if (v6936==v6937) goto c02_0588; else goto c02_0587;

c02_0587:;

	i8 v6938 = (i8)(intptr_t)(ws+72);
	i8 v6939 = *(i8*)(intptr_t)v6938;
	i8 v6940 = *(i8*)(intptr_t)v6939;
	i8 v6941 = v6940+(+50);
	i2 v6942 = *(i2*)(intptr_t)v6941;
	i8 v6943 = (i8)(intptr_t)(ws+3328);
	*(i2*)(intptr_t)v6943 = v6942;

	i8 v6944 = (i8)(intptr_t)(ws+1560);
	i2 v6945 = *(i2*)(intptr_t)v6944;
	i8 v6946 = (i8)(intptr_t)(ws+72);
	i8 v6947 = *(i8*)(intptr_t)v6946;
	i8 v6948 = *(i8*)(intptr_t)v6947;
	i8 v6949 = v6948+(+53);
	i1 v6950 = *(i1*)(intptr_t)v6949;
	i8 v6951 = (i8)(intptr_t)(f238_ArchAlignUp);
	i2 v6952;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v6951)(&v6952, v6950, v6945);
	i8 v6953 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v6953 = v6952;

	i8 v6954 = (i8)(intptr_t)(ws+72);
	i8 v6955 = *(i8*)(intptr_t)v6954;
	i8 v6956 = v6955+(+48);
	i2 v6957 = *(i2*)(intptr_t)v6956;
	i2 v6958 = (i2)+0;
	if (v6957==v6958) goto c02_058c; else goto c02_058d;

c02_058c:;

	i8 v6959 = (i8)(intptr_t)(ws+1560);
	i2 v6960 = *(i2*)(intptr_t)v6959;
	i8 v6961 = (i8)(intptr_t)(ws+72);
	i8 v6962 = *(i8*)(intptr_t)v6961;
	i8 v6963 = v6962+(+48);
	*(i2*)(intptr_t)v6963 = v6960;

	i8 v6964 = (i8)(intptr_t)(ws+1560);
	i2 v6965 = *(i2*)(intptr_t)v6964;
	i8 v6966 = (i8)(intptr_t)(ws+3328);
	i2 v6967 = *(i2*)(intptr_t)v6966;
	i2 v6968 = v6965/v6967;
	i8 v6969 = (i8)(intptr_t)(ws+3330);
	*(i2*)(intptr_t)v6969 = v6968;

	i8 v6970 = (i8)(intptr_t)(ws+3330);
	i2 v6971 = *(i2*)(intptr_t)v6970;
	i8 v6972 = (i8)(intptr_t)(ws+72);
	i8 v6973 = *(i8*)(intptr_t)v6972;
	i8 v6974 = v6973+(+8);
	*(i2*)(intptr_t)v6974 = v6971;

	i4 v6975 = (i4)+0;
	i8 v6976 = (i8)(intptr_t)(ws+3330);
	i2 v6977 = *(i2*)(intptr_t)v6976;
	i2 v6978 = v6977+(-1);
	i4 v6979 = v6978;
	i8 v6980 = (i8)(intptr_t)(f240_ArchGuessIntType);
	i8 v6981;

	((void(*)(i8* /* symbol */, i4 /* max */, i4 /* min */))(intptr_t)v6980)(&v6981, v6979, v6975);
	i8 v6982 = (i8)(intptr_t)(ws+72);
	i8 v6983 = *(i8*)(intptr_t)v6982;
	i8 v6984 = v6983+(+16);
	*(i8*)(intptr_t)v6984 = v6981;

c02_058d:;

c02_0589:;

	i8 v6985 = (i8)(intptr_t)(ws+1560);
	i2 v6986 = *(i2*)(intptr_t)v6985;
	i8 v6987 = (i8)(intptr_t)(ws+72);
	i8 v6988 = *(i8*)(intptr_t)v6987;
	i8 v6989 = v6988+(+48);
	i2 v6990 = *(i2*)(intptr_t)v6989;
	if (v6986==v6990) goto c02_0592; else goto c02_0591;

c02_0591:;

	i8 v6991 = (i8)(intptr_t)(f293_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v6991)();

c02_0592:;

c02_058e:;

	goto c02_0584;

c02_0588:;

	i8 v6992 = (i8)(intptr_t)(ws+1552);
	i8 v6993 = *(i8*)(intptr_t)v6992;
	i8 v6994 = (i8)+0;
	if (v6993==v6994) goto c02_0597; else goto c02_0596;

c02_0596:;

	i8 v6995 = (i8)(intptr_t)(f293_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v6995)();

c02_0597:;

c02_0593:;

c02_0584:;

endsub:;
}
	void f227_IsArray(i1* /* result */, i8 /* type */);

// GetInitedMember workspace at ws+3368 length ws+16
void f295_GetInitedMember(i8* p6996 /* member */, i8* p6997 /* type */) {

	i8 v6998 = (i8)+0;
	i8 v6999 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v6999 = v6998;

	i8 v7000 = (i8)(intptr_t)(ws+72);
	i8 v7001 = *(i8*)(intptr_t)v7000;
	i8 v7002 = (i8)(intptr_t)(f227_IsArray);
	i1 v7003;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7002)(&v7003, v7001);
	i1 v7004 = (i1)+0;
	if (v7003==v7004) goto c02_059c; else goto c02_059b;

c02_059b:;

	i8 v7005 = (i8)(intptr_t)(ws+72);
	i8 v7006 = *(i8*)(intptr_t)v7005;
	i8 v7007 = *(i8*)(intptr_t)v7006;
	i8 v7008 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v7008 = v7007;

	goto c02_0598;

c02_059c:;

	i8 v7009 = (i8)(intptr_t)(ws+1552);
	i8 v7010 = *(i8*)(intptr_t)v7009;
	i8 v7011 = (i8)+0;
	if (v7010==v7011) goto c02_05a0; else goto c02_05a1;

c02_05a0:;

	i8 v7012 = (i8)+0;
	i8 v7013 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v7013 = v7012;

	goto endsub;

c02_05a1:;

c02_059d:;

	i8 v7014 = (i8)(intptr_t)(ws+1552);
	i8 v7015 = *(i8*)(intptr_t)v7014;
	i8 v7016 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v7016 = v7015;

	i8 v7017 = (i8)(intptr_t)(ws+1552);
	i8 v7018 = *(i8*)(intptr_t)v7017;
	i8 v7019 = *(i8*)(intptr_t)v7018;
	i8 v7020 = *(i8*)(intptr_t)v7019;
	i8 v7021 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v7021 = v7020;

	i8 v7022 = (i8)(intptr_t)(ws+1552);
	i8 v7023 = *(i8*)(intptr_t)v7022;
	i8 v7024 = v7023+(+24);
	i8 v7025 = *(i8*)(intptr_t)v7024;
	i8 v7026 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v7026 = v7025;

c02_0598:;

endsub:;
	*p6997 = *(i8*)(intptr_t)(ws+3376);
	*p6996 = *(i8*)(intptr_t)(ws+3368);
}
	void f238_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	void f157_MidInit(i8* /* m */, i4 /* value */, i1 /* width */);
	void f256_Generate(i8 /* statement */);

// AlignTo workspace at ws+3368 length ws+4
void f296_AlignTo(i1 p7027 /* alignment */) {
	*(i1*)(intptr_t)(ws+3368) = p7027; /*alignment */

	i8 v7028 = (i8)(intptr_t)(ws+1562);
	i2 v7029 = *(i2*)(intptr_t)v7028;
	i8 v7030 = (i8)(intptr_t)(ws+3368);
	i1 v7031 = *(i1*)(intptr_t)v7030;
	i8 v7032 = (i8)(intptr_t)(f238_ArchAlignUp);
	i2 v7033;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v7032)(&v7033, v7031, v7029);
	i8 v7034 = (i8)(intptr_t)(ws+3370);
	*(i2*)(intptr_t)v7034 = v7033;

c02_05a4:;

	i8 v7035 = (i8)(intptr_t)(ws+1562);
	i2 v7036 = *(i2*)(intptr_t)v7035;
	i8 v7037 = (i8)(intptr_t)(ws+3370);
	i2 v7038 = *(i2*)(intptr_t)v7037;
	if (v7036==v7038) goto c02_05a7; else goto c02_05a6;

c02_05a6:;

	i1 v7039 = (i1)+1;
	i4 v7040 = (i4)+0;
	i8 v7041 = (i8)(intptr_t)(f157_MidInit);
	i8 v7042;

	((void(*)(i8* /* m */, i4 /* value */, i1 /* width */))(intptr_t)v7041)(&v7042, v7040, v7039);
	i8 v7043 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7043)(v7042);

	i8 v7044 = (i8)(intptr_t)(ws+1560);
	i2 v7045 = *(i2*)(intptr_t)v7044;
	i2 v7046 = v7045+(+1);
	i8 v7047 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v7047 = v7046;

	i8 v7048 = (i8)(intptr_t)(ws+1562);
	i2 v7049 = *(i2*)(intptr_t)v7048;
	i2 v7050 = v7049+(+1);
	i8 v7051 = (i8)(intptr_t)(ws+1562);
	*(i2*)(intptr_t)v7051 = v7050;

	goto c02_05a4;

c02_05a7:;

endsub:;
}
const i1 c02_s011f[] = { 0x6f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6f,0x72,0x64,0x65,0x72,0x20,0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x61,0x74,0x69,0x6f,0x6e,0 };
	void f76_SimpleError(i8 /* message */);

// CheckForOverlaps workspace at ws+3368 length ws+8
void f297_CheckForOverlaps(i8 p7052 /* member */) {
	*(i8*)(intptr_t)(ws+3368) = p7052; /*member */

	i8 v7053 = (i8)(intptr_t)(ws+3368);
	i8 v7054 = *(i8*)(intptr_t)v7053;
	i8 v7055 = (i8)+0;
	if (v7054==v7055) goto c02_05ab; else goto c02_05ac;

c02_05ab:;

	goto endsub;

c02_05ac:;

c02_05a8:;

	i8 v7056 = (i8)(intptr_t)(ws+3368);
	i8 v7057 = *(i8*)(intptr_t)v7056;
	i8 v7058 = *(i8*)(intptr_t)v7057;
	i8 v7059 = v7058+(+24);
	i2 v7060 = *(i2*)(intptr_t)v7059;
	i8 v7061 = (i8)(intptr_t)(ws+1560);
	i2 v7062 = *(i2*)(intptr_t)v7061;
	if (v7060<v7062) goto c02_05b0; else goto c02_05b1;

c02_05b0:;

	i8 v7063 = (i8)(intptr_t)c02_s011f;
	i8 v7064 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7064)(v7063);

c02_05b1:;

c02_05ad:;

endsub:;
}
	void f295_GetInitedMember(i8* /* member */, i8* /* type */);
	void f293_WrongNumberOfElementsError(void);
	void f296_AlignTo(i1 /* alignment */);
	void f297_CheckForOverlaps(i8 /* member */);

// GetInitedMemberChecked workspace at ws+3352 length ws+16
void f298_GetInitedMemberChecked(i8* p7065 /* member */, i8* p7066 /* type */) {

	i8 v7067 = (i8)(intptr_t)(f295_GetInitedMember);
	i8 v7068;
	i8 v7069;

	((void(*)(i8* /* member */, i8* /* type */))(intptr_t)v7067)(&v7068, &v7069);

	i8 v7070 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v7070 = v7069;

	i8 v7071 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v7071 = v7068;

	i8 v7072 = (i8)(intptr_t)(ws+3360);
	i8 v7073 = *(i8*)(intptr_t)v7072;
	i8 v7074 = (i8)+0;
	if (v7073==v7074) goto c02_05b5; else goto c02_05b6;

c02_05b5:;

	i8 v7075 = (i8)(intptr_t)(f293_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v7075)();

c02_05b6:;

c02_05b2:;

	i8 v7076 = (i8)(intptr_t)(ws+3360);
	i8 v7077 = *(i8*)(intptr_t)v7076;
	i8 v7078 = v7077+(+53);
	i1 v7079 = *(i1*)(intptr_t)v7078;
	i8 v7080 = (i8)(intptr_t)(f296_AlignTo);

	((void(*)(i1 /* alignment */))(intptr_t)v7080)(v7079);

	i8 v7081 = (i8)(intptr_t)(ws+3352);
	i8 v7082 = *(i8*)(intptr_t)v7081;
	i8 v7083 = (i8)(intptr_t)(f297_CheckForOverlaps);

	((void(*)(i8 /* member */))(intptr_t)v7083)(v7082);

endsub:;
	*p7066 = *(i8*)(intptr_t)(ws+3360);
	*p7065 = *(i8*)(intptr_t)(ws+3352);
}
static data f3___main_s05b7[] = {




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
static data f3___main_s05b8[] = {








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
static data f3___main_s05b9[] = {




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
static data f3___main_s05ba[] = {




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
static data f3___main_s05bb[] = {




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
static data f3___main_s05bc[] = {

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
	void f12_print(i8 /* ptr */);
	void f34_Free(i8 /* block */);

// token_destructor workspace at ws+3392 length ws+0
void f300_token_destructor(void) {

	i8 v7086 = (i8)(intptr_t)(ws+3376);
	i1 v7087 = *(i1*)(intptr_t)v7086;
	i1 v7088 = (i1)+41;
	if (v7087==v7088) goto c02_05c2; else goto c02_05c4;

c02_05c4:;

	i8 v7089 = (i8)(intptr_t)(ws+3376);
	i1 v7090 = *(i1*)(intptr_t)v7089;
	i1 v7091 = (i1)+33;
	if (v7090==v7091) goto c02_05c2; else goto c02_05c3;

c02_05c2:;

	i8 v7092 = (i8)(intptr_t)c02_s0165;
	i8 v7093 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7093)(v7092);

	i8 v7094 = (i8)(intptr_t)(ws+3384);
	i8 v7095 = *(i8*)(intptr_t)v7094;
	i8 v7096 = *(i8*)(intptr_t)v7095;
	i8 v7097 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v7097)(v7096);

c02_05c3:;

c02_05bd:;

endsub:;
}
	void f300_token_destructor(void);

// yy_destructor workspace at ws+3376 length ws+16
void f299_yy_destructor(i8 p7084 /* yypminor */, i1 p7085 /* yymajor */) {
	*(i1*)(intptr_t)(ws+3376) = p7085; /*yymajor */
	*(i8*)(intptr_t)(ws+3384) = p7084; /*yypminor */


	i8 v7098 = (i8)(intptr_t)(ws+3376);
	i1 v7099 = *(i1*)(intptr_t)v7098;
	i1 v7100 = (i1)+0;
	if (v7099==v7100) goto c02_05cb; else goto c02_05cc;

c02_05cc:;

	i8 v7101 = (i8)(intptr_t)(ws+3376);
	i1 v7102 = *(i1*)(intptr_t)v7101;
	i1 v7103 = (i1)+69;
	if (v7102<v7103) goto c02_05ca; else goto c02_05cb;

c02_05ca:;

	i8 v7104 = (i8)(intptr_t)(f300_token_destructor);

	((void(*)(void))(intptr_t)v7104)();

c02_05cb:;

c02_05c5:;

endsub:;
}
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// yy_pop_parser_stack workspace at ws+3328 length ws+0
void f301_yy_pop_parser_stack(void) {

	i8 v7105 = (i8)(intptr_t)(ws+1568);
	i8 v7106 = *(i8*)(intptr_t)v7105;
	i8 v7107 = v7106+(-16);
	i8 v7108 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v7108 = v7107;

	i8 v7109 = (i8)(intptr_t)(ws+1568);
	i8 v7110 = *(i8*)(intptr_t)v7109;
	i8 v7111 = v7110+(+2);
	i1 v7112 = *(i1*)(intptr_t)v7111;
	i8 v7113 = (i8)(intptr_t)(ws+1568);
	i8 v7114 = *(i8*)(intptr_t)v7113;
	i8 v7115 = v7114+(+8);
	i8 v7116 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7116)(v7115, v7112);

endsub:;
}
	void f301_yy_pop_parser_stack(void);

// yy_pop_all_parser_stack workspace at ws+3328 length ws+0
void f302_yy_pop_all_parser_stack(void) {

c02_05cf:;

	i8 v7117 = (i8)(intptr_t)(ws+1568);
	i8 v7118 = *(i8*)(intptr_t)v7117;
	i8 v7119 = (i8)(intptr_t)(ws+1576);
	if (v7118==v7119) goto c02_05d2; else goto c02_05d1;

c02_05d1:;

	i8 v7120 = (i8)(intptr_t)(f301_yy_pop_parser_stack);

	((void(*)(void))(intptr_t)v7120)();

	goto c02_05cf;

c02_05d2:;

endsub:;
}
	void f302_yy_pop_all_parser_stack(void);
	void f74_StartError(void);
const i1 c02_s0166[] = { 0x70,0x61,0x72,0x73,0x65,0x72,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// yy_stack_overflow workspace at ws+3328 length ws+0
void f303_yy_stack_overflow(void) {

	i8 v7121 = (i8)(intptr_t)(f302_yy_pop_all_parser_stack);

	((void(*)(void))(intptr_t)v7121)();

	i8 v7122 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v7122)();

	i8 v7123 = (i8)(intptr_t)c02_s0166;
	i8 v7124 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7124)(v7123);

	i8 v7125 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v7125)();

endsub:;
}
static data f3___main_s05d3[] = {








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
static data f3___main_s05d4[] = {








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
	void f31_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);

// CopyMinor workspace at ws+3328 length ws+16
void f305_CopyMinor(i8 p7150 /* dest */, i8 p7151 /* src */) {
	*(i8*)(intptr_t)(ws+3328) = p7151; /*src */
	*(i8*)(intptr_t)(ws+3336) = p7150; /*dest */

	i8 v7152 = (i8)(intptr_t)(ws+3328);
	i8 v7153 = *(i8*)(intptr_t)v7152;
	i8 v7154 = (i8)+8;
	i8 v7155 = (i8)(intptr_t)(ws+3336);
	i8 v7156 = *(i8*)(intptr_t)v7155;
	i8 v7157 = (i8)(intptr_t)(f31_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v7157)(v7156, v7154, v7153);

endsub:;
}
	void f303_yy_stack_overflow(void);
	void f305_CopyMinor(i8 /* dest */, i8 /* src */);

// Reducer workspace at ws+3328 length ws+0
void f307_Reducer(void) {

endsub:;
}
	void f114_MidReturn(i8* /* m */);
	void f256_Generate(i8 /* statement */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_0 workspace at ws+3328 length ws+0
void f308_reduce_0(void) {

	i8 v7199 = (i8)(intptr_t)(f114_MidReturn);
	i8 v7200;

	((void(*)(i8* /* m */))(intptr_t)v7199)(&v7200);
	i8 v7201 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7201)(v7200);

	i1 v7202 = (i1)+22;
	i8 v7203 = (i8)(intptr_t)(ws+3248);
	i8 v7204 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7204)(v7203, v7202);

endsub:;
}
	void f259_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_1 workspace at ws+3328 length ws+0
void f309_reduce_1(void) {

	i8 v7205 = (i8)(intptr_t)(ws+40);
	i8 v7206 = *(i8*)(intptr_t)v7205;
	i8 v7207 = (i8)(intptr_t)(ws+3272);
	i8 v7208 = *(i8*)(intptr_t)v7207;
	i8 v7209 = (i8)(intptr_t)(ws+3256);
	i8 v7210 = *(i8*)(intptr_t)v7209;
	i8 v7211 = (i8)(intptr_t)(f259_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v7211)(v7210, v7208, v7206);

	i1 v7212 = (i1)+6;
	i8 v7213 = (i8)(intptr_t)(ws+3264);
	i8 v7214 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7214)(v7213, v7212);

	i1 v7215 = (i1)+22;
	i8 v7216 = (i8)(intptr_t)(ws+3248);
	i8 v7217 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7217)(v7216, v7215);

endsub:;
}
	void f259_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f268_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f120_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f138_MidDeref(i8* /* m */, i8 /* left */, i1 /* width */);
	void f121_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f256_Generate(i8 /* statement */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_2 workspace at ws+3328 length ws+1
void f310_reduce_2(void) {

	i8 v7218 = (i8)(intptr_t)(ws+40);
	i8 v7219 = *(i8*)(intptr_t)v7218;
	i8 v7220 = (i8)(intptr_t)(ws+3288);
	i8 v7221 = *(i8*)(intptr_t)v7220;
	i8 v7222 = (i8)(intptr_t)(ws+3272);
	i8 v7223 = *(i8*)(intptr_t)v7222;
	i8 v7224 = (i8)(intptr_t)(f259_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v7224)(v7223, v7221, v7219);

	i8 v7225 = (i8)(intptr_t)(ws+3256);
	i8 v7226 = *(i8*)(intptr_t)v7225;
	i8 v7227 = (i8)(intptr_t)(ws+3288);
	i8 v7228 = *(i8*)(intptr_t)v7227;
	i8 v7229 = *(i8*)(intptr_t)v7228;
	i8 v7230 = *(i8*)(intptr_t)v7229;
	i8 v7231 = (i8)(intptr_t)(f268_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v7231)(v7230, v7226);

	i8 v7232 = (i8)(intptr_t)(ws+3256);
	i8 v7233 = *(i8*)(intptr_t)v7232;
	i8 v7234 = v7233+(+16);
	i8 v7235 = *(i8*)(intptr_t)v7234;
	i8 v7236 = v7235+(+48);
	i2 v7237 = *(i2*)(intptr_t)v7236;
	i1 v7238 = v7237;
	i8 v7239 = (i8)(intptr_t)(ws+3328);
	*(i1*)(intptr_t)v7239 = v7238;

	i8 v7240 = (i8)(intptr_t)(ws+3328);
	i1 v7241 = *(i1*)(intptr_t)v7240;
	i8 v7242 = (i8)(intptr_t)(ws+3256);
	i8 v7243 = *(i8*)(intptr_t)v7242;
	i8 v7244 = (i8)(intptr_t)(ws+3328);
	i1 v7245 = *(i1*)(intptr_t)v7244;
	i8 v7246 = (i8)(intptr_t)(ws+3288);
	i8 v7247 = *(i8*)(intptr_t)v7246;
	i2 v7248 = (i2)+0;
	i8 v7249 = (i8)(intptr_t)(f120_MidAddress);
	i8 v7250;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v7249)(&v7250, v7248, v7247);
	i8 v7251 = (i8)(intptr_t)(f138_MidDeref);
	i8 v7252;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v7251)(&v7252, v7250, v7245);
	i8 v7253 = (i8)(intptr_t)(f121_MidStore);
	i8 v7254;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v7253)(&v7254, v7252, v7243, v7241);
	i8 v7255 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7255)(v7254);

	i1 v7256 = (i1)+6;
	i8 v7257 = (i8)(intptr_t)(ws+3280);
	i8 v7258 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7258)(v7257, v7256);

	i1 v7259 = (i1)+2;
	i8 v7260 = (i8)(intptr_t)(ws+3264);
	i8 v7261 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7261)(v7260, v7259);

	i1 v7262 = (i1)+22;
	i8 v7263 = (i8)(intptr_t)(ws+3248);
	i8 v7264 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7264)(v7263, v7262);

endsub:;
}
const i1 c02_s0169[] = { 0x74,0x79,0x70,0x65,0x73,0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x62,0x65,0x20,0x69,0x6e,0x66,0x65,0x72,0x72,0x65,0x64,0x20,0x66,0x6f,0x72,0x20,0x6e,0x75,0x6d,0x65,0x72,0x69,0x63,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x73,0 };
	void f76_SimpleError(i8 /* message */);
	void f231_IsScalar(i1* /* result */, i8 /* type */);
const i1 c02_s016a[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x73,0x73,0x69,0x67,0x6e,0x20,0x74,0x6f,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x73,0 };
	void f76_SimpleError(i8 /* message */);
	void f259_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f268_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f120_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f138_MidDeref(i8* /* m */, i8 /* left */, i1 /* width */);
	void f121_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f256_Generate(i8 /* statement */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_3 workspace at ws+3328 length ws+9
void f311_reduce_3(void) {

	i8 v7265 = (i8)(intptr_t)(ws+3256);
	i8 v7266 = *(i8*)(intptr_t)v7265;
	i8 v7267 = v7266+(+16);
	i8 v7268 = *(i8*)(intptr_t)v7267;
	i8 v7269 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v7269 = v7268;

	i8 v7270 = (i8)(intptr_t)(ws+3328);
	i8 v7271 = *(i8*)(intptr_t)v7270;
	i8 v7272 = (i8)+0;
	if (v7271==v7272) goto c02_05e3; else goto c02_05e4;

c02_05e3:;

	i8 v7273 = (i8)(intptr_t)c02_s0169;
	i8 v7274 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7274)(v7273);

c02_05e4:;

c02_05e0:;

	i8 v7275 = (i8)(intptr_t)(ws+3328);
	i8 v7276 = *(i8*)(intptr_t)v7275;
	i8 v7277 = (i8)(intptr_t)(f231_IsScalar);
	i1 v7278;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7277)(&v7278, v7276);
	i1 v7279 = (i1)+0;
	if (v7278==v7279) goto c02_05e8; else goto c02_05e9;

c02_05e8:;

	i8 v7280 = (i8)(intptr_t)c02_s016a;
	i8 v7281 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7281)(v7280);

c02_05e9:;

c02_05e5:;

	i8 v7282 = (i8)(intptr_t)(ws+40);
	i8 v7283 = *(i8*)(intptr_t)v7282;
	i8 v7284 = (i8)(intptr_t)(ws+3272);
	i8 v7285 = *(i8*)(intptr_t)v7284;
	i8 v7286 = (i8)(intptr_t)(ws+3328);
	i8 v7287 = *(i8*)(intptr_t)v7286;
	i8 v7288 = (i8)(intptr_t)(f259_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v7288)(v7287, v7285, v7283);

	i8 v7289 = (i8)(intptr_t)(ws+3256);
	i8 v7290 = *(i8*)(intptr_t)v7289;
	i8 v7291 = (i8)(intptr_t)(ws+3272);
	i8 v7292 = *(i8*)(intptr_t)v7291;
	i8 v7293 = *(i8*)(intptr_t)v7292;
	i8 v7294 = *(i8*)(intptr_t)v7293;
	i8 v7295 = (i8)(intptr_t)(f268_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v7295)(v7294, v7290);

	i8 v7296 = (i8)(intptr_t)(ws+3256);
	i8 v7297 = *(i8*)(intptr_t)v7296;
	i8 v7298 = v7297+(+16);
	i8 v7299 = *(i8*)(intptr_t)v7298;
	i8 v7300 = v7299+(+48);
	i2 v7301 = *(i2*)(intptr_t)v7300;
	i1 v7302 = v7301;
	i8 v7303 = (i8)(intptr_t)(ws+3336);
	*(i1*)(intptr_t)v7303 = v7302;

	i8 v7304 = (i8)(intptr_t)(ws+3336);
	i1 v7305 = *(i1*)(intptr_t)v7304;
	i8 v7306 = (i8)(intptr_t)(ws+3256);
	i8 v7307 = *(i8*)(intptr_t)v7306;
	i8 v7308 = (i8)(intptr_t)(ws+3336);
	i1 v7309 = *(i1*)(intptr_t)v7308;
	i8 v7310 = (i8)(intptr_t)(ws+3272);
	i8 v7311 = *(i8*)(intptr_t)v7310;
	i2 v7312 = (i2)+0;
	i8 v7313 = (i8)(intptr_t)(f120_MidAddress);
	i8 v7314;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v7313)(&v7314, v7312, v7311);
	i8 v7315 = (i8)(intptr_t)(f138_MidDeref);
	i8 v7316;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v7315)(&v7316, v7314, v7309);
	i8 v7317 = (i8)(intptr_t)(f121_MidStore);
	i8 v7318;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v7317)(&v7318, v7316, v7307, v7305);
	i8 v7319 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7319)(v7318);

	i1 v7320 = (i1)+2;
	i8 v7321 = (i8)(intptr_t)(ws+3264);
	i8 v7322 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7322)(v7321, v7320);

	i1 v7323 = (i1)+22;
	i8 v7324 = (i8)(intptr_t)(ws+3248);
	i8 v7325 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7325)(v7324, v7323);

endsub:;
}
	void f234_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f268_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f138_MidDeref(i8* /* m */, i8 /* left */, i1 /* width */);
	void f121_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f256_Generate(i8 /* statement */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_4 workspace at ws+3328 length ws+17
void f312_reduce_4(void) {

	i8 v7326 = (i8)(intptr_t)(ws+3272);
	i8 v7327 = *(i8*)(intptr_t)v7326;
	i8 v7328 = v7327+(+16);
	i8 v7329 = *(i8*)(intptr_t)v7328;
	i8 v7330 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v7330 = v7329;

	i8 v7331 = (i8)(intptr_t)(ws+3272);
	i8 v7332 = *(i8*)(intptr_t)v7331;
	i8 v7333 = (i8)(intptr_t)(f234_UndoLValue);
	i8 v7334;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v7333)(&v7334, v7332);
	i8 v7335 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v7335 = v7334;

	i8 v7336 = (i8)(intptr_t)(ws+3256);
	i8 v7337 = *(i8*)(intptr_t)v7336;
	i8 v7338 = (i8)(intptr_t)(ws+3328);
	i8 v7339 = *(i8*)(intptr_t)v7338;
	i8 v7340 = (i8)(intptr_t)(f268_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v7340)(v7339, v7337);

	i8 v7341 = (i8)(intptr_t)(ws+3328);
	i8 v7342 = *(i8*)(intptr_t)v7341;
	i8 v7343 = v7342+(+48);
	i2 v7344 = *(i2*)(intptr_t)v7343;
	i1 v7345 = v7344;
	i8 v7346 = (i8)(intptr_t)(ws+3344);
	*(i1*)(intptr_t)v7346 = v7345;

	i8 v7347 = (i8)(intptr_t)(ws+3344);
	i1 v7348 = *(i1*)(intptr_t)v7347;
	i8 v7349 = (i8)(intptr_t)(ws+3256);
	i8 v7350 = *(i8*)(intptr_t)v7349;
	i8 v7351 = (i8)(intptr_t)(ws+3344);
	i1 v7352 = *(i1*)(intptr_t)v7351;
	i8 v7353 = (i8)(intptr_t)(ws+3336);
	i8 v7354 = *(i8*)(intptr_t)v7353;
	i8 v7355 = (i8)(intptr_t)(f138_MidDeref);
	i8 v7356;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v7355)(&v7356, v7354, v7352);
	i8 v7357 = (i8)(intptr_t)(f121_MidStore);
	i8 v7358;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v7357)(&v7358, v7356, v7350, v7348);
	i8 v7359 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7359)(v7358);

	i1 v7360 = (i1)+2;
	i8 v7361 = (i8)(intptr_t)(ws+3264);
	i8 v7362 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7362)(v7361, v7360);

	i1 v7363 = (i1)+22;
	i8 v7364 = (i8)(intptr_t)(ws+3248);
	i8 v7365 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7365)(v7364, v7363);

endsub:;
}
	void f284_TerminateNormalLoop(i8 /* ll */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_5 workspace at ws+3328 length ws+0
void f313_reduce_5(void) {

	i8 v7366 = (i8)(intptr_t)(ws+3272);
	i8 v7367 = *(i8*)(intptr_t)v7366;
	i8 v7368 = (i8)(intptr_t)(f284_TerminateNormalLoop);

	((void(*)(i8 /* ll */))(intptr_t)v7368)(v7367);

	i1 v7369 = (i1)+10;
	i8 v7370 = (i8)(intptr_t)(ws+3256);
	i8 v7371 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7371)(v7370, v7369);

	i1 v7372 = (i1)+13;
	i8 v7373 = (i8)(intptr_t)(ws+3248);
	i8 v7374 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7374)(v7373, v7372);

endsub:;
}
	void f283_BeginNormalLoop(i8* /* ll */);
	void f130_MidLabel(i8* /* m */, i2 /* label */);
	void f256_Generate(i8 /* statement */);

// reduce_6 workspace at ws+3328 length ws+0
void f314_reduce_6(void) {

	i8 v7375 = (i8)(intptr_t)(f283_BeginNormalLoop);
	i8 v7376;

	((void(*)(i8* /* ll */))(intptr_t)v7375)(&v7376);
	i8 v7377 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7377 = v7376;

	i8 v7378 = (i8)(intptr_t)(ws+54);
	i2 v7379 = *(i2*)(intptr_t)v7378;
	i8 v7380 = (i8)(intptr_t)(f130_MidLabel);
	i8 v7381;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7380)(&v7381, v7379);
	i8 v7382 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7382)(v7381);

endsub:;
}
	void f284_TerminateNormalLoop(i8 /* ll */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_7 workspace at ws+3328 length ws+0
void f315_reduce_7(void) {

	i8 v7383 = (i8)(intptr_t)(ws+3272);
	i8 v7384 = *(i8*)(intptr_t)v7383;
	i8 v7385 = (i8)(intptr_t)(f284_TerminateNormalLoop);

	((void(*)(i8 /* ll */))(intptr_t)v7385)(v7384);

	i1 v7386 = (i1)+10;
	i8 v7387 = (i8)(intptr_t)(ws+3256);
	i8 v7388 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7388)(v7387, v7386);

	i1 v7389 = (i1)+13;
	i8 v7390 = (i8)(intptr_t)(ws+3248);
	i8 v7391 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7391)(v7390, v7389);

endsub:;
}
	void f283_BeginNormalLoop(i8* /* ll */);
	void f130_MidLabel(i8* /* m */, i2 /* label */);
	void f256_Generate(i8 /* statement */);
	void f235_AllocLabel(i2* /* label */);
	void f235_AllocLabel(i2* /* label */);
	void f257_GenerateConditional(i8 /* rootnode */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_8 workspace at ws+3328 length ws+2
void f316_reduce_8(void) {

	i8 v7392 = (i8)(intptr_t)(f283_BeginNormalLoop);
	i8 v7393;

	((void(*)(i8* /* ll */))(intptr_t)v7392)(&v7393);
	i8 v7394 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7394 = v7393;

	i8 v7395 = (i8)(intptr_t)(ws+54);
	i2 v7396 = *(i2*)(intptr_t)v7395;
	i8 v7397 = (i8)(intptr_t)(f130_MidLabel);
	i8 v7398;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7397)(&v7398, v7396);
	i8 v7399 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7399)(v7398);

	i8 v7400 = (i8)(intptr_t)(f235_AllocLabel);
	i2 v7401;

	((void(*)(i2* /* label */))(intptr_t)v7400)(&v7401);
	i8 v7402 = (i8)(intptr_t)(ws+3328);
	*(i2*)(intptr_t)v7402 = v7401;

	i8 v7403 = (i8)(intptr_t)(f235_AllocLabel);
	i2 v7404;

	((void(*)(i2* /* label */))(intptr_t)v7403)(&v7404);
	i8 v7405 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v7405 = v7404;

	i8 v7406 = (i8)(intptr_t)(ws+3328);
	i2 v7407 = *(i2*)(intptr_t)v7406;
	i8 v7408 = (i8)(intptr_t)(ws+3256);
	i8 v7409 = *(i8*)(intptr_t)v7408;
	*(i2*)(intptr_t)v7409 = v7407;

	i8 v7410 = (i8)(intptr_t)(ws+52);
	i2 v7411 = *(i2*)(intptr_t)v7410;
	i8 v7412 = (i8)(intptr_t)(ws+3256);
	i8 v7413 = *(i8*)(intptr_t)v7412;
	i8 v7414 = v7413+(+2);
	*(i2*)(intptr_t)v7414 = v7411;

	i8 v7415 = (i8)(intptr_t)(ws+3328);
	i2 v7416 = *(i2*)(intptr_t)v7415;
	i8 v7417 = (i8)(intptr_t)(ws+3256);
	i8 v7418 = *(i8*)(intptr_t)v7417;
	i8 v7419 = v7418+(+4);
	*(i2*)(intptr_t)v7419 = v7416;

	i8 v7420 = (i8)(intptr_t)(ws+3256);
	i8 v7421 = *(i8*)(intptr_t)v7420;
	i8 v7422 = (i8)(intptr_t)(f257_GenerateConditional);

	((void(*)(i8 /* rootnode */))(intptr_t)v7422)(v7421);

	i8 v7423 = (i8)(intptr_t)(ws+52);
	i2 v7424 = *(i2*)(intptr_t)v7423;
	i8 v7425 = (i8)(intptr_t)(ws+3240);
	i8 v7426 = *(i8*)(intptr_t)v7425;
	i8 v7427 = v7426+(+2);
	*(i2*)(intptr_t)v7427 = v7424;

	i1 v7428 = (i1)+13;
	i8 v7429 = (i8)(intptr_t)(ws+3248);
	i8 v7430 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7430)(v7429, v7428);

endsub:;
}
const i1 c02_s016b[] = { 0x6e,0x6f,0x74,0x68,0x69,0x6e,0x67,0x20,0x74,0x6f,0x20,0x62,0x72,0x65,0x61,0x6b,0x20,0x74,0x6f,0 };
	void f76_SimpleError(i8 /* message */);
	void f164_MidJump(i8* /* m */, i2 /* label */);
	void f256_Generate(i8 /* statement */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_9 workspace at ws+3328 length ws+0
void f317_reduce_9(void) {

	i8 v7431 = (i8)(intptr_t)(ws+52);
	i2 v7432 = *(i2*)(intptr_t)v7431;
	i2 v7433 = (i2)+0;
	if (v7432==v7433) goto c02_05ed; else goto c02_05ee;

c02_05ed:;

	i8 v7434 = (i8)(intptr_t)c02_s016b;
	i8 v7435 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7435)(v7434);

c02_05ee:;

c02_05ea:;

	i8 v7436 = (i8)(intptr_t)(ws+52);
	i2 v7437 = *(i2*)(intptr_t)v7436;
	i8 v7438 = (i8)(intptr_t)(f164_MidJump);
	i8 v7439;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7438)(&v7439, v7437);
	i8 v7440 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7440)(v7439);

	i1 v7441 = (i1)+22;
	i8 v7442 = (i8)(intptr_t)(ws+3248);
	i8 v7443 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7443)(v7442, v7441);

endsub:;
}
const i1 c02_s016c[] = { 0x6e,0x6f,0x74,0x68,0x69,0x6e,0x67,0x20,0x74,0x6f,0x20,0x63,0x6f,0x6e,0x74,0x69,0x6e,0x75,0x65,0x20,0x74,0x6f,0 };
	void f76_SimpleError(i8 /* message */);
	void f164_MidJump(i8* /* m */, i2 /* label */);
	void f256_Generate(i8 /* statement */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_10 workspace at ws+3328 length ws+0
void f318_reduce_10(void) {

	i8 v7444 = (i8)(intptr_t)(ws+54);
	i2 v7445 = *(i2*)(intptr_t)v7444;
	i2 v7446 = (i2)+0;
	if (v7445==v7446) goto c02_05f2; else goto c02_05f3;

c02_05f2:;

	i8 v7447 = (i8)(intptr_t)c02_s016c;
	i8 v7448 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7448)(v7447);

c02_05f3:;

c02_05ef:;

	i8 v7449 = (i8)(intptr_t)(ws+54);
	i2 v7450 = *(i2*)(intptr_t)v7449;
	i8 v7451 = (i8)(intptr_t)(f164_MidJump);
	i8 v7452;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7451)(&v7452, v7450);
	i8 v7453 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7453)(v7452);

	i1 v7454 = (i1)+22;
	i8 v7455 = (i8)(intptr_t)(ws+3248);
	i8 v7456 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7456)(v7455, v7454);

endsub:;
}
	void f130_MidLabel(i8* /* m */, i2 /* label */);
	void f256_Generate(i8 /* statement */);
	void f34_Free(i8 /* block */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_11 workspace at ws+3328 length ws+8
void f319_reduce_11(void) {

	i8 v7457 = (i8)(intptr_t)(ws+56);
	i8 v7458 = *(i8*)(intptr_t)v7457;
	i2 v7459 = *(i2*)(intptr_t)v7458;
	i8 v7460 = (i8)(intptr_t)(f130_MidLabel);
	i8 v7461;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7460)(&v7461, v7459);
	i8 v7462 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7462)(v7461);

	i8 v7463 = (i8)(intptr_t)(ws+56);
	i8 v7464 = *(i8*)(intptr_t)v7463;
	i8 v7465 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v7465 = v7464;

	i8 v7466 = (i8)(intptr_t)(ws+56);
	i8 v7467 = *(i8*)(intptr_t)v7466;
	i8 v7468 = v7467+(+8);
	i8 v7469 = *(i8*)(intptr_t)v7468;
	i8 v7470 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)v7470 = v7469;

	i8 v7471 = (i8)(intptr_t)(ws+3328);
	i8 v7472 = *(i8*)(intptr_t)v7471;
	i8 v7473 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v7473)(v7472);

	i1 v7474 = (i1)+26;
	i8 v7475 = (i8)(intptr_t)(ws+3280);
	i8 v7476 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7476)(v7475, v7474);

	i1 v7477 = (i1)+10;
	i8 v7478 = (i8)(intptr_t)(ws+3256);
	i8 v7479 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7479)(v7478, v7477);

	i1 v7480 = (i1)+12;
	i8 v7481 = (i8)(intptr_t)(ws+3248);
	i8 v7482 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7482)(v7481, v7480);

endsub:;
}
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f235_AllocLabel(i2* /* label */);

// reduce_12 workspace at ws+3328 length ws+8
void f320_reduce_12(void) {

	i8 v7483 = (i8)+16;
	i8 v7484 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v7485;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v7484)(&v7485, v7483);
	i8 v7486 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v7486 = v7485;

	i8 v7487 = (i8)(intptr_t)(ws+56);
	i8 v7488 = *(i8*)(intptr_t)v7487;
	i8 v7489 = (i8)(intptr_t)(ws+3328);
	i8 v7490 = *(i8*)(intptr_t)v7489;
	i8 v7491 = v7490+(+8);
	*(i8*)(intptr_t)v7491 = v7488;

	i8 v7492 = (i8)(intptr_t)(ws+3328);
	i8 v7493 = *(i8*)(intptr_t)v7492;
	i8 v7494 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)v7494 = v7493;

	i8 v7495 = (i8)(intptr_t)(f235_AllocLabel);
	i2 v7496;

	((void(*)(i2* /* label */))(intptr_t)v7495)(&v7496);
	i8 v7497 = (i8)(intptr_t)(ws+56);
	i8 v7498 = *(i8*)(intptr_t)v7497;
	*(i2*)(intptr_t)v7498 = v7496;

endsub:;
}
	void f235_AllocLabel(i2* /* label */);
	void f235_AllocLabel(i2* /* label */);
	void f257_GenerateConditional(i8 /* rootnode */);

// reduce_13 workspace at ws+3328 length ws+4
void f321_reduce_13(void) {

	i8 v7499 = (i8)(intptr_t)(f235_AllocLabel);
	i2 v7500;

	((void(*)(i2* /* label */))(intptr_t)v7499)(&v7500);
	i8 v7501 = (i8)(intptr_t)(ws+3328);
	*(i2*)(intptr_t)v7501 = v7500;

	i8 v7502 = (i8)(intptr_t)(f235_AllocLabel);
	i2 v7503;

	((void(*)(i2* /* label */))(intptr_t)v7502)(&v7503);
	i8 v7504 = (i8)(intptr_t)(ws+3330);
	*(i2*)(intptr_t)v7504 = v7503;

	i8 v7505 = (i8)(intptr_t)(ws+3328);
	i2 v7506 = *(i2*)(intptr_t)v7505;
	i8 v7507 = (i8)(intptr_t)(ws+56);
	i8 v7508 = *(i8*)(intptr_t)v7507;
	i8 v7509 = v7508+(+2);
	*(i2*)(intptr_t)v7509 = v7506;

	i8 v7510 = (i8)(intptr_t)(ws+3330);
	i2 v7511 = *(i2*)(intptr_t)v7510;
	i8 v7512 = (i8)(intptr_t)(ws+56);
	i8 v7513 = *(i8*)(intptr_t)v7512;
	i8 v7514 = v7513+(+4);
	*(i2*)(intptr_t)v7514 = v7511;

	i8 v7515 = (i8)(intptr_t)(ws+3328);
	i2 v7516 = *(i2*)(intptr_t)v7515;
	i8 v7517 = (i8)(intptr_t)(ws+3248);
	i8 v7518 = *(i8*)(intptr_t)v7517;
	*(i2*)(intptr_t)v7518 = v7516;

	i8 v7519 = (i8)(intptr_t)(ws+3330);
	i2 v7520 = *(i2*)(intptr_t)v7519;
	i8 v7521 = (i8)(intptr_t)(ws+3248);
	i8 v7522 = *(i8*)(intptr_t)v7521;
	i8 v7523 = v7522+(+2);
	*(i2*)(intptr_t)v7523 = v7520;

	i8 v7524 = (i8)(intptr_t)(ws+3328);
	i2 v7525 = *(i2*)(intptr_t)v7524;
	i8 v7526 = (i8)(intptr_t)(ws+3248);
	i8 v7527 = *(i8*)(intptr_t)v7526;
	i8 v7528 = v7527+(+4);
	*(i2*)(intptr_t)v7528 = v7525;

	i8 v7529 = (i8)(intptr_t)(ws+3248);
	i8 v7530 = *(i8*)(intptr_t)v7529;
	i8 v7531 = (i8)(intptr_t)(f257_GenerateConditional);

	((void(*)(i8 /* rootnode */))(intptr_t)v7531)(v7530);

endsub:;
}
	void f130_MidLabel(i8* /* m */, i2 /* label */);
	void f256_Generate(i8 /* statement */);

// reduce_14 workspace at ws+3328 length ws+0
void f322_reduce_14(void) {

	i8 v7532 = (i8)(intptr_t)(ws+56);
	i8 v7533 = *(i8*)(intptr_t)v7532;
	i8 v7534 = v7533+(+4);
	i2 v7535 = *(i2*)(intptr_t)v7534;
	i8 v7536 = (i8)(intptr_t)(f130_MidLabel);
	i8 v7537;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7536)(&v7537, v7535);
	i8 v7538 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7538)(v7537);

endsub:;
}
	void f164_MidJump(i8* /* m */, i2 /* label */);
	void f256_Generate(i8 /* statement */);
	void f130_MidLabel(i8* /* m */, i2 /* label */);
	void f256_Generate(i8 /* statement */);

// reduce_15 workspace at ws+3328 length ws+0
void f323_reduce_15(void) {

	i8 v7539 = (i8)(intptr_t)(ws+56);
	i8 v7540 = *(i8*)(intptr_t)v7539;
	i2 v7541 = *(i2*)(intptr_t)v7540;
	i8 v7542 = (i8)(intptr_t)(f164_MidJump);
	i8 v7543;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7542)(&v7543, v7541);
	i8 v7544 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7544)(v7543);

	i8 v7545 = (i8)(intptr_t)(ws+56);
	i8 v7546 = *(i8*)(intptr_t)v7545;
	i8 v7547 = v7546+(+4);
	i2 v7548 = *(i2*)(intptr_t)v7547;
	i8 v7549 = (i8)(intptr_t)(f130_MidLabel);
	i8 v7550;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7549)(&v7550, v7548);
	i8 v7551 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7551)(v7550);

endsub:;
}
	void f164_MidJump(i8* /* m */, i2 /* label */);
	void f256_Generate(i8 /* statement */);
	void f130_MidLabel(i8* /* m */, i2 /* label */);
	void f256_Generate(i8 /* statement */);

// reduce_16 workspace at ws+3328 length ws+0
void f324_reduce_16(void) {

	i8 v7552 = (i8)(intptr_t)(ws+56);
	i8 v7553 = *(i8*)(intptr_t)v7552;
	i2 v7554 = *(i2*)(intptr_t)v7553;
	i8 v7555 = (i8)(intptr_t)(f164_MidJump);
	i8 v7556;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7555)(&v7556, v7554);
	i8 v7557 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7557)(v7556);

	i8 v7558 = (i8)(intptr_t)(ws+56);
	i8 v7559 = *(i8*)(intptr_t)v7558;
	i8 v7560 = v7559+(+4);
	i2 v7561 = *(i2*)(intptr_t)v7560;
	i8 v7562 = (i8)(intptr_t)(f130_MidLabel);
	i8 v7563;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7562)(&v7563, v7561);
	i8 v7564 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7564)(v7563);

endsub:;
}
	void f130_MidLabel(i8* /* m */, i2 /* label */);
	void f256_Generate(i8 /* statement */);
	void f130_MidLabel(i8* /* m */, i2 /* label */);
	void f256_Generate(i8 /* statement */);
	void f107_MidEndcase(i8* /* m */, i1 /* width */);
	void f256_Generate(i8 /* statement */);
	void f34_Free(i8 /* block */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_17 workspace at ws+3328 length ws+8
void f325_reduce_17(void) {

	i8 v7565 = (i8)(intptr_t)(ws+64);
	i8 v7566 = *(i8*)(intptr_t)v7565;
	i8 v7567 = v7566+(+17);
	i1 v7568 = *(i1*)(intptr_t)v7567;
	i1 v7569 = (i1)+0;
	if (v7568==v7569) goto c02_05fb; else goto c02_05fa;

c02_05fb:;

	i8 v7570 = (i8)(intptr_t)(ws+64);
	i8 v7571 = *(i8*)(intptr_t)v7570;
	i2 v7572 = *(i2*)(intptr_t)v7571;
	i2 v7573 = (i2)+0;
	if (v7572==v7573) goto c02_05fa; else goto c02_05f9;

c02_05f9:;

	i8 v7574 = (i8)(intptr_t)(ws+64);
	i8 v7575 = *(i8*)(intptr_t)v7574;
	i2 v7576 = *(i2*)(intptr_t)v7575;
	i8 v7577 = (i8)(intptr_t)(f130_MidLabel);
	i8 v7578;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7577)(&v7578, v7576);
	i8 v7579 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7579)(v7578);

c02_05fa:;

c02_05f4:;

	i8 v7580 = (i8)(intptr_t)(ws+64);
	i8 v7581 = *(i8*)(intptr_t)v7580;
	i8 v7582 = v7581+(+2);
	i2 v7583 = *(i2*)(intptr_t)v7582;
	i8 v7584 = (i8)(intptr_t)(f130_MidLabel);
	i8 v7585;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7584)(&v7585, v7583);
	i8 v7586 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7586)(v7585);

	i8 v7587 = (i8)(intptr_t)(ws+64);
	i8 v7588 = *(i8*)(intptr_t)v7587;
	i8 v7589 = v7588+(+16);
	i1 v7590 = *(i1*)(intptr_t)v7589;
	i8 v7591 = (i8)(intptr_t)(f107_MidEndcase);
	i8 v7592;

	((void(*)(i8* /* m */, i1 /* width */))(intptr_t)v7591)(&v7592, v7590);
	i8 v7593 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7593)(v7592);

	i8 v7594 = (i8)(intptr_t)(ws+64);
	i8 v7595 = *(i8*)(intptr_t)v7594;
	i8 v7596 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v7596 = v7595;

	i8 v7597 = (i8)(intptr_t)(ws+3328);
	i8 v7598 = *(i8*)(intptr_t)v7597;
	i8 v7599 = v7598+(+8);
	i8 v7600 = *(i8*)(intptr_t)v7599;
	i8 v7601 = (i8)(intptr_t)(ws+64);
	*(i8*)(intptr_t)v7601 = v7600;

	i8 v7602 = (i8)(intptr_t)(ws+3328);
	i8 v7603 = *(i8*)(intptr_t)v7602;
	i8 v7604 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v7604)(v7603);

	i1 v7605 = (i1)+10;
	i8 v7606 = (i8)(intptr_t)(ws+3264);
	i8 v7607 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7607)(v7606, v7605);

	i1 v7608 = (i1)+64;
	i8 v7609 = (i8)(intptr_t)(ws+3256);
	i8 v7610 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7610)(v7609, v7608);

	i1 v7611 = (i1)+22;
	i8 v7612 = (i8)(intptr_t)(ws+3248);
	i8 v7613 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7613)(v7612, v7611);

endsub:;
}
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f235_AllocLabel(i2* /* label */);
	void f229_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s016d[] = { 0x63,0x61,0x73,0x65,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x73,0x20,0x6f,0x6e,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x73,0 };
	void f76_SimpleError(i8 /* message */);
	void f167_NodeWidth(i1* /* width */, i8 /* node */);
	void f122_MidStartcase(i8* /* m */, i8 /* left */, i1 /* width */);
	void f256_Generate(i8 /* statement */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_18 workspace at ws+3328 length ws+8
void f326_reduce_18(void) {

	i8 v7614 = (i8)+18;
	i8 v7615 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v7616;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v7615)(&v7616, v7614);
	i8 v7617 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v7617 = v7616;

	i8 v7618 = (i8)(intptr_t)(ws+64);
	i8 v7619 = *(i8*)(intptr_t)v7618;
	i8 v7620 = (i8)(intptr_t)(ws+3328);
	i8 v7621 = *(i8*)(intptr_t)v7620;
	i8 v7622 = v7621+(+8);
	*(i8*)(intptr_t)v7622 = v7619;

	i8 v7623 = (i8)(intptr_t)(ws+52);
	i2 v7624 = *(i2*)(intptr_t)v7623;
	i8 v7625 = (i8)(intptr_t)(ws+3328);
	i8 v7626 = *(i8*)(intptr_t)v7625;
	i8 v7627 = v7626+(+4);
	*(i2*)(intptr_t)v7627 = v7624;

	i8 v7628 = (i8)(intptr_t)(f235_AllocLabel);
	i2 v7629;

	((void(*)(i2* /* label */))(intptr_t)v7628)(&v7629);
	i8 v7630 = (i8)(intptr_t)(ws+3328);
	i8 v7631 = *(i8*)(intptr_t)v7630;
	i8 v7632 = v7631+(+2);
	*(i2*)(intptr_t)v7632 = v7629;

	i8 v7633 = (i8)(intptr_t)(ws+3328);
	i8 v7634 = *(i8*)(intptr_t)v7633;
	i8 v7635 = (i8)(intptr_t)(ws+64);
	*(i8*)(intptr_t)v7635 = v7634;

	i8 v7636 = (i8)(intptr_t)(ws+3256);
	i8 v7637 = *(i8*)(intptr_t)v7636;
	i8 v7638 = v7637+(+16);
	i8 v7639 = *(i8*)(intptr_t)v7638;
	i8 v7640 = (i8)(intptr_t)(f229_IsNum);
	i1 v7641;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7640)(&v7641, v7639);
	i1 v7642 = (i1)+0;
	if (v7641==v7642) goto c02_05ff; else goto c02_0600;

c02_05ff:;

	i8 v7643 = (i8)(intptr_t)c02_s016d;
	i8 v7644 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7644)(v7643);

c02_0600:;

c02_05fc:;

	i8 v7645 = (i8)(intptr_t)(ws+3256);
	i8 v7646 = *(i8*)(intptr_t)v7645;
	i8 v7647 = (i8)(intptr_t)(f167_NodeWidth);
	i1 v7648;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v7647)(&v7648, v7646);
	i8 v7649 = (i8)(intptr_t)(ws+3328);
	i8 v7650 = *(i8*)(intptr_t)v7649;
	i8 v7651 = v7650+(+16);
	*(i1*)(intptr_t)v7651 = v7648;

	i8 v7652 = (i8)(intptr_t)(ws+3328);
	i8 v7653 = *(i8*)(intptr_t)v7652;
	i8 v7654 = v7653+(+16);
	i1 v7655 = *(i1*)(intptr_t)v7654;
	i8 v7656 = (i8)(intptr_t)(ws+3256);
	i8 v7657 = *(i8*)(intptr_t)v7656;
	i8 v7658 = (i8)(intptr_t)(f122_MidStartcase);
	i8 v7659;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v7658)(&v7659, v7657, v7655);
	i8 v7660 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7660)(v7659);

	i1 v7661 = (i1)+65;
	i8 v7662 = (i8)(intptr_t)(ws+3248);
	i8 v7663 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7663)(v7662, v7661);

endsub:;
}
const i1 c02_s016e[] = { 0x77,0x68,0x65,0x6e,0x20,0x65,0x6c,0x73,0x65,0x20,0x6d,0x75,0x73,0x74,0x20,0x67,0x6f,0x20,0x6c,0x61,0x73,0x74,0 };
	void f76_SimpleError(i8 /* message */);
	void f164_MidJump(i8* /* m */, i2 /* label */);
	void f256_Generate(i8 /* statement */);
	void f130_MidLabel(i8* /* m */, i2 /* label */);
	void f256_Generate(i8 /* statement */);
	void f235_AllocLabel(i2* /* label */);
	void f127_MidWhencase(i8* /* m */, i2 /* falselabel */, i4 /* value */, i1 /* width */);
	void f256_Generate(i8 /* statement */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_19 workspace at ws+3328 length ws+0
void f327_reduce_19(void) {

	i8 v7664 = (i8)(intptr_t)(ws+64);
	i8 v7665 = *(i8*)(intptr_t)v7664;
	i8 v7666 = v7665+(+17);
	i1 v7667 = *(i1*)(intptr_t)v7666;
	i1 v7668 = (i1)+0;
	if (v7667==v7668) goto c02_0605; else goto c02_0604;

c02_0604:;

	i8 v7669 = (i8)(intptr_t)c02_s016e;
	i8 v7670 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7670)(v7669);

c02_0605:;

c02_0601:;

	i8 v7671 = (i8)(intptr_t)(ws+64);
	i8 v7672 = *(i8*)(intptr_t)v7671;
	i2 v7673 = *(i2*)(intptr_t)v7672;
	i2 v7674 = (i2)+0;
	if (v7673==v7674) goto c02_060a; else goto c02_0609;

c02_0609:;

	i8 v7675 = (i8)(intptr_t)(ws+64);
	i8 v7676 = *(i8*)(intptr_t)v7675;
	i8 v7677 = v7676+(+2);
	i2 v7678 = *(i2*)(intptr_t)v7677;
	i8 v7679 = (i8)(intptr_t)(f164_MidJump);
	i8 v7680;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7679)(&v7680, v7678);
	i8 v7681 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7681)(v7680);

	i8 v7682 = (i8)(intptr_t)(ws+64);
	i8 v7683 = *(i8*)(intptr_t)v7682;
	i2 v7684 = *(i2*)(intptr_t)v7683;
	i8 v7685 = (i8)(intptr_t)(f130_MidLabel);
	i8 v7686;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7685)(&v7686, v7684);
	i8 v7687 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7687)(v7686);

c02_060a:;

c02_0606:;

	i8 v7688 = (i8)(intptr_t)(f235_AllocLabel);
	i2 v7689;

	((void(*)(i2* /* label */))(intptr_t)v7688)(&v7689);
	i8 v7690 = (i8)(intptr_t)(ws+64);
	i8 v7691 = *(i8*)(intptr_t)v7690;
	*(i2*)(intptr_t)v7691 = v7689;

	i8 v7692 = (i8)(intptr_t)(ws+64);
	i8 v7693 = *(i8*)(intptr_t)v7692;
	i8 v7694 = v7693+(+16);
	i1 v7695 = *(i1*)(intptr_t)v7694;
	i8 v7696 = (i8)(intptr_t)(ws+3256);
	i4 v7697 = *(i4*)(intptr_t)v7696;
	i8 v7698 = (i8)(intptr_t)(ws+64);
	i8 v7699 = *(i8*)(intptr_t)v7698;
	i2 v7700 = *(i2*)(intptr_t)v7699;
	i8 v7701 = (i8)(intptr_t)(f127_MidWhencase);
	i8 v7702;

	((void(*)(i8* /* m */, i2 /* falselabel */, i4 /* value */, i1 /* width */))(intptr_t)v7701)(&v7702, v7700, v7697, v7695);
	i8 v7703 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7703)(v7702);

	i1 v7704 = (i1)+6;
	i8 v7705 = (i8)(intptr_t)(ws+3248);
	i8 v7706 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7706)(v7705, v7704);

endsub:;
}
const i1 c02_s016f[] = { 0x6f,0x6e,0x6c,0x79,0x20,0x6f,0x6e,0x65,0x20,0x77,0x68,0x65,0x6e,0x20,0x65,0x6c,0x73,0x65,0x20,0x61,0x6c,0x6c,0x6f,0x77,0x65,0x64,0 };
	void f76_SimpleError(i8 /* message */);
	void f164_MidJump(i8* /* m */, i2 /* label */);
	void f256_Generate(i8 /* statement */);
	void f130_MidLabel(i8* /* m */, i2 /* label */);
	void f256_Generate(i8 /* statement */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_20 workspace at ws+3328 length ws+0
void f328_reduce_20(void) {

	i8 v7707 = (i8)(intptr_t)(ws+64);
	i8 v7708 = *(i8*)(intptr_t)v7707;
	i8 v7709 = v7708+(+17);
	i1 v7710 = *(i1*)(intptr_t)v7709;
	i1 v7711 = (i1)+0;
	if (v7710==v7711) goto c02_060f; else goto c02_060e;

c02_060e:;

	i8 v7712 = (i8)(intptr_t)c02_s016f;
	i8 v7713 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7713)(v7712);

c02_060f:;

c02_060b:;

	i8 v7714 = (i8)(intptr_t)(ws+64);
	i8 v7715 = *(i8*)(intptr_t)v7714;
	i2 v7716 = *(i2*)(intptr_t)v7715;
	i2 v7717 = (i2)+0;
	if (v7716==v7717) goto c02_0614; else goto c02_0613;

c02_0613:;

	i8 v7718 = (i8)(intptr_t)(ws+64);
	i8 v7719 = *(i8*)(intptr_t)v7718;
	i8 v7720 = v7719+(+2);
	i2 v7721 = *(i2*)(intptr_t)v7720;
	i8 v7722 = (i8)(intptr_t)(f164_MidJump);
	i8 v7723;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7722)(&v7723, v7721);
	i8 v7724 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7724)(v7723);

	i8 v7725 = (i8)(intptr_t)(ws+64);
	i8 v7726 = *(i8*)(intptr_t)v7725;
	i2 v7727 = *(i2*)(intptr_t)v7726;
	i8 v7728 = (i8)(intptr_t)(f130_MidLabel);
	i8 v7729;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7728)(&v7729, v7727);
	i8 v7730 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7730)(v7729);

c02_0614:;

c02_0610:;

	i2 v7731 = (i2)+0;
	i8 v7732 = (i8)(intptr_t)(ws+64);
	i8 v7733 = *(i8*)(intptr_t)v7732;
	*(i2*)(intptr_t)v7733 = v7731;

	i1 v7734 = (i1)+1;
	i8 v7735 = (i8)(intptr_t)(ws+64);
	i8 v7736 = *(i8*)(intptr_t)v7735;
	i8 v7737 = v7736+(+17);
	*(i1*)(intptr_t)v7737 = v7734;

	i1 v7738 = (i1)+9;
	i8 v7739 = (i8)(intptr_t)(ws+3256);
	i8 v7740 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7740)(v7739, v7738);

	i1 v7741 = (i1)+6;
	i8 v7742 = (i8)(intptr_t)(ws+3248);
	i8 v7743 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7743)(v7742, v7741);

endsub:;
}
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_21 workspace at ws+3328 length ws+0
void f329_reduce_21(void) {

	i8 v7744 = (i8)(intptr_t)(ws+3256);
	i8 v7745 = *(i8*)(intptr_t)v7744;
	i8 v7746 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7746 = v7745;

	i1 v7747 = (i1)+4;
	i8 v7748 = (i8)(intptr_t)(ws+3248);
	i8 v7749 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7749)(v7748, v7747);

endsub:;
}
	void f285_Negate(i8 /* node */);

// reduce_22 workspace at ws+3328 length ws+0
void f330_reduce_22(void) {

	i8 v7750 = (i8)(intptr_t)(ws+3248);
	i8 v7751 = *(i8*)(intptr_t)v7750;
	i8 v7752 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7752 = v7751;

	i8 v7753 = (i8)(intptr_t)(ws+3248);
	i8 v7754 = *(i8*)(intptr_t)v7753;
	i8 v7755 = (i8)(intptr_t)(f285_Negate);

	((void(*)(i8 /* node */))(intptr_t)v7755)(v7754);

endsub:;
}
	void f132_MidBand(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_23 workspace at ws+3328 length ws+0
void f331_reduce_23(void) {

	i8 v7756 = (i8)(intptr_t)(ws+3264);
	i8 v7757 = *(i8*)(intptr_t)v7756;
	i8 v7758 = (i8)(intptr_t)(ws+3248);
	i8 v7759 = *(i8*)(intptr_t)v7758;
	i2 v7760 = (i2)+0;
	i2 v7761 = (i2)+0;
	i2 v7762 = (i2)+0;
	i1 v7763 = (i1)+0;
	i8 v7764 = (i8)(intptr_t)(f132_MidBand);
	i8 v7765;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */))(intptr_t)v7764)(&v7765, v7763, v7762, v7761, v7760, v7759, v7757);
	i8 v7766 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7766 = v7765;

	i1 v7767 = (i1)+46;
	i8 v7768 = (i8)(intptr_t)(ws+3256);
	i8 v7769 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7769)(v7768, v7767);

endsub:;
}
	void f108_MidBor(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_24 workspace at ws+3328 length ws+0
void f332_reduce_24(void) {

	i8 v7770 = (i8)(intptr_t)(ws+3264);
	i8 v7771 = *(i8*)(intptr_t)v7770;
	i8 v7772 = (i8)(intptr_t)(ws+3248);
	i8 v7773 = *(i8*)(intptr_t)v7772;
	i2 v7774 = (i2)+0;
	i2 v7775 = (i2)+0;
	i2 v7776 = (i2)+0;
	i1 v7777 = (i1)+0;
	i8 v7778 = (i8)(intptr_t)(f108_MidBor);
	i8 v7779;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */))(intptr_t)v7778)(&v7779, v7777, v7776, v7775, v7774, v7773, v7771);
	i8 v7780 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7780 = v7779;

	i1 v7781 = (i1)+47;
	i8 v7782 = (i8)(intptr_t)(ws+3256);
	i8 v7783 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7783)(v7782, v7781);

endsub:;
}
	void f286_ConditionalEq(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_25 workspace at ws+3328 length ws+0
void f333_reduce_25(void) {

	i8 v7784 = (i8)(intptr_t)(ws+3264);
	i8 v7785 = *(i8*)(intptr_t)v7784;
	i8 v7786 = (i8)(intptr_t)(ws+3248);
	i8 v7787 = *(i8*)(intptr_t)v7786;
	i1 v7788 = (i1)+0;
	i8 v7789 = (i8)(intptr_t)(f286_ConditionalEq);
	i8 v7790;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7789)(&v7790, v7788, v7787, v7785);
	i8 v7791 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7791 = v7790;

	i1 v7792 = (i1)+54;
	i8 v7793 = (i8)(intptr_t)(ws+3256);
	i8 v7794 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7794)(v7793, v7792);

endsub:;
}
	void f286_ConditionalEq(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_26 workspace at ws+3328 length ws+0
void f334_reduce_26(void) {

	i8 v7795 = (i8)(intptr_t)(ws+3264);
	i8 v7796 = *(i8*)(intptr_t)v7795;
	i8 v7797 = (i8)(intptr_t)(ws+3248);
	i8 v7798 = *(i8*)(intptr_t)v7797;
	i1 v7799 = (i1)+1;
	i8 v7800 = (i8)(intptr_t)(f286_ConditionalEq);
	i8 v7801;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7800)(&v7801, v7799, v7798, v7796);
	i8 v7802 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7802 = v7801;

	i1 v7803 = (i1)+55;
	i8 v7804 = (i8)(intptr_t)(ws+3256);
	i8 v7805 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7805)(v7804, v7803);

endsub:;
}
	void f287_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_27 workspace at ws+3328 length ws+0
void f335_reduce_27(void) {

	i8 v7806 = (i8)(intptr_t)(ws+3264);
	i8 v7807 = *(i8*)(intptr_t)v7806;
	i8 v7808 = (i8)(intptr_t)(ws+3248);
	i8 v7809 = *(i8*)(intptr_t)v7808;
	i1 v7810 = (i1)+0;
	i8 v7811 = (i8)(intptr_t)(f287_ConditionalLt);
	i8 v7812;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7811)(&v7812, v7810, v7809, v7807);
	i8 v7813 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7813 = v7812;

	i1 v7814 = (i1)+50;
	i8 v7815 = (i8)(intptr_t)(ws+3256);
	i8 v7816 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7816)(v7815, v7814);

endsub:;
}
	void f287_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_28 workspace at ws+3328 length ws+0
void f336_reduce_28(void) {

	i8 v7817 = (i8)(intptr_t)(ws+3264);
	i8 v7818 = *(i8*)(intptr_t)v7817;
	i8 v7819 = (i8)(intptr_t)(ws+3248);
	i8 v7820 = *(i8*)(intptr_t)v7819;
	i1 v7821 = (i1)+1;
	i8 v7822 = (i8)(intptr_t)(f287_ConditionalLt);
	i8 v7823;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7822)(&v7823, v7821, v7820, v7818);
	i8 v7824 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7824 = v7823;

	i1 v7825 = (i1)+53;
	i8 v7826 = (i8)(intptr_t)(ws+3256);
	i8 v7827 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7827)(v7826, v7825);

endsub:;
}
	void f287_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_29 workspace at ws+3328 length ws+0
void f337_reduce_29(void) {

	i8 v7828 = (i8)(intptr_t)(ws+3248);
	i8 v7829 = *(i8*)(intptr_t)v7828;
	i8 v7830 = (i8)(intptr_t)(ws+3264);
	i8 v7831 = *(i8*)(intptr_t)v7830;
	i1 v7832 = (i1)+0;
	i8 v7833 = (i8)(intptr_t)(f287_ConditionalLt);
	i8 v7834;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7833)(&v7834, v7832, v7831, v7829);
	i8 v7835 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7835 = v7834;

	i1 v7836 = (i1)+52;
	i8 v7837 = (i8)(intptr_t)(ws+3256);
	i8 v7838 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7838)(v7837, v7836);

endsub:;
}
	void f287_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_30 workspace at ws+3328 length ws+0
void f338_reduce_30(void) {

	i8 v7839 = (i8)(intptr_t)(ws+3248);
	i8 v7840 = *(i8*)(intptr_t)v7839;
	i8 v7841 = (i8)(intptr_t)(ws+3264);
	i8 v7842 = *(i8*)(intptr_t)v7841;
	i1 v7843 = (i1)+1;
	i8 v7844 = (i8)(intptr_t)(f287_ConditionalLt);
	i8 v7845;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7844)(&v7845, v7843, v7842, v7840);
	i8 v7846 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7846 = v7845;

	i1 v7847 = (i1)+51;
	i8 v7848 = (i8)(intptr_t)(ws+3256);
	i8 v7849 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7849)(v7848, v7847);

endsub:;
}
	void f118_MidConstant(i8* /* m */, i4 /* value */);

// reduce_31 workspace at ws+3328 length ws+0
void f339_reduce_31(void) {

	i8 v7850 = (i8)(intptr_t)(ws+3248);
	i4 v7851 = *(i4*)(intptr_t)v7850;
	i8 v7852 = (i8)(intptr_t)(f118_MidConstant);
	i8 v7853;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v7852)(&v7853, v7851);
	i8 v7854 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7854 = v7853;

endsub:;
}
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_32 workspace at ws+3328 length ws+0
void f340_reduce_32(void) {

	i8 v7855 = (i8)(intptr_t)(ws+3256);
	i8 v7856 = *(i8*)(intptr_t)v7855;
	i8 v7857 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7857 = v7856;

	i1 v7858 = (i1)+4;
	i8 v7859 = (i8)(intptr_t)(ws+3248);
	i8 v7860 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7860)(v7859, v7858);

endsub:;
}

// reduce_33 workspace at ws+3328 length ws+0
void f341_reduce_33(void) {

	i8 v7861 = (i8)(intptr_t)(ws+3248);
	i8 v7862 = *(i8*)(intptr_t)v7861;
	i8 v7863 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7863 = v7862;

endsub:;
}
	void f274_Expr1Simple(i8* /* result */, i8 /* lhs */, i1 /* op */);

// reduce_34 workspace at ws+3328 length ws+0
void f342_reduce_34(void) {

	i1 v7864 = (i1)+116;
	i8 v7865 = (i8)(intptr_t)(ws+3248);
	i8 v7866 = *(i8*)(intptr_t)v7865;
	i8 v7867 = (i8)(intptr_t)(f274_Expr1Simple);
	i8 v7868;

	((void(*)(i8* /* result */, i8 /* lhs */, i1 /* op */))(intptr_t)v7867)(&v7868, v7866, v7864);
	i8 v7869 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7869 = v7868;

endsub:;
}
	void f274_Expr1Simple(i8* /* result */, i8 /* lhs */, i1 /* op */);

// reduce_35 workspace at ws+3328 length ws+0
void f343_reduce_35(void) {

	i1 v7870 = (i1)+111;
	i8 v7871 = (i8)(intptr_t)(ws+3248);
	i8 v7872 = *(i8*)(intptr_t)v7871;
	i8 v7873 = (i8)(intptr_t)(f274_Expr1Simple);
	i8 v7874;

	((void(*)(i8* /* result */, i8 /* lhs */, i1 /* op */))(intptr_t)v7873)(&v7874, v7872, v7870);
	i8 v7875 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7875 = v7874;

endsub:;
}
	void f275_ExprAdd(i8* /* result */, i8 /* rhs */, i8 /* lhs */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_36 workspace at ws+3328 length ws+0
void f344_reduce_36(void) {

	i8 v7876 = (i8)(intptr_t)(ws+3264);
	i8 v7877 = *(i8*)(intptr_t)v7876;
	i8 v7878 = (i8)(intptr_t)(ws+3248);
	i8 v7879 = *(i8*)(intptr_t)v7878;
	i8 v7880 = (i8)(intptr_t)(f275_ExprAdd);
	i8 v7881;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7880)(&v7881, v7879, v7877);
	i8 v7882 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7882 = v7881;

	i1 v7883 = (i1)+19;
	i8 v7884 = (i8)(intptr_t)(ws+3256);
	i8 v7885 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7885)(v7884, v7883);

endsub:;
}
	void f277_ExprSub(i8* /* result */, i8 /* rhs */, i8 /* lhs */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_37 workspace at ws+3328 length ws+0
void f345_reduce_37(void) {

	i8 v7886 = (i8)(intptr_t)(ws+3264);
	i8 v7887 = *(i8*)(intptr_t)v7886;
	i8 v7888 = (i8)(intptr_t)(ws+3248);
	i8 v7889 = *(i8*)(intptr_t)v7888;
	i8 v7890 = (i8)(intptr_t)(f277_ExprSub);
	i8 v7891;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7890)(&v7891, v7889, v7887);
	i8 v7892 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7892 = v7891;

	i1 v7893 = (i1)+14;
	i8 v7894 = (i8)(intptr_t)(ws+3256);
	i8 v7895 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7895)(v7894, v7893);

endsub:;
}
	void f279_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_38 workspace at ws+3328 length ws+0
void f346_reduce_38(void) {

	i1 v7896 = (i1)+166;
	i1 v7897 = (i1)+166;
	i8 v7898 = (i8)(intptr_t)(ws+3264);
	i8 v7899 = *(i8*)(intptr_t)v7898;
	i8 v7900 = (i8)(intptr_t)(ws+3248);
	i8 v7901 = *(i8*)(intptr_t)v7900;
	i8 v7902 = (i8)(intptr_t)(f279_Expr2Simple);
	i8 v7903;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v7902)(&v7903, v7901, v7899, v7897, v7896);
	i8 v7904 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7904 = v7903;

	i1 v7905 = (i1)+24;
	i8 v7906 = (i8)(intptr_t)(ws+3256);
	i8 v7907 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7907)(v7906, v7905);

endsub:;
}
	void f279_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_39 workspace at ws+3328 length ws+0
void f347_reduce_39(void) {

	i1 v7908 = (i1)+146;
	i1 v7909 = (i1)+141;
	i8 v7910 = (i8)(intptr_t)(ws+3264);
	i8 v7911 = *(i8*)(intptr_t)v7910;
	i8 v7912 = (i8)(intptr_t)(ws+3248);
	i8 v7913 = *(i8*)(intptr_t)v7912;
	i8 v7914 = (i8)(intptr_t)(f279_Expr2Simple);
	i8 v7915;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v7914)(&v7915, v7913, v7911, v7909, v7908);
	i8 v7916 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7916 = v7915;

	i1 v7917 = (i1)+23;
	i8 v7918 = (i8)(intptr_t)(ws+3256);
	i8 v7919 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7919)(v7918, v7917);

endsub:;
}
	void f279_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_40 workspace at ws+3328 length ws+0
void f348_reduce_40(void) {

	i1 v7920 = (i1)+156;
	i1 v7921 = (i1)+151;
	i8 v7922 = (i8)(intptr_t)(ws+3264);
	i8 v7923 = *(i8*)(intptr_t)v7922;
	i8 v7924 = (i8)(intptr_t)(ws+3248);
	i8 v7925 = *(i8*)(intptr_t)v7924;
	i8 v7926 = (i8)(intptr_t)(f279_Expr2Simple);
	i8 v7927;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v7926)(&v7927, v7925, v7923, v7921, v7920);
	i8 v7928 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7928 = v7927;

	i1 v7929 = (i1)+18;
	i8 v7930 = (i8)(intptr_t)(ws+3256);
	i8 v7931 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7931)(v7930, v7929);

endsub:;
}
	void f279_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_41 workspace at ws+3328 length ws+0
void f349_reduce_41(void) {

	i1 v7932 = (i1)+181;
	i1 v7933 = (i1)+181;
	i8 v7934 = (i8)(intptr_t)(ws+3264);
	i8 v7935 = *(i8*)(intptr_t)v7934;
	i8 v7936 = (i8)(intptr_t)(ws+3248);
	i8 v7937 = *(i8*)(intptr_t)v7936;
	i8 v7938 = (i8)(intptr_t)(f279_Expr2Simple);
	i8 v7939;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v7938)(&v7939, v7937, v7935, v7933, v7932);
	i8 v7940 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7940 = v7939;

	i1 v7941 = (i1)+49;
	i8 v7942 = (i8)(intptr_t)(ws+3256);
	i8 v7943 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7943)(v7942, v7941);

endsub:;
}
	void f279_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_42 workspace at ws+3328 length ws+0
void f350_reduce_42(void) {

	i1 v7944 = (i1)+171;
	i1 v7945 = (i1)+171;
	i8 v7946 = (i8)(intptr_t)(ws+3264);
	i8 v7947 = *(i8*)(intptr_t)v7946;
	i8 v7948 = (i8)(intptr_t)(ws+3248);
	i8 v7949 = *(i8*)(intptr_t)v7948;
	i8 v7950 = (i8)(intptr_t)(f279_Expr2Simple);
	i8 v7951;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v7950)(&v7951, v7949, v7947, v7945, v7944);
	i8 v7952 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7952 = v7951;

	i1 v7953 = (i1)+59;
	i8 v7954 = (i8)(intptr_t)(ws+3256);
	i8 v7955 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7955)(v7954, v7953);

endsub:;
}
	void f279_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_43 workspace at ws+3328 length ws+0
void f351_reduce_43(void) {

	i1 v7956 = (i1)+176;
	i1 v7957 = (i1)+176;
	i8 v7958 = (i8)(intptr_t)(ws+3264);
	i8 v7959 = *(i8*)(intptr_t)v7958;
	i8 v7960 = (i8)(intptr_t)(ws+3248);
	i8 v7961 = *(i8*)(intptr_t)v7960;
	i8 v7962 = (i8)(intptr_t)(f279_Expr2Simple);
	i8 v7963;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v7962)(&v7963, v7961, v7959, v7957, v7956);
	i8 v7964 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7964 = v7963;

	i1 v7965 = (i1)+48;
	i8 v7966 = (i8)(intptr_t)(ws+3256);
	i8 v7967 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7967)(v7966, v7965);

endsub:;
}
	void f282_ExprShift(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_44 workspace at ws+3328 length ws+0
void f352_reduce_44(void) {

	i1 v7968 = (i1)+121;
	i1 v7969 = (i1)+121;
	i8 v7970 = (i8)(intptr_t)(ws+3264);
	i8 v7971 = *(i8*)(intptr_t)v7970;
	i8 v7972 = (i8)(intptr_t)(ws+3248);
	i8 v7973 = *(i8*)(intptr_t)v7972;
	i8 v7974 = (i8)(intptr_t)(f282_ExprShift);
	i8 v7975;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v7974)(&v7975, v7973, v7971, v7969, v7968);
	i8 v7976 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7976 = v7975;

	i1 v7977 = (i1)+56;
	i8 v7978 = (i8)(intptr_t)(ws+3256);
	i8 v7979 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7979)(v7978, v7977);

endsub:;
}
	void f282_ExprShift(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_45 workspace at ws+3328 length ws+0
void f353_reduce_45(void) {

	i1 v7980 = (i1)+131;
	i1 v7981 = (i1)+126;
	i8 v7982 = (i8)(intptr_t)(ws+3264);
	i8 v7983 = *(i8*)(intptr_t)v7982;
	i8 v7984 = (i8)(intptr_t)(ws+3248);
	i8 v7985 = *(i8*)(intptr_t)v7984;
	i8 v7986 = (i8)(intptr_t)(f282_ExprShift);
	i8 v7987;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v7986)(&v7987, v7985, v7983, v7981, v7980);
	i8 v7988 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7988 = v7987;

	i1 v7989 = (i1)+57;
	i8 v7990 = (i8)(intptr_t)(ws+3256);
	i8 v7991 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7991)(v7990, v7989);

endsub:;
}
	void f223_CheckNotPartialType(i8 /* type */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s0170[] = { 0x63,0x61,0x73,0x74,0x20,0x62,0x65,0x74,0x77,0x65,0x65,0x6e,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x61,0x6e,0x64,0x20,0x6e,0x6f,0x6e,0x2d,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x6f,0x66,0x20,0x64,0x69,0x66,0x66,0x65,0x72,0x65,0x6e,0x74,0x20,0x73,0x69,0x7a,0x65,0 };
	void f76_SimpleError(i8 /* message */);
	void f230_IsSNum(i1* /* result */, i8 /* type */);
	void f174_MidCCast(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_46 workspace at ws+3328 length ws+0
void f354_reduce_46(void) {

	i8 v7992 = (i8)(intptr_t)(ws+3248);
	i8 v7993 = *(i8*)(intptr_t)v7992;
	i8 v7994 = (i8)(intptr_t)(f223_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v7994)(v7993);

	i8 v7995 = (i8)(intptr_t)(ws+3264);
	i8 v7996 = *(i8*)(intptr_t)v7995;
	i8 v7997 = v7996+(+40);
	i1 v7998 = *(i1*)(intptr_t)v7997;
	i1 v7999 = (i1)+45;
	if (v7998==v7999) goto c02_061b; else goto c02_061c;

c02_061c:;

	i8 v8000 = (i8)(intptr_t)(ws+3264);
	i8 v8001 = *(i8*)(intptr_t)v8000;
	i8 v8002 = v8001+(+16);
	i8 v8003 = *(i8*)(intptr_t)v8002;
	i8 v8004 = v8003+(+48);
	i2 v8005 = *(i2*)(intptr_t)v8004;
	i8 v8006 = (i8)(intptr_t)(ws+3248);
	i8 v8007 = *(i8*)(intptr_t)v8006;
	i8 v8008 = v8007+(+48);
	i2 v8009 = *(i2*)(intptr_t)v8008;
	if (v8005==v8009) goto c02_061b; else goto c02_061a;

c02_061a:;

	i8 v8010 = (i8)(intptr_t)(ws+3264);
	i8 v8011 = *(i8*)(intptr_t)v8010;
	i8 v8012 = v8011+(+16);
	i8 v8013 = *(i8*)(intptr_t)v8012;
	i8 v8014 = (i8)(intptr_t)(f68_IsPtr);
	i1 v8015;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8014)(&v8015, v8013);
	i1 v8016 = (i1)+0;
	if (v8015==v8016) goto c02_0624; else goto c02_0622;

c02_0624:;

	i8 v8017 = (i8)(intptr_t)(ws+3248);
	i8 v8018 = *(i8*)(intptr_t)v8017;
	i8 v8019 = (i8)(intptr_t)(f68_IsPtr);
	i1 v8020;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8019)(&v8020, v8018);
	i1 v8021 = (i1)+0;
	if (v8020==v8021) goto c02_0623; else goto c02_0622;

c02_0622:;

	i8 v8022 = (i8)(intptr_t)c02_s0170;
	i8 v8023 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8023)(v8022);

c02_0623:;

c02_061d:;

	i8 v8024 = (i8)(intptr_t)(ws+3248);
	i8 v8025 = *(i8*)(intptr_t)v8024;
	i8 v8026 = v8025+(+48);
	i2 v8027 = *(i2*)(intptr_t)v8026;
	i1 v8028 = v8027;
	i8 v8029 = (i8)(intptr_t)(ws+3264);
	i8 v8030 = *(i8*)(intptr_t)v8029;
	i8 v8031 = (i8)(intptr_t)(ws+3264);
	i8 v8032 = *(i8*)(intptr_t)v8031;
	i8 v8033 = v8032+(+16);
	i8 v8034 = *(i8*)(intptr_t)v8033;
	i8 v8035 = (i8)(intptr_t)(f230_IsSNum);
	i1 v8036;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8035)(&v8036, v8034);
	i8 v8037 = (i8)(intptr_t)(f174_MidCCast);
	i8 v8038;

	((void(*)(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */))(intptr_t)v8037)(&v8038, v8036, v8030, v8028);
	i8 v8039 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8039 = v8038;

	goto c02_0615;

c02_061b:;

	i8 v8040 = (i8)(intptr_t)(ws+3264);
	i8 v8041 = *(i8*)(intptr_t)v8040;
	i8 v8042 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8042 = v8041;

c02_0615:;

	i8 v8043 = (i8)(intptr_t)(ws+3248);
	i8 v8044 = *(i8*)(intptr_t)v8043;
	i8 v8045 = (i8)(intptr_t)(ws+3240);
	i8 v8046 = *(i8*)(intptr_t)v8045;
	i8 v8047 = v8046+(+16);
	*(i8*)(intptr_t)v8047 = v8044;

	i1 v8048 = (i1)+58;
	i8 v8049 = (i8)(intptr_t)(ws+3256);
	i8 v8050 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8050)(v8049, v8048);

endsub:;
}
	void f234_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f231_IsScalar(i1* /* result */, i8 /* type */);
const i1 c02_s0171[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x74,0x61,0x6b,0x65,0x20,0x74,0x68,0x65,0x20,0x61,0x64,0x64,0x72,0x65,0x73,0x73,0x20,0x6f,0x66,0x20,0x73,0x63,0x61,0x6c,0x61,0x72,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x73,0 };
	void f76_SimpleError(i8 /* message */);

// reduce_47 workspace at ws+3328 length ws+8
void f355_reduce_47(void) {

	i8 v8051 = (i8)(intptr_t)(ws+3248);
	i8 v8052 = *(i8*)(intptr_t)v8051;
	i8 v8053 = (i8)(intptr_t)(f234_UndoLValue);
	i8 v8054;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v8053)(&v8054, v8052);
	i8 v8055 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8055 = v8054;

	i8 v8056 = (i8)(intptr_t)(ws+3240);
	i8 v8057 = *(i8*)(intptr_t)v8056;
	i8 v8058 = v8057+(+40);
	i1 v8059 = *(i1*)(intptr_t)v8058;
	i1 v8060 = (i1)+47;
	if (v8059==v8060) goto c02_0628; else goto c02_0629;

c02_0628:;

	i8 v8061 = (i8)(intptr_t)(ws+3240);
	i8 v8062 = *(i8*)(intptr_t)v8061;
	i8 v8063 = *(i8*)(intptr_t)v8062;
	i8 v8064 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8064 = v8063;

	i8 v8065 = (i8)(intptr_t)(ws+3328);
	i8 v8066 = *(i8*)(intptr_t)v8065;
	i8 v8067 = *(i8*)(intptr_t)v8066;
	i8 v8068 = *(i8*)(intptr_t)v8067;
	i8 v8069 = (i8)(intptr_t)(f231_IsScalar);
	i1 v8070;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8069)(&v8070, v8068);
	i1 v8071 = (i1)+0;
	if (v8070==v8071) goto c02_062e; else goto c02_062d;

c02_062d:;

	i8 v8072 = (i8)(intptr_t)c02_s0171;
	i8 v8073 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8073)(v8072);

c02_062e:;

c02_062a:;

c02_0629:;

c02_0625:;

endsub:;
}
	void f234_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_48 workspace at ws+3328 length ws+0
void f356_reduce_48(void) {

	i8 v8074 = (i8)(intptr_t)(ws+3248);
	i8 v8075 = *(i8*)(intptr_t)v8074;
	i8 v8076 = (i8)(intptr_t)(f234_UndoLValue);
	i8 v8077;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v8076)(&v8077, v8075);
	i8 v8078 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8078 = v8077;

	i1 v8079 = (i1)+59;
	i8 v8080 = (i8)(intptr_t)(ws+3256);
	i8 v8081 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8081)(v8080, v8079);

endsub:;
}
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f288_parser_i_bad_next_prev(void);
	void f118_MidConstant(i8* /* m */, i4 /* value */);
	void f173_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// reduce_49 workspace at ws+3328 length ws+0
void f357_reduce_49(void) {

	i8 v8082 = (i8)(intptr_t)(ws+3248);
	i8 v8083 = *(i8*)(intptr_t)v8082;
	i8 v8084 = v8083+(+16);
	i8 v8085 = *(i8*)(intptr_t)v8084;
	i8 v8086 = (i8)(intptr_t)(f68_IsPtr);
	i1 v8087;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8086)(&v8087, v8085);
	i1 v8088 = (i1)+0;
	if (v8087==v8088) goto c02_0632; else goto c02_0633;

c02_0632:;

	i8 v8089 = (i8)(intptr_t)(f288_parser_i_bad_next_prev);

	((void(*)(void))(intptr_t)v8089)();

c02_0633:;

c02_062f:;

	i1 v8090 = (i1)+161;
	i8 v8091 = (i8)(intptr_t)(ws+1528);
	i8 v8092 = *(i8*)(intptr_t)v8091;
	i8 v8093 = v8092+(+48);
	i2 v8094 = *(i2*)(intptr_t)v8093;
	i1 v8095 = v8094;
	i8 v8096 = (i8)(intptr_t)(ws+3248);
	i8 v8097 = *(i8*)(intptr_t)v8096;
	i8 v8098 = (i8)(intptr_t)(ws+3248);
	i8 v8099 = *(i8*)(intptr_t)v8098;
	i8 v8100 = v8099+(+16);
	i8 v8101 = *(i8*)(intptr_t)v8100;
	i8 v8102 = *(i8*)(intptr_t)v8101;
	i8 v8103 = v8102+(+50);
	i2 v8104 = *(i2*)(intptr_t)v8103;
	i4 v8105 = v8104;
	i8 v8106 = (i8)(intptr_t)(f118_MidConstant);
	i8 v8107;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v8106)(&v8107, v8105);
	i8 v8108 = (i8)(intptr_t)(f173_MidC2Op);
	i8 v8109;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v8108)(&v8109, v8107, v8097, v8095, v8090);
	i8 v8110 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8110 = v8109;

	i8 v8111 = (i8)(intptr_t)(ws+3248);
	i8 v8112 = *(i8*)(intptr_t)v8111;
	i8 v8113 = v8112+(+16);
	i8 v8114 = *(i8*)(intptr_t)v8113;
	i8 v8115 = (i8)(intptr_t)(ws+3240);
	i8 v8116 = *(i8*)(intptr_t)v8115;
	i8 v8117 = v8116+(+16);
	*(i8*)(intptr_t)v8117 = v8114;

endsub:;
}
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f288_parser_i_bad_next_prev(void);
	void f118_MidConstant(i8* /* m */, i4 /* value */);
	void f173_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// reduce_50 workspace at ws+3328 length ws+0
void f358_reduce_50(void) {

	i8 v8118 = (i8)(intptr_t)(ws+3248);
	i8 v8119 = *(i8*)(intptr_t)v8118;
	i8 v8120 = v8119+(+16);
	i8 v8121 = *(i8*)(intptr_t)v8120;
	i8 v8122 = (i8)(intptr_t)(f68_IsPtr);
	i1 v8123;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8122)(&v8123, v8121);
	i1 v8124 = (i1)+0;
	if (v8123==v8124) goto c02_0637; else goto c02_0638;

c02_0637:;

	i8 v8125 = (i8)(intptr_t)(f288_parser_i_bad_next_prev);

	((void(*)(void))(intptr_t)v8125)();

c02_0638:;

c02_0634:;

	i1 v8126 = (i1)+136;
	i8 v8127 = (i8)(intptr_t)(ws+1528);
	i8 v8128 = *(i8*)(intptr_t)v8127;
	i8 v8129 = v8128+(+48);
	i2 v8130 = *(i2*)(intptr_t)v8129;
	i1 v8131 = v8130;
	i8 v8132 = (i8)(intptr_t)(ws+3248);
	i8 v8133 = *(i8*)(intptr_t)v8132;
	i8 v8134 = (i8)(intptr_t)(ws+3248);
	i8 v8135 = *(i8*)(intptr_t)v8134;
	i8 v8136 = v8135+(+16);
	i8 v8137 = *(i8*)(intptr_t)v8136;
	i8 v8138 = *(i8*)(intptr_t)v8137;
	i8 v8139 = v8138+(+50);
	i2 v8140 = *(i2*)(intptr_t)v8139;
	i4 v8141 = v8140;
	i8 v8142 = (i8)(intptr_t)(f118_MidConstant);
	i8 v8143;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v8142)(&v8143, v8141);
	i8 v8144 = (i8)(intptr_t)(f173_MidC2Op);
	i8 v8145;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v8144)(&v8145, v8143, v8133, v8131, v8126);
	i8 v8146 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8146 = v8145;

	i8 v8147 = (i8)(intptr_t)(ws+3248);
	i8 v8148 = *(i8*)(intptr_t)v8147;
	i8 v8149 = v8148+(+16);
	i8 v8150 = *(i8*)(intptr_t)v8149;
	i8 v8151 = (i8)(intptr_t)(ws+3240);
	i8 v8152 = *(i8*)(intptr_t)v8151;
	i8 v8153 = v8152+(+16);
	*(i8*)(intptr_t)v8153 = v8150;

endsub:;
}
	void f118_MidConstant(i8* /* m */, i4 /* value */);

// reduce_51 workspace at ws+3328 length ws+0
void f359_reduce_51(void) {

	i8 v8154 = (i8)(intptr_t)(ws+3248);
	i8 v8155 = *(i8*)(intptr_t)v8154;
	i8 v8156 = v8155+(+48);
	i2 v8157 = *(i2*)(intptr_t)v8156;
	i4 v8158 = v8157;
	i8 v8159 = (i8)(intptr_t)(f118_MidConstant);
	i8 v8160;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v8159)(&v8160, v8158);
	i8 v8161 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8161 = v8160;

endsub:;
}
	void f227_IsArray(i1* /* result */, i8 /* type */);
const i1 c02_s0172[] = { 0x61,0x72,0x72,0x61,0x79,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f76_SimpleError(i8 /* message */);
	void f118_MidConstant(i8* /* m */, i4 /* value */);

// reduce_52 workspace at ws+3328 length ws+0
void f360_reduce_52(void) {

	i8 v8162 = (i8)(intptr_t)(ws+3248);
	i8 v8163 = *(i8*)(intptr_t)v8162;
	i8 v8164 = (i8)(intptr_t)(f227_IsArray);
	i1 v8165;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8164)(&v8165, v8163);
	i1 v8166 = (i1)+0;
	if (v8165==v8166) goto c02_063c; else goto c02_063d;

c02_063c:;

	i8 v8167 = (i8)(intptr_t)c02_s0172;
	i8 v8168 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8168)(v8167);

c02_063d:;

c02_0639:;

	i8 v8169 = (i8)(intptr_t)(ws+3248);
	i8 v8170 = *(i8*)(intptr_t)v8169;
	i8 v8171 = v8170+(+8);
	i2 v8172 = *(i2*)(intptr_t)v8171;
	i4 v8173 = v8172;
	i8 v8174 = (i8)(intptr_t)(f118_MidConstant);
	i8 v8175;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v8174)(&v8175, v8173);
	i8 v8176 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8176 = v8175;

endsub:;
}
	void f74_StartError(void);
	void f12_print(i8 /* ptr */);
const i1 c02_s0173[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x76,0x61,0x6c,0x75,0x65,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// not_a_value workspace at ws+3328 length ws+0
void f362_not_a_value(void) {

	i8 v8177 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v8177)();

	i8 v8178 = (i8)(intptr_t)(ws+3248);
	i8 v8179 = *(i8*)(intptr_t)v8178;
	i8 v8180 = v8179+(+8);
	i8 v8181 = *(i8*)(intptr_t)v8180;
	i8 v8182 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8182)(v8181);

	i8 v8183 = (i8)(intptr_t)c02_s0173;
	i8 v8184 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8184)(v8183);

	i8 v8185 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v8185)();

endsub:;
}
	void f118_MidConstant(i8* /* m */, i4 /* value */);
	void f120_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f260_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f233_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f155_MidSubref(i8* /* m */, i8 /* subr */);
	void f362_not_a_value(void);
	void f362_not_a_value(void);

// reduce_53 workspace at ws+3328 length ws+0
void f361_reduce_53(void) {


	i8 v8186 = (i8)(intptr_t)(ws+3248);
	i8 v8187 = *(i8*)(intptr_t)v8186;
	i8 v8188 = v8187+(+32);
	i1 v8189 = *(i1*)(intptr_t)v8188;

	if (v8189 != +7) goto c02_063f;

	i8 v8190 = (i8)(intptr_t)(ws+3248);
	i8 v8191 = *(i8*)(intptr_t)v8190;
	i4 v8192 = *(i4*)(intptr_t)v8191;
	i8 v8193 = (i8)(intptr_t)(f118_MidConstant);
	i8 v8194;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v8193)(&v8194, v8192);
	i8 v8195 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8195 = v8194;

	goto c02_063e;

c02_063f:;

	if (v8189 != +28) goto c02_0640;

	i8 v8196 = (i8)(intptr_t)(ws+3248);
	i8 v8197 = *(i8*)(intptr_t)v8196;
	i2 v8198 = (i2)+0;
	i8 v8199 = (i8)(intptr_t)(f120_MidAddress);
	i8 v8200;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v8199)(&v8200, v8198, v8197);
	i8 v8201 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8201 = v8200;

	i8 v8202 = (i8)(intptr_t)(ws+3248);
	i8 v8203 = *(i8*)(intptr_t)v8202;
	i8 v8204 = *(i8*)(intptr_t)v8203;
	i8 v8205 = *(i8*)(intptr_t)v8204;
	i8 v8206 = (i8)(intptr_t)(f260_MakePointerType);
	i8 v8207;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v8206)(&v8207, v8205);
	i8 v8208 = (i8)(intptr_t)(ws+3240);
	i8 v8209 = *(i8*)(intptr_t)v8208;
	i8 v8210 = v8209+(+16);
	*(i8*)(intptr_t)v8210 = v8207;

	i8 v8211 = (i8)(intptr_t)(ws+3240);
	i8 v8212 = *(i8*)(intptr_t)v8211;
	i8 v8213 = (i8)(intptr_t)(f233_MakeLValue);
	i8 v8214;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v8213)(&v8214, v8212);
	i8 v8215 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8215 = v8214;

	goto c02_063e;

c02_0640:;

	if (v8189 != +30) goto c02_0641;

	i8 v8216 = (i8)(intptr_t)(ws+3248);
	i8 v8217 = *(i8*)(intptr_t)v8216;
	i8 v8218 = *(i8*)(intptr_t)v8217;
	i8 v8219 = v8218+(+52);
	i1 v8220 = *(i1*)(intptr_t)v8219;
	i1 v8221 = (i1)+6;
	if (v8220==v8221) goto c02_0645; else goto c02_0646;

c02_0645:;

	i8 v8222 = (i8)(intptr_t)(ws+3248);
	i8 v8223 = *(i8*)(intptr_t)v8222;
	i8 v8224 = *(i8*)(intptr_t)v8223;
	i8 v8225 = *(i8*)(intptr_t)v8224;
	i8 v8226 = (i8)(intptr_t)(f155_MidSubref);
	i8 v8227;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v8226)(&v8227, v8225);
	i8 v8228 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8228 = v8227;

	i8 v8229 = (i8)(intptr_t)(ws+3248);
	i8 v8230 = *(i8*)(intptr_t)v8229;
	i8 v8231 = *(i8*)(intptr_t)v8230;
	i8 v8232 = *(i8*)(intptr_t)v8231;
	i8 v8233 = v8232+(+48);
	i8 v8234 = *(i8*)(intptr_t)v8233;
	i8 v8235 = v8234+(+40);
	i8 v8236 = *(i8*)(intptr_t)v8235;
	i8 v8237 = (i8)(intptr_t)(ws+3240);
	i8 v8238 = *(i8*)(intptr_t)v8237;
	i8 v8239 = v8238+(+16);
	*(i8*)(intptr_t)v8239 = v8236;

	goto c02_0642;

c02_0646:;

	i8 v8240 = (i8)(intptr_t)(f362_not_a_value);

	((void(*)(void))(intptr_t)v8240)();

c02_0642:;

	goto c02_063e;

c02_0641:;

	i8 v8241 = (i8)(intptr_t)(f362_not_a_value);

	((void(*)(void))(intptr_t)v8241)();

c02_063e:;


endsub:;
}
	void f68_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s0174[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x64,0x65,0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x20,0x6e,0x6f,0x6e,0x2d,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0 };
	void f76_SimpleError(i8 /* message */);
	void f233_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_54 workspace at ws+3328 length ws+0
void f363_reduce_54(void) {

	i8 v8242 = (i8)(intptr_t)(ws+3256);
	i8 v8243 = *(i8*)(intptr_t)v8242;
	i8 v8244 = v8243+(+16);
	i8 v8245 = *(i8*)(intptr_t)v8244;
	i8 v8246 = (i8)(intptr_t)(f68_IsPtr);
	i1 v8247;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8246)(&v8247, v8245);
	i1 v8248 = (i1)+0;
	if (v8247==v8248) goto c02_064a; else goto c02_064b;

c02_064a:;

	i8 v8249 = (i8)(intptr_t)c02_s0174;
	i8 v8250 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8250)(v8249);

c02_064b:;

c02_0647:;

	i8 v8251 = (i8)(intptr_t)(ws+3256);
	i8 v8252 = *(i8*)(intptr_t)v8251;
	i8 v8253 = (i8)(intptr_t)(f233_MakeLValue);
	i8 v8254;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v8253)(&v8254, v8252);
	i8 v8255 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8255 = v8254;

	i1 v8256 = (i1)+5;
	i8 v8257 = (i8)(intptr_t)(ws+3248);
	i8 v8258 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8258)(v8257, v8256);

endsub:;
}
	void f234_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f227_IsArray(i1* /* result */, i8 /* type */);
	void f74_StartError(void);
const i1 c02_s0175[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x69,0x6e,0x64,0x65,0x78,0x20,0x61,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0x2c,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);
	void f268_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f229_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s0176[] = { 0x61,0x72,0x72,0x61,0x79,0x20,0x69,0x6e,0x64,0x69,0x63,0x65,0x73,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x73,0 };
	void f76_SimpleError(i8 /* message */);
	void f174_MidCCast(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */);
	void f118_MidConstant(i8* /* m */, i4 /* value */);
	void f173_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f173_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f260_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f233_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_55 workspace at ws+3328 length ws+48
void f364_reduce_55(void) {

	i8 v8259 = (i8)(intptr_t)(ws+3272);
	i8 v8260 = *(i8*)(intptr_t)v8259;
	i8 v8261 = v8260+(+16);
	i8 v8262 = *(i8*)(intptr_t)v8261;
	i8 v8263 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8263 = v8262;

	i8 v8264 = (i8)(intptr_t)(ws+3272);
	i8 v8265 = *(i8*)(intptr_t)v8264;
	i8 v8266 = (i8)(intptr_t)(f234_UndoLValue);
	i8 v8267;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v8266)(&v8267, v8265);
	i8 v8268 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8268 = v8267;

	i8 v8269 = (i8)(intptr_t)(ws+3328);
	i8 v8270 = *(i8*)(intptr_t)v8269;
	i8 v8271 = (i8)(intptr_t)(f227_IsArray);
	i1 v8272;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8271)(&v8272, v8270);
	i1 v8273 = (i1)+0;
	if (v8272==v8273) goto c02_064f; else goto c02_0650;

c02_064f:;

	i8 v8274 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v8274)();

	i8 v8275 = (i8)(intptr_t)c02_s0175;
	i8 v8276 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8276)(v8275);

	i8 v8277 = (i8)(intptr_t)(ws+3328);
	i8 v8278 = *(i8*)(intptr_t)v8277;
	i8 v8279 = v8278+(+32);
	i8 v8280 = *(i8*)(intptr_t)v8279;
	i8 v8281 = v8280+(+8);
	i8 v8282 = *(i8*)(intptr_t)v8281;
	i8 v8283 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8283)(v8282);

	i8 v8284 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v8284)();

c02_0650:;

c02_064c:;

	i8 v8285 = (i8)(intptr_t)(ws+3256);
	i8 v8286 = *(i8*)(intptr_t)v8285;
	i8 v8287 = (i8)(intptr_t)(ws+3328);
	i8 v8288 = *(i8*)(intptr_t)v8287;
	i8 v8289 = v8288+(+16);
	i8 v8290 = *(i8*)(intptr_t)v8289;
	i8 v8291 = (i8)(intptr_t)(f268_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v8291)(v8290, v8286);

	i8 v8292 = (i8)(intptr_t)(ws+3256);
	i8 v8293 = *(i8*)(intptr_t)v8292;
	i8 v8294 = v8293+(+16);
	i8 v8295 = *(i8*)(intptr_t)v8294;
	i8 v8296 = (i8)(intptr_t)(f229_IsNum);
	i1 v8297;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8296)(&v8297, v8295);
	i1 v8298 = (i1)+0;
	if (v8297==v8298) goto c02_0654; else goto c02_0655;

c02_0654:;

	i8 v8299 = (i8)(intptr_t)c02_s0176;
	i8 v8300 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8300)(v8299);

c02_0655:;

c02_0651:;

	i8 v8301 = (i8)(intptr_t)(ws+3328);
	i8 v8302 = *(i8*)(intptr_t)v8301;
	i8 v8303 = *(i8*)(intptr_t)v8302;
	i8 v8304 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v8304 = v8303;

	i8 v8305 = (i8)(intptr_t)(ws+1528);
	i8 v8306 = *(i8*)(intptr_t)v8305;
	i8 v8307 = v8306+(+48);
	i2 v8308 = *(i2*)(intptr_t)v8307;
	i1 v8309 = v8308;
	i8 v8310 = (i8)(intptr_t)(ws+3352);
	*(i1*)(intptr_t)v8310 = v8309;

	i1 v8311 = (i1)+166;
	i8 v8312 = (i8)(intptr_t)(ws+3352);
	i1 v8313 = *(i1*)(intptr_t)v8312;
	i8 v8314 = (i8)(intptr_t)(ws+1528);
	i8 v8315 = *(i8*)(intptr_t)v8314;
	i8 v8316 = v8315+(+48);
	i2 v8317 = *(i2*)(intptr_t)v8316;
	i1 v8318 = v8317;
	i8 v8319 = (i8)(intptr_t)(ws+3256);
	i8 v8320 = *(i8*)(intptr_t)v8319;
	i1 v8321 = (i1)+0;
	i8 v8322 = (i8)(intptr_t)(f174_MidCCast);
	i8 v8323;

	((void(*)(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */))(intptr_t)v8322)(&v8323, v8321, v8320, v8318);
	i8 v8324 = (i8)(intptr_t)(ws+3344);
	i8 v8325 = *(i8*)(intptr_t)v8324;
	i8 v8326 = v8325+(+50);
	i2 v8327 = *(i2*)(intptr_t)v8326;
	i4 v8328 = v8327;
	i8 v8329 = (i8)(intptr_t)(f118_MidConstant);
	i8 v8330;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v8329)(&v8330, v8328);
	i8 v8331 = (i8)(intptr_t)(f173_MidC2Op);
	i8 v8332;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v8331)(&v8332, v8330, v8323, v8313, v8311);
	i8 v8333 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v8333 = v8332;

	i8 v8334 = (i8)(intptr_t)(ws+1528);
	i8 v8335 = *(i8*)(intptr_t)v8334;
	i8 v8336 = (i8)(intptr_t)(ws+3360);
	i8 v8337 = *(i8*)(intptr_t)v8336;
	i8 v8338 = v8337+(+16);
	*(i8*)(intptr_t)v8338 = v8335;

	i1 v8339 = (i1)+161;
	i8 v8340 = (i8)(intptr_t)(ws+3352);
	i1 v8341 = *(i1*)(intptr_t)v8340;
	i8 v8342 = (i8)(intptr_t)(ws+3336);
	i8 v8343 = *(i8*)(intptr_t)v8342;
	i8 v8344 = (i8)(intptr_t)(ws+3360);
	i8 v8345 = *(i8*)(intptr_t)v8344;
	i8 v8346 = (i8)(intptr_t)(f173_MidC2Op);
	i8 v8347;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v8346)(&v8347, v8345, v8343, v8341, v8339);
	i8 v8348 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v8348 = v8347;

	i8 v8349 = (i8)(intptr_t)(ws+3344);
	i8 v8350 = *(i8*)(intptr_t)v8349;
	i8 v8351 = (i8)(intptr_t)(f260_MakePointerType);
	i8 v8352;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v8351)(&v8352, v8350);
	i8 v8353 = (i8)(intptr_t)(ws+3368);
	i8 v8354 = *(i8*)(intptr_t)v8353;
	i8 v8355 = v8354+(+16);
	*(i8*)(intptr_t)v8355 = v8352;

	i8 v8356 = (i8)(intptr_t)(ws+3368);
	i8 v8357 = *(i8*)(intptr_t)v8356;
	i8 v8358 = (i8)(intptr_t)(f233_MakeLValue);
	i8 v8359;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v8358)(&v8359, v8357);
	i8 v8360 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8360 = v8359;

	i1 v8361 = (i1)+17;
	i8 v8362 = (i8)(intptr_t)(ws+3264);
	i8 v8363 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8363)(v8362, v8361);

	i1 v8364 = (i1)+5;
	i8 v8365 = (i8)(intptr_t)(ws+3248);
	i8 v8366 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8366)(v8365, v8364);

endsub:;
}
	void f234_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f223_CheckNotPartialType(i8 /* type */);
	void f138_MidDeref(i8* /* m */, i8 /* left */, i1 /* width */);
	void f223_CheckNotPartialType(i8 /* type */);
	void f232_IsRecord(i1* /* result */, i8 /* type */);
	void f74_StartError(void);
	void f12_print(i8 /* ptr */);
const i1 c02_s0177[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x6f,0x72,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x74,0x6f,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);
	void f218_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f74_StartError(void);
	void f12_print(i8 /* ptr */);
const i1 c02_s0178[] = { 0x20,0x64,0x6f,0x65,0x73,0x20,0x6e,0x6f,0x74,0x20,0x63,0x6f,0x6e,0x74,0x61,0x69,0x6e,0x20,0x61,0x20,0x6d,0x65,0x6d,0x62,0x65,0x72,0x20,0x27,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s0179[] = { 0x27,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);
	void f34_Free(i8 /* block */);
	void f118_MidConstant(i8* /* m */, i4 /* value */);
	void f173_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f260_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f233_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_56 workspace at ws+3328 length ws+24
void f365_reduce_56(void) {

	i8 v8367 = (i8)(intptr_t)(ws+3264);
	i8 v8368 = *(i8*)(intptr_t)v8367;
	i8 v8369 = v8368+(+16);
	i8 v8370 = *(i8*)(intptr_t)v8369;
	i8 v8371 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8371 = v8370;

	i8 v8372 = (i8)(intptr_t)(ws+3264);
	i8 v8373 = *(i8*)(intptr_t)v8372;
	i8 v8374 = (i8)(intptr_t)(f234_UndoLValue);
	i8 v8375;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v8374)(&v8375, v8373);
	i8 v8376 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8376 = v8375;

c02_0658:;

	i8 v8377 = (i8)(intptr_t)(ws+3328);
	i8 v8378 = *(i8*)(intptr_t)v8377;
	i8 v8379 = (i8)(intptr_t)(f68_IsPtr);
	i1 v8380;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8379)(&v8380, v8378);
	i1 v8381 = (i1)+0;
	if (v8380==v8381) goto c02_065b; else goto c02_065a;

c02_065a:;

	i8 v8382 = (i8)(intptr_t)(ws+3328);
	i8 v8383 = *(i8*)(intptr_t)v8382;
	i8 v8384 = *(i8*)(intptr_t)v8383;
	i8 v8385 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8385 = v8384;

	i8 v8386 = (i8)(intptr_t)(ws+3328);
	i8 v8387 = *(i8*)(intptr_t)v8386;
	i8 v8388 = (i8)(intptr_t)(f223_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v8388)(v8387);

	i8 v8389 = (i8)(intptr_t)(ws+1528);
	i8 v8390 = *(i8*)(intptr_t)v8389;
	i8 v8391 = v8390+(+48);
	i2 v8392 = *(i2*)(intptr_t)v8391;
	i1 v8393 = v8392;
	i8 v8394 = (i8)(intptr_t)(ws+3336);
	i8 v8395 = *(i8*)(intptr_t)v8394;
	i8 v8396 = (i8)(intptr_t)(f138_MidDeref);
	i8 v8397;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v8396)(&v8397, v8395, v8393);
	i8 v8398 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8398 = v8397;

	goto c02_0658;

c02_065b:;

	i8 v8399 = (i8)(intptr_t)(ws+3328);
	i8 v8400 = *(i8*)(intptr_t)v8399;
	i8 v8401 = (i8)(intptr_t)(f223_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v8401)(v8400);

	i8 v8402 = (i8)(intptr_t)(ws+3328);
	i8 v8403 = *(i8*)(intptr_t)v8402;
	i8 v8404 = (i8)(intptr_t)(f232_IsRecord);
	i1 v8405;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8404)(&v8405, v8403);
	i1 v8406 = (i1)+0;
	if (v8405==v8406) goto c02_065f; else goto c02_0660;

c02_065f:;

	i8 v8407 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v8407)();

	i8 v8408 = (i8)(intptr_t)(ws+3328);
	i8 v8409 = *(i8*)(intptr_t)v8408;
	i8 v8410 = v8409+(+32);
	i8 v8411 = *(i8*)(intptr_t)v8410;
	i8 v8412 = v8411+(+8);
	i8 v8413 = *(i8*)(intptr_t)v8412;
	i8 v8414 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8414)(v8413);

	i8 v8415 = (i8)(intptr_t)c02_s0177;
	i8 v8416 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8416)(v8415);

	i8 v8417 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v8417)();

c02_0660:;

c02_065c:;

	i8 v8418 = (i8)(intptr_t)(ws+3328);
	i8 v8419 = *(i8*)(intptr_t)v8418;
	i8 v8420 = (i8)(intptr_t)(ws+3248);
	i8 v8421 = *(i8*)(intptr_t)v8420;
	i8 v8422 = (i8)(intptr_t)(f218_LookupSymbol);
	i8 v8423;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v8422)(&v8423, v8421, v8419);
	i8 v8424 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v8424 = v8423;

	i8 v8425 = (i8)(intptr_t)(ws+3344);
	i8 v8426 = *(i8*)(intptr_t)v8425;
	i8 v8427 = (i8)+0;
	if (v8426==v8427) goto c02_0664; else goto c02_0665;

c02_0664:;

	i8 v8428 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v8428)();

	i8 v8429 = (i8)(intptr_t)(ws+3328);
	i8 v8430 = *(i8*)(intptr_t)v8429;
	i8 v8431 = v8430+(+32);
	i8 v8432 = *(i8*)(intptr_t)v8431;
	i8 v8433 = v8432+(+8);
	i8 v8434 = *(i8*)(intptr_t)v8433;
	i8 v8435 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8435)(v8434);

	i8 v8436 = (i8)(intptr_t)c02_s0178;
	i8 v8437 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8437)(v8436);

	i8 v8438 = (i8)(intptr_t)(ws+3248);
	i8 v8439 = *(i8*)(intptr_t)v8438;
	i8 v8440 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8440)(v8439);

	i8 v8441 = (i8)(intptr_t)c02_s0179;
	i8 v8442 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8442)(v8441);

	i8 v8443 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v8443)();

c02_0665:;

c02_0661:;

	i8 v8444 = (i8)(intptr_t)(ws+3248);
	i8 v8445 = *(i8*)(intptr_t)v8444;
	i8 v8446 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v8446)(v8445);

	i1 v8447 = (i1)+161;
	i8 v8448 = (i8)(intptr_t)(ws+1528);
	i8 v8449 = *(i8*)(intptr_t)v8448;
	i8 v8450 = v8449+(+48);
	i2 v8451 = *(i2*)(intptr_t)v8450;
	i1 v8452 = v8451;
	i8 v8453 = (i8)(intptr_t)(ws+3336);
	i8 v8454 = *(i8*)(intptr_t)v8453;
	i8 v8455 = (i8)(intptr_t)(ws+3344);
	i8 v8456 = *(i8*)(intptr_t)v8455;
	i8 v8457 = *(i8*)(intptr_t)v8456;
	i8 v8458 = v8457+(+24);
	i2 v8459 = *(i2*)(intptr_t)v8458;
	i4 v8460 = v8459;
	i8 v8461 = (i8)(intptr_t)(f118_MidConstant);
	i8 v8462;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v8461)(&v8462, v8460);
	i8 v8463 = (i8)(intptr_t)(f173_MidC2Op);
	i8 v8464;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v8463)(&v8464, v8462, v8454, v8452, v8447);
	i8 v8465 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8465 = v8464;

	i8 v8466 = (i8)(intptr_t)(ws+3344);
	i8 v8467 = *(i8*)(intptr_t)v8466;
	i8 v8468 = *(i8*)(intptr_t)v8467;
	i8 v8469 = *(i8*)(intptr_t)v8468;
	i8 v8470 = (i8)(intptr_t)(f260_MakePointerType);
	i8 v8471;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v8470)(&v8471, v8469);
	i8 v8472 = (i8)(intptr_t)(ws+3240);
	i8 v8473 = *(i8*)(intptr_t)v8472;
	i8 v8474 = v8473+(+16);
	*(i8*)(intptr_t)v8474 = v8471;

	i8 v8475 = (i8)(intptr_t)(ws+3240);
	i8 v8476 = *(i8*)(intptr_t)v8475;
	i8 v8477 = (i8)(intptr_t)(f233_MakeLValue);
	i8 v8478;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v8477)(&v8478, v8476);
	i8 v8479 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8479 = v8478;

	i1 v8480 = (i1)+8;
	i8 v8481 = (i8)(intptr_t)(ws+3256);
	i8 v8482 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8482)(v8481, v8480);

endsub:;
}
	void f156_MidString(i8* /* m */, i8 /* text */);
	void f260_MakePointerType(i8* /* ptrtype */, i8 /* type */);

// reduce_57 workspace at ws+3328 length ws+0
void f366_reduce_57(void) {

	i8 v8483 = (i8)(intptr_t)(ws+3248);
	i8 v8484 = *(i8*)(intptr_t)v8483;
	i8 v8485 = (i8)(intptr_t)(f156_MidString);
	i8 v8486;

	((void(*)(i8* /* m */, i8 /* text */))(intptr_t)v8485)(&v8486, v8484);
	i8 v8487 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8487 = v8486;

	i8 v8488 = (i8)(intptr_t)(ws+1512);
	i8 v8489 = *(i8*)(intptr_t)v8488;
	i8 v8490 = (i8)(intptr_t)(f260_MakePointerType);
	i8 v8491;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v8490)(&v8491, v8489);
	i8 v8492 = (i8)(intptr_t)(ws+3240);
	i8 v8493 = *(i8*)(intptr_t)v8492;
	i8 v8494 = v8493+(+16);
	*(i8*)(intptr_t)v8494 = v8491;

endsub:;
}
	void f289_parser_i_constant_error(void);
	void f63_Discard(i8 /* node */);

// reduce_58 workspace at ws+3328 length ws+0
void f367_reduce_58(void) {

	i8 v8495 = (i8)(intptr_t)(ws+3248);
	i8 v8496 = *(i8*)(intptr_t)v8495;
	i8 v8497 = v8496+(+40);
	i1 v8498 = *(i1*)(intptr_t)v8497;
	i1 v8499 = (i1)+45;
	if (v8498==v8499) goto c02_066a; else goto c02_0669;

c02_0669:;

	i8 v8500 = (i8)(intptr_t)(f289_parser_i_constant_error);

	((void(*)(void))(intptr_t)v8500)();

c02_066a:;

c02_0666:;

	i8 v8501 = (i8)(intptr_t)(ws+3248);
	i8 v8502 = *(i8*)(intptr_t)v8501;
	i4 v8503 = *(i4*)(intptr_t)v8502;
	i8 v8504 = (i8)(intptr_t)(ws+3240);
	*(i4*)(intptr_t)v8504 = v8503;

	i8 v8505 = (i8)(intptr_t)(ws+3248);
	i8 v8506 = *(i8*)(intptr_t)v8505;
	i8 v8507 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v8507)(v8506);

endsub:;
}
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_59 workspace at ws+3328 length ws+0
void f368_reduce_59(void) {

	i1 v8508 = (i1)+7;
	i8 v8509 = (i8)(intptr_t)(ws+3272);
	i8 v8510 = *(i8*)(intptr_t)v8509;
	i8 v8511 = v8510+(+32);
	*(i1*)(intptr_t)v8511 = v8508;

	i8 v8512 = (i8)(intptr_t)(ws+3256);
	i4 v8513 = *(i4*)(intptr_t)v8512;
	i8 v8514 = (i8)(intptr_t)(ws+3272);
	i8 v8515 = *(i8*)(intptr_t)v8514;
	*(i4*)(intptr_t)v8515 = v8513;

	i1 v8516 = (i1)+2;
	i8 v8517 = (i8)(intptr_t)(ws+3264);
	i8 v8518 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8518)(v8517, v8516);

	i1 v8519 = (i1)+22;
	i8 v8520 = (i8)(intptr_t)(ws+3248);
	i8 v8521 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8521)(v8520, v8519);

endsub:;
}
const i1 c02_s017a[] = { 0x69,0x6e,0x76,0x61,0x6c,0x69,0x64,0x20,0x69,0x6e,0x74,0x65,0x67,0x65,0x72,0x20,0x74,0x79,0x70,0x65,0x20,0x72,0x61,0x6e,0x67,0x65,0 };
	void f76_SimpleError(i8 /* message */);
	void f240_ArchGuessIntType(i8* /* symbol */, i4 /* max */, i4 /* min */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_60 workspace at ws+3328 length ws+0
void f369_reduce_60(void) {

	i8 v8522 = (i8)(intptr_t)(ws+3272);
	i4 v8523 = *(i4*)(intptr_t)v8522;
	i8 v8524 = (i8)(intptr_t)(ws+3256);
	i4 v8525 = *(i4*)(intptr_t)v8524;
	if ((s4)v8523<(s4)v8525) goto c02_066f; else goto c02_066e;

c02_066e:;

	i8 v8526 = (i8)(intptr_t)c02_s017a;
	i8 v8527 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8527)(v8526);

c02_066f:;

c02_066b:;

	i8 v8528 = (i8)(intptr_t)(ws+3272);
	i4 v8529 = *(i4*)(intptr_t)v8528;
	i8 v8530 = (i8)(intptr_t)(ws+3256);
	i4 v8531 = *(i4*)(intptr_t)v8530;
	i8 v8532 = (i8)(intptr_t)(f240_ArchGuessIntType);
	i8 v8533;

	((void(*)(i8* /* symbol */, i4 /* max */, i4 /* min */))(intptr_t)v8532)(&v8533, v8531, v8529);
	i8 v8534 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8534 = v8533;

	i1 v8535 = (i1)+16;
	i8 v8536 = (i8)(intptr_t)(ws+3280);
	i8 v8537 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8537)(v8536, v8535);

	i1 v8538 = (i1)+45;
	i8 v8539 = (i8)(intptr_t)(ws+3264);
	i8 v8540 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8540)(v8539, v8538);

	i1 v8541 = (i1)+4;
	i8 v8542 = (i8)(intptr_t)(ws+3248);
	i8 v8543 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8543)(v8542, v8541);

endsub:;
}
	void f66_AllocNewType(i8* /* type */);
	void f74_StartError(void);
const i1 c02_s017b[] = { 0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s017c[] = { 0x20,0x74,0x6f,0x20,0x62,0x65,0x20,0x61,0x20,0x74,0x79,0x70,0x65,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// reduce_61 workspace at ws+3328 length ws+16
void f370_reduce_61(void) {

	i8 v8544 = (i8)(intptr_t)(ws+3248);
	i8 v8545 = *(i8*)(intptr_t)v8544;
	i8 v8546 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8546 = v8545;

	i8 v8547 = (i8)(intptr_t)(ws+3328);
	i8 v8548 = *(i8*)(intptr_t)v8547;
	i8 v8549 = v8548+(+32);
	i1 v8550 = *(i1*)(intptr_t)v8549;
	i1 v8551 = (i1)+0;
	if (v8550==v8551) goto c02_0673; else goto c02_0674;

c02_0673:;

	i8 v8552 = (i8)(intptr_t)(f66_AllocNewType);
	i8 v8553;

	((void(*)(i8* /* type */))(intptr_t)v8552)(&v8553);
	i8 v8554 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8554 = v8553;

	i1 v8555 = (i1)+1;
	i8 v8556 = (i8)(intptr_t)(ws+3336);
	i8 v8557 = *(i8*)(intptr_t)v8556;
	i8 v8558 = v8557+(+52);
	*(i1*)(intptr_t)v8558 = v8555;

	i1 v8559 = (i1)+30;
	i8 v8560 = (i8)(intptr_t)(ws+3328);
	i8 v8561 = *(i8*)(intptr_t)v8560;
	i8 v8562 = v8561+(+32);
	*(i1*)(intptr_t)v8562 = v8559;

	i8 v8563 = (i8)(intptr_t)(ws+3336);
	i8 v8564 = *(i8*)(intptr_t)v8563;
	i8 v8565 = (i8)(intptr_t)(ws+3328);
	i8 v8566 = *(i8*)(intptr_t)v8565;
	*(i8*)(intptr_t)v8566 = v8564;

	i8 v8567 = (i8)(intptr_t)(ws+3328);
	i8 v8568 = *(i8*)(intptr_t)v8567;
	i8 v8569 = (i8)(intptr_t)(ws+3336);
	i8 v8570 = *(i8*)(intptr_t)v8569;
	i8 v8571 = v8570+(+32);
	*(i8*)(intptr_t)v8571 = v8568;

c02_0674:;

c02_0670:;

	i8 v8572 = (i8)(intptr_t)(ws+3328);
	i8 v8573 = *(i8*)(intptr_t)v8572;
	i8 v8574 = v8573+(+32);
	i1 v8575 = *(i1*)(intptr_t)v8574;
	i1 v8576 = (i1)+30;
	if (v8575==v8576) goto c02_0679; else goto c02_0678;

c02_0678:;

	i8 v8577 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v8577)();

	i8 v8578 = (i8)(intptr_t)c02_s017b;
	i8 v8579 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8579)(v8578);

	i8 v8580 = (i8)(intptr_t)(ws+3328);
	i8 v8581 = *(i8*)(intptr_t)v8580;
	i8 v8582 = v8581+(+8);
	i8 v8583 = *(i8*)(intptr_t)v8582;
	i8 v8584 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8584)(v8583);

	i8 v8585 = (i8)(intptr_t)c02_s017c;
	i8 v8586 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8586)(v8585);

	i8 v8587 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v8587)();

c02_0679:;

c02_0675:;

	i8 v8588 = (i8)(intptr_t)(ws+3328);
	i8 v8589 = *(i8*)(intptr_t)v8588;
	i8 v8590 = *(i8*)(intptr_t)v8589;
	i8 v8591 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8591 = v8590;

endsub:;
}
	void f260_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_62 workspace at ws+3328 length ws+0
void f371_reduce_62(void) {

	i8 v8592 = (i8)(intptr_t)(ws+3256);
	i8 v8593 = *(i8*)(intptr_t)v8592;
	i8 v8594 = (i8)(intptr_t)(f260_MakePointerType);
	i8 v8595;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v8594)(&v8595, v8593);
	i8 v8596 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8596 = v8595;

	i1 v8597 = (i1)+5;
	i8 v8598 = (i8)(intptr_t)(ws+3248);
	i8 v8599 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8599)(v8598, v8597);

endsub:;
}
	void f261_MakeArrayType(i8* /* arraytype */, i2 /* size */, i8 /* type */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_63 workspace at ws+3328 length ws+0
void f372_reduce_63(void) {

	i8 v8600 = (i8)(intptr_t)(ws+3272);
	i8 v8601 = *(i8*)(intptr_t)v8600;
	i8 v8602 = (i8)(intptr_t)(ws+3256);
	i4 v8603 = *(i4*)(intptr_t)v8602;
	i2 v8604 = (s2)(s4)v8603;
	i8 v8605 = (i8)(intptr_t)(f261_MakeArrayType);
	i8 v8606;

	((void(*)(i8* /* arraytype */, i2 /* size */, i8 /* type */))(intptr_t)v8605)(&v8606, v8604, v8601);
	i8 v8607 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8607 = v8606;

	i1 v8608 = (i1)+17;
	i8 v8609 = (i8)(intptr_t)(ws+3264);
	i8 v8610 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8610)(v8609, v8608);

	i1 v8611 = (i1)+5;
	i8 v8612 = (i8)(intptr_t)(ws+3248);
	i8 v8613 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8613)(v8612, v8611);

endsub:;
}
	void f261_MakeArrayType(i8* /* arraytype */, i2 /* size */, i8 /* type */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_64 workspace at ws+3328 length ws+0
void f373_reduce_64(void) {

	i8 v8614 = (i8)(intptr_t)(ws+3264);
	i8 v8615 = *(i8*)(intptr_t)v8614;
	i2 v8616 = (i2)+0;
	i8 v8617 = (i8)(intptr_t)(f261_MakeArrayType);
	i8 v8618;

	((void(*)(i8* /* arraytype */, i2 /* size */, i8 /* type */))(intptr_t)v8617)(&v8618, v8616, v8615);
	i8 v8619 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8619 = v8618;

	i1 v8620 = (i1)+17;
	i8 v8621 = (i8)(intptr_t)(ws+3256);
	i8 v8622 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8622)(v8621, v8620);

	i1 v8623 = (i1)+5;
	i8 v8624 = (i8)(intptr_t)(ws+3248);
	i8 v8625 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8625)(v8624, v8623);

endsub:;
}
	void f227_IsArray(i1* /* result */, i8 /* type */);
	void f74_StartError(void);
	void f12_print(i8 /* ptr */);
const i1 c02_s017d[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// reduce_65 workspace at ws+3328 length ws+0
void f374_reduce_65(void) {

	i8 v8626 = (i8)(intptr_t)(ws+3248);
	i8 v8627 = *(i8*)(intptr_t)v8626;
	i8 v8628 = (i8)(intptr_t)(f227_IsArray);
	i1 v8629;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8628)(&v8629, v8627);
	i1 v8630 = (i1)+0;
	if (v8629==v8630) goto c02_067d; else goto c02_067e;

c02_067d:;

	i8 v8631 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v8631)();

	i8 v8632 = (i8)(intptr_t)(ws+3248);
	i8 v8633 = *(i8*)(intptr_t)v8632;
	i8 v8634 = v8633+(+32);
	i8 v8635 = *(i8*)(intptr_t)v8634;
	i8 v8636 = v8635+(+8);
	i8 v8637 = *(i8*)(intptr_t)v8636;
	i8 v8638 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8638)(v8637);

	i8 v8639 = (i8)(intptr_t)c02_s017d;
	i8 v8640 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8640)(v8639);

	i8 v8641 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v8641)();

c02_067e:;

c02_067a:;

	i8 v8642 = (i8)(intptr_t)(ws+3248);
	i8 v8643 = *(i8*)(intptr_t)v8642;
	i8 v8644 = v8643+(+16);
	i8 v8645 = *(i8*)(intptr_t)v8644;
	i8 v8646 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8646 = v8645;

endsub:;
}
	void f221_AddAlias(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_66 workspace at ws+3328 length ws+8
void f375_reduce_66(void) {

	i8 v8647 = (i8)+0;
	i8 v8648 = (i8)(intptr_t)(ws+3272);
	i8 v8649 = *(i8*)(intptr_t)v8648;
	i8 v8650 = (i8)(intptr_t)(ws+3256);
	i8 v8651 = *(i8*)(intptr_t)v8650;
	i8 v8652 = v8651+(+32);
	i8 v8653 = *(i8*)(intptr_t)v8652;
	i8 v8654 = (i8)(intptr_t)(f221_AddAlias);
	i8 v8655;

	((void(*)(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */))(intptr_t)v8654)(&v8655, v8653, v8649, v8647);
	i8 v8656 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8656 = v8655;

	i1 v8657 = (i1)+65;
	i8 v8658 = (i8)(intptr_t)(ws+3264);
	i8 v8659 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8659)(v8658, v8657);

	i1 v8660 = (i1)+22;
	i8 v8661 = (i8)(intptr_t)(ws+3248);
	i8 v8662 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8662)(v8661, v8660);

endsub:;
}
	void f220_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// reduce_67 workspace at ws+3328 length ws+0
void f376_reduce_67(void) {

	i8 v8663 = (i8)+0;
	i8 v8664 = (i8)(intptr_t)(ws+3248);
	i8 v8665 = *(i8*)(intptr_t)v8664;
	i8 v8666 = (i8)(intptr_t)(f220_AddSymbol);
	i8 v8667;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v8666)(&v8667, v8665, v8663);
	i8 v8668 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8668 = v8667;

endsub:;
}
	void f218_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f74_StartError(void);
const i1 c02_s017e[] = { 0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s017f[] = { 0x27,0x20,0x6e,0x6f,0x74,0x20,0x66,0x6f,0x75,0x6e,0x64,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);
	void f34_Free(i8 /* block */);

// reduce_68 workspace at ws+3328 length ws+16
void f377_reduce_68(void) {

	i8 v8669 = (i8)(intptr_t)(ws+3248);
	i8 v8670 = *(i8*)(intptr_t)v8669;
	i8 v8671 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8671 = v8670;

	i8 v8672 = (i8)+0;
	i8 v8673 = (i8)(intptr_t)(ws+3328);
	i8 v8674 = *(i8*)(intptr_t)v8673;
	i8 v8675 = (i8)(intptr_t)(f218_LookupSymbol);
	i8 v8676;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v8675)(&v8676, v8674, v8672);
	i8 v8677 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8677 = v8676;

	i8 v8678 = (i8)(intptr_t)(ws+3336);
	i8 v8679 = *(i8*)(intptr_t)v8678;
	i8 v8680 = (i8)+0;
	if (v8679==v8680) goto c02_0682; else goto c02_0683;

c02_0682:;

	i8 v8681 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v8681)();

	i8 v8682 = (i8)(intptr_t)c02_s017e;
	i8 v8683 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8683)(v8682);

	i8 v8684 = (i8)(intptr_t)(ws+3328);
	i8 v8685 = *(i8*)(intptr_t)v8684;
	i8 v8686 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8686)(v8685);

	i8 v8687 = (i8)(intptr_t)c02_s017f;
	i8 v8688 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8688)(v8687);

	i8 v8689 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v8689)();

c02_0683:;

c02_067f:;

	i8 v8690 = (i8)(intptr_t)(ws+3328);
	i8 v8691 = *(i8*)(intptr_t)v8690;
	i8 v8692 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v8692)(v8691);

	i8 v8693 = (i8)(intptr_t)(ws+3336);
	i8 v8694 = *(i8*)(intptr_t)v8693;
	i8 v8695 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8695 = v8694;

endsub:;
}
	void f218_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f220_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f34_Free(i8 /* block */);

// reduce_69 workspace at ws+3328 length ws+16
void f378_reduce_69(void) {

	i8 v8696 = (i8)(intptr_t)(ws+3248);
	i8 v8697 = *(i8*)(intptr_t)v8696;
	i8 v8698 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8698 = v8697;

	i8 v8699 = (i8)+0;
	i8 v8700 = (i8)(intptr_t)(ws+3328);
	i8 v8701 = *(i8*)(intptr_t)v8700;
	i8 v8702 = (i8)(intptr_t)(f218_LookupSymbol);
	i8 v8703;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v8702)(&v8703, v8701, v8699);
	i8 v8704 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8704 = v8703;

	i8 v8705 = (i8)(intptr_t)(ws+3336);
	i8 v8706 = *(i8*)(intptr_t)v8705;
	i8 v8707 = (i8)+0;
	if (v8706==v8707) goto c02_0687; else goto c02_0688;

c02_0687:;

	i8 v8708 = (i8)+0;
	i8 v8709 = (i8)(intptr_t)(ws+3328);
	i8 v8710 = *(i8*)(intptr_t)v8709;
	i8 v8711 = (i8)(intptr_t)(f220_AddSymbol);
	i8 v8712;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v8711)(&v8712, v8710, v8708);
	i8 v8713 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8713 = v8712;

	goto c02_0684;

c02_0688:;

	i8 v8714 = (i8)(intptr_t)(ws+3328);
	i8 v8715 = *(i8*)(intptr_t)v8714;
	i8 v8716 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v8716)(v8715);

c02_0684:;

	i8 v8717 = (i8)(intptr_t)(ws+3336);
	i8 v8718 = *(i8*)(intptr_t)v8717;
	i8 v8719 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8719 = v8718;

endsub:;
}
const i1 c02_s0180[] = { 0x73,0x69,0x6d,0x70,0x6c,0x65,0x20,0x74,0x79,0x70,0x65,0x20,0x6f,0x72,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x20,0x6e,0x61,0x6d,0x65,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f76_SimpleError(i8 /* message */);

// reduce_70 workspace at ws+3328 length ws+0
void f379_reduce_70(void) {

	i8 v8720 = (i8)(intptr_t)(ws+3248);
	i8 v8721 = *(i8*)(intptr_t)v8720;
	i8 v8722 = v8721+(+32);
	i1 v8723 = *(i1*)(intptr_t)v8722;

	if (v8723 != +28) goto c02_068a;

	i8 v8724 = (i8)(intptr_t)(ws+3248);
	i8 v8725 = *(i8*)(intptr_t)v8724;
	i8 v8726 = *(i8*)(intptr_t)v8725;
	i8 v8727 = *(i8*)(intptr_t)v8726;
	i8 v8728 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8728 = v8727;

	goto c02_0689;

c02_068a:;

	if (v8723 != +30) goto c02_068b;

	i8 v8729 = (i8)(intptr_t)(ws+3248);
	i8 v8730 = *(i8*)(intptr_t)v8729;
	i8 v8731 = *(i8*)(intptr_t)v8730;
	i8 v8732 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8732 = v8731;

	goto c02_0689;

c02_068b:;

	i8 v8733 = (i8)(intptr_t)c02_s0180;
	i8 v8734 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8734)(v8733);

c02_0689:;


endsub:;
}
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_71 workspace at ws+3328 length ws+0
void f380_reduce_71(void) {

	i8 v8735 = (i8)(intptr_t)(ws+3256);
	i8 v8736 = *(i8*)(intptr_t)v8735;
	i8 v8737 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8737 = v8736;

	i1 v8738 = (i1)+4;
	i8 v8739 = (i8)(intptr_t)(ws+3248);
	i8 v8740 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8740)(v8739, v8738);

endsub:;
}
	void f290_i_check_sub_call_args(void);
const i1 c02_s0181[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x73,0x20,0x63,0x61,0x6c,0x6c,0x65,0x64,0x20,0x61,0x73,0x20,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x73,0x20,0x6d,0x75,0x73,0x74,0x20,0x68,0x61,0x76,0x65,0x20,0x65,0x78,0x61,0x63,0x74,0x6c,0x79,0x20,0x6f,0x6e,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0 };
	void f76_SimpleError(i8 /* message */);
	void f100_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f115_MidCalle(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f291_i_end_call(void);

// reduce_72 workspace at ws+3328 length ws+16
void f381_reduce_72(void) {

	i8 v8741 = (i8)(intptr_t)(ws+80);
	i8 v8742 = *(i8*)(intptr_t)v8741;
	i8 v8743 = v8742+(+8);
	i8 v8744 = *(i8*)(intptr_t)v8743;
	i8 v8745 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8745 = v8744;

	i1 v8746 = (i1)+1;
	i8 v8747 = (i8)(intptr_t)(ws+80);
	i8 v8748 = *(i8*)(intptr_t)v8747;
	i8 v8749 = v8748+(+41);
	*(i1*)(intptr_t)v8749 = v8746;

	i8 v8750 = (i8)(intptr_t)(f290_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v8750)();

	i8 v8751 = (i8)(intptr_t)(ws+3328);
	i8 v8752 = *(i8*)(intptr_t)v8751;
	i8 v8753 = v8752+(+81);
	i1 v8754 = *(i1*)(intptr_t)v8753;
	i1 v8755 = (i1)+1;
	if (v8754==v8755) goto c02_0690; else goto c02_068f;

c02_068f:;

	i8 v8756 = (i8)(intptr_t)c02_s0181;
	i8 v8757 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8757)(v8756);

c02_0690:;

c02_068c:;

	i8 v8758 = (i8)(intptr_t)(ws+3328);
	i8 v8759 = *(i8*)(intptr_t)v8758;
	i1 v8760 = (i1)+0;
	i8 v8761 = (i8)(intptr_t)(f100_GetOutputParameter);
	i8 v8762;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v8761)(&v8762, v8760, v8759);
	i8 v8763 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8763 = v8762;

	i8 v8764 = (i8)(intptr_t)(ws+3336);
	i8 v8765 = *(i8*)(intptr_t)v8764;
	i8 v8766 = *(i8*)(intptr_t)v8765;
	i8 v8767 = *(i8*)(intptr_t)v8766;
	i8 v8768 = v8767+(+48);
	i2 v8769 = *(i2*)(intptr_t)v8768;
	i1 v8770 = v8769;
	i8 v8771 = (i8)(intptr_t)(ws+3248);
	i8 v8772 = *(i8*)(intptr_t)v8771;
	i8 v8773 = (i8)(intptr_t)(ws+80);
	i8 v8774 = *(i8*)(intptr_t)v8773;
	i8 v8775 = *(i8*)(intptr_t)v8774;
	i8 v8776 = (i8)(intptr_t)(ws+3328);
	i8 v8777 = *(i8*)(intptr_t)v8776;
	i8 v8778 = (i8)(intptr_t)(f115_MidCalle);
	i8 v8779;

	((void(*)(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v8778)(&v8779, v8777, v8775, v8772, v8770);
	i8 v8780 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8780 = v8779;

	i8 v8781 = (i8)(intptr_t)(ws+3336);
	i8 v8782 = *(i8*)(intptr_t)v8781;
	i8 v8783 = *(i8*)(intptr_t)v8782;
	i8 v8784 = *(i8*)(intptr_t)v8783;
	i8 v8785 = (i8)(intptr_t)(ws+3240);
	i8 v8786 = *(i8*)(intptr_t)v8785;
	i8 v8787 = v8786+(+16);
	*(i8*)(intptr_t)v8787 = v8784;

	i8 v8788 = (i8)(intptr_t)(f291_i_end_call);

	((void(*)(void))(intptr_t)v8788)();

endsub:;
}
	void f290_i_check_sub_call_args(void);
const i1 c02_s0182[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x73,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f76_SimpleError(i8 /* message */);
	void f160_MidCall(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */);
	void f256_Generate(i8 /* statement */);
	void f291_i_end_call(void);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_73 workspace at ws+3328 length ws+8
void f382_reduce_73(void) {

	i8 v8789 = (i8)(intptr_t)(ws+80);
	i8 v8790 = *(i8*)(intptr_t)v8789;
	i8 v8791 = v8790+(+8);
	i8 v8792 = *(i8*)(intptr_t)v8791;
	i8 v8793 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8793 = v8792;

	i8 v8794 = (i8)(intptr_t)(f290_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v8794)();

	i8 v8795 = (i8)(intptr_t)(ws+3328);
	i8 v8796 = *(i8*)(intptr_t)v8795;
	i8 v8797 = v8796+(+81);
	i1 v8798 = *(i1*)(intptr_t)v8797;
	i1 v8799 = (i1)+0;
	if (v8798==v8799) goto c02_0695; else goto c02_0694;

c02_0694:;

	i8 v8800 = (i8)(intptr_t)c02_s0182;
	i8 v8801 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8801)(v8800);

c02_0695:;

c02_0691:;

	i8 v8802 = (i8)(intptr_t)(ws+3256);
	i8 v8803 = *(i8*)(intptr_t)v8802;
	i8 v8804 = (i8)(intptr_t)(ws+80);
	i8 v8805 = *(i8*)(intptr_t)v8804;
	i8 v8806 = *(i8*)(intptr_t)v8805;
	i8 v8807 = (i8)(intptr_t)(ws+3328);
	i8 v8808 = *(i8*)(intptr_t)v8807;
	i8 v8809 = (i8)(intptr_t)(f160_MidCall);
	i8 v8810;

	((void(*)(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */))(intptr_t)v8809)(&v8810, v8808, v8806, v8803);
	i8 v8811 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8811)(v8810);

	i8 v8812 = (i8)(intptr_t)(f291_i_end_call);

	((void(*)(void))(intptr_t)v8812)();

	i1 v8813 = (i1)+22;
	i8 v8814 = (i8)(intptr_t)(ws+3248);
	i8 v8815 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8815)(v8814, v8813);

endsub:;
}
	void f290_i_check_sub_call_args(void);
	void f160_MidCall(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */);
	void f256_Generate(i8 /* statement */);
const i1 c02_s0183[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f76_SimpleError(i8 /* message */);
	void f100_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s0184[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x73,0x73,0x69,0x67,0x6e,0x20,0x74,0x6f,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x73,0 };
	void f76_SimpleError(i8 /* message */);
	void f260_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f268_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f223_CheckNotPartialType(i8 /* type */);
	void f223_CheckNotPartialType(i8 /* type */);
	void f149_MidPoparg(i8* /* m */, i1 /* remaining */, i8 /* subr */, i1 /* width */);
	void f138_MidDeref(i8* /* m */, i8 /* left */, i1 /* width */);
	void f121_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f256_Generate(i8 /* statement */);
	void f63_Discard(i8 /* node */);
const i1 c02_s0185[] = { 0x74,0x6f,0x6f,0x20,0x66,0x65,0x77,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f76_SimpleError(i8 /* message */);
	void f291_i_end_call(void);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_74 workspace at ws+3328 length ws+41
void f383_reduce_74(void) {

	i8 v8816 = (i8)(intptr_t)(ws+80);
	i8 v8817 = *(i8*)(intptr_t)v8816;
	i8 v8818 = v8817+(+8);
	i8 v8819 = *(i8*)(intptr_t)v8818;
	i8 v8820 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8820 = v8819;

	i8 v8821 = (i8)(intptr_t)(f290_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v8821)();

	i8 v8822 = (i8)(intptr_t)(ws+3256);
	i8 v8823 = *(i8*)(intptr_t)v8822;
	i8 v8824 = (i8)(intptr_t)(ws+80);
	i8 v8825 = *(i8*)(intptr_t)v8824;
	i8 v8826 = *(i8*)(intptr_t)v8825;
	i8 v8827 = (i8)(intptr_t)(ws+3328);
	i8 v8828 = *(i8*)(intptr_t)v8827;
	i8 v8829 = (i8)(intptr_t)(f160_MidCall);
	i8 v8830;

	((void(*)(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */))(intptr_t)v8829)(&v8830, v8828, v8826, v8823);
	i8 v8831 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8831)(v8830);

	i8 v8832 = (i8)(intptr_t)(ws+3328);
	i8 v8833 = *(i8*)(intptr_t)v8832;
	i8 v8834 = v8833+(+81);
	i1 v8835 = *(i1*)(intptr_t)v8834;
	i8 v8836 = (i8)(intptr_t)(ws+3336);
	*(i1*)(intptr_t)v8836 = v8835;

	i1 v8837 = (i1)+0;
	i8 v8838 = (i8)(intptr_t)(ws+3337);
	*(i1*)(intptr_t)v8838 = v8837;

	i8 v8839 = (i8)(intptr_t)(ws+3280);
	i8 v8840 = *(i8*)(intptr_t)v8839;
	i8 v8841 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v8841 = v8840;

c02_0698:;

	i8 v8842 = (i8)(intptr_t)(ws+3344);
	i8 v8843 = *(i8*)(intptr_t)v8842;
	i8 v8844 = (i8)+0;
	if (v8843==v8844) goto c02_069b; else goto c02_069a;

c02_069a:;

	i8 v8845 = (i8)(intptr_t)(ws+3336);
	i1 v8846 = *(i1*)(intptr_t)v8845;
	i1 v8847 = (i1)+0;
	if (v8846==v8847) goto c02_069f; else goto c02_06a0;

c02_069f:;

	i8 v8848 = (i8)(intptr_t)c02_s0183;
	i8 v8849 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8849)(v8848);

c02_06a0:;

c02_069c:;

	i8 v8850 = (i8)(intptr_t)(ws+3336);
	i1 v8851 = *(i1*)(intptr_t)v8850;
	i1 v8852 = v8851+(-1);
	i8 v8853 = (i8)(intptr_t)(ws+3336);
	*(i1*)(intptr_t)v8853 = v8852;

	i8 v8854 = (i8)(intptr_t)(ws+3328);
	i8 v8855 = *(i8*)(intptr_t)v8854;
	i8 v8856 = (i8)(intptr_t)(ws+3336);
	i1 v8857 = *(i1*)(intptr_t)v8856;
	i8 v8858 = (i8)(intptr_t)(f100_GetOutputParameter);
	i8 v8859;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v8858)(&v8859, v8857, v8855);
	i8 v8860 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v8860 = v8859;

	i8 v8861 = (i8)(intptr_t)(ws+3344);
	i8 v8862 = *(i8*)(intptr_t)v8861;
	i8 v8863 = v8862+(+24);
	i8 v8864 = *(i8*)(intptr_t)v8863;
	i8 v8865 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v8865 = v8864;

	i8 v8866 = (i8)+0;
	i8 v8867 = (i8)(intptr_t)(ws+3344);
	i8 v8868 = *(i8*)(intptr_t)v8867;
	i8 v8869 = v8868+(+24);
	*(i8*)(intptr_t)v8869 = v8866;

	i8 v8870 = (i8)(intptr_t)(ws+3344);
	i8 v8871 = *(i8*)(intptr_t)v8870;
	i8 v8872 = v8871+(+32);
	i8 v8873 = *(i8*)(intptr_t)v8872;
	i8 v8874 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v8874 = v8873;

	i8 v8875 = (i8)(intptr_t)(ws+3360);
	i8 v8876 = *(i8*)(intptr_t)v8875;
	i8 v8877 = v8876+(+16);
	i8 v8878 = *(i8*)(intptr_t)v8877;
	i8 v8879 = (i8)(intptr_t)(f68_IsPtr);
	i1 v8880;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8879)(&v8880, v8878);
	i1 v8881 = (i1)+0;
	if (v8880==v8881) goto c02_06a4; else goto c02_06a5;

c02_06a4:;

	i8 v8882 = (i8)(intptr_t)c02_s0184;
	i8 v8883 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8883)(v8882);

c02_06a5:;

c02_06a1:;

	i8 v8884 = (i8)(intptr_t)(ws+3360);
	i8 v8885 = *(i8*)(intptr_t)v8884;
	i8 v8886 = (i8)(intptr_t)(ws+3352);
	i8 v8887 = *(i8*)(intptr_t)v8886;
	i8 v8888 = *(i8*)(intptr_t)v8887;
	i8 v8889 = *(i8*)(intptr_t)v8888;
	i8 v8890 = (i8)(intptr_t)(f260_MakePointerType);
	i8 v8891;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v8890)(&v8891, v8889);
	i8 v8892 = (i8)(intptr_t)(f268_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v8892)(v8891, v8885);

	i8 v8893 = (i8)(intptr_t)(ws+3352);
	i8 v8894 = *(i8*)(intptr_t)v8893;
	i8 v8895 = *(i8*)(intptr_t)v8894;
	i8 v8896 = *(i8*)(intptr_t)v8895;
	i8 v8897 = (i8)(intptr_t)(f223_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v8897)(v8896);

	i8 v8898 = (i8)(intptr_t)(ws+3360);
	i8 v8899 = *(i8*)(intptr_t)v8898;
	i8 v8900 = v8899+(+16);
	i8 v8901 = *(i8*)(intptr_t)v8900;
	i8 v8902 = (i8)(intptr_t)(f223_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v8902)(v8901);

	i8 v8903 = (i8)(intptr_t)(ws+3352);
	i8 v8904 = *(i8*)(intptr_t)v8903;
	i8 v8905 = *(i8*)(intptr_t)v8904;
	i8 v8906 = *(i8*)(intptr_t)v8905;
	i8 v8907 = v8906+(+48);
	i2 v8908 = *(i2*)(intptr_t)v8907;
	i1 v8909 = v8908;
	i8 v8910 = (i8)(intptr_t)(ws+3368);
	*(i1*)(intptr_t)v8910 = v8909;

	i8 v8911 = (i8)(intptr_t)(ws+3368);
	i1 v8912 = *(i1*)(intptr_t)v8911;
	i8 v8913 = (i8)(intptr_t)(ws+3368);
	i1 v8914 = *(i1*)(intptr_t)v8913;
	i8 v8915 = (i8)(intptr_t)(ws+3328);
	i8 v8916 = *(i8*)(intptr_t)v8915;
	i8 v8917 = (i8)(intptr_t)(ws+3337);
	i1 v8918 = *(i1*)(intptr_t)v8917;
	i8 v8919 = (i8)(intptr_t)(f149_MidPoparg);
	i8 v8920;

	((void(*)(i8* /* m */, i1 /* remaining */, i8 /* subr */, i1 /* width */))(intptr_t)v8919)(&v8920, v8918, v8916, v8914);
	i8 v8921 = (i8)(intptr_t)(ws+3368);
	i1 v8922 = *(i1*)(intptr_t)v8921;
	i8 v8923 = (i8)(intptr_t)(ws+3360);
	i8 v8924 = *(i8*)(intptr_t)v8923;
	i8 v8925 = (i8)(intptr_t)(f138_MidDeref);
	i8 v8926;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v8925)(&v8926, v8924, v8922);
	i8 v8927 = (i8)(intptr_t)(f121_MidStore);
	i8 v8928;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v8927)(&v8928, v8926, v8920, v8912);
	i8 v8929 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8929)(v8928);

	i8 v8930 = (i8)(intptr_t)(ws+3337);
	i1 v8931 = *(i1*)(intptr_t)v8930;
	i1 v8932 = v8931+(+1);
	i8 v8933 = (i8)(intptr_t)(ws+3337);
	*(i1*)(intptr_t)v8933 = v8932;

	i8 v8934 = (i8)(intptr_t)(ws+3352);
	i8 v8935 = *(i8*)(intptr_t)v8934;
	i8 v8936 = *(i8*)(intptr_t)v8935;
	i8 v8937 = v8936+(+16);
	i8 v8938 = *(i8*)(intptr_t)v8937;
	i8 v8939 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v8939 = v8938;

	goto c02_0698;

c02_069b:;

	i8 v8940 = (i8)(intptr_t)(ws+3280);
	i8 v8941 = *(i8*)(intptr_t)v8940;
	i8 v8942 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v8942)(v8941);

	i8 v8943 = (i8)(intptr_t)(ws+3337);
	i1 v8944 = *(i1*)(intptr_t)v8943;
	i8 v8945 = (i8)(intptr_t)(ws+3328);
	i8 v8946 = *(i8*)(intptr_t)v8945;
	i8 v8947 = v8946+(+81);
	i1 v8948 = *(i1*)(intptr_t)v8947;
	if (v8944==v8948) goto c02_06aa; else goto c02_06a9;

c02_06a9:;

	i8 v8949 = (i8)(intptr_t)c02_s0185;
	i8 v8950 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8950)(v8949);

c02_06aa:;

c02_06a6:;

	i8 v8951 = (i8)(intptr_t)(f291_i_end_call);

	((void(*)(void))(intptr_t)v8951)();

	i1 v8952 = (i1)+2;
	i8 v8953 = (i8)(intptr_t)(ws+3272);
	i8 v8954 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8954)(v8953, v8952);

	i1 v8955 = (i1)+22;
	i8 v8956 = (i8)(intptr_t)(ws+3248);
	i8 v8957 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8957)(v8956, v8955);

endsub:;
}
	void f228_IsSubroutine(i1* /* result */, i8 /* type */);
	void f74_StartError(void);
const i1 c02_s0186[] = { 0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s0187[] = { 0x20,0x74,0x6f,0x20,0x62,0x65,0x20,0x61,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f99_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f100_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);

// reduce_75 workspace at ws+3328 length ws+16
void f384_reduce_75(void) {

	i8 v8958 = (i8)(intptr_t)(ws+3248);
	i8 v8959 = *(i8*)(intptr_t)v8958;
	i8 v8960 = v8959+(+16);
	i8 v8961 = *(i8*)(intptr_t)v8960;
	i8 v8962 = (i8)(intptr_t)(f228_IsSubroutine);
	i1 v8963;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8962)(&v8963, v8961);
	i1 v8964 = (i1)+0;
	if (v8963==v8964) goto c02_06ae; else goto c02_06af;

c02_06ae:;

	i8 v8965 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v8965)();

	i8 v8966 = (i8)(intptr_t)c02_s0186;
	i8 v8967 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8967)(v8966);

	i8 v8968 = (i8)(intptr_t)(ws+3248);
	i8 v8969 = *(i8*)(intptr_t)v8968;
	i8 v8970 = v8969+(+16);
	i8 v8971 = *(i8*)(intptr_t)v8970;
	i8 v8972 = v8971+(+32);
	i8 v8973 = *(i8*)(intptr_t)v8972;
	i8 v8974 = v8973+(+8);
	i8 v8975 = *(i8*)(intptr_t)v8974;
	i8 v8976 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8976)(v8975);

	i8 v8977 = (i8)(intptr_t)c02_s0187;
	i8 v8978 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8978)(v8977);

	i8 v8979 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v8979)();

c02_06af:;

c02_06ab:;

	i8 v8980 = (i8)+42;
	i8 v8981 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v8982;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v8981)(&v8982, v8980);
	i8 v8983 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8983 = v8982;

	i8 v8984 = (i8)(intptr_t)(ws+80);
	i8 v8985 = *(i8*)(intptr_t)v8984;
	i8 v8986 = (i8)(intptr_t)(ws+3328);
	i8 v8987 = *(i8*)(intptr_t)v8986;
	i8 v8988 = v8987+(+16);
	*(i8*)(intptr_t)v8988 = v8985;

	i8 v8989 = (i8)(intptr_t)(ws+3248);
	i8 v8990 = *(i8*)(intptr_t)v8989;
	i8 v8991 = v8990+(+16);
	i8 v8992 = *(i8*)(intptr_t)v8991;
	i8 v8993 = *(i8*)(intptr_t)v8992;
	i8 v8994 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8994 = v8993;

	i8 v8995 = (i8)(intptr_t)(ws+3248);
	i8 v8996 = *(i8*)(intptr_t)v8995;
	i8 v8997 = (i8)(intptr_t)(ws+3328);
	i8 v8998 = *(i8*)(intptr_t)v8997;
	*(i8*)(intptr_t)v8998 = v8996;

	i8 v8999 = (i8)(intptr_t)(ws+3336);
	i8 v9000 = *(i8*)(intptr_t)v8999;
	i8 v9001 = (i8)(intptr_t)(ws+3328);
	i8 v9002 = *(i8*)(intptr_t)v9001;
	i8 v9003 = v9002+(+8);
	*(i8*)(intptr_t)v9003 = v9000;

	i8 v9004 = (i8)(intptr_t)(ws+3336);
	i8 v9005 = *(i8*)(intptr_t)v9004;
	i1 v9006 = (i1)+0;
	i8 v9007 = (i8)(intptr_t)(f99_GetInputParameter);
	i8 v9008;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v9007)(&v9008, v9006, v9005);
	i8 v9009 = (i8)(intptr_t)(ws+3328);
	i8 v9010 = *(i8*)(intptr_t)v9009;
	i8 v9011 = v9010+(+24);
	*(i8*)(intptr_t)v9011 = v9008;

	i8 v9012 = (i8)(intptr_t)(ws+3336);
	i8 v9013 = *(i8*)(intptr_t)v9012;
	i1 v9014 = (i1)+0;
	i8 v9015 = (i8)(intptr_t)(f100_GetOutputParameter);
	i8 v9016;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v9015)(&v9016, v9014, v9013);
	i8 v9017 = (i8)(intptr_t)(ws+3328);
	i8 v9018 = *(i8*)(intptr_t)v9017;
	i8 v9019 = v9018+(+32);
	*(i8*)(intptr_t)v9019 = v9016;

	i8 v9020 = (i8)(intptr_t)(ws+3328);
	i8 v9021 = *(i8*)(intptr_t)v9020;
	i8 v9022 = (i8)(intptr_t)(ws+80);
	*(i8*)(intptr_t)v9022 = v9021;

endsub:;
}
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_76 workspace at ws+3328 length ws+0
void f385_reduce_76(void) {

	i8 v9023 = (i8)(intptr_t)(ws+3256);
	i8 v9024 = *(i8*)(intptr_t)v9023;
	i8 v9025 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9025 = v9024;

	i1 v9026 = (i1)+4;
	i8 v9027 = (i8)(intptr_t)(ws+3248);
	i8 v9028 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9028)(v9027, v9026);

endsub:;
}
	void f162_MidEnd(i8* /* m */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_77 workspace at ws+3328 length ws+0
void f386_reduce_77(void) {

	i8 v9029 = (i8)(intptr_t)(f162_MidEnd);
	i8 v9030;

	((void(*)(i8* /* m */))(intptr_t)v9029)(&v9030);
	i8 v9031 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9031 = v9030;

	i1 v9032 = (i1)+4;
	i8 v9033 = (i8)(intptr_t)(ws+3248);
	i8 v9034 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9034)(v9033, v9032);

endsub:;
}

// reduce_78 workspace at ws+3328 length ws+0
void f387_reduce_78(void) {

	i8 v9035 = (i8)(intptr_t)(ws+3248);
	i8 v9036 = *(i8*)(intptr_t)v9035;
	i8 v9037 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9037 = v9036;

endsub:;
}
	void f63_Discard(i8 /* node */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_79 workspace at ws+3328 length ws+0
void f388_reduce_79(void) {

	i8 v9038 = (i8)(intptr_t)(ws+3248);
	i8 v9039 = *(i8*)(intptr_t)v9038;
	i8 v9040 = v9039+(+24);
	i8 v9041 = *(i8*)(intptr_t)v9040;
	i8 v9042 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v9042)(v9041);

	i8 v9043 = (i8)(intptr_t)(ws+3264);
	i8 v9044 = *(i8*)(intptr_t)v9043;
	i8 v9045 = (i8)(intptr_t)(ws+3248);
	i8 v9046 = *(i8*)(intptr_t)v9045;
	i8 v9047 = v9046+(+24);
	*(i8*)(intptr_t)v9047 = v9044;

	i8 v9048 = (i8)(intptr_t)(ws+3248);
	i8 v9049 = *(i8*)(intptr_t)v9048;
	i8 v9050 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9050 = v9049;

	i1 v9051 = (i1)+45;
	i8 v9052 = (i8)(intptr_t)(ws+3256);
	i8 v9053 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9053)(v9052, v9051);

endsub:;
}
	void f74_StartError(void);
const i1 c02_s0188[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0x73,0x20,0x69,0x6e,0x20,0x63,0x61,0x6c,0x6c,0x20,0x74,0x6f,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);
	void f268_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f223_CheckNotPartialType(i8 /* type */);
	void f223_CheckNotPartialType(i8 /* type */);
	void f167_NodeWidth(i1* /* width */, i8 /* node */);
	void f162_MidEnd(i8* /* m */);
	void f158_MidArg(i8* /* m */, i1 /* remaining */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */);

// reduce_80 workspace at ws+3328 length ws+8
void f389_reduce_80(void) {

	i8 v9054 = (i8)(intptr_t)(ws+80);
	i8 v9055 = *(i8*)(intptr_t)v9054;
	i8 v9056 = v9055+(+24);
	i8 v9057 = *(i8*)(intptr_t)v9056;
	i8 v9058 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v9058 = v9057;

	i8 v9059 = (i8)(intptr_t)(ws+3328);
	i8 v9060 = *(i8*)(intptr_t)v9059;
	i8 v9061 = (i8)+0;
	if (v9060==v9061) goto c02_06b3; else goto c02_06b4;

c02_06b3:;

	i8 v9062 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v9062)();

	i8 v9063 = (i8)(intptr_t)c02_s0188;
	i8 v9064 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9064)(v9063);

	i8 v9065 = (i8)(intptr_t)(ws+80);
	i8 v9066 = *(i8*)(intptr_t)v9065;
	i8 v9067 = v9066+(+8);
	i8 v9068 = *(i8*)(intptr_t)v9067;
	i8 v9069 = *(i8*)(intptr_t)v9068;
	i8 v9070 = v9069+(+8);
	i8 v9071 = *(i8*)(intptr_t)v9070;
	i8 v9072 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9072)(v9071);

	i8 v9073 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v9073)();

c02_06b4:;

c02_06b0:;

	i8 v9074 = (i8)(intptr_t)(ws+80);
	i8 v9075 = *(i8*)(intptr_t)v9074;
	i8 v9076 = v9075+(+24);
	i8 v9077 = *(i8*)(intptr_t)v9076;
	i8 v9078 = *(i8*)(intptr_t)v9077;
	i8 v9079 = v9078+(+16);
	i8 v9080 = *(i8*)(intptr_t)v9079;
	i8 v9081 = (i8)(intptr_t)(ws+80);
	i8 v9082 = *(i8*)(intptr_t)v9081;
	i8 v9083 = v9082+(+24);
	*(i8*)(intptr_t)v9083 = v9080;

	i8 v9084 = (i8)(intptr_t)(ws+3248);
	i8 v9085 = *(i8*)(intptr_t)v9084;
	i8 v9086 = (i8)(intptr_t)(ws+3328);
	i8 v9087 = *(i8*)(intptr_t)v9086;
	i8 v9088 = *(i8*)(intptr_t)v9087;
	i8 v9089 = *(i8*)(intptr_t)v9088;
	i8 v9090 = (i8)(intptr_t)(f268_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v9090)(v9089, v9085);

	i8 v9091 = (i8)(intptr_t)(ws+3328);
	i8 v9092 = *(i8*)(intptr_t)v9091;
	i8 v9093 = *(i8*)(intptr_t)v9092;
	i8 v9094 = *(i8*)(intptr_t)v9093;
	i8 v9095 = (i8)(intptr_t)(f223_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v9095)(v9094);

	i8 v9096 = (i8)(intptr_t)(ws+3248);
	i8 v9097 = *(i8*)(intptr_t)v9096;
	i8 v9098 = v9097+(+16);
	i8 v9099 = *(i8*)(intptr_t)v9098;
	i8 v9100 = (i8)(intptr_t)(f223_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v9100)(v9099);

	i8 v9101 = (i8)(intptr_t)(ws+80);
	i8 v9102 = *(i8*)(intptr_t)v9101;
	i8 v9103 = v9102+(+40);
	i1 v9104 = *(i1*)(intptr_t)v9103;
	i1 v9105 = v9104+(+1);
	i8 v9106 = (i8)(intptr_t)(ws+80);
	i8 v9107 = *(i8*)(intptr_t)v9106;
	i8 v9108 = v9107+(+40);
	*(i1*)(intptr_t)v9108 = v9105;

	i8 v9109 = (i8)(intptr_t)(ws+3248);
	i8 v9110 = *(i8*)(intptr_t)v9109;
	i8 v9111 = (i8)(intptr_t)(f167_NodeWidth);
	i1 v9112;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v9111)(&v9112, v9110);
	i8 v9113 = (i8)(intptr_t)(f162_MidEnd);
	i8 v9114;

	((void(*)(i8* /* m */))(intptr_t)v9113)(&v9114);
	i8 v9115 = (i8)(intptr_t)(ws+3248);
	i8 v9116 = *(i8*)(intptr_t)v9115;
	i8 v9117 = (i8)(intptr_t)(ws+80);
	i8 v9118 = *(i8*)(intptr_t)v9117;
	i8 v9119 = v9118+(+8);
	i8 v9120 = *(i8*)(intptr_t)v9119;
	i8 v9121 = (i8)(intptr_t)(ws+80);
	i8 v9122 = *(i8*)(intptr_t)v9121;
	i8 v9123 = v9122+(+8);
	i8 v9124 = *(i8*)(intptr_t)v9123;
	i8 v9125 = v9124+(+80);
	i1 v9126 = *(i1*)(intptr_t)v9125;
	i8 v9127 = (i8)(intptr_t)(ws+80);
	i8 v9128 = *(i8*)(intptr_t)v9127;
	i8 v9129 = v9128+(+40);
	i1 v9130 = *(i1*)(intptr_t)v9129;
	i1 v9131 = v9126-v9130;
	i8 v9132 = (i8)(intptr_t)(f158_MidArg);
	i8 v9133;

	((void(*)(i8* /* m */, i1 /* remaining */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v9132)(&v9133, v9131, v9120, v9116, v9114, v9112);
	i8 v9134 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9134 = v9133;

endsub:;
}
	void f135_MidPair(i8* /* m */, i8 /* right */, i8 /* left */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_81 workspace at ws+3328 length ws+0
void f390_reduce_81(void) {

	i8 v9135 = (i8)(intptr_t)(ws+3256);
	i8 v9136 = *(i8*)(intptr_t)v9135;
	i8 v9137 = (i8)(intptr_t)(ws+3272);
	i8 v9138 = *(i8*)(intptr_t)v9137;
	i8 v9139 = (i8)(intptr_t)(f135_MidPair);
	i8 v9140;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */))(intptr_t)v9139)(&v9140, v9138, v9136);
	i8 v9141 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9141 = v9140;

	i1 v9142 = (i1)+45;
	i8 v9143 = (i8)(intptr_t)(ws+3264);
	i8 v9144 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9144)(v9143, v9142);

	i1 v9145 = (i1)+4;
	i8 v9146 = (i8)(intptr_t)(ws+3248);
	i8 v9147 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9147)(v9146, v9145);

endsub:;
}
	void f135_MidPair(i8* /* m */, i8 /* right */, i8 /* left */);

// reduce_82 workspace at ws+3328 length ws+0
void f391_reduce_82(void) {

	i8 v9148 = (i8)(intptr_t)(ws+3248);
	i8 v9149 = *(i8*)(intptr_t)v9148;
	i8 v9150 = (i8)+0;
	i8 v9151 = (i8)(intptr_t)(f135_MidPair);
	i8 v9152;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */))(intptr_t)v9151)(&v9152, v9150, v9149);
	i8 v9153 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9153 = v9152;

endsub:;
}
	void f135_MidPair(i8* /* m */, i8 /* right */, i8 /* left */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_83 workspace at ws+3328 length ws+0
void f392_reduce_83(void) {

	i8 v9154 = (i8)(intptr_t)(ws+3248);
	i8 v9155 = *(i8*)(intptr_t)v9154;
	i8 v9156 = (i8)(intptr_t)(ws+3264);
	i8 v9157 = *(i8*)(intptr_t)v9156;
	i8 v9158 = (i8)(intptr_t)(f135_MidPair);
	i8 v9159;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */))(intptr_t)v9158)(&v9159, v9157, v9155);
	i8 v9160 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9160 = v9159;

	i1 v9161 = (i1)+45;
	i8 v9162 = (i8)(intptr_t)(ws+3256);
	i8 v9163 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9163)(v9162, v9161);

endsub:;
}
	void f234_UndoLValue(i8* /* address */, i8 /* lvalue */);

// reduce_84 workspace at ws+3328 length ws+0
void f393_reduce_84(void) {

	i8 v9164 = (i8)(intptr_t)(ws+3248);
	i8 v9165 = *(i8*)(intptr_t)v9164;
	i8 v9166 = (i8)(intptr_t)(f234_UndoLValue);
	i8 v9167;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v9166)(&v9167, v9165);
	i8 v9168 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9168 = v9167;

endsub:;
}
	void f207_EmitterEmitSubroutineFlags(i8 /* subr */);
	void f148_MidStartsub(i8* /* m */, i8 /* subr */);
	void f256_Generate(i8 /* statement */);
	void f159_MidEndsub(i8* /* m */, i8 /* subr */);
	void f256_Generate(i8 /* statement */);
	void f266_ReportWorkspaces(i8 /* subr */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_85 workspace at ws+3328 length ws+0
void f394_reduce_85(void) {

	i8 v9169 = (i8)(intptr_t)(ws+1544);
	i8 v9170 = *(i8*)(intptr_t)v9169;
	i8 v9171 = v9170+(+82);
	i1 v9172 = *(i1*)(intptr_t)v9171;
	i1 v9173 = v9172|(+2);
	i8 v9174 = (i8)(intptr_t)(ws+1544);
	i8 v9175 = *(i8*)(intptr_t)v9174;
	i8 v9176 = v9175+(+82);
	*(i1*)(intptr_t)v9176 = v9173;

	i8 v9177 = (i8)(intptr_t)(ws+1544);
	i8 v9178 = *(i8*)(intptr_t)v9177;
	i8 v9179 = (i8)(intptr_t)(f207_EmitterEmitSubroutineFlags);

	((void(*)(i8 /* subr */))(intptr_t)v9179)(v9178);

	i8 v9180 = (i8)(intptr_t)(ws+1544);
	i8 v9181 = *(i8*)(intptr_t)v9180;
	i8 v9182 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v9182 = v9181;

	i8 v9183 = (i8)(intptr_t)(ws+40);
	i8 v9184 = *(i8*)(intptr_t)v9183;
	i8 v9185 = (i8)(intptr_t)(f148_MidStartsub);
	i8 v9186;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v9185)(&v9186, v9184);
	i8 v9187 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9187)(v9186);

	i8 v9188 = (i8)(intptr_t)(ws+40);
	i8 v9189 = *(i8*)(intptr_t)v9188;
	i8 v9190 = (i8)(intptr_t)(f159_MidEndsub);
	i8 v9191;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v9190)(&v9191, v9189);
	i8 v9192 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9192)(v9191);

	i8 v9193 = (i8)(intptr_t)(ws+40);
	i8 v9194 = *(i8*)(intptr_t)v9193;
	i8 v9195 = (i8)(intptr_t)(f266_ReportWorkspaces);

	((void(*)(i8 /* subr */))(intptr_t)v9195)(v9194);

	i8 v9196 = (i8)(intptr_t)(ws+40);
	i8 v9197 = *(i8*)(intptr_t)v9196;
	i8 v9198 = v9197+(+8);
	i8 v9199 = *(i8*)(intptr_t)v9198;
	i8 v9200 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v9200 = v9199;

	i1 v9201 = (i1)+22;
	i8 v9202 = (i8)(intptr_t)(ws+3248);
	i8 v9203 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9203)(v9202, v9201);

endsub:;
}
const i1 c02_s0189[] = { 0x74,0x79,0x70,0x65,0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x6e,0x20,0x69,0x6e,0x74,0x65,0x72,0x66,0x61,0x63,0x65,0 };
	void f76_SimpleError(i8 /* message */);

// not_an_interface workspace at ws+3336 length ws+0
void f396_not_an_interface(void) {

	i8 v9204 = (i8)(intptr_t)c02_s0189;
	i8 v9205 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9205)(v9204);

endsub:;
}
	void f228_IsSubroutine(i1* /* result */, i8 /* type */);
	void f396_not_an_interface(void);
	void f396_not_an_interface(void);
	void f202_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	void f202_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	void f264_CopyParameterList(i8 /* subr */, i8 /* param */);
	void f100_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f264_CopyParameterList(i8 /* subr */, i8 /* param */);
	void f205_EmitterEmitInputParameters(i8 /* subr */);
	void f206_EmitterEmitOutputParameters(i8 /* subr */);
	void f207_EmitterEmitSubroutineFlags(i8 /* subr */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_86 workspace at ws+3328 length ws+8
void f395_reduce_86(void) {


	i8 v9206 = (i8)(intptr_t)(ws+3248);
	i8 v9207 = *(i8*)(intptr_t)v9206;
	i8 v9208 = (i8)(intptr_t)(f228_IsSubroutine);
	i1 v9209;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9208)(&v9209, v9207);
	i1 v9210 = (i1)+0;
	if (v9209==v9210) goto c02_06b8; else goto c02_06b9;

c02_06b8:;

	i8 v9211 = (i8)(intptr_t)(f396_not_an_interface);

	((void(*)(void))(intptr_t)v9211)();

c02_06b9:;

c02_06b5:;

	i8 v9212 = (i8)(intptr_t)(ws+3248);
	i8 v9213 = *(i8*)(intptr_t)v9212;
	i8 v9214 = *(i8*)(intptr_t)v9213;
	i8 v9215 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v9215 = v9214;

	i8 v9216 = (i8)(intptr_t)(ws+3328);
	i8 v9217 = *(i8*)(intptr_t)v9216;
	i8 v9218 = v9217+(+82);
	i1 v9219 = *(i1*)(intptr_t)v9218;
	i1 v9220 = v9219&(+2);
	i1 v9221 = (i1)+0;
	if (v9220==v9221) goto c02_06bd; else goto c02_06be;

c02_06bd:;

	i8 v9222 = (i8)(intptr_t)(f396_not_an_interface);

	((void(*)(void))(intptr_t)v9222)();

c02_06be:;

c02_06ba:;

	i8 v9223 = (i8)(intptr_t)(ws+1544);
	i8 v9224 = *(i8*)(intptr_t)v9223;
	i8 v9225 = v9224+(+82);
	i1 v9226 = *(i1*)(intptr_t)v9225;
	i1 v9227 = v9226|(+4);
	i8 v9228 = (i8)(intptr_t)(ws+1544);
	i8 v9229 = *(i8*)(intptr_t)v9228;
	i8 v9230 = v9229+(+82);
	*(i1*)(intptr_t)v9230 = v9227;

	i8 v9231 = (i8)(intptr_t)(ws+3328);
	i8 v9232 = *(i8*)(intptr_t)v9231;
	i8 v9233 = (i8)(intptr_t)(ws+1544);
	i8 v9234 = *(i8*)(intptr_t)v9233;
	i8 v9235 = v9234+(+48);
	*(i8*)(intptr_t)v9235 = v9232;

	i8 v9236 = (i8)(intptr_t)(ws+3248);
	i8 v9237 = *(i8*)(intptr_t)v9236;
	i8 v9238 = (i8)(intptr_t)(ws+1544);
	i8 v9239 = *(i8*)(intptr_t)v9238;
	i8 v9240 = v9239+(+40);
	*(i8*)(intptr_t)v9240 = v9237;

	i8 v9241 = (i8)(intptr_t)(ws+40);
	i8 v9242 = *(i8*)(intptr_t)v9241;
	i8 v9243 = (i8)(intptr_t)(ws+3328);
	i8 v9244 = *(i8*)(intptr_t)v9243;
	i8 v9245 = (i8)(intptr_t)(f202_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v9245)(v9244, v9242);

	i8 v9246 = (i8)(intptr_t)(ws+3328);
	i8 v9247 = *(i8*)(intptr_t)v9246;
	i8 v9248 = (i8)(intptr_t)(ws+1544);
	i8 v9249 = *(i8*)(intptr_t)v9248;
	i8 v9250 = (i8)(intptr_t)(f202_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v9250)(v9249, v9247);

	i8 v9251 = (i8)(intptr_t)(ws+3328);
	i8 v9252 = *(i8*)(intptr_t)v9251;
	i8 v9253 = v9252+(+80);
	i1 v9254 = *(i1*)(intptr_t)v9253;
	i8 v9255 = (i8)(intptr_t)(ws+1544);
	i8 v9256 = *(i8*)(intptr_t)v9255;
	i8 v9257 = v9256+(+80);
	*(i1*)(intptr_t)v9257 = v9254;

	i8 v9258 = (i8)(intptr_t)(ws+1544);
	i8 v9259 = *(i8*)(intptr_t)v9258;
	i8 v9260 = v9259+(+80);
	i1 v9261 = *(i1*)(intptr_t)v9260;
	i1 v9262 = (i1)+0;
	if (v9261==v9262) goto c02_06c3; else goto c02_06c2;

c02_06c2:;

	i8 v9263 = (i8)(intptr_t)(ws+3328);
	i8 v9264 = *(i8*)(intptr_t)v9263;
	i8 v9265 = v9264+(+16);
	i8 v9266 = *(i8*)(intptr_t)v9265;
	i8 v9267 = (i8)(intptr_t)(ws+1544);
	i8 v9268 = *(i8*)(intptr_t)v9267;
	i8 v9269 = (i8)(intptr_t)(f264_CopyParameterList);

	((void(*)(i8 /* subr */, i8 /* param */))(intptr_t)v9269)(v9268, v9266);

c02_06c3:;

c02_06bf:;

	i8 v9270 = (i8)(intptr_t)(ws+3328);
	i8 v9271 = *(i8*)(intptr_t)v9270;
	i8 v9272 = v9271+(+81);
	i1 v9273 = *(i1*)(intptr_t)v9272;
	i8 v9274 = (i8)(intptr_t)(ws+1544);
	i8 v9275 = *(i8*)(intptr_t)v9274;
	i8 v9276 = v9275+(+81);
	*(i1*)(intptr_t)v9276 = v9273;

	i8 v9277 = (i8)(intptr_t)(ws+1544);
	i8 v9278 = *(i8*)(intptr_t)v9277;
	i8 v9279 = v9278+(+81);
	i1 v9280 = *(i1*)(intptr_t)v9279;
	i1 v9281 = (i1)+0;
	if (v9280==v9281) goto c02_06c8; else goto c02_06c7;

c02_06c7:;

	i8 v9282 = (i8)(intptr_t)(ws+3328);
	i8 v9283 = *(i8*)(intptr_t)v9282;
	i1 v9284 = (i1)+0;
	i8 v9285 = (i8)(intptr_t)(f100_GetOutputParameter);
	i8 v9286;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v9285)(&v9286, v9284, v9283);
	i8 v9287 = (i8)(intptr_t)(ws+1544);
	i8 v9288 = *(i8*)(intptr_t)v9287;
	i8 v9289 = (i8)(intptr_t)(f264_CopyParameterList);

	((void(*)(i8 /* subr */, i8 /* param */))(intptr_t)v9289)(v9288, v9286);

c02_06c8:;

c02_06c4:;

	i8 v9290 = (i8)(intptr_t)(ws+1544);
	i8 v9291 = *(i8*)(intptr_t)v9290;
	i8 v9292 = (i8)(intptr_t)(f205_EmitterEmitInputParameters);

	((void(*)(i8 /* subr */))(intptr_t)v9292)(v9291);

	i8 v9293 = (i8)(intptr_t)(ws+1544);
	i8 v9294 = *(i8*)(intptr_t)v9293;
	i8 v9295 = (i8)(intptr_t)(f206_EmitterEmitOutputParameters);

	((void(*)(i8 /* subr */))(intptr_t)v9295)(v9294);

	i8 v9296 = (i8)(intptr_t)(ws+1544);
	i8 v9297 = *(i8*)(intptr_t)v9296;
	i8 v9298 = (i8)(intptr_t)(f207_EmitterEmitSubroutineFlags);

	((void(*)(i8 /* subr */))(intptr_t)v9298)(v9297);

	i1 v9299 = (i1)+68;
	i8 v9300 = (i8)(intptr_t)(ws+3256);
	i8 v9301 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9301)(v9300, v9299);

endsub:;
}
	void f200_EmitterDeclareExternalSubroutine(i8 /* external */, i2 /* id */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_87 workspace at ws+3328 length ws+0
void f397_reduce_87(void) {

	i8 v9302 = (i8)(intptr_t)(ws+1544);
	i8 v9303 = *(i8*)(intptr_t)v9302;
	i8 v9304 = v9303+(+56);
	i2 v9305 = *(i2*)(intptr_t)v9304;
	i8 v9306 = (i8)(intptr_t)(ws+3256);
	i8 v9307 = *(i8*)(intptr_t)v9306;
	i8 v9308 = (i8)(intptr_t)(f200_EmitterDeclareExternalSubroutine);

	((void(*)(i8 /* external */, i2 /* id */))(intptr_t)v9308)(v9307, v9305);

	i1 v9309 = (i1)+11;
	i8 v9310 = (i8)(intptr_t)(ws+3272);
	i8 v9311 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9311)(v9310, v9309);

	i1 v9312 = (i1)+16;
	i8 v9313 = (i8)(intptr_t)(ws+3264);
	i8 v9314 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9314)(v9313, v9312);

	i1 v9315 = (i1)+4;
	i8 v9316 = (i8)(intptr_t)(ws+3248);
	i8 v9317 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9317)(v9316, v9315);

endsub:;
}
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f236_AllocSubrId(i2* /* id */);
	void f66_AllocNewType(i8* /* type */);
	void f199_EmitterDeclareSubroutine(i8 /* subr */);

// reduce_88 workspace at ws+3328 length ws+8
void f398_reduce_88(void) {

	i8 v9318 = (i8)+83;
	i8 v9319 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v9320;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v9319)(&v9320, v9318);
	i8 v9321 = (i8)(intptr_t)(ws+1544);
	*(i8*)(intptr_t)v9321 = v9320;

	i8 v9322 = (i8)(intptr_t)(ws+40);
	i8 v9323 = *(i8*)(intptr_t)v9322;
	i8 v9324 = v9323+(+16);
	i8 v9325 = (i8)(intptr_t)(ws+1544);
	i8 v9326 = *(i8*)(intptr_t)v9325;
	i8 v9327 = v9326+(+32);
	*(i8*)(intptr_t)v9327 = v9324;

	i8 v9328 = (i8)(intptr_t)(ws+40);
	i8 v9329 = *(i8*)(intptr_t)v9328;
	i8 v9330 = (i8)(intptr_t)(ws+1544);
	i8 v9331 = *(i8*)(intptr_t)v9330;
	i8 v9332 = v9331+(+8);
	*(i8*)(intptr_t)v9332 = v9329;

	i8 v9333 = (i8)(intptr_t)(f236_AllocSubrId);
	i2 v9334;

	((void(*)(i2* /* id */))(intptr_t)v9333)(&v9334);
	i8 v9335 = (i8)(intptr_t)(ws+1544);
	i8 v9336 = *(i8*)(intptr_t)v9335;
	i8 v9337 = v9336+(+56);
	*(i2*)(intptr_t)v9337 = v9334;

	i8 v9338 = (i8)(intptr_t)(f66_AllocNewType);
	i8 v9339;

	((void(*)(i8* /* type */))(intptr_t)v9338)(&v9339);
	i8 v9340 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v9340 = v9339;

	i1 v9341 = (i1)+6;
	i8 v9342 = (i8)(intptr_t)(ws+3328);
	i8 v9343 = *(i8*)(intptr_t)v9342;
	i8 v9344 = v9343+(+52);
	*(i1*)(intptr_t)v9344 = v9341;

	i8 v9345 = (i8)(intptr_t)(ws+1528);
	i8 v9346 = *(i8*)(intptr_t)v9345;
	i8 v9347 = v9346+(+48);
	i2 v9348 = *(i2*)(intptr_t)v9347;
	i8 v9349 = (i8)(intptr_t)(ws+3328);
	i8 v9350 = *(i8*)(intptr_t)v9349;
	i8 v9351 = v9350+(+48);
	*(i2*)(intptr_t)v9351 = v9348;

	i8 v9352 = (i8)(intptr_t)(ws+1528);
	i8 v9353 = *(i8*)(intptr_t)v9352;
	i8 v9354 = v9353+(+53);
	i1 v9355 = *(i1*)(intptr_t)v9354;
	i8 v9356 = (i8)(intptr_t)(ws+3328);
	i8 v9357 = *(i8*)(intptr_t)v9356;
	i8 v9358 = v9357+(+53);
	*(i1*)(intptr_t)v9358 = v9355;

	i8 v9359 = (i8)(intptr_t)(ws+1528);
	i8 v9360 = *(i8*)(intptr_t)v9359;
	i8 v9361 = v9360+(+50);
	i2 v9362 = *(i2*)(intptr_t)v9361;
	i8 v9363 = (i8)(intptr_t)(ws+3328);
	i8 v9364 = *(i8*)(intptr_t)v9363;
	i8 v9365 = v9364+(+50);
	*(i2*)(intptr_t)v9365 = v9362;

	i8 v9366 = (i8)(intptr_t)(ws+1544);
	i8 v9367 = *(i8*)(intptr_t)v9366;
	i8 v9368 = (i8)(intptr_t)(ws+3328);
	i8 v9369 = *(i8*)(intptr_t)v9368;
	*(i8*)(intptr_t)v9369 = v9367;

	i8 v9370 = (i8)(intptr_t)(ws+3328);
	i8 v9371 = *(i8*)(intptr_t)v9370;
	i8 v9372 = (i8)(intptr_t)(ws+1544);
	i8 v9373 = *(i8*)(intptr_t)v9372;
	i8 v9374 = v9373+(+40);
	*(i8*)(intptr_t)v9374 = v9371;

	i8 v9375 = (i8)(intptr_t)(ws+1544);
	i8 v9376 = *(i8*)(intptr_t)v9375;
	i8 v9377 = (i8)(intptr_t)(ws+1544);
	i8 v9378 = *(i8*)(intptr_t)v9377;
	i8 v9379 = v9378+(+48);
	*(i8*)(intptr_t)v9379 = v9376;

	i1 v9380 = (i1)+30;
	i8 v9381 = (i8)(intptr_t)(ws+3248);
	i8 v9382 = *(i8*)(intptr_t)v9381;
	i8 v9383 = v9382+(+32);
	*(i1*)(intptr_t)v9383 = v9380;

	i8 v9384 = (i8)(intptr_t)(ws+3328);
	i8 v9385 = *(i8*)(intptr_t)v9384;
	i8 v9386 = (i8)(intptr_t)(ws+3248);
	i8 v9387 = *(i8*)(intptr_t)v9386;
	*(i8*)(intptr_t)v9387 = v9385;

	i8 v9388 = (i8)(intptr_t)(ws+3248);
	i8 v9389 = *(i8*)(intptr_t)v9388;
	i8 v9390 = (i8)(intptr_t)(ws+3328);
	i8 v9391 = *(i8*)(intptr_t)v9390;
	i8 v9392 = v9391+(+32);
	*(i8*)(intptr_t)v9392 = v9389;

	i8 v9393 = (i8)(intptr_t)(ws+3248);
	i8 v9394 = *(i8*)(intptr_t)v9393;
	i8 v9395 = (i8)(intptr_t)(ws+1544);
	i8 v9396 = *(i8*)(intptr_t)v9395;
	*(i8*)(intptr_t)v9396 = v9394;

	i8 v9397 = (i8)(intptr_t)(ws+1544);
	i8 v9398 = *(i8*)(intptr_t)v9397;
	i8 v9399 = (i8)(intptr_t)(f199_EmitterDeclareSubroutine);

	((void(*)(i8 /* subr */))(intptr_t)v9399)(v9398);

	i8 v9400 = (i8)(intptr_t)(ws+3248);
	i8 v9401 = *(i8*)(intptr_t)v9400;
	i8 v9402 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9402 = v9401;

endsub:;
}
	void f228_IsSubroutine(i1* /* result */, i8 /* type */);
const i1 c02_s018a[] = { 0x6e,0x6f,0x74,0x20,0x61,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0 };
	void f76_SimpleError(i8 /* message */);
const i1 c02_s018b[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x61,0x6c,0x72,0x65,0x61,0x64,0x79,0x20,0x69,0x6d,0x70,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x65,0x64,0 };
	void f76_SimpleError(i8 /* message */);
const i1 c02_s018c[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x69,0x6d,0x70,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x68,0x65,0x72,0x65,0 };
	void f76_SimpleError(i8 /* message */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_89 workspace at ws+3328 length ws+0
void f399_reduce_89(void) {

	i8 v9403 = (i8)(intptr_t)(ws+3248);
	i8 v9404 = *(i8*)(intptr_t)v9403;
	i8 v9405 = v9404+(+32);
	i1 v9406 = *(i1*)(intptr_t)v9405;
	i1 v9407 = (i1)+30;
	if (v9406==v9407) goto c02_06d0; else goto c02_06ce;

c02_06d0:;

	i8 v9408 = (i8)(intptr_t)(ws+3248);
	i8 v9409 = *(i8*)(intptr_t)v9408;
	i8 v9410 = *(i8*)(intptr_t)v9409;
	i8 v9411 = (i8)(intptr_t)(f228_IsSubroutine);
	i1 v9412;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9411)(&v9412, v9410);
	i1 v9413 = (i1)+0;
	if (v9412==v9413) goto c02_06ce; else goto c02_06cf;

c02_06ce:;

	i8 v9414 = (i8)(intptr_t)c02_s018a;
	i8 v9415 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9415)(v9414);

c02_06cf:;

c02_06c9:;

	i8 v9416 = (i8)(intptr_t)(ws+3248);
	i8 v9417 = *(i8*)(intptr_t)v9416;
	i8 v9418 = *(i8*)(intptr_t)v9417;
	i8 v9419 = *(i8*)(intptr_t)v9418;
	i8 v9420 = (i8)(intptr_t)(ws+1544);
	*(i8*)(intptr_t)v9420 = v9419;

	i8 v9421 = (i8)(intptr_t)(ws+1544);
	i8 v9422 = *(i8*)(intptr_t)v9421;
	i8 v9423 = v9422+(+82);
	i1 v9424 = *(i1*)(intptr_t)v9423;
	i1 v9425 = v9424&(+1);
	i1 v9426 = (i1)+0;
	if (v9425==v9426) goto c02_06d5; else goto c02_06d4;

c02_06d4:;

	i8 v9427 = (i8)(intptr_t)c02_s018b;
	i8 v9428 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9428)(v9427);

c02_06d5:;

c02_06d1:;

	i8 v9429 = (i8)(intptr_t)(ws+1544);
	i8 v9430 = *(i8*)(intptr_t)v9429;
	i8 v9431 = v9430+(+8);
	i8 v9432 = *(i8*)(intptr_t)v9431;
	i8 v9433 = (i8)(intptr_t)(ws+40);
	i8 v9434 = *(i8*)(intptr_t)v9433;
	if (v9432==v9434) goto c02_06da; else goto c02_06d9;

c02_06d9:;

	i8 v9435 = (i8)(intptr_t)c02_s018c;
	i8 v9436 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9436)(v9435);

c02_06da:;

c02_06d6:;

	i1 v9437 = (i1)+25;
	i8 v9438 = (i8)(intptr_t)(ws+3256);
	i8 v9439 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9439)(v9438, v9437);

endsub:;
}
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f148_MidStartsub(i8* /* m */, i8 /* subr */);
	void f256_Generate(i8 /* statement */);

// reduce_90 workspace at ws+3328 length ws+8
void f400_reduce_90(void) {

	i8 v9440 = (i8)+16;
	i8 v9441 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v9442;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v9441)(&v9442, v9440);
	i8 v9443 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v9443 = v9442;

	i8 v9444 = (i8)(intptr_t)(ws+88);
	i8 v9445 = *(i8*)(intptr_t)v9444;
	i8 v9446 = (i8)(intptr_t)(ws+3328);
	i8 v9447 = *(i8*)(intptr_t)v9446;
	i8 v9448 = v9447+(+8);
	*(i8*)(intptr_t)v9448 = v9445;

	i8 v9449 = (i8)(intptr_t)(ws+52);
	i2 v9450 = *(i2*)(intptr_t)v9449;
	i8 v9451 = (i8)(intptr_t)(ws+3328);
	i8 v9452 = *(i8*)(intptr_t)v9451;
	*(i2*)(intptr_t)v9452 = v9450;

	i2 v9453 = (i2)+0;
	i8 v9454 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v9454 = v9453;

	i8 v9455 = (i8)(intptr_t)(ws+54);
	i2 v9456 = *(i2*)(intptr_t)v9455;
	i8 v9457 = (i8)(intptr_t)(ws+3328);
	i8 v9458 = *(i8*)(intptr_t)v9457;
	i8 v9459 = v9458+(+2);
	*(i2*)(intptr_t)v9459 = v9456;

	i2 v9460 = (i2)+0;
	i8 v9461 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v9461 = v9460;

	i8 v9462 = (i8)(intptr_t)(ws+3328);
	i8 v9463 = *(i8*)(intptr_t)v9462;
	i8 v9464 = (i8)(intptr_t)(ws+88);
	*(i8*)(intptr_t)v9464 = v9463;

	i8 v9465 = (i8)(intptr_t)(ws+1544);
	i8 v9466 = *(i8*)(intptr_t)v9465;
	i8 v9467 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v9467 = v9466;

	i8 v9468 = (i8)(intptr_t)(ws+40);
	i8 v9469 = *(i8*)(intptr_t)v9468;
	i8 v9470 = (i8)(intptr_t)(f148_MidStartsub);
	i8 v9471;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v9470)(&v9471, v9469);
	i8 v9472 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9472)(v9471);

	i8 v9473 = (i8)(intptr_t)(ws+40);
	i8 v9474 = *(i8*)(intptr_t)v9473;
	i8 v9475 = v9474+(+82);
	i1 v9476 = *(i1*)(intptr_t)v9475;
	i1 v9477 = v9476|(+1);
	i8 v9478 = (i8)(intptr_t)(ws+40);
	i8 v9479 = *(i8*)(intptr_t)v9478;
	i8 v9480 = v9479+(+82);
	*(i1*)(intptr_t)v9480 = v9477;

endsub:;
}
	void f159_MidEndsub(i8* /* m */, i8 /* subr */);
	void f256_Generate(i8 /* statement */);
	void f266_ReportWorkspaces(i8 /* subr */);
	void f34_Free(i8 /* block */);
	void f262_DestructSubroutineContents(i8 /* subr */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_91 workspace at ws+3328 length ws+16
void f401_reduce_91(void) {

	i8 v9481 = (i8)(intptr_t)(ws+40);
	i8 v9482 = *(i8*)(intptr_t)v9481;
	i8 v9483 = (i8)(intptr_t)(f159_MidEndsub);
	i8 v9484;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v9483)(&v9484, v9482);
	i8 v9485 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9485)(v9484);

	i8 v9486 = (i8)(intptr_t)(ws+40);
	i8 v9487 = *(i8*)(intptr_t)v9486;
	i8 v9488 = (i8)(intptr_t)(f266_ReportWorkspaces);

	((void(*)(i8 /* subr */))(intptr_t)v9488)(v9487);

	i8 v9489 = (i8)(intptr_t)(ws+88);
	i8 v9490 = *(i8*)(intptr_t)v9489;
	i2 v9491 = *(i2*)(intptr_t)v9490;
	i8 v9492 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v9492 = v9491;

	i8 v9493 = (i8)(intptr_t)(ws+88);
	i8 v9494 = *(i8*)(intptr_t)v9493;
	i8 v9495 = v9494+(+2);
	i2 v9496 = *(i2*)(intptr_t)v9495;
	i8 v9497 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v9497 = v9496;

	i8 v9498 = (i8)(intptr_t)(ws+88);
	i8 v9499 = *(i8*)(intptr_t)v9498;
	i8 v9500 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v9500 = v9499;

	i8 v9501 = (i8)(intptr_t)(ws+3328);
	i8 v9502 = *(i8*)(intptr_t)v9501;
	i8 v9503 = v9502+(+8);
	i8 v9504 = *(i8*)(intptr_t)v9503;
	i8 v9505 = (i8)(intptr_t)(ws+88);
	*(i8*)(intptr_t)v9505 = v9504;

	i8 v9506 = (i8)(intptr_t)(ws+3328);
	i8 v9507 = *(i8*)(intptr_t)v9506;
	i8 v9508 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v9508)(v9507);

	i8 v9509 = (i8)(intptr_t)(ws+40);
	i8 v9510 = *(i8*)(intptr_t)v9509;
	i8 v9511 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v9511 = v9510;

	i8 v9512 = (i8)(intptr_t)(ws+3336);
	i8 v9513 = *(i8*)(intptr_t)v9512;
	i8 v9514 = v9513+(+8);
	i8 v9515 = *(i8*)(intptr_t)v9514;
	i8 v9516 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v9516 = v9515;

	i8 v9517 = (i8)(intptr_t)(ws+3336);
	i8 v9518 = *(i8*)(intptr_t)v9517;
	i8 v9519 = (i8)(intptr_t)(f262_DestructSubroutineContents);

	((void(*)(i8 /* subr */))(intptr_t)v9519)(v9518);

	i1 v9520 = (i1)+25;
	i8 v9521 = (i8)(intptr_t)(ws+3248);
	i8 v9522 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9522)(v9521, v9520);

endsub:;
}
	void f205_EmitterEmitInputParameters(i8 /* subr */);
	void f206_EmitterEmitOutputParameters(i8 /* subr */);

// reduce_92 workspace at ws+3328 length ws+0
void f402_reduce_92(void) {

	i1 v9523 = (i1)+0;
	i8 v9524 = (i8)(intptr_t)(ws+1544);
	i8 v9525 = *(i8*)(intptr_t)v9524;
	i8 v9526 = v9525+(+81);
	*(i1*)(intptr_t)v9526 = v9523;

	i8 v9527 = (i8)(intptr_t)(ws+1544);
	i8 v9528 = *(i8*)(intptr_t)v9527;
	i8 v9529 = (i8)(intptr_t)(f205_EmitterEmitInputParameters);

	((void(*)(i8 /* subr */))(intptr_t)v9529)(v9528);

	i8 v9530 = (i8)(intptr_t)(ws+1544);
	i8 v9531 = *(i8*)(intptr_t)v9530;
	i8 v9532 = (i8)(intptr_t)(f206_EmitterEmitOutputParameters);

	((void(*)(i8 /* subr */))(intptr_t)v9532)(v9531);

endsub:;
}
	void f98_CountParameters(i1* /* count */, i8 /* param */);
	void f205_EmitterEmitInputParameters(i8 /* subr */);
	void f206_EmitterEmitOutputParameters(i8 /* subr */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_93 workspace at ws+3328 length ws+0
void f403_reduce_93(void) {

	i8 v9533 = (i8)(intptr_t)(ws+3248);
	i8 v9534 = *(i8*)(intptr_t)v9533;
	i8 v9535 = (i8)(intptr_t)(f98_CountParameters);
	i1 v9536;

	((void(*)(i1* /* count */, i8 /* param */))(intptr_t)v9535)(&v9536, v9534);
	i8 v9537 = (i8)(intptr_t)(ws+1544);
	i8 v9538 = *(i8*)(intptr_t)v9537;
	i8 v9539 = v9538+(+81);
	*(i1*)(intptr_t)v9539 = v9536;

	i8 v9540 = (i8)(intptr_t)(ws+1544);
	i8 v9541 = *(i8*)(intptr_t)v9540;
	i8 v9542 = (i8)(intptr_t)(f205_EmitterEmitInputParameters);

	((void(*)(i8 /* subr */))(intptr_t)v9542)(v9541);

	i8 v9543 = (i8)(intptr_t)(ws+1544);
	i8 v9544 = *(i8*)(intptr_t)v9543;
	i8 v9545 = (i8)(intptr_t)(f206_EmitterEmitOutputParameters);

	((void(*)(i8 /* subr */))(intptr_t)v9545)(v9544);

	i1 v9546 = (i1)+6;
	i8 v9547 = (i8)(intptr_t)(ws+3256);
	i8 v9548 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9548)(v9547, v9546);

endsub:;
}
	void f98_CountParameters(i1* /* count */, i8 /* param */);

// reduce_94 workspace at ws+3328 length ws+0
void f404_reduce_94(void) {

	i8 v9549 = (i8)(intptr_t)(ws+3248);
	i8 v9550 = *(i8*)(intptr_t)v9549;
	i8 v9551 = (i8)(intptr_t)(f98_CountParameters);
	i1 v9552;

	((void(*)(i1* /* count */, i8 /* param */))(intptr_t)v9551)(&v9552, v9550);
	i8 v9553 = (i8)(intptr_t)(ws+1544);
	i8 v9554 = *(i8*)(intptr_t)v9553;
	i8 v9555 = v9554+(+80);
	*(i1*)(intptr_t)v9555 = v9552;

endsub:;
}
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_95 workspace at ws+3328 length ws+0
void f405_reduce_95(void) {

	i8 v9556 = (i8)+0;
	i8 v9557 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9557 = v9556;

	i1 v9558 = (i1)+4;
	i8 v9559 = (i8)(intptr_t)(ws+3248);
	i8 v9560 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9560)(v9559, v9558);

endsub:;
}
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_96 workspace at ws+3328 length ws+0
void f406_reduce_96(void) {

	i8 v9561 = (i8)(intptr_t)(ws+3256);
	i8 v9562 = *(i8*)(intptr_t)v9561;
	i8 v9563 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9563 = v9562;

	i1 v9564 = (i1)+4;
	i8 v9565 = (i8)(intptr_t)(ws+3248);
	i8 v9566 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9566)(v9565, v9564);

endsub:;
}

// reduce_97 workspace at ws+3328 length ws+0
void f407_reduce_97(void) {

	i8 v9567 = (i8)(intptr_t)(ws+3248);
	i8 v9568 = *(i8*)(intptr_t)v9567;
	i8 v9569 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9569 = v9568;

endsub:;
}
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_98 workspace at ws+3328 length ws+0
void f408_reduce_98(void) {

	i8 v9570 = (i8)(intptr_t)(ws+3248);
	i8 v9571 = *(i8*)(intptr_t)v9570;
	i8 v9572 = (i8)(intptr_t)(ws+3264);
	i8 v9573 = *(i8*)(intptr_t)v9572;
	i8 v9574 = *(i8*)(intptr_t)v9573;
	i8 v9575 = v9574+(+16);
	*(i8*)(intptr_t)v9575 = v9571;

	i8 v9576 = (i8)(intptr_t)(ws+3264);
	i8 v9577 = *(i8*)(intptr_t)v9576;
	i8 v9578 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9578 = v9577;

	i1 v9579 = (i1)+45;
	i8 v9580 = (i8)(intptr_t)(ws+3256);
	i8 v9581 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9581)(v9580, v9579);

endsub:;
}
	void f220_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f259_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_99 workspace at ws+3328 length ws+0
void f409_reduce_99(void) {

	i8 v9582 = (i8)(intptr_t)(ws+1544);
	i8 v9583 = *(i8*)(intptr_t)v9582;
	i8 v9584 = v9583+(+16);
	i8 v9585 = (i8)(intptr_t)(ws+3264);
	i8 v9586 = *(i8*)(intptr_t)v9585;
	i8 v9587 = (i8)(intptr_t)(f220_AddSymbol);
	i8 v9588;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v9587)(&v9588, v9586, v9584);
	i8 v9589 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9589 = v9588;

	i8 v9590 = (i8)(intptr_t)(ws+1544);
	i8 v9591 = *(i8*)(intptr_t)v9590;
	i8 v9592 = (i8)(intptr_t)(ws+3240);
	i8 v9593 = *(i8*)(intptr_t)v9592;
	i8 v9594 = (i8)(intptr_t)(ws+3248);
	i8 v9595 = *(i8*)(intptr_t)v9594;
	i8 v9596 = (i8)(intptr_t)(f259_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v9596)(v9595, v9593, v9591);

	i1 v9597 = (i1)+6;
	i8 v9598 = (i8)(intptr_t)(ws+3256);
	i8 v9599 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9599)(v9598, v9597);

endsub:;
}
	void f238_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_100 workspace at ws+3328 length ws+0
void f410_reduce_100(void) {

	i8 v9600 = (i8)(intptr_t)(ws+72);
	i8 v9601 = *(i8*)(intptr_t)v9600;
	i8 v9602 = v9601+(+48);
	i2 v9603 = *(i2*)(intptr_t)v9602;
	i8 v9604 = (i8)(intptr_t)(ws+72);
	i8 v9605 = *(i8*)(intptr_t)v9604;
	i8 v9606 = v9605+(+53);
	i1 v9607 = *(i1*)(intptr_t)v9606;
	i8 v9608 = (i8)(intptr_t)(f238_ArchAlignUp);
	i2 v9609;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v9608)(&v9609, v9607, v9603);
	i8 v9610 = (i8)(intptr_t)(ws+72);
	i8 v9611 = *(i8*)(intptr_t)v9610;
	i8 v9612 = v9611+(+50);
	*(i2*)(intptr_t)v9612 = v9609;

	i1 v9613 = (i1)+65;
	i8 v9614 = (i8)(intptr_t)(ws+3272);
	i8 v9615 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9615)(v9614, v9613);

	i1 v9616 = (i1)+10;
	i8 v9617 = (i8)(intptr_t)(ws+3256);
	i8 v9618 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9618)(v9617, v9616);

	i1 v9619 = (i1)+20;
	i8 v9620 = (i8)(intptr_t)(ws+3248);
	i8 v9621 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9621)(v9620, v9619);

endsub:;
}
	void f292_SymbolRedeclarationError(void);
	void f66_AllocNewType(i8* /* type */);
	void f292_SymbolRedeclarationError(void);

// reduce_101 workspace at ws+3328 length ws+0
void f411_reduce_101(void) {

	i8 v9622 = (i8)(intptr_t)(ws+3248);
	i8 v9623 = *(i8*)(intptr_t)v9622;
	i8 v9624 = v9623+(+32);
	i1 v9625 = *(i1*)(intptr_t)v9624;

	if (v9625 != +30) goto c02_06dc;

	i8 v9626 = (i8)(intptr_t)(ws+3248);
	i8 v9627 = *(i8*)(intptr_t)v9626;
	i8 v9628 = *(i8*)(intptr_t)v9627;
	i8 v9629 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v9629 = v9628;

	i8 v9630 = (i8)(intptr_t)(ws+72);
	i8 v9631 = *(i8*)(intptr_t)v9630;
	i8 v9632 = v9631+(+52);
	i1 v9633 = *(i1*)(intptr_t)v9632;
	i1 v9634 = (i1)+1;
	if (v9633==v9634) goto c02_06e1; else goto c02_06e0;

c02_06e0:;

	i8 v9635 = (i8)(intptr_t)(f292_SymbolRedeclarationError);

	((void(*)(void))(intptr_t)v9635)();

c02_06e1:;

c02_06dd:;

	goto c02_06db;

c02_06dc:;

	if (v9625 != +0) goto c02_06e2;

	i8 v9636 = (i8)(intptr_t)(f66_AllocNewType);
	i8 v9637;

	((void(*)(i8* /* type */))(intptr_t)v9636)(&v9637);
	i8 v9638 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v9638 = v9637;

	i1 v9639 = (i1)+30;
	i8 v9640 = (i8)(intptr_t)(ws+3248);
	i8 v9641 = *(i8*)(intptr_t)v9640;
	i8 v9642 = v9641+(+32);
	*(i1*)(intptr_t)v9642 = v9639;

	i8 v9643 = (i8)(intptr_t)(ws+72);
	i8 v9644 = *(i8*)(intptr_t)v9643;
	i8 v9645 = (i8)(intptr_t)(ws+3248);
	i8 v9646 = *(i8*)(intptr_t)v9645;
	*(i8*)(intptr_t)v9646 = v9644;

	i8 v9647 = (i8)(intptr_t)(ws+3248);
	i8 v9648 = *(i8*)(intptr_t)v9647;
	i8 v9649 = (i8)(intptr_t)(ws+72);
	i8 v9650 = *(i8*)(intptr_t)v9649;
	i8 v9651 = v9650+(+32);
	*(i8*)(intptr_t)v9651 = v9648;

	goto c02_06db;

c02_06e2:;

	i8 v9652 = (i8)(intptr_t)(f292_SymbolRedeclarationError);

	((void(*)(void))(intptr_t)v9652)();

c02_06db:;


	i1 v9653 = (i1)+5;
	i8 v9654 = (i8)(intptr_t)(ws+72);
	i8 v9655 = *(i8*)(intptr_t)v9654;
	i8 v9656 = v9655+(+52);
	*(i1*)(intptr_t)v9656 = v9653;

endsub:;
}
	void f223_CheckNotPartialType(i8 /* type */);
	void f232_IsRecord(i1* /* result */, i8 /* type */);
	void f74_StartError(void);
	void f12_print(i8 /* ptr */);
const i1 c02_s018d[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x74,0x79,0x70,0x65,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// reduce_102 workspace at ws+3328 length ws+0
void f412_reduce_102(void) {

	i8 v9657 = (i8)(intptr_t)(ws+3248);
	i8 v9658 = *(i8*)(intptr_t)v9657;
	i8 v9659 = (i8)(intptr_t)(f223_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v9659)(v9658);

	i8 v9660 = (i8)(intptr_t)(ws+3248);
	i8 v9661 = *(i8*)(intptr_t)v9660;
	i8 v9662 = (i8)(intptr_t)(f232_IsRecord);
	i1 v9663;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9662)(&v9663, v9661);
	i1 v9664 = (i1)+0;
	if (v9663==v9664) goto c02_06e6; else goto c02_06e7;

c02_06e6:;

	i8 v9665 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v9665)();

	i8 v9666 = (i8)(intptr_t)(ws+3248);
	i8 v9667 = *(i8*)(intptr_t)v9666;
	i8 v9668 = v9667+(+32);
	i8 v9669 = *(i8*)(intptr_t)v9668;
	i8 v9670 = v9669+(+8);
	i8 v9671 = *(i8*)(intptr_t)v9670;
	i8 v9672 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9672)(v9671);

	i8 v9673 = (i8)(intptr_t)c02_s018d;
	i8 v9674 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9674)(v9673);

	i8 v9675 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v9675)();

c02_06e7:;

c02_06e3:;

	i8 v9676 = (i8)(intptr_t)(ws+3248);
	i8 v9677 = *(i8*)(intptr_t)v9676;
	i8 v9678 = v9677+(+53);
	i1 v9679 = *(i1*)(intptr_t)v9678;
	i8 v9680 = (i8)(intptr_t)(ws+72);
	i8 v9681 = *(i8*)(intptr_t)v9680;
	i8 v9682 = v9681+(+53);
	*(i1*)(intptr_t)v9682 = v9679;

	i8 v9683 = (i8)(intptr_t)(ws+3248);
	i8 v9684 = *(i8*)(intptr_t)v9683;
	i8 v9685 = v9684+(+48);
	i2 v9686 = *(i2*)(intptr_t)v9685;
	i8 v9687 = (i8)(intptr_t)(ws+72);
	i8 v9688 = *(i8*)(intptr_t)v9687;
	i8 v9689 = v9688+(+48);
	*(i2*)(intptr_t)v9689 = v9686;

	i8 v9690 = (i8)(intptr_t)(ws+3248);
	i8 v9691 = *(i8*)(intptr_t)v9690;
	i8 v9692 = (i8)(intptr_t)(ws+72);
	i8 v9693 = *(i8*)(intptr_t)v9692;
	i8 v9694 = v9693+(+16);
	*(i8*)(intptr_t)v9694 = v9691;

endsub:;
}
	void f223_CheckNotPartialType(i8 /* type */);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f242_ArchInitMember(i2 /* position */, i8 /* member */, i8 /* containing */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_103 workspace at ws+3328 length ws+0
void f413_reduce_103(void) {

	i8 v9695 = (i8)(intptr_t)(ws+3256);
	i8 v9696 = *(i8*)(intptr_t)v9695;
	i8 v9697 = (i8)(intptr_t)(f223_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v9697)(v9696);

	i8 v9698 = (i8)(intptr_t)(ws+72);
	i8 v9699 = *(i8*)(intptr_t)v9698;
	i8 v9700 = v9699+(+53);
	i1 v9701 = *(i1*)(intptr_t)v9700;
	i8 v9702 = (i8)(intptr_t)(ws+3256);
	i8 v9703 = *(i8*)(intptr_t)v9702;
	i8 v9704 = v9703+(+53);
	i1 v9705 = *(i1*)(intptr_t)v9704;
	if (v9701<v9705) goto c02_06eb; else goto c02_06ec;

c02_06eb:;

	i8 v9706 = (i8)(intptr_t)(ws+3256);
	i8 v9707 = *(i8*)(intptr_t)v9706;
	i8 v9708 = v9707+(+53);
	i1 v9709 = *(i1*)(intptr_t)v9708;
	i8 v9710 = (i8)(intptr_t)(ws+72);
	i8 v9711 = *(i8*)(intptr_t)v9710;
	i8 v9712 = v9711+(+53);
	*(i1*)(intptr_t)v9712 = v9709;

c02_06ec:;

c02_06e8:;

	i1 v9713 = (i1)+28;
	i8 v9714 = (i8)(intptr_t)(ws+3280);
	i8 v9715 = *(i8*)(intptr_t)v9714;
	i8 v9716 = v9715+(+32);
	*(i1*)(intptr_t)v9716 = v9713;

	i8 v9717 = (i8)+27;
	i8 v9718 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v9719;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v9718)(&v9719, v9717);
	i8 v9720 = (i8)(intptr_t)(ws+3280);
	i8 v9721 = *(i8*)(intptr_t)v9720;
	*(i8*)(intptr_t)v9721 = v9719;

	i8 v9722 = (i8)(intptr_t)(ws+3256);
	i8 v9723 = *(i8*)(intptr_t)v9722;
	i8 v9724 = (i8)(intptr_t)(ws+3280);
	i8 v9725 = *(i8*)(intptr_t)v9724;
	i8 v9726 = *(i8*)(intptr_t)v9725;
	*(i8*)(intptr_t)v9726 = v9723;

	i8 v9727 = (i8)(intptr_t)(ws+72);
	i8 v9728 = *(i8*)(intptr_t)v9727;
	i8 v9729 = (i8)(intptr_t)(ws+3280);
	i8 v9730 = *(i8*)(intptr_t)v9729;
	i8 v9731 = (i8)(intptr_t)(ws+3272);
	i2 v9732 = *(i2*)(intptr_t)v9731;
	i8 v9733 = (i8)(intptr_t)(f242_ArchInitMember);

	((void(*)(i2 /* position */, i8 /* member */, i8 /* containing */))(intptr_t)v9733)(v9732, v9730, v9728);

	i1 v9734 = (i1)+6;
	i8 v9735 = (i8)(intptr_t)(ws+3264);
	i8 v9736 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9736)(v9735, v9734);

	i1 v9737 = (i1)+22;
	i8 v9738 = (i8)(intptr_t)(ws+3248);
	i8 v9739 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9739)(v9738, v9737);

endsub:;
}

// reduce_104 workspace at ws+3328 length ws+0
void f414_reduce_104(void) {

	i8 v9740 = (i8)(intptr_t)(ws+72);
	i8 v9741 = *(i8*)(intptr_t)v9740;
	i8 v9742 = v9741+(+48);
	i2 v9743 = *(i2*)(intptr_t)v9742;
	i8 v9744 = (i8)(intptr_t)(ws+3240);
	*(i2*)(intptr_t)v9744 = v9743;

endsub:;
}
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_105 workspace at ws+3328 length ws+0
void f415_reduce_105(void) {

	i8 v9745 = (i8)(intptr_t)(ws+3256);
	i4 v9746 = *(i4*)(intptr_t)v9745;
	i2 v9747 = (s2)(s4)v9746;
	i8 v9748 = (i8)(intptr_t)(ws+3240);
	*(i2*)(intptr_t)v9748 = v9747;

	i1 v9749 = (i1)+16;
	i8 v9750 = (i8)(intptr_t)(ws+3264);
	i8 v9751 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9751)(v9750, v9749);

	i1 v9752 = (i1)+4;
	i8 v9753 = (i8)(intptr_t)(ws+3248);
	i8 v9754 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9754)(v9753, v9752);

endsub:;
}
	void f220_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// reduce_106 workspace at ws+3328 length ws+0
void f416_reduce_106(void) {

	i8 v9755 = (i8)(intptr_t)(ws+72);
	i8 v9756 = *(i8*)(intptr_t)v9755;
	i8 v9757 = (i8)(intptr_t)(ws+3248);
	i8 v9758 = *(i8*)(intptr_t)v9757;
	i8 v9759 = (i8)(intptr_t)(f220_AddSymbol);
	i8 v9760;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v9759)(&v9760, v9758, v9756);
	i8 v9761 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9761 = v9760;

	i8 v9762 = (i8)(intptr_t)(ws+72);
	i8 v9763 = *(i8*)(intptr_t)v9762;
	i8 v9764 = v9763+(+24);
	i1 v9765 = *(i1*)(intptr_t)v9764;
	i1 v9766 = v9765+(+1);
	i8 v9767 = (i8)(intptr_t)(ws+72);
	i8 v9768 = *(i8*)(intptr_t)v9767;
	i8 v9769 = v9768+(+24);
	*(i1*)(intptr_t)v9769 = v9766;

endsub:;
}
	void f294_CheckEndOfInitialiser(void);
	void f123_MidEndinit(i8* /* m */);
	void f256_Generate(i8 /* statement */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_107 workspace at ws+3328 length ws+0
void f417_reduce_107(void) {

	i8 v9770 = (i8)(intptr_t)(f294_CheckEndOfInitialiser);

	((void(*)(void))(intptr_t)v9770)();

	i8 v9771 = (i8)(intptr_t)(f123_MidEndinit);
	i8 v9772;

	((void(*)(i8* /* m */))(intptr_t)v9771)(&v9772);
	i8 v9773 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9773)(v9772);

	i1 v9774 = (i1)+31;
	i8 v9775 = (i8)(intptr_t)(ws+3272);
	i8 v9776 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9776)(v9775, v9774);

	i1 v9777 = (i1)+32;
	i8 v9778 = (i8)(intptr_t)(ws+3256);
	i8 v9779 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9779)(v9778, v9777);

	i1 v9780 = (i1)+22;
	i8 v9781 = (i8)(intptr_t)(ws+3248);
	i8 v9782 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9782)(v9781, v9780);

endsub:;
}
	void f223_CheckNotPartialType(i8 /* type */);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f235_AllocLabel(i2* /* label */);
	void f227_IsArray(i1* /* result */, i8 /* type */);
	void f232_IsRecord(i1* /* result */, i8 /* type */);
const i1 c02_s018e[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x73,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x20,0x6f,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0x73,0x20,0x6f,0x72,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x73,0 };
	void f76_SimpleError(i8 /* message */);
	void f232_IsRecord(i1* /* result */, i8 /* type */);
const i1 c02_s018f[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x27,0x74,0x20,0x73,0x74,0x61,0x74,0x69,0x63,0x61,0x6c,0x6c,0x79,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x20,0x61,0x6e,0x20,0x69,0x6e,0x68,0x65,0x72,0x69,0x74,0x65,0x64,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0 };
	void f76_SimpleError(i8 /* message */);
	void f232_IsRecord(i1* /* result */, i8 /* type */);
	void f119_MidStartinit(i8* /* m */, i8 /* sym */);
	void f256_Generate(i8 /* statement */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_108 workspace at ws+3328 length ws+0
void f418_reduce_108(void) {

	i8 v9783 = (i8)(intptr_t)(ws+3256);
	i8 v9784 = *(i8*)(intptr_t)v9783;
	i8 v9785 = (i8)(intptr_t)(f223_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v9785)(v9784);

	i1 v9786 = (i1)+28;
	i8 v9787 = (i8)(intptr_t)(ws+3272);
	i8 v9788 = *(i8*)(intptr_t)v9787;
	i8 v9789 = v9788+(+32);
	*(i1*)(intptr_t)v9789 = v9786;

	i8 v9790 = (i8)+27;
	i8 v9791 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v9792;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v9791)(&v9792, v9790);
	i8 v9793 = (i8)(intptr_t)(ws+3272);
	i8 v9794 = *(i8*)(intptr_t)v9793;
	*(i8*)(intptr_t)v9794 = v9792;

	i8 v9795 = (i8)(intptr_t)(ws+3256);
	i8 v9796 = *(i8*)(intptr_t)v9795;
	i8 v9797 = (i8)(intptr_t)(ws+3272);
	i8 v9798 = *(i8*)(intptr_t)v9797;
	i8 v9799 = *(i8*)(intptr_t)v9798;
	*(i8*)(intptr_t)v9799 = v9796;

	i8 v9800 = (i8)(intptr_t)(ws+40);
	i8 v9801 = *(i8*)(intptr_t)v9800;
	i8 v9802 = (i8)(intptr_t)(ws+3272);
	i8 v9803 = *(i8*)(intptr_t)v9802;
	i8 v9804 = *(i8*)(intptr_t)v9803;
	i8 v9805 = v9804+(+8);
	*(i8*)(intptr_t)v9805 = v9801;

	i1 v9806 = (i1)+255;
	i8 v9807 = (i8)(intptr_t)(ws+3272);
	i8 v9808 = *(i8*)(intptr_t)v9807;
	i8 v9809 = *(i8*)(intptr_t)v9808;
	i8 v9810 = v9809+(+26);
	*(i1*)(intptr_t)v9810 = v9806;

	i8 v9811 = (i8)(intptr_t)(f235_AllocLabel);
	i2 v9812;

	((void(*)(i2* /* label */))(intptr_t)v9811)(&v9812);
	i8 v9813 = (i8)(intptr_t)(ws+3272);
	i8 v9814 = *(i8*)(intptr_t)v9813;
	i8 v9815 = *(i8*)(intptr_t)v9814;
	i8 v9816 = v9815+(+24);
	*(i2*)(intptr_t)v9816 = v9812;

	i8 v9817 = (i8)(intptr_t)(ws+3256);
	i8 v9818 = *(i8*)(intptr_t)v9817;
	i8 v9819 = (i8)(intptr_t)(f227_IsArray);
	i1 v9820;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9819)(&v9820, v9818);
	i1 v9821 = (i1)+0;
	if (v9820==v9821) goto c02_06f4; else goto c02_06f3;

c02_06f4:;

	i8 v9822 = (i8)(intptr_t)(ws+3256);
	i8 v9823 = *(i8*)(intptr_t)v9822;
	i8 v9824 = (i8)(intptr_t)(f232_IsRecord);
	i1 v9825;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9824)(&v9825, v9823);
	i1 v9826 = (i1)+0;
	if (v9825==v9826) goto c02_06f2; else goto c02_06f3;

c02_06f2:;

	i8 v9827 = (i8)(intptr_t)c02_s018e;
	i8 v9828 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9828)(v9827);

c02_06f3:;

c02_06ed:;

	i8 v9829 = (i8)(intptr_t)(ws+3256);
	i8 v9830 = *(i8*)(intptr_t)v9829;
	i8 v9831 = (i8)(intptr_t)(f232_IsRecord);
	i1 v9832;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9831)(&v9832, v9830);
	i1 v9833 = (i1)+0;
	if (v9832==v9833) goto c02_06fb; else goto c02_06fc;

c02_06fc:;

	i8 v9834 = (i8)(intptr_t)(ws+3256);
	i8 v9835 = *(i8*)(intptr_t)v9834;
	i8 v9836 = v9835+(+16);
	i8 v9837 = *(i8*)(intptr_t)v9836;
	i8 v9838 = (i8)+0;
	if (v9837==v9838) goto c02_06fb; else goto c02_06fa;

c02_06fa:;

	i8 v9839 = (i8)(intptr_t)c02_s018f;
	i8 v9840 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9840)(v9839);

c02_06fb:;

c02_06f5:;

	i8 v9841 = (i8)(intptr_t)(ws+3256);
	i8 v9842 = *(i8*)(intptr_t)v9841;
	i8 v9843 = (i8)(intptr_t)(f232_IsRecord);
	i1 v9844;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9843)(&v9844, v9842);
	i1 v9845 = (i1)+0;
	if (v9844==v9845) goto c02_0701; else goto c02_0700;

c02_0700:;

	i8 v9846 = (i8)(intptr_t)(ws+3256);
	i8 v9847 = *(i8*)(intptr_t)v9846;
	i8 v9848 = *(i8*)(intptr_t)v9847;
	i8 v9849 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v9849 = v9848;

c02_0701:;

c02_06fd:;

	i8 v9850 = (i8)(intptr_t)(ws+3256);
	i8 v9851 = *(i8*)(intptr_t)v9850;
	i8 v9852 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v9852 = v9851;

	i2 v9853 = (i2)+0;
	i8 v9854 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v9854 = v9853;

	i2 v9855 = (i2)+0;
	i8 v9856 = (i8)(intptr_t)(ws+1562);
	*(i2*)(intptr_t)v9856 = v9855;

	i8 v9857 = (i8)(intptr_t)(ws+3272);
	i8 v9858 = *(i8*)(intptr_t)v9857;
	i8 v9859 = (i8)(intptr_t)(f119_MidStartinit);
	i8 v9860;

	((void(*)(i8* /* m */, i8 /* sym */))(intptr_t)v9859)(&v9860, v9858);
	i8 v9861 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9861)(v9860);

	i1 v9862 = (i1)+6;
	i8 v9863 = (i8)(intptr_t)(ws+3264);
	i8 v9864 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9864)(v9863, v9862);

	i1 v9865 = (i1)+2;
	i8 v9866 = (i8)(intptr_t)(ws+3248);
	i8 v9867 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9867)(v9866, v9865);

endsub:;
}
	void f298_GetInitedMemberChecked(i8* /* member */, i8* /* type */);
	void f296_AlignTo(i1 /* alignment */);
	void f229_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s0190[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x61,0x6e,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };
	void f76_SimpleError(i8 /* message */);
	void f157_MidInit(i8* /* m */, i4 /* value */, i1 /* width */);
	void f256_Generate(i8 /* statement */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s0191[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x61,0x20,0x73,0x74,0x72,0x69,0x6e,0x67,0 };
	void f76_SimpleError(i8 /* message */);
	void f134_MidInitstring(i8* /* m */, i8 /* text */);
	void f256_Generate(i8 /* statement */);
const i1 c02_s0192[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6f,0x66,0x20,0x77,0x72,0x6f,0x6e,0x67,0x20,0x74,0x79,0x70,0x65,0 };
	void f76_SimpleError(i8 /* message */);
	void f143_MidInitaddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f256_Generate(i8 /* statement */);
const i1 c02_s0193[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6f,0x66,0x20,0x77,0x72,0x6f,0x6e,0x67,0x20,0x74,0x79,0x70,0x65,0 };
	void f76_SimpleError(i8 /* message */);
	void f145_MidInitsubref(i8* /* m */, i8 /* subr */);
	void f256_Generate(i8 /* statement */);
	void f289_parser_i_constant_error(void);
	void f63_Discard(i8 /* node */);

// reduce_109 workspace at ws+3328 length ws+18
void f419_reduce_109(void) {

	i8 v9868 = (i8)(intptr_t)(f298_GetInitedMemberChecked);
	i8 v9869;
	i8 v9870;

	((void(*)(i8* /* member */, i8* /* type */))(intptr_t)v9868)(&v9869, &v9870);

	i8 v9871 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v9871 = v9870;

	i8 v9872 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v9872 = v9869;

	i8 v9873 = (i8)(intptr_t)(ws+3336);
	i8 v9874 = *(i8*)(intptr_t)v9873;
	i8 v9875 = v9874+(+53);
	i1 v9876 = *(i1*)(intptr_t)v9875;
	i8 v9877 = (i8)(intptr_t)(f296_AlignTo);

	((void(*)(i1 /* alignment */))(intptr_t)v9877)(v9876);

	i8 v9878 = (i8)(intptr_t)(ws+3336);
	i8 v9879 = *(i8*)(intptr_t)v9878;
	i8 v9880 = v9879+(+48);
	i2 v9881 = *(i2*)(intptr_t)v9880;
	i8 v9882 = (i8)(intptr_t)(ws+3344);
	*(i2*)(intptr_t)v9882 = v9881;

	i8 v9883 = (i8)(intptr_t)(ws+3248);
	i8 v9884 = *(i8*)(intptr_t)v9883;
	i8 v9885 = v9884+(+40);
	i1 v9886 = *(i1*)(intptr_t)v9885;

	if (v9886 != +45) goto c02_0703;

	i8 v9887 = (i8)(intptr_t)(ws+3336);
	i8 v9888 = *(i8*)(intptr_t)v9887;
	i8 v9889 = (i8)(intptr_t)(f229_IsNum);
	i1 v9890;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9889)(&v9890, v9888);
	i1 v9891 = (i1)+0;
	if (v9890==v9891) goto c02_0707; else goto c02_0708;

c02_0707:;

	i8 v9892 = (i8)(intptr_t)c02_s0190;
	i8 v9893 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9893)(v9892);

c02_0708:;

c02_0704:;

	i8 v9894 = (i8)(intptr_t)(ws+3344);
	i2 v9895 = *(i2*)(intptr_t)v9894;
	i1 v9896 = v9895;
	i8 v9897 = (i8)(intptr_t)(ws+3248);
	i8 v9898 = *(i8*)(intptr_t)v9897;
	i4 v9899 = *(i4*)(intptr_t)v9898;
	i8 v9900 = (i8)(intptr_t)(f157_MidInit);
	i8 v9901;

	((void(*)(i8* /* m */, i4 /* value */, i1 /* width */))(intptr_t)v9900)(&v9901, v9899, v9896);
	i8 v9902 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9902)(v9901);

	goto c02_0702;

c02_0703:;

	if (v9886 != +46) goto c02_0709;

	i8 v9903 = (i8)(intptr_t)(ws+3336);
	i8 v9904 = *(i8*)(intptr_t)v9903;
	i8 v9905 = (i8)(intptr_t)(f68_IsPtr);
	i1 v9906;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9905)(&v9906, v9904);
	i1 v9907 = (i1)+0;
	if (v9906==v9907) goto c02_070f; else goto c02_0711;

c02_0711:;

	i8 v9908 = (i8)(intptr_t)(ws+3336);
	i8 v9909 = *(i8*)(intptr_t)v9908;
	i8 v9910 = *(i8*)(intptr_t)v9909;
	i8 v9911 = (i8)(intptr_t)(ws+1512);
	i8 v9912 = *(i8*)(intptr_t)v9911;
	if (v9910==v9912) goto c02_0710; else goto c02_070f;

c02_070f:;

	i8 v9913 = (i8)(intptr_t)c02_s0191;
	i8 v9914 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9914)(v9913);

c02_0710:;

c02_070a:;

	i8 v9915 = (i8)(intptr_t)(ws+3248);
	i8 v9916 = *(i8*)(intptr_t)v9915;
	i8 v9917 = *(i8*)(intptr_t)v9916;
	i8 v9918 = (i8)(intptr_t)(f134_MidInitstring);
	i8 v9919;

	((void(*)(i8* /* m */, i8 /* text */))(intptr_t)v9918)(&v9919, v9917);
	i8 v9920 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9920)(v9919);

	goto c02_0702;

c02_0709:;

	if (v9886 != +47) goto c02_0712;

	i8 v9921 = (i8)(intptr_t)(ws+3336);
	i8 v9922 = *(i8*)(intptr_t)v9921;
	i8 v9923 = (i8)(intptr_t)(ws+3248);
	i8 v9924 = *(i8*)(intptr_t)v9923;
	i8 v9925 = v9924+(+16);
	i8 v9926 = *(i8*)(intptr_t)v9925;
	if (v9922==v9926) goto c02_0717; else goto c02_0716;

c02_0716:;

	i8 v9927 = (i8)(intptr_t)c02_s0192;
	i8 v9928 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9928)(v9927);

c02_0717:;

c02_0713:;

	i8 v9929 = (i8)(intptr_t)(ws+3248);
	i8 v9930 = *(i8*)(intptr_t)v9929;
	i8 v9931 = *(i8*)(intptr_t)v9930;
	i8 v9932 = (i8)(intptr_t)(ws+3248);
	i8 v9933 = *(i8*)(intptr_t)v9932;
	i8 v9934 = v9933+(+8);
	i2 v9935 = *(i2*)(intptr_t)v9934;
	i8 v9936 = (i8)(intptr_t)(f143_MidInitaddress);
	i8 v9937;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v9936)(&v9937, v9935, v9931);
	i8 v9938 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9938)(v9937);

	goto c02_0702;

c02_0712:;

	if (v9886 != +48) goto c02_0718;

	i8 v9939 = (i8)(intptr_t)(ws+3336);
	i8 v9940 = *(i8*)(intptr_t)v9939;
	i8 v9941 = (i8)(intptr_t)(ws+3248);
	i8 v9942 = *(i8*)(intptr_t)v9941;
	i8 v9943 = v9942+(+16);
	i8 v9944 = *(i8*)(intptr_t)v9943;
	if (v9940==v9944) goto c02_071d; else goto c02_071c;

c02_071c:;

	i8 v9945 = (i8)(intptr_t)c02_s0193;
	i8 v9946 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9946)(v9945);

c02_071d:;

c02_0719:;

	i8 v9947 = (i8)(intptr_t)(ws+3248);
	i8 v9948 = *(i8*)(intptr_t)v9947;
	i8 v9949 = *(i8*)(intptr_t)v9948;
	i8 v9950 = (i8)(intptr_t)(f145_MidInitsubref);
	i8 v9951;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v9950)(&v9951, v9949);
	i8 v9952 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9952)(v9951);

	goto c02_0702;

c02_0718:;

	i8 v9953 = (i8)(intptr_t)(f289_parser_i_constant_error);

	((void(*)(void))(intptr_t)v9953)();

c02_0702:;


	i8 v9954 = (i8)(intptr_t)(ws+3248);
	i8 v9955 = *(i8*)(intptr_t)v9954;
	i8 v9956 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v9956)(v9955);

	i8 v9957 = (i8)(intptr_t)(ws+1560);
	i2 v9958 = *(i2*)(intptr_t)v9957;
	i8 v9959 = (i8)(intptr_t)(ws+3344);
	i2 v9960 = *(i2*)(intptr_t)v9959;
	i2 v9961 = v9958+v9960;
	i8 v9962 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v9962 = v9961;

	i8 v9963 = (i8)(intptr_t)(ws+1562);
	i2 v9964 = *(i2*)(intptr_t)v9963;
	i8 v9965 = (i8)(intptr_t)(ws+3344);
	i2 v9966 = *(i2*)(intptr_t)v9965;
	i2 v9967 = v9964+v9966;
	i8 v9968 = (i8)(intptr_t)(ws+1562);
	*(i2*)(intptr_t)v9968 = v9967;

endsub:;
}
	void f294_CheckEndOfInitialiser(void);
	void f34_Free(i8 /* block */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_110 workspace at ws+3328 length ws+0
void f420_reduce_110(void) {

	i8 v9969 = (i8)(intptr_t)(f294_CheckEndOfInitialiser);

	((void(*)(void))(intptr_t)v9969)();

	i8 v9970 = (i8)(intptr_t)(ws+1560);
	i2 v9971 = *(i2*)(intptr_t)v9970;
	i8 v9972 = (i8)(intptr_t)(ws+3264);
	i8 v9973 = *(i8*)(intptr_t)v9972;
	i8 v9974 = v9973+(+16);
	i2 v9975 = *(i2*)(intptr_t)v9974;
	i2 v9976 = v9971+v9975;
	i8 v9977 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v9977 = v9976;

	i8 v9978 = (i8)(intptr_t)(ws+3264);
	i8 v9979 = *(i8*)(intptr_t)v9978;
	i8 v9980 = *(i8*)(intptr_t)v9979;
	i8 v9981 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v9981 = v9980;

	i8 v9982 = (i8)(intptr_t)(ws+3264);
	i8 v9983 = *(i8*)(intptr_t)v9982;
	i8 v9984 = v9983+(+8);
	i8 v9985 = *(i8*)(intptr_t)v9984;
	i8 v9986 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v9986 = v9985;

	i8 v9987 = (i8)(intptr_t)(ws+3264);
	i8 v9988 = *(i8*)(intptr_t)v9987;
	i8 v9989 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v9989)(v9988);

	i1 v9990 = (i1)+32;
	i8 v9991 = (i8)(intptr_t)(ws+3248);
	i8 v9992 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9992)(v9991, v9990);

endsub:;
}
	void f298_GetInitedMemberChecked(i8* /* member */, i8* /* type */);
	void f296_AlignTo(i1 /* alignment */);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f232_IsRecord(i1* /* result */, i8 /* type */);
	void f227_IsArray(i1* /* result */, i8 /* type */);
const i1 c02_s0194[] = { 0x62,0x72,0x61,0x63,0x65,0x64,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x64,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x20,0x61,0x72,0x72,0x61,0x79,0x73,0x20,0x6f,0x72,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x73,0 };
	void f76_SimpleError(i8 /* message */);

// reduce_111 workspace at ws+3328 length ws+16
void f421_reduce_111(void) {

	i8 v9993 = (i8)(intptr_t)(f298_GetInitedMemberChecked);
	i8 v9994;
	i8 v9995;

	((void(*)(i8* /* member */, i8* /* type */))(intptr_t)v9993)(&v9994, &v9995);

	i8 v9996 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v9996 = v9995;

	i8 v9997 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v9997 = v9994;

	i8 v9998 = (i8)(intptr_t)(ws+3336);
	i8 v9999 = *(i8*)(intptr_t)v9998;
	i8 v10000 = v9999+(+53);
	i1 v10001 = *(i1*)(intptr_t)v10000;
	i8 v10002 = (i8)(intptr_t)(f296_AlignTo);

	((void(*)(i1 /* alignment */))(intptr_t)v10002)(v10001);

	i8 v10003 = (i8)+18;
	i8 v10004 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v10005;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v10004)(&v10005, v10003);
	i8 v10006 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v10006 = v10005;

	i8 v10007 = (i8)(intptr_t)(ws+72);
	i8 v10008 = *(i8*)(intptr_t)v10007;
	i8 v10009 = (i8)(intptr_t)(ws+3240);
	i8 v10010 = *(i8*)(intptr_t)v10009;
	*(i8*)(intptr_t)v10010 = v10008;

	i8 v10011 = (i8)(intptr_t)(ws+1552);
	i8 v10012 = *(i8*)(intptr_t)v10011;
	i8 v10013 = (i8)(intptr_t)(ws+3240);
	i8 v10014 = *(i8*)(intptr_t)v10013;
	i8 v10015 = v10014+(+8);
	*(i8*)(intptr_t)v10015 = v10012;

	i8 v10016 = (i8)(intptr_t)(ws+1560);
	i2 v10017 = *(i2*)(intptr_t)v10016;
	i8 v10018 = (i8)(intptr_t)(ws+3240);
	i8 v10019 = *(i8*)(intptr_t)v10018;
	i8 v10020 = v10019+(+16);
	*(i2*)(intptr_t)v10020 = v10017;

	i8 v10021 = (i8)(intptr_t)(ws+3336);
	i8 v10022 = *(i8*)(intptr_t)v10021;
	i8 v10023 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v10023 = v10022;

	i2 v10024 = (i2)+0;
	i8 v10025 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v10025 = v10024;

	i8 v10026 = (i8)(intptr_t)(ws+3336);
	i8 v10027 = *(i8*)(intptr_t)v10026;
	i8 v10028 = (i8)(intptr_t)(f232_IsRecord);
	i1 v10029;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v10028)(&v10029, v10027);
	i1 v10030 = (i1)+0;
	if (v10029==v10030) goto c02_0722; else goto c02_0721;

c02_0721:;

	i8 v10031 = (i8)(intptr_t)(ws+3336);
	i8 v10032 = *(i8*)(intptr_t)v10031;
	i8 v10033 = *(i8*)(intptr_t)v10032;
	i8 v10034 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v10034 = v10033;

	goto c02_071e;

c02_0722:;

	i8 v10035 = (i8)(intptr_t)(ws+3336);
	i8 v10036 = *(i8*)(intptr_t)v10035;
	i8 v10037 = (i8)(intptr_t)(f227_IsArray);
	i1 v10038;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v10037)(&v10038, v10036);
	i1 v10039 = (i1)+0;
	if (v10038==v10039) goto c02_0726; else goto c02_0725;

c02_0725:;

	i8 v10040 = (i8)+0;
	i8 v10041 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v10041 = v10040;

	goto c02_071e;

c02_0726:;

	i8 v10042 = (i8)(intptr_t)c02_s0194;
	i8 v10043 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10043)(v10042);

c02_071e:;

endsub:;
}
	void f124_MidAsmend(i8* /* m */);
	void f256_Generate(i8 /* statement */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_112 workspace at ws+3328 length ws+0
void f422_reduce_112(void) {

	i8 v10044 = (i8)(intptr_t)(f124_MidAsmend);
	i8 v10045;

	((void(*)(i8* /* m */))(intptr_t)v10044)(&v10045);
	i8 v10046 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10046)(v10045);

	i1 v10047 = (i1)+22;
	i8 v10048 = (i8)(intptr_t)(ws+3248);
	i8 v10049 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10049)(v10048, v10047);

endsub:;
}
	void f154_MidAsmstart(i8* /* m */);
	void f256_Generate(i8 /* statement */);

// reduce_113 workspace at ws+3328 length ws+0
void f423_reduce_113(void) {

	i8 v10050 = (i8)(intptr_t)(f154_MidAsmstart);
	i8 v10051;

	((void(*)(i8* /* m */))(intptr_t)v10050)(&v10051);
	i8 v10052 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10052)(v10051);

endsub:;
}
	void f126_MidAsmtext(i8* /* m */, i8 /* text */);
	void f256_Generate(i8 /* statement */);
	void f34_Free(i8 /* block */);

// reduce_114 workspace at ws+3328 length ws+0
void f424_reduce_114(void) {

	i8 v10053 = (i8)(intptr_t)(ws+3248);
	i8 v10054 = *(i8*)(intptr_t)v10053;
	i8 v10055 = (i8)(intptr_t)(f126_MidAsmtext);
	i8 v10056;

	((void(*)(i8* /* m */, i8 /* text */))(intptr_t)v10055)(&v10056, v10054);
	i8 v10057 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10057)(v10056);

	i8 v10058 = (i8)(intptr_t)(ws+3248);
	i8 v10059 = *(i8*)(intptr_t)v10058;
	i8 v10060 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v10060)(v10059);

endsub:;
}
	void f129_MidAsmvalue(i8* /* m */, i4 /* value */);
	void f256_Generate(i8 /* statement */);

// reduce_115 workspace at ws+3328 length ws+0
void f425_reduce_115(void) {

	i8 v10061 = (i8)(intptr_t)(ws+3248);
	i4 v10062 = *(i4*)(intptr_t)v10061;
	i8 v10063 = (i8)(intptr_t)(f129_MidAsmvalue);
	i8 v10064;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v10063)(&v10064, v10062);
	i8 v10065 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10065)(v10064);

endsub:;
}
const i1 c02_s0195[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x65,0x6d,0x69,0x74,0x20,0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x73,0x20,0x74,0x6f,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x73,0x2c,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x73,0x2c,0x20,0x6f,0x72,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x73,0 };
	void f76_SimpleError(i8 /* message */);

// bad_reference workspace at ws+3328 length ws+0
void f427_bad_reference(void) {

	i8 v10066 = (i8)(intptr_t)c02_s0195;
	i8 v10067 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10067)(v10066);

endsub:;
}
	void f228_IsSubroutine(i1* /* result */, i8 /* type */);
	void f202_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	void f117_MidAsmsubref(i8* /* m */, i8 /* subr */);
	void f256_Generate(i8 /* statement */);
	void f427_bad_reference(void);
	void f152_MidAsmsymbol(i8* /* m */, i8 /* sym */);
	void f256_Generate(i8 /* statement */);
	void f129_MidAsmvalue(i8* /* m */, i4 /* value */);
	void f256_Generate(i8 /* statement */);
	void f427_bad_reference(void);

// reduce_116 workspace at ws+3328 length ws+0
void f426_reduce_116(void) {


	i8 v10068 = (i8)(intptr_t)(ws+3248);
	i8 v10069 = *(i8*)(intptr_t)v10068;
	i8 v10070 = v10069+(+32);
	i1 v10071 = *(i1*)(intptr_t)v10070;

	if (v10071 != +30) goto c02_0728;

	i8 v10072 = (i8)(intptr_t)(ws+3248);
	i8 v10073 = *(i8*)(intptr_t)v10072;
	i8 v10074 = *(i8*)(intptr_t)v10073;
	i8 v10075 = (i8)(intptr_t)(f228_IsSubroutine);
	i1 v10076;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v10075)(&v10076, v10074);
	i1 v10077 = (i1)+0;
	if (v10076==v10077) goto c02_072d; else goto c02_072c;

c02_072c:;

	i8 v10078 = (i8)(intptr_t)(ws+40);
	i8 v10079 = *(i8*)(intptr_t)v10078;
	i8 v10080 = (i8)(intptr_t)(ws+3248);
	i8 v10081 = *(i8*)(intptr_t)v10080;
	i8 v10082 = *(i8*)(intptr_t)v10081;
	i8 v10083 = *(i8*)(intptr_t)v10082;
	i8 v10084 = (i8)(intptr_t)(f202_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v10084)(v10083, v10079);

	i8 v10085 = (i8)(intptr_t)(ws+3248);
	i8 v10086 = *(i8*)(intptr_t)v10085;
	i8 v10087 = *(i8*)(intptr_t)v10086;
	i8 v10088 = *(i8*)(intptr_t)v10087;
	i8 v10089 = (i8)(intptr_t)(f117_MidAsmsubref);
	i8 v10090;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v10089)(&v10090, v10088);
	i8 v10091 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10091)(v10090);

	goto c02_0729;

c02_072d:;

	i8 v10092 = (i8)(intptr_t)(f427_bad_reference);

	((void(*)(void))(intptr_t)v10092)();

c02_0729:;

	goto c02_0727;

c02_0728:;

	if (v10071 != +28) goto c02_072e;

	i8 v10093 = (i8)(intptr_t)(ws+3248);
	i8 v10094 = *(i8*)(intptr_t)v10093;
	i8 v10095 = (i8)(intptr_t)(f152_MidAsmsymbol);
	i8 v10096;

	((void(*)(i8* /* m */, i8 /* sym */))(intptr_t)v10095)(&v10096, v10094);
	i8 v10097 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10097)(v10096);

	goto c02_0727;

c02_072e:;

	if (v10071 != +7) goto c02_072f;

	i8 v10098 = (i8)(intptr_t)(ws+3248);
	i8 v10099 = *(i8*)(intptr_t)v10098;
	i4 v10100 = *(i4*)(intptr_t)v10099;
	i8 v10101 = (i8)(intptr_t)(f129_MidAsmvalue);
	i8 v10102;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v10101)(&v10102, v10100);
	i8 v10103 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10103)(v10102);

	goto c02_0727;

c02_072f:;

	i8 v10104 = (i8)(intptr_t)(f427_bad_reference);

	((void(*)(void))(intptr_t)v10104)();

c02_0727:;


endsub:;
}
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_122 workspace at ws+3328 length ws+0
void f428_reduce_122(void) {

	i1 v10105 = (i1)+26;
	i8 v10106 = (i8)(intptr_t)(ws+3264);
	i8 v10107 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10107)(v10106, v10105);

endsub:;
}
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_126 workspace at ws+3328 length ws+0
void f429_reduce_126(void) {

	i1 v10108 = (i1)+22;
	i8 v10109 = (i8)(intptr_t)(ws+3248);
	i8 v10110 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10110)(v10109, v10108);

endsub:;
}
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_127 workspace at ws+3328 length ws+0
void f430_reduce_127(void) {

	i1 v10111 = (i1)+25;
	i8 v10112 = (i8)(intptr_t)(ws+3280);
	i8 v10113 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10113)(v10112, v10111);

	i1 v10114 = (i1)+22;
	i8 v10115 = (i8)(intptr_t)(ws+3248);
	i8 v10116 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10116)(v10115, v10114);

endsub:;
}
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_128 workspace at ws+3328 length ws+0
void f431_reduce_128(void) {

	i1 v10117 = (i1)+22;
	i8 v10118 = (i8)(intptr_t)(ws+3248);
	i8 v10119 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10119)(v10118, v10117);

endsub:;
}
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_129 workspace at ws+3328 length ws+0
void f432_reduce_129(void) {

	i1 v10120 = (i1)+22;
	i8 v10121 = (i8)(intptr_t)(ws+3248);
	i8 v10122 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10122)(v10121, v10120);

endsub:;
}
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_135 workspace at ws+3328 length ws+0
void f433_reduce_135(void) {

	i1 v10123 = (i1)+45;
	i8 v10124 = (i8)(intptr_t)(ws+3256);
	i8 v10125 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10125)(v10124, v10123);

endsub:;
}
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_138 workspace at ws+3328 length ws+0
void f434_reduce_138(void) {

	i1 v10126 = (i1)+45;
	i8 v10127 = (i8)(intptr_t)(ws+3256);
	i8 v10128 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10128)(v10127, v10126);

endsub:;
}

// reduce_default workspace at ws+3328 length ws+0
void f435_reduce_default(void) {

endsub:;
}
	void f308_reduce_0(void);
	void f309_reduce_1(void);
	void f310_reduce_2(void);
	void f311_reduce_3(void);
	void f312_reduce_4(void);
	void f313_reduce_5(void);
	void f314_reduce_6(void);
	void f315_reduce_7(void);
	void f316_reduce_8(void);
	void f317_reduce_9(void);
	void f318_reduce_10(void);
	void f319_reduce_11(void);
	void f320_reduce_12(void);
	void f321_reduce_13(void);
	void f322_reduce_14(void);
	void f323_reduce_15(void);
	void f324_reduce_16(void);
	void f325_reduce_17(void);
	void f326_reduce_18(void);
	void f327_reduce_19(void);
	void f328_reduce_20(void);
	void f329_reduce_21(void);
	void f330_reduce_22(void);
	void f331_reduce_23(void);
	void f332_reduce_24(void);
	void f333_reduce_25(void);
	void f334_reduce_26(void);
	void f335_reduce_27(void);
	void f336_reduce_28(void);
	void f337_reduce_29(void);
	void f338_reduce_30(void);
	void f339_reduce_31(void);
	void f340_reduce_32(void);
	void f341_reduce_33(void);
	void f342_reduce_34(void);
	void f343_reduce_35(void);
	void f344_reduce_36(void);
	void f345_reduce_37(void);
	void f346_reduce_38(void);
	void f347_reduce_39(void);
	void f348_reduce_40(void);
	void f349_reduce_41(void);
	void f350_reduce_42(void);
	void f351_reduce_43(void);
	void f352_reduce_44(void);
	void f353_reduce_45(void);
	void f354_reduce_46(void);
	void f355_reduce_47(void);
	void f356_reduce_48(void);
	void f357_reduce_49(void);
	void f358_reduce_50(void);
	void f359_reduce_51(void);
	void f360_reduce_52(void);
	void f361_reduce_53(void);
	void f363_reduce_54(void);
	void f364_reduce_55(void);
	void f365_reduce_56(void);
	void f366_reduce_57(void);
	void f367_reduce_58(void);
	void f368_reduce_59(void);
	void f369_reduce_60(void);
	void f370_reduce_61(void);
	void f371_reduce_62(void);
	void f372_reduce_63(void);
	void f373_reduce_64(void);
	void f374_reduce_65(void);
	void f375_reduce_66(void);
	void f376_reduce_67(void);
	void f377_reduce_68(void);
	void f378_reduce_69(void);
	void f379_reduce_70(void);
	void f380_reduce_71(void);
	void f381_reduce_72(void);
	void f382_reduce_73(void);
	void f383_reduce_74(void);
	void f384_reduce_75(void);
	void f385_reduce_76(void);
	void f386_reduce_77(void);
	void f387_reduce_78(void);
	void f388_reduce_79(void);
	void f389_reduce_80(void);
	void f390_reduce_81(void);
	void f391_reduce_82(void);
	void f392_reduce_83(void);
	void f393_reduce_84(void);
	void f394_reduce_85(void);
	void f395_reduce_86(void);
	void f397_reduce_87(void);
	void f398_reduce_88(void);
	void f399_reduce_89(void);
	void f400_reduce_90(void);
	void f401_reduce_91(void);
	void f402_reduce_92(void);
	void f403_reduce_93(void);
	void f404_reduce_94(void);
	void f405_reduce_95(void);
	void f406_reduce_96(void);
	void f407_reduce_97(void);
	void f408_reduce_98(void);
	void f409_reduce_99(void);
	void f410_reduce_100(void);
	void f411_reduce_101(void);
	void f412_reduce_102(void);
	void f413_reduce_103(void);
	void f414_reduce_104(void);
	void f415_reduce_105(void);
	void f416_reduce_106(void);
	void f417_reduce_107(void);
	void f418_reduce_108(void);
	void f419_reduce_109(void);
	void f420_reduce_110(void);
	void f421_reduce_111(void);
	void f422_reduce_112(void);
	void f423_reduce_113(void);
	void f424_reduce_114(void);
	void f425_reduce_115(void);
	void f426_reduce_116(void);
	void f435_reduce_default(void);
	void f435_reduce_default(void);
	void f435_reduce_default(void);
	void f435_reduce_default(void);
	void f435_reduce_default(void);
	void f428_reduce_122(void);
	void f435_reduce_default(void);
	void f435_reduce_default(void);
	void f435_reduce_default(void);
	void f429_reduce_126(void);
	void f430_reduce_127(void);
	void f431_reduce_128(void);
	void f432_reduce_129(void);
	void f435_reduce_default(void);
	void f435_reduce_default(void);
	void f435_reduce_default(void);
	void f435_reduce_default(void);
	void f435_reduce_default(void);
	void f433_reduce_135(void);
	void f435_reduce_default(void);
	void f435_reduce_default(void);
	void f434_reduce_138(void);
static data f306_yy_reduce_s0730[] = {

	{ .ptr = (void*)f308_reduce_0 },

	{ .ptr = (void*)f309_reduce_1 },

	{ .ptr = (void*)f310_reduce_2 },

	{ .ptr = (void*)f311_reduce_3 },

	{ .ptr = (void*)f312_reduce_4 },

	{ .ptr = (void*)f313_reduce_5 },

	{ .ptr = (void*)f314_reduce_6 },

	{ .ptr = (void*)f315_reduce_7 },

	{ .ptr = (void*)f316_reduce_8 },

	{ .ptr = (void*)f317_reduce_9 },

	{ .ptr = (void*)f318_reduce_10 },

	{ .ptr = (void*)f319_reduce_11 },

	{ .ptr = (void*)f320_reduce_12 },

	{ .ptr = (void*)f321_reduce_13 },

	{ .ptr = (void*)f322_reduce_14 },

	{ .ptr = (void*)f323_reduce_15 },

	{ .ptr = (void*)f324_reduce_16 },

	{ .ptr = (void*)f325_reduce_17 },

	{ .ptr = (void*)f326_reduce_18 },

	{ .ptr = (void*)f327_reduce_19 },

	{ .ptr = (void*)f328_reduce_20 },

	{ .ptr = (void*)f329_reduce_21 },

	{ .ptr = (void*)f330_reduce_22 },

	{ .ptr = (void*)f331_reduce_23 },

	{ .ptr = (void*)f332_reduce_24 },

	{ .ptr = (void*)f333_reduce_25 },

	{ .ptr = (void*)f334_reduce_26 },

	{ .ptr = (void*)f335_reduce_27 },

	{ .ptr = (void*)f336_reduce_28 },

	{ .ptr = (void*)f337_reduce_29 },

	{ .ptr = (void*)f338_reduce_30 },

	{ .ptr = (void*)f339_reduce_31 },

	{ .ptr = (void*)f340_reduce_32 },

	{ .ptr = (void*)f341_reduce_33 },

	{ .ptr = (void*)f342_reduce_34 },

	{ .ptr = (void*)f343_reduce_35 },

	{ .ptr = (void*)f344_reduce_36 },

	{ .ptr = (void*)f345_reduce_37 },

	{ .ptr = (void*)f346_reduce_38 },

	{ .ptr = (void*)f347_reduce_39 },

	{ .ptr = (void*)f348_reduce_40 },

	{ .ptr = (void*)f349_reduce_41 },

	{ .ptr = (void*)f350_reduce_42 },

	{ .ptr = (void*)f351_reduce_43 },

	{ .ptr = (void*)f352_reduce_44 },

	{ .ptr = (void*)f353_reduce_45 },

	{ .ptr = (void*)f354_reduce_46 },

	{ .ptr = (void*)f355_reduce_47 },

	{ .ptr = (void*)f356_reduce_48 },

	{ .ptr = (void*)f357_reduce_49 },

	{ .ptr = (void*)f358_reduce_50 },

	{ .ptr = (void*)f359_reduce_51 },

	{ .ptr = (void*)f360_reduce_52 },

	{ .ptr = (void*)f361_reduce_53 },

	{ .ptr = (void*)f363_reduce_54 },

	{ .ptr = (void*)f364_reduce_55 },

	{ .ptr = (void*)f365_reduce_56 },

	{ .ptr = (void*)f366_reduce_57 },

	{ .ptr = (void*)f367_reduce_58 },

	{ .ptr = (void*)f368_reduce_59 },

	{ .ptr = (void*)f369_reduce_60 },

	{ .ptr = (void*)f370_reduce_61 },

	{ .ptr = (void*)f371_reduce_62 },

	{ .ptr = (void*)f372_reduce_63 },

	{ .ptr = (void*)f373_reduce_64 },

	{ .ptr = (void*)f374_reduce_65 },

	{ .ptr = (void*)f375_reduce_66 },

	{ .ptr = (void*)f376_reduce_67 },

	{ .ptr = (void*)f377_reduce_68 },

	{ .ptr = (void*)f378_reduce_69 },

	{ .ptr = (void*)f379_reduce_70 },

	{ .ptr = (void*)f380_reduce_71 },

	{ .ptr = (void*)f381_reduce_72 },

	{ .ptr = (void*)f382_reduce_73 },

	{ .ptr = (void*)f383_reduce_74 },

	{ .ptr = (void*)f384_reduce_75 },

	{ .ptr = (void*)f385_reduce_76 },

	{ .ptr = (void*)f386_reduce_77 },

	{ .ptr = (void*)f387_reduce_78 },

	{ .ptr = (void*)f388_reduce_79 },

	{ .ptr = (void*)f389_reduce_80 },

	{ .ptr = (void*)f390_reduce_81 },

	{ .ptr = (void*)f391_reduce_82 },

	{ .ptr = (void*)f392_reduce_83 },

	{ .ptr = (void*)f393_reduce_84 },

	{ .ptr = (void*)f394_reduce_85 },

	{ .ptr = (void*)f395_reduce_86 },

	{ .ptr = (void*)f397_reduce_87 },

	{ .ptr = (void*)f398_reduce_88 },

	{ .ptr = (void*)f399_reduce_89 },

	{ .ptr = (void*)f400_reduce_90 },

	{ .ptr = (void*)f401_reduce_91 },

	{ .ptr = (void*)f402_reduce_92 },

	{ .ptr = (void*)f403_reduce_93 },

	{ .ptr = (void*)f404_reduce_94 },

	{ .ptr = (void*)f405_reduce_95 },

	{ .ptr = (void*)f406_reduce_96 },

	{ .ptr = (void*)f407_reduce_97 },

	{ .ptr = (void*)f408_reduce_98 },

	{ .ptr = (void*)f409_reduce_99 },

	{ .ptr = (void*)f410_reduce_100 },

	{ .ptr = (void*)f411_reduce_101 },

	{ .ptr = (void*)f412_reduce_102 },

	{ .ptr = (void*)f413_reduce_103 },

	{ .ptr = (void*)f414_reduce_104 },

	{ .ptr = (void*)f415_reduce_105 },

	{ .ptr = (void*)f416_reduce_106 },

	{ .ptr = (void*)f417_reduce_107 },

	{ .ptr = (void*)f418_reduce_108 },

	{ .ptr = (void*)f419_reduce_109 },

	{ .ptr = (void*)f420_reduce_110 },

	{ .ptr = (void*)f421_reduce_111 },

	{ .ptr = (void*)f422_reduce_112 },

	{ .ptr = (void*)f423_reduce_113 },

	{ .ptr = (void*)f424_reduce_114 },

	{ .ptr = (void*)f425_reduce_115 },

	{ .ptr = (void*)f426_reduce_116 },

	{ .ptr = (void*)f435_reduce_default },

	{ .ptr = (void*)f435_reduce_default },

	{ .ptr = (void*)f435_reduce_default },

	{ .ptr = (void*)f435_reduce_default },

	{ .ptr = (void*)f435_reduce_default },

	{ .ptr = (void*)f428_reduce_122 },

	{ .ptr = (void*)f435_reduce_default },

	{ .ptr = (void*)f435_reduce_default },

	{ .ptr = (void*)f435_reduce_default },

	{ .ptr = (void*)f429_reduce_126 },

	{ .ptr = (void*)f430_reduce_127 },

	{ .ptr = (void*)f431_reduce_128 },

	{ .ptr = (void*)f432_reduce_129 },

	{ .ptr = (void*)f435_reduce_default },

	{ .ptr = (void*)f435_reduce_default },

	{ .ptr = (void*)f435_reduce_default },

	{ .ptr = (void*)f435_reduce_default },

	{ .ptr = (void*)f435_reduce_default },

	{ .ptr = (void*)f433_reduce_135 },

	{ .ptr = (void*)f435_reduce_default },

	{ .ptr = (void*)f435_reduce_default },

	{ .ptr = (void*)f434_reduce_138 },

};
	void f305_CopyMinor(i8 /* dest */, i8 /* src */);

// yy_reduce workspace at ws+3232 length ws+94
void f306_yy_reduce(i2* p7158 /* yyact */, i1 p7159 /* yylookahead */, i2 p7160 /* yyruleno */) {
	*(i2*)(intptr_t)(ws+3232) = p7160; /*yyruleno */
	*(i1*)(intptr_t)(ws+3234) = p7159; /*yylookahead */

	i8 v7161 = (i8)(intptr_t)((i1*)f3___main_s05d4);
	i8 v7162 = (i8)(intptr_t)(ws+3232);
	i2 v7163 = *(i2*)(intptr_t)v7162;
	i1 v7164 = v7163;
	i8 v7165 = v7164;
	i8 v7166 = v7161+v7165;
	i1 v7167 = *(i1*)(intptr_t)v7166;
	i8 v7168 = (i8)(intptr_t)(ws+3238);
	*(i1*)(intptr_t)v7168 = v7167;

	i8 v7169 = (i8)(intptr_t)(ws+1568);
	i8 v7170 = *(i8*)(intptr_t)v7169;
	i8 v7171 = (i8)(intptr_t)(ws+3176);
	if (v7170==v7171) goto c02_05d8; else goto c02_05d9;

c02_05d8:;

	i8 v7172 = (i8)(intptr_t)(f303_yy_stack_overflow);

	((void(*)(void))(intptr_t)v7172)();

c02_05d9:;

c02_05d5:;

	i8 v7173 = (i8)(intptr_t)(ws+3248);
	i8 v7174 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v7174 = v7173;

	i8 v7175 = (i8)(intptr_t)(ws+3238);
	i1 v7176 = *(i1*)(intptr_t)v7175;
	i8 v7177 = (i8)(intptr_t)(ws+3320);
	*(i1*)(intptr_t)v7177 = v7176;

c02_05dc:;

	i8 v7178 = (i8)(intptr_t)(ws+3320);
	i1 v7179 = *(i1*)(intptr_t)v7178;
	i1 v7180 = (i1)+0;
	if (v7179==v7180) goto c02_05df; else goto c02_05de;

c02_05de:;

	i8 v7181 = (i8)(intptr_t)(ws+1568);
	i8 v7182 = *(i8*)(intptr_t)v7181;
	i8 v7183 = v7182+(+8);
	i8 v7184 = (i8)(intptr_t)(ws+3312);
	i8 v7185 = *(i8*)(intptr_t)v7184;
	i8 v7186 = (i8)(intptr_t)(f305_CopyMinor);

	((void(*)(i8 /* dest */, i8 /* src */))(intptr_t)v7186)(v7185, v7183);

	i8 v7187 = (i8)(intptr_t)(ws+1568);
	i8 v7188 = *(i8*)(intptr_t)v7187;
	i8 v7189 = v7188+(-16);
	i8 v7190 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v7190 = v7189;

	i8 v7191 = (i8)(intptr_t)(ws+3312);
	i8 v7192 = *(i8*)(intptr_t)v7191;
	i8 v7193 = v7192+(+8);
	i8 v7194 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v7194 = v7193;

	i8 v7195 = (i8)(intptr_t)(ws+3320);
	i1 v7196 = *(i1*)(intptr_t)v7195;
	i1 v7197 = v7196+(-1);
	i8 v7198 = (i8)(intptr_t)(ws+3320);
	*(i1*)(intptr_t)v7198 = v7197;

	goto c02_05dc;

c02_05df:;
































































































































	i8 v10129 = (i8)(intptr_t)((i1*)f306_yy_reduce_s0730);
	i8 v10130 = (i8)(intptr_t)(ws+3232);
	i2 v10131 = *(i2*)(intptr_t)v10130;
	i1 v10132 = v10131;
	i8 v10133 = v10132;
	i1 v10134 = (i1)+3;
	i8 v10135 = ((i8)v10133)<<v10134;
	i8 v10136 = v10129+v10135;
	i8 v10137 = *(i8*)(intptr_t)v10136;

	((void(*)(void))(intptr_t)v10137)();

	i8 v10138 = (i8)(intptr_t)(ws+3240);
	i8 v10139 = (i8)(intptr_t)(ws+1568);
	i8 v10140 = *(i8*)(intptr_t)v10139;
	i8 v10141 = v10140+(+24);
	i8 v10142 = (i8)(intptr_t)(f305_CopyMinor);

	((void(*)(i8 /* dest */, i8 /* src */))(intptr_t)v10142)(v10141, v10138);

	i8 v10143 = (i8)(intptr_t)((i1*)f3___main_s05d3);
	i8 v10144 = (i8)(intptr_t)(ws+3232);
	i2 v10145 = *(i2*)(intptr_t)v10144;
	i1 v10146 = v10145;
	i8 v10147 = v10146;
	i8 v10148 = v10143+v10147;
	i1 v10149 = *(i1*)(intptr_t)v10148;
	i8 v10150 = (i8)(intptr_t)(ws+3321);
	*(i1*)(intptr_t)v10150 = v10149;

	i8 v10151 = (i8)(intptr_t)(ws+1568);
	i8 v10152 = *(i8*)(intptr_t)v10151;
	i2 v10153 = *(i2*)(intptr_t)v10152;
	i8 v10154 = (i8)(intptr_t)(ws+3322);
	*(i2*)(intptr_t)v10154 = v10153;

	i8 v10155 = (i8)(intptr_t)((i1*)f3___main_s05bb);
	i8 v10156 = (i8)(intptr_t)(ws+3322);
	i2 v10157 = *(i2*)(intptr_t)v10156;
	i1 v10158 = v10157;
	i8 v10159 = v10158;
	i1 v10160 = (i1)+1;
	i8 v10161 = ((i8)v10159)<<v10160;
	i8 v10162 = v10155+v10161;
	i2 v10163 = *(i2*)(intptr_t)v10162;
	i8 v10164 = (i8)(intptr_t)(ws+3236);
	*(i2*)(intptr_t)v10164 = v10163;

	i2 v10165 = (i2)+112;
	i8 v10166 = (i8)(intptr_t)(ws+3322);
	i2 v10167 = *(i2*)(intptr_t)v10166;
	if (v10165<v10167) goto c02_0735; else goto c02_0734;

c02_0734:;

	i8 v10168 = (i8)(intptr_t)((i1*)f3___main_s05ba);
	i8 v10169 = (i8)(intptr_t)(ws+3322);
	i2 v10170 = *(i2*)(intptr_t)v10169;
	i1 v10171 = v10170;
	i8 v10172 = v10171;
	i1 v10173 = (i1)+1;
	i8 v10174 = ((i8)v10172)<<v10173;
	i8 v10175 = v10168+v10174;
	i2 v10176 = *(i2*)(intptr_t)v10175;
	i8 v10177 = (i8)(intptr_t)(ws+3321);
	i1 v10178 = *(i1*)(intptr_t)v10177;
	i2 v10179 = v10178;
	i2 v10180 = v10176+v10179;
	i8 v10181 = (i8)(intptr_t)(ws+3324);
	*(i2*)(intptr_t)v10181 = v10180;

	i8 v10182 = (i8)(intptr_t)(ws+3324);
	i2 v10183 = *(i2*)(intptr_t)v10182;
	i2 v10184 = (i2)+0;
	if (v10183<v10184) goto c02_073e; else goto c02_0740;

c02_0740:;

	i8 v10185 = (i8)(intptr_t)(ws+3324);
	i2 v10186 = *(i2*)(intptr_t)v10185;
	i2 v10187 = (i2)+1271;
	if (v10186<v10187) goto c02_073f; else goto c02_073e;

c02_073f:;

	i8 v10188 = (i8)(intptr_t)((i1*)f3___main_s05b8);
	i8 v10189 = (i8)(intptr_t)(ws+3324);
	i2 v10190 = *(i2*)(intptr_t)v10189;
	i8 v10191 = v10190;
	i8 v10192 = v10188+v10191;
	i1 v10193 = *(i1*)(intptr_t)v10192;
	i8 v10194 = (i8)(intptr_t)(ws+3321);
	i1 v10195 = *(i1*)(intptr_t)v10194;
	if (v10193==v10195) goto c02_073d; else goto c02_073e;

c02_073d:;

	i8 v10196 = (i8)(intptr_t)((i1*)f3___main_s05b7);
	i8 v10197 = (i8)(intptr_t)(ws+3324);
	i2 v10198 = *(i2*)(intptr_t)v10197;
	i8 v10199 = v10198;
	i1 v10200 = (i1)+1;
	i8 v10201 = ((i8)v10199)<<v10200;
	i8 v10202 = v10196+v10201;
	i2 v10203 = *(i2*)(intptr_t)v10202;
	i8 v10204 = (i8)(intptr_t)(ws+3236);
	*(i2*)(intptr_t)v10204 = v10203;

c02_073e:;

c02_0736:;

c02_0735:;

c02_0731:;

	i8 v10205 = (i8)(intptr_t)(ws+1568);
	i8 v10206 = *(i8*)(intptr_t)v10205;
	i8 v10207 = v10206+(+16);
	i8 v10208 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v10208 = v10207;

	i8 v10209 = (i8)(intptr_t)(ws+3236);
	i2 v10210 = *(i2*)(intptr_t)v10209;
	i8 v10211 = (i8)(intptr_t)(ws+1568);
	i8 v10212 = *(i8*)(intptr_t)v10211;
	*(i2*)(intptr_t)v10212 = v10210;

	i8 v10213 = (i8)(intptr_t)(ws+3321);
	i1 v10214 = *(i1*)(intptr_t)v10213;
	i8 v10215 = (i8)(intptr_t)(ws+1568);
	i8 v10216 = *(i8*)(intptr_t)v10215;
	i8 v10217 = v10216+(+2);
	*(i1*)(intptr_t)v10217 = v10214;

endsub:;
	*p7158 = *(i2*)(intptr_t)(ws+3236);
}
	void f302_yy_pop_all_parser_stack(void);

// yy_parse_failed workspace at ws+3232 length ws+0
void f436_yy_parse_failed(void) {

	i8 v10218 = (i8)(intptr_t)(f302_yy_pop_all_parser_stack);

	((void(*)(void))(intptr_t)v10218)();

endsub:;
}
	void f74_StartError(void);
const i1 c02_s0196[] = { 0x75,0x6e,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// yy_syntax_error workspace at ws+3232 length ws+16
void f437_yy_syntax_error(i8 p10219 /* yyminor */, i1 p10220 /* yymajor */) {
	*(i1*)(intptr_t)(ws+3232) = p10220; /*yymajor */
	*(i8*)(intptr_t)(ws+3240) = p10219; /*yyminor */

	i8 v10221 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v10221)();

	i8 v10222 = (i8)(intptr_t)c02_s0196;
	i8 v10223 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10223)(v10222);

	i8 v10224 = (i8)(intptr_t)((i1*)f3___main_s05bc);
	i8 v10225 = (i8)(intptr_t)(ws+3232);
	i1 v10226 = *(i1*)(intptr_t)v10225;
	i8 v10227 = v10226;
	i1 v10228 = (i1)+3;
	i8 v10229 = ((i8)v10227)<<v10228;
	i8 v10230 = v10224+v10229;
	i8 v10231 = *(i8*)(intptr_t)v10230;
	i8 v10232 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10232)(v10231);

	i8 v10233 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v10233)();

endsub:;
}

// yy_accept workspace at ws+3232 length ws+0
void f438_yy_accept(void) {

endsub:;
}

// ParserInit workspace at ws+3208 length ws+0
void f439_ParserInit(void) {

	i1 v10234 = (i1)-1;
	i8 v10235 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v10235 = v10234;

	i8 v10236 = (i8)(intptr_t)(ws+1576);
	i8 v10237 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v10237 = v10236;

	i2 v10238 = (i2)+0;
	i8 v10239 = (i8)(intptr_t)(ws+1576);
	*(i2*)(intptr_t)v10239 = v10238;

	i1 v10240 = (i1)+0;
	i8 v10241 = (i8)(intptr_t)(ws+1578);
	*(i1*)(intptr_t)v10241 = v10240;

endsub:;
}
	void f301_yy_pop_parser_stack(void);

// ParserDeinit workspace at ws+3208 length ws+0
void f440_ParserDeinit(void) {

c02_0743:;

	i8 v10242 = (i8)(intptr_t)(ws+1568);
	i8 v10243 = *(i8*)(intptr_t)v10242;
	i8 v10244 = (i8)(intptr_t)(ws+1576);
	if (v10243==v10244) goto c02_0746; else goto c02_0745;

c02_0745:;

	i8 v10245 = (i8)(intptr_t)(f301_yy_pop_parser_stack);

	((void(*)(void))(intptr_t)v10245)();

	goto c02_0743;

c02_0746:;

endsub:;
}
	void f306_yy_reduce(i2* /* yyact */, i1 /* yylookahead */, i2 /* yyruleno */);
	void f303_yy_stack_overflow(void);
	void f305_CopyMinor(i8 /* dest */, i8 /* src */);
	void f438_yy_accept(void);
	void f437_yy_syntax_error(i8 /* yyminor */, i1 /* yymajor */);
	void f299_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f436_yy_parse_failed(void);

// ParserFeedToken workspace at ws+3208 length ws+20
void f441_ParserFeedToken(i8 p10246 /* yyminor */, i1 p10247 /* yymajor */) {
	*(i1*)(intptr_t)(ws+3208) = p10247; /*yymajor */
	*(i8*)(intptr_t)(ws+3216) = p10246; /*yyminor */

	i8 v10248 = (i8)(intptr_t)(ws+1568);
	i8 v10249 = *(i8*)(intptr_t)v10248;
	i2 v10250 = *(i2*)(intptr_t)v10249;
	i8 v10251 = (i8)(intptr_t)(ws+3224);
	*(i2*)(intptr_t)v10251 = v10250;

c02_0747:;

	i2 v10252 = (i2)+220;
	i8 v10253 = (i8)(intptr_t)(ws+3224);
	i2 v10254 = *(i2*)(intptr_t)v10253;
	if (v10252<v10254) goto c02_074d; else goto c02_074c;

c02_074c:;

	i8 v10255 = (i8)(intptr_t)((i1*)f3___main_s05b9);
	i8 v10256 = (i8)(intptr_t)(ws+3224);
	i2 v10257 = *(i2*)(intptr_t)v10256;
	i1 v10258 = v10257;
	i8 v10259 = v10258;
	i1 v10260 = (i1)+1;
	i8 v10261 = ((i8)v10259)<<v10260;
	i8 v10262 = v10255+v10261;
	i2 v10263 = *(i2*)(intptr_t)v10262;
	i8 v10264 = (i8)(intptr_t)(ws+3208);
	i1 v10265 = *(i1*)(intptr_t)v10264;
	i2 v10266 = v10265;
	i2 v10267 = v10263+v10266;
	i8 v10268 = (i8)(intptr_t)(ws+3226);
	*(i2*)(intptr_t)v10268 = v10267;

	i8 v10269 = (i8)(intptr_t)((i1*)f3___main_s05b8);
	i8 v10270 = (i8)(intptr_t)(ws+3226);
	i2 v10271 = *(i2*)(intptr_t)v10270;
	i8 v10272 = v10271;
	i8 v10273 = v10269+v10272;
	i1 v10274 = *(i1*)(intptr_t)v10273;
	i8 v10275 = (i8)(intptr_t)(ws+3208);
	i1 v10276 = *(i1*)(intptr_t)v10275;
	if (v10274==v10276) goto c02_0752; else goto c02_0751;

c02_0751:;

	i8 v10277 = (i8)(intptr_t)((i1*)f3___main_s05bb);
	i8 v10278 = (i8)(intptr_t)(ws+3224);
	i2 v10279 = *(i2*)(intptr_t)v10278;
	i1 v10280 = v10279;
	i8 v10281 = v10280;
	i1 v10282 = (i1)+1;
	i8 v10283 = ((i8)v10281)<<v10282;
	i8 v10284 = v10277+v10283;
	i2 v10285 = *(i2*)(intptr_t)v10284;
	i8 v10286 = (i8)(intptr_t)(ws+3224);
	*(i2*)(intptr_t)v10286 = v10285;

	goto c02_074e;

c02_0752:;

	i8 v10287 = (i8)(intptr_t)((i1*)f3___main_s05b7);
	i8 v10288 = (i8)(intptr_t)(ws+3226);
	i2 v10289 = *(i2*)(intptr_t)v10288;
	i8 v10290 = v10289;
	i1 v10291 = (i1)+1;
	i8 v10292 = ((i8)v10290)<<v10291;
	i8 v10293 = v10287+v10292;
	i2 v10294 = *(i2*)(intptr_t)v10293;
	i8 v10295 = (i8)(intptr_t)(ws+3224);
	*(i2*)(intptr_t)v10295 = v10294;

c02_074e:;

c02_074d:;

c02_0749:;

	i8 v10296 = (i8)(intptr_t)(ws+3224);
	i2 v10297 = *(i2*)(intptr_t)v10296;
	i2 v10298 = (i2)+452;
	if (v10297<v10298) goto c02_0757; else goto c02_0756;

c02_0756:;

	i8 v10299 = (i8)(intptr_t)(ws+3224);
	i2 v10300 = *(i2*)(intptr_t)v10299;
	i2 v10301 = v10300+(-452);
	i8 v10302 = (i8)(intptr_t)(ws+3208);
	i1 v10303 = *(i1*)(intptr_t)v10302;
	i8 v10304 = (i8)(intptr_t)(f306_yy_reduce);
	i2 v10305;

	((void(*)(i2* /* yyact */, i1 /* yylookahead */, i2 /* yyruleno */))(intptr_t)v10304)(&v10305, v10303, v10301);
	i8 v10306 = (i8)(intptr_t)(ws+3224);
	*(i2*)(intptr_t)v10306 = v10305;

	goto c02_0753;

c02_0757:;

	i2 v10307 = (i2)+448;
	i8 v10308 = (i8)(intptr_t)(ws+3224);
	i2 v10309 = *(i2*)(intptr_t)v10308;
	if (v10307<v10309) goto c02_075b; else goto c02_075a;

c02_075a:;

	i8 v10310 = (i8)(intptr_t)(ws+1568);
	i8 v10311 = *(i8*)(intptr_t)v10310;
	i8 v10312 = (i8)(intptr_t)(ws+3176);
	if (v10311==v10312) goto c02_075f; else goto c02_0760;

c02_075f:;

	i8 v10313 = (i8)(intptr_t)(f303_yy_stack_overflow);

	((void(*)(void))(intptr_t)v10313)();

	goto endsub;

c02_0760:;

c02_075c:;

	i8 v10314 = (i8)(intptr_t)(ws+1568);
	i8 v10315 = *(i8*)(intptr_t)v10314;
	i8 v10316 = v10315+(+16);
	i8 v10317 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v10317 = v10316;

	i2 v10318 = (i2)+220;
	i8 v10319 = (i8)(intptr_t)(ws+3224);
	i2 v10320 = *(i2*)(intptr_t)v10319;
	if (v10318<v10320) goto c02_0764; else goto c02_0765;

c02_0764:;

	i8 v10321 = (i8)(intptr_t)(ws+3224);
	i2 v10322 = *(i2*)(intptr_t)v10321;
	i2 v10323 = v10322+(+142);
	i8 v10324 = (i8)(intptr_t)(ws+3224);
	*(i2*)(intptr_t)v10324 = v10323;

c02_0765:;

c02_0761:;

	i8 v10325 = (i8)(intptr_t)(ws+3224);
	i2 v10326 = *(i2*)(intptr_t)v10325;
	i8 v10327 = (i8)(intptr_t)(ws+1568);
	i8 v10328 = *(i8*)(intptr_t)v10327;
	*(i2*)(intptr_t)v10328 = v10326;

	i8 v10329 = (i8)(intptr_t)(ws+3208);
	i1 v10330 = *(i1*)(intptr_t)v10329;
	i8 v10331 = (i8)(intptr_t)(ws+1568);
	i8 v10332 = *(i8*)(intptr_t)v10331;
	i8 v10333 = v10332+(+2);
	*(i1*)(intptr_t)v10333 = v10330;

	i8 v10334 = (i8)(intptr_t)(ws+3216);
	i8 v10335 = *(i8*)(intptr_t)v10334;
	i8 v10336 = (i8)(intptr_t)(ws+1568);
	i8 v10337 = *(i8*)(intptr_t)v10336;
	i8 v10338 = v10337+(+8);
	i8 v10339 = (i8)(intptr_t)(f305_CopyMinor);

	((void(*)(i8 /* dest */, i8 /* src */))(intptr_t)v10339)(v10338, v10335);

	i8 v10340 = (i8)(intptr_t)(ws+3192);
	i1 v10341 = *(i1*)(intptr_t)v10340;
	i1 v10342 = (i1)+0;
	if ((s1)v10341<(s1)v10342) goto c02_076a; else goto c02_0769;

c02_0769:;

	i8 v10343 = (i8)(intptr_t)(ws+3192);
	i1 v10344 = *(i1*)(intptr_t)v10343;
	i1 v10345 = v10344+(-1);
	i8 v10346 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v10346 = v10345;

c02_076a:;

c02_0766:;

	goto c02_0748;

c02_075b:;

	i8 v10347 = (i8)(intptr_t)(ws+3224);
	i2 v10348 = *(i2*)(intptr_t)v10347;
	i2 v10349 = (i2)+450;
	if (v10348==v10349) goto c02_076d; else goto c02_076e;

c02_076d:;

	i8 v10350 = (i8)(intptr_t)(ws+1568);
	i8 v10351 = *(i8*)(intptr_t)v10350;
	i8 v10352 = v10351+(-16);
	i8 v10353 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v10353 = v10352;

	i8 v10354 = (i8)(intptr_t)(f438_yy_accept);

	((void(*)(void))(intptr_t)v10354)();

	goto c02_0748;

c02_076e:;

	i1 v10355 = (i1)+0;
	i8 v10356 = (i8)(intptr_t)(ws+3192);
	i1 v10357 = *(i1*)(intptr_t)v10356;
	if ((s1)v10355<(s1)v10357) goto c02_0773; else goto c02_0772;

c02_0772:;

	i8 v10358 = (i8)(intptr_t)(ws+3208);
	i1 v10359 = *(i1*)(intptr_t)v10358;
	i8 v10360 = (i8)(intptr_t)(ws+3216);
	i8 v10361 = *(i8*)(intptr_t)v10360;
	i8 v10362 = (i8)(intptr_t)(f437_yy_syntax_error);

	((void(*)(i8 /* yyminor */, i1 /* yymajor */))(intptr_t)v10362)(v10361, v10359);

c02_0773:;

c02_076f:;

	i1 v10363 = (i1)+3;
	i8 v10364 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v10364 = v10363;

	i8 v10365 = (i8)(intptr_t)(ws+3208);
	i1 v10366 = *(i1*)(intptr_t)v10365;
	i8 v10367 = (i8)(intptr_t)(ws+3216);
	i8 v10368 = *(i8*)(intptr_t)v10367;
	i8 v10369 = (i8)(intptr_t)(f299_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10369)(v10368, v10366);

	i8 v10370 = (i8)(intptr_t)(ws+3208);
	i1 v10371 = *(i1*)(intptr_t)v10370;
	i1 v10372 = (i1)+0;
	if (v10371==v10372) goto c02_0777; else goto c02_0778;

c02_0777:;

	i8 v10373 = (i8)(intptr_t)(f436_yy_parse_failed);

	((void(*)(void))(intptr_t)v10373)();

	i1 v10374 = (i1)-1;
	i8 v10375 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v10375 = v10374;

c02_0778:;

c02_0774:;

	goto c02_0748;

c02_0753:;

	i8 v10376 = (i8)(intptr_t)(ws+1568);
	i8 v10377 = *(i8*)(intptr_t)v10376;
	i8 v10378 = (i8)(intptr_t)(ws+1576);
	if (v10377==v10378) goto c02_077c; else goto c02_077d;

c02_077c:;

	goto c02_0748;

c02_077d:;

c02_0779:;

	goto c02_0747;

c02_0748:;

endsub:;
}
	void f38_GetFreeMemory(i8* /* i */);
	void f17_print_i16(i2 /* value */);
const i1 c02_s0197[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f12_print(i8 /* ptr */);

// PrintFreeMemory workspace at ws+3208 length ws+0
void f442_PrintFreeMemory(void) {

	i8 v10379 = (i8)(intptr_t)(f38_GetFreeMemory);
	i8 v10380;

	((void(*)(i8* /* i */))(intptr_t)v10379)(&v10380);
	i1 v10381 = (i1)+10;
	i8 v10382 = ((i8)v10380)>>v10381;
	i2 v10383 = v10382;
	i8 v10384 = (i8)(intptr_t)(f17_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v10384)(v10383);

	i8 v10385 = (i8)(intptr_t)c02_s0197;
	i8 v10386 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10386)(v10385);

endsub:;
}
const i1 c02_s0198[] = { 0x73,0x79,0x6e,0x74,0x61,0x78,0x20,0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x63,0x6f,0x77,0x63,0x6f,0x6d,0x20,0x5b,0x2d,0x49,0x70,0x61,0x74,0x68,0x5d,0x20,0x3c,0x69,0x6e,0x66,0x69,0x6c,0x65,0x3e,0x20,0x3c,0x6f,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x0a,0 };
	void f12_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// SyntaxError workspace at ws+3216 length ws+0
void f443_SyntaxError(void) {

	i8 v10387 = (i8)(intptr_t)c02_s0198;
	i8 v10388 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10388)(v10387);

	i8 v10389 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v10389)();

endsub:;
}
	void f24_ArgvInit(void);
	void f25_ArgvNext(i8* /* arg */);
	void f77_LexerAddIncludePath(i8 /* path */);
	void f443_SyntaxError(void);
	void f443_SyntaxError(void);
	void f443_SyntaxError(void);

// ParseArguments workspace at ws+3208 length ws+8
void f444_ParseArguments(void) {

	i8 v10390 = (i8)(intptr_t)(f24_ArgvInit);

	((void(*)(void))(intptr_t)v10390)();

c02_077e:;

	i8 v10391 = (i8)(intptr_t)(f25_ArgvNext);
	i8 v10392;

	((void(*)(i8* /* arg */))(intptr_t)v10391)(&v10392);
	i8 v10393 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v10393 = v10392;

	i8 v10394 = (i8)(intptr_t)(ws+3208);
	i8 v10395 = *(i8*)(intptr_t)v10394;
	i8 v10396 = (i8)+0;
	if (v10395==v10396) goto c02_0783; else goto c02_0784;

c02_0783:;

	goto c02_077f;

c02_0784:;

c02_0780:;

	i8 v10397 = (i8)(intptr_t)(ws+3208);
	i8 v10398 = *(i8*)(intptr_t)v10397;
	i1 v10399 = *(i1*)(intptr_t)v10398;
	i1 v10400 = (i1)+45;
	if (v10399==v10400) goto c02_0788; else goto c02_0789;

c02_0788:;

	i8 v10401 = (i8)(intptr_t)(ws+3208);
	i8 v10402 = *(i8*)(intptr_t)v10401;
	i8 v10403 = v10402+(+1);
	i8 v10404 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v10404 = v10403;

	i8 v10405 = (i8)(intptr_t)(ws+3208);
	i8 v10406 = *(i8*)(intptr_t)v10405;
	i1 v10407 = *(i1*)(intptr_t)v10406;
	i1 v10408 = (i1)+73;
	if (v10407==v10408) goto c02_078d; else goto c02_078e;

c02_078d:;

	i8 v10409 = (i8)(intptr_t)(ws+3208);
	i8 v10410 = *(i8*)(intptr_t)v10409;
	i8 v10411 = v10410+(+1);
	i8 v10412 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v10412 = v10411;

	i8 v10413 = (i8)(intptr_t)(ws+3208);
	i8 v10414 = *(i8*)(intptr_t)v10413;
	i8 v10415 = (i8)(intptr_t)(f77_LexerAddIncludePath);

	((void(*)(i8 /* path */))(intptr_t)v10415)(v10414);

	goto c02_078a;

c02_078e:;

	i8 v10416 = (i8)(intptr_t)(f443_SyntaxError);

	((void(*)(void))(intptr_t)v10416)();

c02_078a:;

	goto c02_0785;

c02_0789:;

	i8 v10417 = (i8)(intptr_t)(ws+24);
	i8 v10418 = *(i8*)(intptr_t)v10417;
	i8 v10419 = (i8)+0;
	if (v10418==v10419) goto c02_0792; else goto c02_0793;

c02_0792:;

	i8 v10420 = (i8)(intptr_t)(ws+3208);
	i8 v10421 = *(i8*)(intptr_t)v10420;
	i8 v10422 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v10422 = v10421;

	goto c02_078f;

c02_0793:;

	i8 v10423 = (i8)(intptr_t)(ws+32);
	i8 v10424 = *(i8*)(intptr_t)v10423;
	i8 v10425 = (i8)+0;
	if (v10424==v10425) goto c02_0796; else goto c02_0797;

c02_0796:;

	i8 v10426 = (i8)(intptr_t)(ws+3208);
	i8 v10427 = *(i8*)(intptr_t)v10426;
	i8 v10428 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v10428 = v10427;

	goto c02_078f;

c02_0797:;

	i8 v10429 = (i8)(intptr_t)(f443_SyntaxError);

	((void(*)(void))(intptr_t)v10429)();

c02_078f:;

c02_0785:;

	goto c02_077e;

c02_077f:;

	i8 v10430 = (i8)(intptr_t)(ws+24);
	i8 v10431 = *(i8*)(intptr_t)v10430;
	i8 v10432 = (i8)+0;
	if (v10431==v10432) goto c02_079d; else goto c02_079f;

c02_079f:;

	i8 v10433 = (i8)(intptr_t)(ws+32);
	i8 v10434 = *(i8*)(intptr_t)v10433;
	i8 v10435 = (i8)+0;
	if (v10434==v10435) goto c02_079d; else goto c02_079e;

c02_079d:;

	i8 v10436 = (i8)(intptr_t)(f443_SyntaxError);

	((void(*)(void))(intptr_t)v10436)();

c02_079e:;

c02_0798:;

endsub:;
}
const i1 c02_s0199[] = { 0x43,0x4f,0x57,0x46,0x45,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f442_PrintFreeMemory(void);
	void f444_ParseArguments(void);
const i1 c02_s019a[] = { 0 };
	void f77_LexerAddIncludePath(i8 /* path */);
	void f81_LexerIncludeFile(i8 /* path */);
	void f265_CreateMainSubroutine(void);
	void f239_ArchInitTypes(void);
	void f197_EmitterOpenfile(i8 /* filename */);
	void f199_EmitterDeclareSubroutine(i8 /* subr */);
	void f110_MidStartfile(i8* /* m */);
	void f256_Generate(i8 /* statement */);
	void f148_MidStartsub(i8* /* m */, i8 /* subr */);
	void f256_Generate(i8 /* statement */);
	void f439_ParserInit(void);
	void f82_LexerReadToken(i1* /* token */);
	void f72_InternalStrDup(i8* /* news */, i8 /* s */);
	void f72_InternalStrDup(i8* /* news */, i8 /* s */);
	void f441_ParserFeedToken(i8 /* yyminor */, i1 /* yymajor */);
	void f440_ParserDeinit(void);
	void f159_MidEndsub(i8* /* m */, i8 /* subr */);
	void f256_Generate(i8 /* statement */);
	void f266_ReportWorkspaces(i8 /* subr */);
	void f106_MidEndfile(i8* /* m */);
	void f256_Generate(i8 /* statement */);
	void f198_EmitterClosefile(void);
const i1 c02_s019b[] = { 0x64,0x6f,0x6e,0x65,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f442_PrintFreeMemory(void);

// __main workspace at ws+0 length ws+3208
void f3___main(void) {


	
*(i8*)(intptr_t)(ws+0) 
= (i8)(intptr_t) __lomem; 


	
*(i8*)(intptr_t)(ws+8) 
= (i8)(intptr_t) __himem; 



























































	i8 v1021 = (i8)+0;
	i8 v1022 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v1022 = v1021;

	i8 v1023 = (i8)+0;
	i8 v1024 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v1024 = v1023;

	i2 v1025 = (i2)+1;
	i8 v1026 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v1026 = v1025;

	i2 v1027 = (i2)+1;
	i8 v1028 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v1028 = v1027;

	i8 v1029 = (i8)+0;
	i8 v1030 = (i8)(intptr_t)(ws+88);
	*(i8*)(intptr_t)v1030 = v1029;

	i8 v1031 = (i8)(intptr_t)(ws+96);
	i8 v1032 = (i8)(intptr_t)(ws+224);
	*(i8*)(intptr_t)v1032 = v1031;




	i8 v1146 = (i8)+0;
	i8 v1147 = (i8)(intptr_t)(ws+232);
	*(i8*)(intptr_t)v1147 = v1146;



	i8 v1178 = (i8)+0;
	i8 v1179 = (i8)(intptr_t)(ws+240);
	*(i8*)(intptr_t)v1179 = v1178;




	i8 v1260 = (i8)+0;
	i8 v1261 = (i8)(intptr_t)(ws+248);
	*(i8*)(intptr_t)v1261 = v1260;

	i8 v1262 = (i8)+0;
	i8 v1263 = (i8)(intptr_t)(ws+256);
	*(i8*)(intptr_t)v1263 = v1262;

	i1 v1264 = (i1)+0;
	i8 v1265 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1265 = v1264;

	i1 v1266 = (i1)+0;
	i8 v1267 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1267 = v1266;








	i1 v1314 = (i1)+0;
	i8 v1315 = (i8)(intptr_t)(ws+925);
	*(i1*)(intptr_t)v1315 = v1314;









































































	i8 v3217 = (i8)+0;
	i8 v3218 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3218 = v3217;
































































































	i1 v5365 = (i1)+0;
	i8 v5366 = (i8)(intptr_t)(ws+1536);
	*(i1*)(intptr_t)v5366 = v5365;




































































	i8 v10437 = (i8)(intptr_t)c02_s0199;
	i8 v10438 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10438)(v10437);

	i8 v10439 = (i8)(intptr_t)(f442_PrintFreeMemory);

	((void(*)(void))(intptr_t)v10439)();

	i8 v10440 = (i8)(intptr_t)(f444_ParseArguments);

	((void(*)(void))(intptr_t)v10440)();

	i8 v10441 = (i8)(intptr_t)c02_s019a;
	i8 v10442 = (i8)(intptr_t)(f77_LexerAddIncludePath);

	((void(*)(i8 /* path */))(intptr_t)v10442)(v10441);

	i8 v10443 = (i8)(intptr_t)(ws+24);
	i8 v10444 = *(i8*)(intptr_t)v10443;
	i8 v10445 = (i8)(intptr_t)(f81_LexerIncludeFile);

	((void(*)(i8 /* path */))(intptr_t)v10445)(v10444);

	i8 v10446 = (i8)(intptr_t)(f265_CreateMainSubroutine);

	((void(*)(void))(intptr_t)v10446)();

	i8 v10447 = (i8)(intptr_t)(f239_ArchInitTypes);

	((void(*)(void))(intptr_t)v10447)();

	i8 v10448 = (i8)(intptr_t)(ws+32);
	i8 v10449 = *(i8*)(intptr_t)v10448;
	i8 v10450 = (i8)(intptr_t)(f197_EmitterOpenfile);

	((void(*)(i8 /* filename */))(intptr_t)v10450)(v10449);

	i8 v10451 = (i8)(intptr_t)(ws+40);
	i8 v10452 = *(i8*)(intptr_t)v10451;
	i8 v10453 = (i8)(intptr_t)(f199_EmitterDeclareSubroutine);

	((void(*)(i8 /* subr */))(intptr_t)v10453)(v10452);

	i8 v10454 = (i8)(intptr_t)(f110_MidStartfile);
	i8 v10455;

	((void(*)(i8* /* m */))(intptr_t)v10454)(&v10455);
	i8 v10456 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10456)(v10455);

	i8 v10457 = (i8)(intptr_t)(ws+40);
	i8 v10458 = *(i8*)(intptr_t)v10457;
	i8 v10459 = (i8)(intptr_t)(f148_MidStartsub);
	i8 v10460;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v10459)(&v10460, v10458);
	i8 v10461 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10461)(v10460);

	i8 v10462 = (i8)(intptr_t)(f439_ParserInit);

	((void(*)(void))(intptr_t)v10462)();

c02_07a0:;

	i8 v10463 = (i8)(intptr_t)(f82_LexerReadToken);
	i1 v10464;

	((void(*)(i1* /* token */))(intptr_t)v10463)(&v10464);
	i8 v10465 = (i8)(intptr_t)(ws+3193);
	*(i1*)(intptr_t)v10465 = v10464;

	i8 v10466 = (i8)(intptr_t)(ws+3193);
	i1 v10467 = *(i1*)(intptr_t)v10466;

	if (v10467 != +34) goto c02_07a3;

	i8 v10468 = (i8)(intptr_t)(ws+396);
	i4 v10469 = *(i4*)(intptr_t)v10468;
	i8 v10470 = (i8)(intptr_t)(ws+3200);
	*(i4*)(intptr_t)v10470 = v10469;

	goto c02_07a2;

c02_07a3:;

	if (v10467 != +33) goto c02_07a4;

	i8 v10471 = (i8)(intptr_t)(ws+265);
	i8 v10472 = (i8)(intptr_t)(f72_InternalStrDup);
	i8 v10473;

	((void(*)(i8* /* news */, i8 /* s */))(intptr_t)v10472)(&v10473, v10471);
	i8 v10474 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v10474 = v10473;

	goto c02_07a2;

c02_07a4:;

	if (v10467 != +41) goto c02_07a5;

	i8 v10475 = (i8)(intptr_t)(ws+265);
	i8 v10476 = (i8)(intptr_t)(f72_InternalStrDup);
	i8 v10477;

	((void(*)(i8* /* news */, i8 /* s */))(intptr_t)v10476)(&v10477, v10475);
	i8 v10478 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v10478 = v10477;

	goto c02_07a2;

c02_07a5:;

	i4 v10479 = (i4)+0;
	i8 v10480 = (i8)(intptr_t)(ws+3200);
	*(i4*)(intptr_t)v10480 = v10479;

c02_07a2:;


	i8 v10481 = (i8)(intptr_t)(ws+3193);
	i1 v10482 = *(i1*)(intptr_t)v10481;
	i8 v10483 = (i8)(intptr_t)(ws+3200);
	i8 v10484 = (i8)(intptr_t)(f441_ParserFeedToken);

	((void(*)(i8 /* yyminor */, i1 /* yymajor */))(intptr_t)v10484)(v10483, v10482);

	i8 v10485 = (i8)(intptr_t)(ws+3193);
	i1 v10486 = *(i1*)(intptr_t)v10485;
	i1 v10487 = (i1)+0;
	if (v10486==v10487) goto c02_07a9; else goto c02_07aa;

c02_07a9:;

	goto c02_07a1;

c02_07aa:;

c02_07a6:;

	goto c02_07a0;

c02_07a1:;

	i8 v10488 = (i8)(intptr_t)(f440_ParserDeinit);

	((void(*)(void))(intptr_t)v10488)();

	i8 v10489 = (i8)(intptr_t)(ws+40);
	i8 v10490 = *(i8*)(intptr_t)v10489;
	i8 v10491 = (i8)(intptr_t)(f159_MidEndsub);
	i8 v10492;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v10491)(&v10492, v10490);
	i8 v10493 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10493)(v10492);

	i8 v10494 = (i8)(intptr_t)(ws+40);
	i8 v10495 = *(i8*)(intptr_t)v10494;
	i8 v10496 = (i8)(intptr_t)(f266_ReportWorkspaces);

	((void(*)(i8 /* subr */))(intptr_t)v10496)(v10495);

	i8 v10497 = (i8)(intptr_t)(f106_MidEndfile);
	i8 v10498;

	((void(*)(i8* /* m */))(intptr_t)v10497)(&v10498);
	i8 v10499 = (i8)(intptr_t)(f256_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10499)(v10498);

	i8 v10500 = (i8)(intptr_t)(f198_EmitterClosefile);

	((void(*)(void))(intptr_t)v10500)();

	i8 v10501 = (i8)(intptr_t)c02_s019b;
	i8 v10502 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10502)(v10501);

	i8 v10503 = (i8)(intptr_t)(f442_PrintFreeMemory);

	((void(*)(void))(intptr_t)v10503)();

endsub:;
}
void cmain(void) {
	f3___main();
}
