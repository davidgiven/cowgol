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

// MidAsmgroupend workspace at ws+3408 length ws+8
void f104_MidAsmgroupend(i8* p2140 /* m */) {

	i1 v2141 = (i1)+17;
	i8 v2142 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2143;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2142)(&v2143, v2141);
	i8 v2144 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v2144 = v2143;

endsub:;
	*p2140 = *(i8*)(intptr_t)(ws+3408);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidInit workspace at ws+3376 length ws+16
void f105_MidInit(i8* p2145 /* m */, i4 p2146 /* value */, i1 p2147 /* width */) {
	*(i1*)(intptr_t)(ws+3376) = p2147; /*width */
	*(i4*)(intptr_t)(ws+3380) = p2146; /*value */

	i8 v2148 = (i8)(intptr_t)(ws+3376);
	i1 v2149 = *(i1*)(intptr_t)v2148;
	i8 v2150 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v2151;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2150)(&v2151, v2149);
	i1 v2152 = v2151+(+7);
	i8 v2153 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2154;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2153)(&v2154, v2152);
	i8 v2155 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v2155 = v2154;

	i8 v2156 = (i8)(intptr_t)(ws+3380);
	i4 v2157 = *(i4*)(intptr_t)v2156;
	i8 v2158 = (i8)(intptr_t)(ws+3384);
	i8 v2159 = *(i8*)(intptr_t)v2158;
	*(i4*)(intptr_t)v2159 = v2157;

endsub:;
	*p2145 = *(i8*)(intptr_t)(ws+3384);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidWhencase workspace at ws+3328 length ws+24
void f107_MidWhencase(i8* p2182 /* m */, i2 p2183 /* falselabel */, i4 p2184 /* value */, i1 p2185 /* width */) {
	*(i1*)(intptr_t)(ws+3328) = p2185; /*width */
	*(i4*)(intptr_t)(ws+3332) = p2184; /*value */
	*(i2*)(intptr_t)(ws+3336) = p2183; /*falselabel */

	i8 v2186 = (i8)(intptr_t)(ws+3328);
	i1 v2187 = *(i1*)(intptr_t)v2186;
	i8 v2188 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v2189;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2188)(&v2189, v2187);
	i1 v2190 = v2189+(+81);
	i8 v2191 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2192;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2191)(&v2192, v2190);
	i8 v2193 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v2193 = v2192;

	i8 v2194 = (i8)(intptr_t)(ws+3332);
	i4 v2195 = *(i4*)(intptr_t)v2194;
	i8 v2196 = (i8)(intptr_t)(ws+3344);
	i8 v2197 = *(i8*)(intptr_t)v2196;
	*(i4*)(intptr_t)v2197 = v2195;

	i8 v2198 = (i8)(intptr_t)(ws+3336);
	i2 v2199 = *(i2*)(intptr_t)v2198;
	i8 v2200 = (i8)(intptr_t)(ws+3344);
	i8 v2201 = *(i8*)(intptr_t)v2200;
	i8 v2202 = v2201+(+4);
	*(i2*)(intptr_t)v2202 = v2199;

endsub:;
	*p2182 = *(i8*)(intptr_t)(ws+3344);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmvalue workspace at ws+3328 length ws+16
void f109_MidAsmvalue(i8* p2224 /* m */, i4 p2225 /* value */) {
	*(i4*)(intptr_t)(ws+3328) = p2225; /*value */

	i1 v2226 = (i1)+22;
	i8 v2227 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2228;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2227)(&v2228, v2226);
	i8 v2229 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v2229 = v2228;

	i8 v2230 = (i8)(intptr_t)(ws+3328);
	i4 v2231 = *(i4*)(intptr_t)v2230;
	i8 v2232 = (i8)(intptr_t)(ws+3336);
	i8 v2233 = *(i8*)(intptr_t)v2232;
	*(i4*)(intptr_t)v2233 = v2231;

endsub:;
	*p2224 = *(i8*)(intptr_t)(ws+3336);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBor workspace at ws+3328 length ws+32
void f110_MidBor(i8* p2234 /* m */, i1 p2235 /* negated */, i2 p2236 /* fallthrough */, i2 p2237 /* falselabel */, i2 p2238 /* truelabel */, i8 p2239 /* right */, i8 p2240 /* left */) {
	*(i8*)(intptr_t)(ws+3328) = p2240; /*left */
	*(i8*)(intptr_t)(ws+3336) = p2239; /*right */
	*(i2*)(intptr_t)(ws+3344) = p2238; /*truelabel */
	*(i2*)(intptr_t)(ws+3346) = p2237; /*falselabel */
	*(i2*)(intptr_t)(ws+3348) = p2236; /*fallthrough */
	*(i1*)(intptr_t)(ws+3350) = p2235; /*negated */

	i1 v2241 = (i1)+60;
	i8 v2242 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2243;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2242)(&v2243, v2241);
	i8 v2244 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v2244 = v2243;

	i8 v2245 = (i8)(intptr_t)(ws+3328);
	i8 v2246 = *(i8*)(intptr_t)v2245;
	i8 v2247 = (i8)(intptr_t)(ws+3352);
	i8 v2248 = *(i8*)(intptr_t)v2247;
	i8 v2249 = v2248+(+24);
	*(i8*)(intptr_t)v2249 = v2246;

	i8 v2250 = (i8)(intptr_t)(ws+3336);
	i8 v2251 = *(i8*)(intptr_t)v2250;
	i8 v2252 = (i8)(intptr_t)(ws+3352);
	i8 v2253 = *(i8*)(intptr_t)v2252;
	i8 v2254 = v2253+(+32);
	*(i8*)(intptr_t)v2254 = v2251;

	i8 v2255 = (i8)(intptr_t)(ws+3344);
	i2 v2256 = *(i2*)(intptr_t)v2255;
	i8 v2257 = (i8)(intptr_t)(ws+3352);
	i8 v2258 = *(i8*)(intptr_t)v2257;
	*(i2*)(intptr_t)v2258 = v2256;

	i8 v2259 = (i8)(intptr_t)(ws+3346);
	i2 v2260 = *(i2*)(intptr_t)v2259;
	i8 v2261 = (i8)(intptr_t)(ws+3352);
	i8 v2262 = *(i8*)(intptr_t)v2261;
	i8 v2263 = v2262+(+2);
	*(i2*)(intptr_t)v2263 = v2260;

	i8 v2264 = (i8)(intptr_t)(ws+3348);
	i2 v2265 = *(i2*)(intptr_t)v2264;
	i8 v2266 = (i8)(intptr_t)(ws+3352);
	i8 v2267 = *(i8*)(intptr_t)v2266;
	i8 v2268 = v2267+(+4);
	*(i2*)(intptr_t)v2268 = v2265;

	i8 v2269 = (i8)(intptr_t)(ws+3350);
	i1 v2270 = *(i1*)(intptr_t)v2269;
	i8 v2271 = (i8)(intptr_t)(ws+3352);
	i8 v2272 = *(i8*)(intptr_t)v2271;
	i8 v2273 = v2272+(+6);
	*(i1*)(intptr_t)v2273 = v2270;

endsub:;
	*p2234 = *(i8*)(intptr_t)(ws+3352);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEnd workspace at ws+3336 length ws+8
void f112_MidEnd(i8* p2296 /* m */) {

	i1 v2297 = (i1)+1;
	i8 v2298 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2299;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2298)(&v2299, v2297);
	i8 v2300 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v2300 = v2299;

endsub:;
	*p2296 = *(i8*)(intptr_t)(ws+3336);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmsymbol workspace at ws+3328 length ws+16
void f113_MidAsmsymbol(i8* p2301 /* m */, i8 p2302 /* sym */) {
	*(i8*)(intptr_t)(ws+3328) = p2302; /*sym */

	i1 v2303 = (i1)+20;
	i8 v2304 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2305;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2304)(&v2305, v2303);
	i8 v2306 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v2306 = v2305;

	i8 v2307 = (i8)(intptr_t)(ws+3328);
	i8 v2308 = *(i8*)(intptr_t)v2307;
	i8 v2309 = (i8)(intptr_t)(ws+3336);
	i8 v2310 = *(i8*)(intptr_t)v2309;
	*(i8*)(intptr_t)v2310 = v2308;

endsub:;
	*p2301 = *(i8*)(intptr_t)(ws+3336);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmsubref workspace at ws+3328 length ws+16
void f115_MidAsmsubref(i8* p2333 /* m */, i8 p2334 /* subr */) {
	*(i8*)(intptr_t)(ws+3328) = p2334; /*subr */

	i1 v2335 = (i1)+21;
	i8 v2336 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2337;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2336)(&v2337, v2335);
	i8 v2338 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v2338 = v2337;

	i8 v2339 = (i8)(intptr_t)(ws+3328);
	i8 v2340 = *(i8*)(intptr_t)v2339;
	i8 v2341 = (i8)(intptr_t)(ws+3336);
	i8 v2342 = *(i8*)(intptr_t)v2341;
	*(i8*)(intptr_t)v2342 = v2340;

endsub:;
	*p2333 = *(i8*)(intptr_t)(ws+3336);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidPair workspace at ws+3328 length ws+24
void f118_MidPair(i8* p2386 /* m */, i8 p2387 /* right */, i8 p2388 /* left */) {
	*(i8*)(intptr_t)(ws+3328) = p2388; /*left */
	*(i8*)(intptr_t)(ws+3336) = p2387; /*right */

	i1 v2389 = (i1)+25;
	i8 v2390 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2391;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2390)(&v2391, v2389);
	i8 v2392 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v2392 = v2391;

	i8 v2393 = (i8)(intptr_t)(ws+3328);
	i8 v2394 = *(i8*)(intptr_t)v2393;
	i8 v2395 = (i8)(intptr_t)(ws+3344);
	i8 v2396 = *(i8*)(intptr_t)v2395;
	i8 v2397 = v2396+(+24);
	*(i8*)(intptr_t)v2397 = v2394;

	i8 v2398 = (i8)(intptr_t)(ws+3336);
	i8 v2399 = *(i8*)(intptr_t)v2398;
	i8 v2400 = (i8)(intptr_t)(ws+3344);
	i8 v2401 = *(i8*)(intptr_t)v2400;
	i8 v2402 = v2401+(+32);
	*(i8*)(intptr_t)v2402 = v2399;

endsub:;
	*p2386 = *(i8*)(intptr_t)(ws+3344);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidCall workspace at ws+3376 length ws+32
void f119_MidCall(i8* p2403 /* m */, i8 p2404 /* subr */, i8 p2405 /* right */, i8 p2406 /* left */) {
	*(i8*)(intptr_t)(ws+3376) = p2406; /*left */
	*(i8*)(intptr_t)(ws+3384) = p2405; /*right */
	*(i8*)(intptr_t)(ws+3392) = p2404; /*subr */

	i1 v2407 = (i1)+29;
	i8 v2408 = (i8)(intptr_t)(f103_AllocateNewNode);
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
	i8 v2422 = *(i8*)(intptr_t)v2421;
	i8 v2423 = (i8)(intptr_t)(ws+3400);
	i8 v2424 = *(i8*)(intptr_t)v2423;
	*(i8*)(intptr_t)v2424 = v2422;

endsub:;
	*p2403 = *(i8*)(intptr_t)(ws+3400);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidSubref workspace at ws+3328 length ws+16
void f120_MidSubref(i8* p2425 /* m */, i8 p2426 /* subr */) {
	*(i8*)(intptr_t)(ws+3328) = p2426; /*subr */

	i1 v2427 = (i1)+48;
	i8 v2428 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2429;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2428)(&v2429, v2427);
	i8 v2430 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v2430 = v2429;

	i8 v2431 = (i8)(intptr_t)(ws+3328);
	i8 v2432 = *(i8*)(intptr_t)v2431;
	i8 v2433 = (i8)(intptr_t)(ws+3336);
	i8 v2434 = *(i8*)(intptr_t)v2433;
	*(i8*)(intptr_t)v2434 = v2432;

endsub:;
	*p2425 = *(i8*)(intptr_t)(ws+3336);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidPoparg workspace at ws+3376 length ws+32
void f121_MidPoparg(i8* p2435 /* m */, i1 p2436 /* remaining */, i8 p2437 /* subr */, i1 p2438 /* width */) {
	*(i1*)(intptr_t)(ws+3376) = p2438; /*width */
	*(i8*)(intptr_t)(ws+3384) = p2437; /*subr */
	*(i1*)(intptr_t)(ws+3392) = p2436; /*remaining */

	i8 v2439 = (i8)(intptr_t)(ws+3376);
	i1 v2440 = *(i1*)(intptr_t)v2439;
	i8 v2441 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v2442;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2441)(&v2442, v2440);
	i1 v2443 = v2442+(+40);
	i8 v2444 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2445;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2444)(&v2445, v2443);
	i8 v2446 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2446 = v2445;

	i8 v2447 = (i8)(intptr_t)(ws+3384);
	i8 v2448 = *(i8*)(intptr_t)v2447;
	i8 v2449 = (i8)(intptr_t)(ws+3400);
	i8 v2450 = *(i8*)(intptr_t)v2449;
	*(i8*)(intptr_t)v2450 = v2448;

	i8 v2451 = (i8)(intptr_t)(ws+3392);
	i1 v2452 = *(i1*)(intptr_t)v2451;
	i8 v2453 = (i8)(intptr_t)(ws+3400);
	i8 v2454 = *(i8*)(intptr_t)v2453;
	i8 v2455 = v2454+(+8);
	*(i1*)(intptr_t)v2455 = v2452;

endsub:;
	*p2435 = *(i8*)(intptr_t)(ws+3400);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidString workspace at ws+3328 length ws+16
void f122_MidString(i8* p2456 /* m */, i8 p2457 /* text */) {
	*(i8*)(intptr_t)(ws+3328) = p2457; /*text */

	i1 v2458 = (i1)+46;
	i8 v2459 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2460;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2459)(&v2460, v2458);
	i8 v2461 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v2461 = v2460;

	i8 v2462 = (i8)(intptr_t)(ws+3328);
	i8 v2463 = *(i8*)(intptr_t)v2462;
	i8 v2464 = (i8)(intptr_t)(ws+3336);
	i8 v2465 = *(i8*)(intptr_t)v2464;
	*(i8*)(intptr_t)v2465 = v2463;

endsub:;
	*p2456 = *(i8*)(intptr_t)(ws+3336);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmgroupstart workspace at ws+3408 length ws+8
void f123_MidAsmgroupstart(i8* p2466 /* m */) {

	i1 v2467 = (i1)+16;
	i8 v2468 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2469;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2468)(&v2469, v2467);
	i8 v2470 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v2470 = v2469;

endsub:;
	*p2466 = *(i8*)(intptr_t)(ws+3408);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmstart workspace at ws+3328 length ws+8
void f125_MidAsmstart(i8* p2482 /* m */) {

	i1 v2483 = (i1)+18;
	i8 v2484 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2485;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2484)(&v2485, v2483);
	i8 v2486 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v2486 = v2485;

endsub:;
	*p2482 = *(i8*)(intptr_t)(ws+3328);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartinit workspace at ws+3328 length ws+16
void f126_MidStartinit(i8* p2487 /* m */, i8 p2488 /* sym */) {
	*(i8*)(intptr_t)(ws+3328) = p2488; /*sym */

	i1 v2489 = (i1)+6;
	i8 v2490 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2491;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2490)(&v2491, v2489);
	i8 v2492 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v2492 = v2491;

	i8 v2493 = (i8)(intptr_t)(ws+3328);
	i8 v2494 = *(i8*)(intptr_t)v2493;
	i8 v2495 = (i8)(intptr_t)(ws+3336);
	i8 v2496 = *(i8*)(intptr_t)v2495;
	*(i8*)(intptr_t)v2496 = v2494;

endsub:;
	*p2487 = *(i8*)(intptr_t)(ws+3336);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBlts workspace at ws+3368 length ws+40
void f127_MidBlts(i8* p2497 /* m */, i1 p2498 /* negated */, i2 p2499 /* fallthrough */, i2 p2500 /* falselabel */, i2 p2501 /* truelabel */, i8 p2502 /* right */, i8 p2503 /* left */, i1 p2504 /* width */) {
	*(i1*)(intptr_t)(ws+3368) = p2504; /*width */
	*(i8*)(intptr_t)(ws+3376) = p2503; /*left */
	*(i8*)(intptr_t)(ws+3384) = p2502; /*right */
	*(i2*)(intptr_t)(ws+3392) = p2501; /*truelabel */
	*(i2*)(intptr_t)(ws+3394) = p2500; /*falselabel */
	*(i2*)(intptr_t)(ws+3396) = p2499; /*fallthrough */
	*(i1*)(intptr_t)(ws+3398) = p2498; /*negated */

	i8 v2505 = (i8)(intptr_t)(ws+3368);
	i1 v2506 = *(i1*)(intptr_t)v2505;
	i8 v2507 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v2508;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2507)(&v2508, v2506);
	i1 v2509 = v2508+(+66);
	i8 v2510 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2511;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2510)(&v2511, v2509);
	i8 v2512 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2512 = v2511;

	i8 v2513 = (i8)(intptr_t)(ws+3376);
	i8 v2514 = *(i8*)(intptr_t)v2513;
	i8 v2515 = (i8)(intptr_t)(ws+3400);
	i8 v2516 = *(i8*)(intptr_t)v2515;
	i8 v2517 = v2516+(+24);
	*(i8*)(intptr_t)v2517 = v2514;

	i8 v2518 = (i8)(intptr_t)(ws+3384);
	i8 v2519 = *(i8*)(intptr_t)v2518;
	i8 v2520 = (i8)(intptr_t)(ws+3400);
	i8 v2521 = *(i8*)(intptr_t)v2520;
	i8 v2522 = v2521+(+32);
	*(i8*)(intptr_t)v2522 = v2519;

	i8 v2523 = (i8)(intptr_t)(ws+3392);
	i2 v2524 = *(i2*)(intptr_t)v2523;
	i8 v2525 = (i8)(intptr_t)(ws+3400);
	i8 v2526 = *(i8*)(intptr_t)v2525;
	*(i2*)(intptr_t)v2526 = v2524;

	i8 v2527 = (i8)(intptr_t)(ws+3394);
	i2 v2528 = *(i2*)(intptr_t)v2527;
	i8 v2529 = (i8)(intptr_t)(ws+3400);
	i8 v2530 = *(i8*)(intptr_t)v2529;
	i8 v2531 = v2530+(+2);
	*(i2*)(intptr_t)v2531 = v2528;

	i8 v2532 = (i8)(intptr_t)(ws+3396);
	i2 v2533 = *(i2*)(intptr_t)v2532;
	i8 v2534 = (i8)(intptr_t)(ws+3400);
	i8 v2535 = *(i8*)(intptr_t)v2534;
	i8 v2536 = v2535+(+4);
	*(i2*)(intptr_t)v2536 = v2533;

	i8 v2537 = (i8)(intptr_t)(ws+3398);
	i1 v2538 = *(i1*)(intptr_t)v2537;
	i8 v2539 = (i8)(intptr_t)(ws+3400);
	i8 v2540 = *(i8*)(intptr_t)v2539;
	i8 v2541 = v2540+(+6);
	*(i1*)(intptr_t)v2541 = v2538;

endsub:;
	*p2497 = *(i8*)(intptr_t)(ws+3400);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartsub workspace at ws+3336 length ws+16
void f129_MidStartsub(i8* p2564 /* m */, i8 p2565 /* subr */) {
	*(i8*)(intptr_t)(ws+3336) = p2565; /*subr */

	i1 v2566 = (i1)+4;
	i8 v2567 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2568;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2567)(&v2568, v2566);
	i8 v2569 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v2569 = v2568;

	i8 v2570 = (i8)(intptr_t)(ws+3336);
	i8 v2571 = *(i8*)(intptr_t)v2570;
	i8 v2572 = (i8)(intptr_t)(ws+3344);
	i8 v2573 = *(i8*)(intptr_t)v2572;
	*(i8*)(intptr_t)v2573 = v2571;

endsub:;
	*p2564 = *(i8*)(intptr_t)(ws+3344);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAddress workspace at ws+3344 length ws+24
void f132_MidAddress(i8* p2618 /* m */, i2 p2619 /* off */, i8 p2620 /* sym */) {
	*(i8*)(intptr_t)(ws+3344) = p2620; /*sym */
	*(i2*)(intptr_t)(ws+3352) = p2619; /*off */

	i1 v2621 = (i1)+47;
	i8 v2622 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2623;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2622)(&v2623, v2621);
	i8 v2624 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v2624 = v2623;

	i8 v2625 = (i8)(intptr_t)(ws+3344);
	i8 v2626 = *(i8*)(intptr_t)v2625;
	i8 v2627 = (i8)(intptr_t)(ws+3360);
	i8 v2628 = *(i8*)(intptr_t)v2627;
	*(i8*)(intptr_t)v2628 = v2626;

	i8 v2629 = (i8)(intptr_t)(ws+3352);
	i2 v2630 = *(i2*)(intptr_t)v2629;
	i8 v2631 = (i8)(intptr_t)(ws+3360);
	i8 v2632 = *(i8*)(intptr_t)v2631;
	i8 v2633 = v2632+(+8);
	*(i2*)(intptr_t)v2633 = v2630;

endsub:;
	*p2618 = *(i8*)(intptr_t)(ws+3360);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidJump workspace at ws+3336 length ws+16
void f133_MidJump(i8* p2634 /* m */, i2 p2635 /* label */) {
	*(i2*)(intptr_t)(ws+3336) = p2635; /*label */

	i1 v2636 = (i1)+27;
	i8 v2637 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2638;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2637)(&v2638, v2636);
	i8 v2639 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v2639 = v2638;

	i8 v2640 = (i8)(intptr_t)(ws+3336);
	i2 v2641 = *(i2*)(intptr_t)v2640;
	i8 v2642 = (i8)(intptr_t)(ws+3344);
	i8 v2643 = *(i8*)(intptr_t)v2642;
	*(i2*)(intptr_t)v2643 = v2641;

endsub:;
	*p2634 = *(i8*)(intptr_t)(ws+3344);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidDeref workspace at ws+3408 length ws+24
void f134_MidDeref(i8* p2644 /* m */, i8 p2645 /* left */, i1 p2646 /* width */) {
	*(i1*)(intptr_t)(ws+3408) = p2646; /*width */
	*(i8*)(intptr_t)(ws+3416) = p2645; /*left */

	i8 v2647 = (i8)(intptr_t)(ws+3408);
	i1 v2648 = *(i1*)(intptr_t)v2647;
	i8 v2649 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v2650;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2649)(&v2650, v2648);
	i1 v2651 = v2650+(+49);
	i8 v2652 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2653;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2652)(&v2653, v2651);
	i8 v2654 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2654 = v2653;

	i8 v2655 = (i8)(intptr_t)(ws+3416);
	i8 v2656 = *(i8*)(intptr_t)v2655;
	i8 v2657 = (i8)(intptr_t)(ws+3424);
	i8 v2658 = *(i8*)(intptr_t)v2657;
	i8 v2659 = v2658+(+24);
	*(i8*)(intptr_t)v2659 = v2656;

endsub:;
	*p2644 = *(i8*)(intptr_t)(ws+3424);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmend workspace at ws+3328 length ws+8
void f135_MidAsmend(i8* p2660 /* m */) {

	i1 v2661 = (i1)+23;
	i8 v2662 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2663;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2662)(&v2663, v2661);
	i8 v2664 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v2664 = v2663;

endsub:;
	*p2660 = *(i8*)(intptr_t)(ws+3328);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidLabel workspace at ws+3392 length ws+16
void f136_MidLabel(i8* p2665 /* m */, i2 p2666 /* label */) {
	*(i2*)(intptr_t)(ws+3392) = p2666; /*label */

	i1 v2667 = (i1)+26;
	i8 v2668 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2669;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2668)(&v2669, v2667);
	i8 v2670 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2670 = v2669;

	i8 v2671 = (i8)(intptr_t)(ws+3392);
	i2 v2672 = *(i2*)(intptr_t)v2671;
	i8 v2673 = (i8)(intptr_t)(ws+3400);
	i8 v2674 = *(i8*)(intptr_t)v2673;
	*(i2*)(intptr_t)v2674 = v2672;

endsub:;
	*p2665 = *(i8*)(intptr_t)(ws+3400);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndsub workspace at ws+3344 length ws+16
void f141_MidEndsub(i8* p2756 /* m */, i8 p2757 /* subr */) {
	*(i8*)(intptr_t)(ws+3344) = p2757; /*subr */

	i1 v2758 = (i1)+5;
	i8 v2759 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2760;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2759)(&v2760, v2758);
	i8 v2761 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v2761 = v2760;

	i8 v2762 = (i8)(intptr_t)(ws+3344);
	i8 v2763 = *(i8*)(intptr_t)v2762;
	i8 v2764 = (i8)(intptr_t)(ws+3352);
	i8 v2765 = *(i8*)(intptr_t)v2764;
	*(i8*)(intptr_t)v2765 = v2763;

endsub:;
	*p2756 = *(i8*)(intptr_t)(ws+3352);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidInitsubref workspace at ws+3352 length ws+16
void f142_MidInitsubref(i8* p2766 /* m */, i8 p2767 /* subr */) {
	*(i8*)(intptr_t)(ws+3352) = p2767; /*subr */

	i1 v2768 = (i1)+14;
	i8 v2769 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2770;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2769)(&v2770, v2768);
	i8 v2771 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v2771 = v2770;

	i8 v2772 = (i8)(intptr_t)(ws+3352);
	i8 v2773 = *(i8*)(intptr_t)v2772;
	i8 v2774 = (i8)(intptr_t)(ws+3360);
	i8 v2775 = *(i8*)(intptr_t)v2774;
	*(i8*)(intptr_t)v2775 = v2773;

endsub:;
	*p2766 = *(i8*)(intptr_t)(ws+3360);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBltu workspace at ws+3368 length ws+40
void f147_MidBltu(i8* p2863 /* m */, i1 p2864 /* negated */, i2 p2865 /* fallthrough */, i2 p2866 /* falselabel */, i2 p2867 /* truelabel */, i8 p2868 /* right */, i8 p2869 /* left */, i1 p2870 /* width */) {
	*(i1*)(intptr_t)(ws+3368) = p2870; /*width */
	*(i8*)(intptr_t)(ws+3376) = p2869; /*left */
	*(i8*)(intptr_t)(ws+3384) = p2868; /*right */
	*(i2*)(intptr_t)(ws+3392) = p2867; /*truelabel */
	*(i2*)(intptr_t)(ws+3394) = p2866; /*falselabel */
	*(i2*)(intptr_t)(ws+3396) = p2865; /*fallthrough */
	*(i1*)(intptr_t)(ws+3398) = p2864; /*negated */

	i8 v2871 = (i8)(intptr_t)(ws+3368);
	i1 v2872 = *(i1*)(intptr_t)v2871;
	i8 v2873 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v2874;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2873)(&v2874, v2872);
	i1 v2875 = v2874+(+71);
	i8 v2876 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2877;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2876)(&v2877, v2875);
	i8 v2878 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2878 = v2877;

	i8 v2879 = (i8)(intptr_t)(ws+3376);
	i8 v2880 = *(i8*)(intptr_t)v2879;
	i8 v2881 = (i8)(intptr_t)(ws+3400);
	i8 v2882 = *(i8*)(intptr_t)v2881;
	i8 v2883 = v2882+(+24);
	*(i8*)(intptr_t)v2883 = v2880;

	i8 v2884 = (i8)(intptr_t)(ws+3384);
	i8 v2885 = *(i8*)(intptr_t)v2884;
	i8 v2886 = (i8)(intptr_t)(ws+3400);
	i8 v2887 = *(i8*)(intptr_t)v2886;
	i8 v2888 = v2887+(+32);
	*(i8*)(intptr_t)v2888 = v2885;

	i8 v2889 = (i8)(intptr_t)(ws+3392);
	i2 v2890 = *(i2*)(intptr_t)v2889;
	i8 v2891 = (i8)(intptr_t)(ws+3400);
	i8 v2892 = *(i8*)(intptr_t)v2891;
	*(i2*)(intptr_t)v2892 = v2890;

	i8 v2893 = (i8)(intptr_t)(ws+3394);
	i2 v2894 = *(i2*)(intptr_t)v2893;
	i8 v2895 = (i8)(intptr_t)(ws+3400);
	i8 v2896 = *(i8*)(intptr_t)v2895;
	i8 v2897 = v2896+(+2);
	*(i2*)(intptr_t)v2897 = v2894;

	i8 v2898 = (i8)(intptr_t)(ws+3396);
	i2 v2899 = *(i2*)(intptr_t)v2898;
	i8 v2900 = (i8)(intptr_t)(ws+3400);
	i8 v2901 = *(i8*)(intptr_t)v2900;
	i8 v2902 = v2901+(+4);
	*(i2*)(intptr_t)v2902 = v2899;

	i8 v2903 = (i8)(intptr_t)(ws+3398);
	i1 v2904 = *(i1*)(intptr_t)v2903;
	i8 v2905 = (i8)(intptr_t)(ws+3400);
	i8 v2906 = *(i8*)(intptr_t)v2905;
	i8 v2907 = v2906+(+6);
	*(i1*)(intptr_t)v2907 = v2904;

endsub:;
	*p2863 = *(i8*)(intptr_t)(ws+3400);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidReturn workspace at ws+3328 length ws+8
void f148_MidReturn(i8* p2908 /* m */) {

	i1 v2909 = (i1)+28;
	i8 v2910 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2911;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2910)(&v2911, v2909);
	i8 v2912 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v2912 = v2911;

endsub:;
	*p2908 = *(i8*)(intptr_t)(ws+3328);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndcase workspace at ws+3336 length ws+16
void f149_MidEndcase(i8* p2913 /* m */, i1 p2914 /* width */) {
	*(i1*)(intptr_t)(ws+3336) = p2914; /*width */

	i8 v2915 = (i8)(intptr_t)(ws+3336);
	i1 v2916 = *(i1*)(intptr_t)v2915;
	i8 v2917 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v2918;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2917)(&v2918, v2916);
	i1 v2919 = v2918+(+86);
	i8 v2920 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2921;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2920)(&v2921, v2919);
	i8 v2922 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v2922 = v2921;

endsub:;
	*p2913 = *(i8*)(intptr_t)(ws+3344);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidInitstring workspace at ws+3352 length ws+16
void f150_MidInitstring(i8* p2923 /* m */, i8 p2924 /* text */) {
	*(i8*)(intptr_t)(ws+3352) = p2924; /*text */

	i1 v2925 = (i1)+12;
	i8 v2926 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2927;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2926)(&v2927, v2925);
	i8 v2928 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v2928 = v2927;

	i8 v2929 = (i8)(intptr_t)(ws+3352);
	i8 v2930 = *(i8*)(intptr_t)v2929;
	i8 v2931 = (i8)(intptr_t)(ws+3360);
	i8 v2932 = *(i8*)(intptr_t)v2931;
	*(i8*)(intptr_t)v2932 = v2930;

endsub:;
	*p2923 = *(i8*)(intptr_t)(ws+3360);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidConstant workspace at ws+3424 length ws+16
void f151_MidConstant(i8* p2933 /* m */, i4 p2934 /* value */) {
	*(i4*)(intptr_t)(ws+3424) = p2934; /*value */

	i1 v2935 = (i1)+45;
	i8 v2936 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2937;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2936)(&v2937, v2935);
	i8 v2938 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v2938 = v2937;

	i8 v2939 = (i8)(intptr_t)(ws+3424);
	i4 v2940 = *(i4*)(intptr_t)v2939;
	i8 v2941 = (i8)(intptr_t)(ws+3432);
	i8 v2942 = *(i8*)(intptr_t)v2941;
	*(i4*)(intptr_t)v2942 = v2940;

endsub:;
	*p2933 = *(i8*)(intptr_t)(ws+3432);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmtext workspace at ws+3328 length ws+16
void f152_MidAsmtext(i8* p2943 /* m */, i8 p2944 /* text */) {
	*(i8*)(intptr_t)(ws+3328) = p2944; /*text */

	i1 v2945 = (i1)+19;
	i8 v2946 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2947;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2946)(&v2947, v2945);
	i8 v2948 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v2948 = v2947;

	i8 v2949 = (i8)(intptr_t)(ws+3328);
	i8 v2950 = *(i8*)(intptr_t)v2949;
	i8 v2951 = (i8)(intptr_t)(ws+3336);
	i8 v2952 = *(i8*)(intptr_t)v2951;
	*(i8*)(intptr_t)v2952 = v2950;

endsub:;
	*p2943 = *(i8*)(intptr_t)(ws+3336);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBand workspace at ws+3328 length ws+32
void f153_MidBand(i8* p2953 /* m */, i1 p2954 /* negated */, i2 p2955 /* fallthrough */, i2 p2956 /* falselabel */, i2 p2957 /* truelabel */, i8 p2958 /* right */, i8 p2959 /* left */) {
	*(i8*)(intptr_t)(ws+3328) = p2959; /*left */
	*(i8*)(intptr_t)(ws+3336) = p2958; /*right */
	*(i2*)(intptr_t)(ws+3344) = p2957; /*truelabel */
	*(i2*)(intptr_t)(ws+3346) = p2956; /*falselabel */
	*(i2*)(intptr_t)(ws+3348) = p2955; /*fallthrough */
	*(i1*)(intptr_t)(ws+3350) = p2954; /*negated */

	i1 v2960 = (i1)+59;
	i8 v2961 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2962;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2961)(&v2962, v2960);
	i8 v2963 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v2963 = v2962;

	i8 v2964 = (i8)(intptr_t)(ws+3328);
	i8 v2965 = *(i8*)(intptr_t)v2964;
	i8 v2966 = (i8)(intptr_t)(ws+3352);
	i8 v2967 = *(i8*)(intptr_t)v2966;
	i8 v2968 = v2967+(+24);
	*(i8*)(intptr_t)v2968 = v2965;

	i8 v2969 = (i8)(intptr_t)(ws+3336);
	i8 v2970 = *(i8*)(intptr_t)v2969;
	i8 v2971 = (i8)(intptr_t)(ws+3352);
	i8 v2972 = *(i8*)(intptr_t)v2971;
	i8 v2973 = v2972+(+32);
	*(i8*)(intptr_t)v2973 = v2970;

	i8 v2974 = (i8)(intptr_t)(ws+3344);
	i2 v2975 = *(i2*)(intptr_t)v2974;
	i8 v2976 = (i8)(intptr_t)(ws+3352);
	i8 v2977 = *(i8*)(intptr_t)v2976;
	*(i2*)(intptr_t)v2977 = v2975;

	i8 v2978 = (i8)(intptr_t)(ws+3346);
	i2 v2979 = *(i2*)(intptr_t)v2978;
	i8 v2980 = (i8)(intptr_t)(ws+3352);
	i8 v2981 = *(i8*)(intptr_t)v2980;
	i8 v2982 = v2981+(+2);
	*(i2*)(intptr_t)v2982 = v2979;

	i8 v2983 = (i8)(intptr_t)(ws+3348);
	i2 v2984 = *(i2*)(intptr_t)v2983;
	i8 v2985 = (i8)(intptr_t)(ws+3352);
	i8 v2986 = *(i8*)(intptr_t)v2985;
	i8 v2987 = v2986+(+4);
	*(i2*)(intptr_t)v2987 = v2984;

	i8 v2988 = (i8)(intptr_t)(ws+3350);
	i1 v2989 = *(i1*)(intptr_t)v2988;
	i8 v2990 = (i8)(intptr_t)(ws+3352);
	i8 v2991 = *(i8*)(intptr_t)v2990;
	i8 v2992 = v2991+(+6);
	*(i1*)(intptr_t)v2992 = v2989;

endsub:;
	*p2953 = *(i8*)(intptr_t)(ws+3352);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartcase workspace at ws+3336 length ws+24
void f154_MidStartcase(i8* p2993 /* m */, i8 p2994 /* left */, i1 p2995 /* width */) {
	*(i1*)(intptr_t)(ws+3336) = p2995; /*width */
	*(i8*)(intptr_t)(ws+3344) = p2994; /*left */

	i8 v2996 = (i8)(intptr_t)(ws+3336);
	i1 v2997 = *(i1*)(intptr_t)v2996;
	i8 v2998 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v2999;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2998)(&v2999, v2997);
	i1 v3000 = v2999+(+76);
	i8 v3001 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3002;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3001)(&v3002, v3000);
	i8 v3003 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v3003 = v3002;

	i8 v3004 = (i8)(intptr_t)(ws+3344);
	i8 v3005 = *(i8*)(intptr_t)v3004;
	i8 v3006 = (i8)(intptr_t)(ws+3352);
	i8 v3007 = *(i8*)(intptr_t)v3006;
	i8 v3008 = v3007+(+24);
	*(i8*)(intptr_t)v3008 = v3005;

endsub:;
	*p2993 = *(i8*)(intptr_t)(ws+3352);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndfile workspace at ws+3208 length ws+8
void f155_MidEndfile(i8* p3009 /* m */) {

	i1 v3010 = (i1)+3;
	i8 v3011 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3012;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3011)(&v3012, v3010);
	i8 v3013 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v3013 = v3012;

endsub:;
	*p3009 = *(i8*)(intptr_t)(ws+3208);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidArg workspace at ws+3336 length ws+48
void f156_MidArg(i8* p3014 /* m */, i1 p3015 /* remaining */, i8 p3016 /* subr */, i8 p3017 /* right */, i8 p3018 /* left */, i1 p3019 /* width */) {
	*(i1*)(intptr_t)(ws+3336) = p3019; /*width */
	*(i8*)(intptr_t)(ws+3344) = p3018; /*left */
	*(i8*)(intptr_t)(ws+3352) = p3017; /*right */
	*(i8*)(intptr_t)(ws+3360) = p3016; /*subr */
	*(i1*)(intptr_t)(ws+3368) = p3015; /*remaining */

	i8 v3020 = (i8)(intptr_t)(ws+3336);
	i1 v3021 = *(i1*)(intptr_t)v3020;
	i8 v3022 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v3023;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v3022)(&v3023, v3021);
	i1 v3024 = v3023+(+35);
	i8 v3025 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3026;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3025)(&v3026, v3024);
	i8 v3027 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v3027 = v3026;

	i8 v3028 = (i8)(intptr_t)(ws+3344);
	i8 v3029 = *(i8*)(intptr_t)v3028;
	i8 v3030 = (i8)(intptr_t)(ws+3376);
	i8 v3031 = *(i8*)(intptr_t)v3030;
	i8 v3032 = v3031+(+24);
	*(i8*)(intptr_t)v3032 = v3029;

	i8 v3033 = (i8)(intptr_t)(ws+3352);
	i8 v3034 = *(i8*)(intptr_t)v3033;
	i8 v3035 = (i8)(intptr_t)(ws+3376);
	i8 v3036 = *(i8*)(intptr_t)v3035;
	i8 v3037 = v3036+(+32);
	*(i8*)(intptr_t)v3037 = v3034;

	i8 v3038 = (i8)(intptr_t)(ws+3360);
	i8 v3039 = *(i8*)(intptr_t)v3038;
	i8 v3040 = (i8)(intptr_t)(ws+3376);
	i8 v3041 = *(i8*)(intptr_t)v3040;
	*(i8*)(intptr_t)v3041 = v3039;

	i8 v3042 = (i8)(intptr_t)(ws+3368);
	i1 v3043 = *(i1*)(intptr_t)v3042;
	i8 v3044 = (i8)(intptr_t)(ws+3376);
	i8 v3045 = *(i8*)(intptr_t)v3044;
	i8 v3046 = v3045+(+8);
	*(i1*)(intptr_t)v3046 = v3043;

endsub:;
	*p3014 = *(i8*)(intptr_t)(ws+3376);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartfile workspace at ws+3208 length ws+8
void f158_MidStartfile(i8* p3069 /* m */) {

	i1 v3070 = (i1)+2;
	i8 v3071 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3072;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3071)(&v3072, v3070);
	i8 v3073 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v3073 = v3072;

endsub:;
	*p3069 = *(i8*)(intptr_t)(ws+3208);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndinit workspace at ws+3328 length ws+8
void f159_MidEndinit(i8* p3074 /* m */) {

	i1 v3075 = (i1)+15;
	i8 v3076 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3077;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3076)(&v3077, v3075);
	i8 v3078 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v3078 = v3077;

endsub:;
	*p3074 = *(i8*)(intptr_t)(ws+3328);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBeq workspace at ws+3368 length ws+40
void f160_MidBeq(i8* p3079 /* m */, i1 p3080 /* negated */, i2 p3081 /* fallthrough */, i2 p3082 /* falselabel */, i2 p3083 /* truelabel */, i8 p3084 /* right */, i8 p3085 /* left */, i1 p3086 /* width */) {
	*(i1*)(intptr_t)(ws+3368) = p3086; /*width */
	*(i8*)(intptr_t)(ws+3376) = p3085; /*left */
	*(i8*)(intptr_t)(ws+3384) = p3084; /*right */
	*(i2*)(intptr_t)(ws+3392) = p3083; /*truelabel */
	*(i2*)(intptr_t)(ws+3394) = p3082; /*falselabel */
	*(i2*)(intptr_t)(ws+3396) = p3081; /*fallthrough */
	*(i1*)(intptr_t)(ws+3398) = p3080; /*negated */

	i8 v3087 = (i8)(intptr_t)(ws+3368);
	i1 v3088 = *(i1*)(intptr_t)v3087;
	i8 v3089 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v3090;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v3089)(&v3090, v3088);
	i1 v3091 = v3090+(+61);
	i8 v3092 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3093;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3092)(&v3093, v3091);
	i8 v3094 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3094 = v3093;

	i8 v3095 = (i8)(intptr_t)(ws+3376);
	i8 v3096 = *(i8*)(intptr_t)v3095;
	i8 v3097 = (i8)(intptr_t)(ws+3400);
	i8 v3098 = *(i8*)(intptr_t)v3097;
	i8 v3099 = v3098+(+24);
	*(i8*)(intptr_t)v3099 = v3096;

	i8 v3100 = (i8)(intptr_t)(ws+3384);
	i8 v3101 = *(i8*)(intptr_t)v3100;
	i8 v3102 = (i8)(intptr_t)(ws+3400);
	i8 v3103 = *(i8*)(intptr_t)v3102;
	i8 v3104 = v3103+(+32);
	*(i8*)(intptr_t)v3104 = v3101;

	i8 v3105 = (i8)(intptr_t)(ws+3392);
	i2 v3106 = *(i2*)(intptr_t)v3105;
	i8 v3107 = (i8)(intptr_t)(ws+3400);
	i8 v3108 = *(i8*)(intptr_t)v3107;
	*(i2*)(intptr_t)v3108 = v3106;

	i8 v3109 = (i8)(intptr_t)(ws+3394);
	i2 v3110 = *(i2*)(intptr_t)v3109;
	i8 v3111 = (i8)(intptr_t)(ws+3400);
	i8 v3112 = *(i8*)(intptr_t)v3111;
	i8 v3113 = v3112+(+2);
	*(i2*)(intptr_t)v3113 = v3110;

	i8 v3114 = (i8)(intptr_t)(ws+3396);
	i2 v3115 = *(i2*)(intptr_t)v3114;
	i8 v3116 = (i8)(intptr_t)(ws+3400);
	i8 v3117 = *(i8*)(intptr_t)v3116;
	i8 v3118 = v3117+(+4);
	*(i2*)(intptr_t)v3118 = v3115;

	i8 v3119 = (i8)(intptr_t)(ws+3398);
	i1 v3120 = *(i1*)(intptr_t)v3119;
	i8 v3121 = (i8)(intptr_t)(ws+3400);
	i8 v3122 = *(i8*)(intptr_t)v3121;
	i8 v3123 = v3122+(+6);
	*(i1*)(intptr_t)v3123 = v3120;

endsub:;
	*p3079 = *(i8*)(intptr_t)(ws+3400);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidCalle workspace at ws+3344 length ws+40
void f161_MidCalle(i8* p3124 /* m */, i8 p3125 /* subr */, i8 p3126 /* right */, i8 p3127 /* left */, i1 p3128 /* width */) {
	*(i1*)(intptr_t)(ws+3344) = p3128; /*width */
	*(i8*)(intptr_t)(ws+3352) = p3127; /*left */
	*(i8*)(intptr_t)(ws+3360) = p3126; /*right */
	*(i8*)(intptr_t)(ws+3368) = p3125; /*subr */

	i8 v3129 = (i8)(intptr_t)(ws+3344);
	i1 v3130 = *(i1*)(intptr_t)v3129;
	i8 v3131 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v3132;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v3131)(&v3132, v3130);
	i1 v3133 = v3132+(+30);
	i8 v3134 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3135;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3134)(&v3135, v3133);
	i8 v3136 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v3136 = v3135;

	i8 v3137 = (i8)(intptr_t)(ws+3352);
	i8 v3138 = *(i8*)(intptr_t)v3137;
	i8 v3139 = (i8)(intptr_t)(ws+3376);
	i8 v3140 = *(i8*)(intptr_t)v3139;
	i8 v3141 = v3140+(+24);
	*(i8*)(intptr_t)v3141 = v3138;

	i8 v3142 = (i8)(intptr_t)(ws+3360);
	i8 v3143 = *(i8*)(intptr_t)v3142;
	i8 v3144 = (i8)(intptr_t)(ws+3376);
	i8 v3145 = *(i8*)(intptr_t)v3144;
	i8 v3146 = v3145+(+32);
	*(i8*)(intptr_t)v3146 = v3143;

	i8 v3147 = (i8)(intptr_t)(ws+3368);
	i8 v3148 = *(i8*)(intptr_t)v3147;
	i8 v3149 = (i8)(intptr_t)(ws+3376);
	i8 v3150 = *(i8*)(intptr_t)v3149;
	*(i8*)(intptr_t)v3150 = v3148;

endsub:;
	*p3124 = *(i8*)(intptr_t)(ws+3376);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStore workspace at ws+3376 length ws+32
void f163_MidStore(i8* p3167 /* m */, i8 p3168 /* right */, i8 p3169 /* left */, i1 p3170 /* width */) {
	*(i1*)(intptr_t)(ws+3376) = p3170; /*width */
	*(i8*)(intptr_t)(ws+3384) = p3169; /*left */
	*(i8*)(intptr_t)(ws+3392) = p3168; /*right */

	i8 v3171 = (i8)(intptr_t)(ws+3376);
	i1 v3172 = *(i1*)(intptr_t)v3171;
	i8 v3173 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v3174;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v3173)(&v3174, v3172);
	i1 v3175 = v3174+(+54);
	i8 v3176 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3177;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3176)(&v3177, v3175);
	i8 v3178 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3178 = v3177;

	i8 v3179 = (i8)(intptr_t)(ws+3384);
	i8 v3180 = *(i8*)(intptr_t)v3179;
	i8 v3181 = (i8)(intptr_t)(ws+3400);
	i8 v3182 = *(i8*)(intptr_t)v3181;
	i8 v3183 = v3182+(+24);
	*(i8*)(intptr_t)v3183 = v3180;

	i8 v3184 = (i8)(intptr_t)(ws+3392);
	i8 v3185 = *(i8*)(intptr_t)v3184;
	i8 v3186 = (i8)(intptr_t)(ws+3400);
	i8 v3187 = *(i8*)(intptr_t)v3186;
	i8 v3188 = v3187+(+32);
	*(i8*)(intptr_t)v3188 = v3185;

endsub:;
	*p3167 = *(i8*)(intptr_t)(ws+3400);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidInitaddress workspace at ws+3352 length ws+24
void f164_MidInitaddress(i8* p3189 /* m */, i2 p3190 /* off */, i8 p3191 /* sym */) {
	*(i8*)(intptr_t)(ws+3352) = p3191; /*sym */
	*(i2*)(intptr_t)(ws+3360) = p3190; /*off */

	i1 v3192 = (i1)+13;
	i8 v3193 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3194;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3193)(&v3194, v3192);
	i8 v3195 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v3195 = v3194;

	i8 v3196 = (i8)(intptr_t)(ws+3352);
	i8 v3197 = *(i8*)(intptr_t)v3196;
	i8 v3198 = (i8)(intptr_t)(ws+3368);
	i8 v3199 = *(i8*)(intptr_t)v3198;
	*(i8*)(intptr_t)v3199 = v3197;

	i8 v3200 = (i8)(intptr_t)(ws+3360);
	i2 v3201 = *(i2*)(intptr_t)v3200;
	i8 v3202 = (i8)(intptr_t)(ws+3368);
	i8 v3203 = *(i8*)(intptr_t)v3202;
	i8 v3204 = v3203+(+8);
	*(i2*)(intptr_t)v3204 = v3201;

endsub:;
	*p3189 = *(i8*)(intptr_t)(ws+3368);
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
	void f151_MidConstant(i8* /* m */, i4 /* value */);
	void f63_Discard(i8 /* node */);
	void f63_Discard(i8 /* node */);
	void f172_GetPowerOfTwo(i1* /* exp */, i4 /* value */);
	void f63_Discard(i8 /* node */);
	void f151_MidConstant(i8* /* m */, i4 /* value */);
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
	i8 v3536 = (i8)(intptr_t)(f151_MidConstant);
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
	i8 v3598 = (i8)(intptr_t)(f151_MidConstant);
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
	void f134_MidDeref(i8* /* m */, i8 /* left */, i1 /* width */);

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
	i8 v4870 = (i8)(intptr_t)(f134_MidDeref);
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

// UndoLValue workspace at ws+3352 length ws+17
void f234_UndoLValue(i8* p4878 /* address */, i8 p4879 /* lvalue */) {
	*(i8*)(intptr_t)(ws+3352) = p4879; /*lvalue */

	i8 v4880 = (i8)(intptr_t)(ws+3352);
	i8 v4881 = *(i8*)(intptr_t)v4880;
	i8 v4882 = v4881+(+40);
	i1 v4883 = *(i1*)(intptr_t)v4882;
	i8 v4884 = (i8)(intptr_t)(ws+3368);
	*(i1*)(intptr_t)v4884 = v4883;

	i8 v4885 = (i8)(intptr_t)(ws+3368);
	i1 v4886 = *(i1*)(intptr_t)v4885;
	i1 v4887 = (i1)+49;
	if (v4886<v4887) goto c02_0413; else goto c02_0415;

c02_0415:;

	i1 v4888 = (i1)+53;
	i8 v4889 = (i8)(intptr_t)(ws+3368);
	i1 v4890 = *(i1*)(intptr_t)v4889;
	if (v4888<v4890) goto c02_0413; else goto c02_0414;

c02_0413:;

	i8 v4891 = (i8)(intptr_t)c02_s00fe;
	i8 v4892 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v4892)(v4891);

c02_0414:;

c02_040e:;

	i8 v4893 = (i8)(intptr_t)(ws+3352);
	i8 v4894 = *(i8*)(intptr_t)v4893;
	i8 v4895 = v4894+(+24);
	i8 v4896 = *(i8*)(intptr_t)v4895;
	i8 v4897 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v4897 = v4896;

	i8 v4898 = (i8)+0;
	i8 v4899 = (i8)(intptr_t)(ws+3352);
	i8 v4900 = *(i8*)(intptr_t)v4899;
	i8 v4901 = v4900+(+24);
	*(i8*)(intptr_t)v4901 = v4898;

	i8 v4902 = (i8)(intptr_t)(ws+3352);
	i8 v4903 = *(i8*)(intptr_t)v4902;
	i8 v4904 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v4904)(v4903);

endsub:;
	*p4878 = *(i8*)(intptr_t)(ws+3360);
}

// IsLValue workspace at ws+3352 length ws+10
void f235_IsLValue(i1* p4905 /* result */, i8 p4906 /* lvalue */) {
	*(i8*)(intptr_t)(ws+3352) = p4906; /*lvalue */

	i1 v4907 = (i1)+0;
	i8 v4908 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v4908 = v4907;

	i8 v4909 = (i8)(intptr_t)(ws+3352);
	i8 v4910 = *(i8*)(intptr_t)v4909;
	i8 v4911 = v4910+(+40);
	i1 v4912 = *(i1*)(intptr_t)v4911;
	i8 v4913 = (i8)(intptr_t)(ws+3361);
	*(i1*)(intptr_t)v4913 = v4912;

	i8 v4914 = (i8)(intptr_t)(ws+3361);
	i1 v4915 = *(i1*)(intptr_t)v4914;
	i1 v4916 = (i1)+49;
	if (v4915<v4916) goto c02_041c; else goto c02_041d;

c02_041d:;

	i1 v4917 = (i1)+53;
	i8 v4918 = (i8)(intptr_t)(ws+3361);
	i1 v4919 = *(i1*)(intptr_t)v4918;
	if (v4917<v4919) goto c02_041c; else goto c02_041b;

c02_041b:;

	i1 v4920 = (i1)+1;
	i8 v4921 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v4921 = v4920;

c02_041c:;

c02_0416:;

endsub:;
	*p4905 = *(i1*)(intptr_t)(ws+3360);
}
	void f68_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s00ff[] = { 0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x6f,0x72,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };
	void f76_SimpleError(i8 /* message */);

// MaybeUndoLValue workspace at ws+3376 length ws+17
void f236_MaybeUndoLValue(i8* p4922 /* address */, i8 p4923 /* lvalue */) {
	*(i8*)(intptr_t)(ws+3376) = p4923; /*lvalue */

	i8 v4924 = (i8)(intptr_t)(ws+3376);
	i8 v4925 = *(i8*)(intptr_t)v4924;
	i8 v4926 = v4925+(+40);
	i1 v4927 = *(i1*)(intptr_t)v4926;
	i8 v4928 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v4928 = v4927;

	i8 v4929 = (i8)(intptr_t)(ws+3392);
	i1 v4930 = *(i1*)(intptr_t)v4929;
	i1 v4931 = (i1)+49;
	if (v4930<v4931) goto c02_0424; else goto c02_0425;

c02_0425:;

	i1 v4932 = (i1)+53;
	i8 v4933 = (i8)(intptr_t)(ws+3392);
	i1 v4934 = *(i1*)(intptr_t)v4933;
	if (v4932<v4934) goto c02_0424; else goto c02_0423;

c02_0423:;

	i8 v4935 = (i8)(intptr_t)(ws+3376);
	i8 v4936 = *(i8*)(intptr_t)v4935;
	i8 v4937 = v4936+(+24);
	i8 v4938 = *(i8*)(intptr_t)v4937;
	i8 v4939 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v4939 = v4938;

	i8 v4940 = (i8)+0;
	i8 v4941 = (i8)(intptr_t)(ws+3376);
	i8 v4942 = *(i8*)(intptr_t)v4941;
	i8 v4943 = v4942+(+24);
	*(i8*)(intptr_t)v4943 = v4940;

	goto c02_041e;

c02_0424:;

	i8 v4944 = (i8)(intptr_t)(ws+3376);
	i8 v4945 = *(i8*)(intptr_t)v4944;
	i8 v4946 = v4945+(+16);
	i8 v4947 = *(i8*)(intptr_t)v4946;
	i8 v4948 = (i8)(intptr_t)(f68_IsPtr);
	i1 v4949;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v4948)(&v4949, v4947);
	i1 v4950 = (i1)+0;
	if (v4949==v4950) goto c02_0429; else goto c02_0428;

c02_0428:;

	i8 v4951 = (i8)(intptr_t)(ws+3376);
	i8 v4952 = *(i8*)(intptr_t)v4951;
	i8 v4953 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v4953 = v4952;

	goto c02_041e;

c02_0429:;

	i8 v4954 = (i8)(intptr_t)c02_s00ff;
	i8 v4955 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v4955)(v4954);

c02_041e:;

endsub:;
	*p4922 = *(i8*)(intptr_t)(ws+3384);
}

// AllocLabel workspace at ws+3392 length ws+2
void f237_AllocLabel(i2* p4956 /* label */) {

	i8 v4957 = (i8)(intptr_t)(ws+48);
	i2 v4958 = *(i2*)(intptr_t)v4957;
	i8 v4959 = (i8)(intptr_t)(ws+3392);
	*(i2*)(intptr_t)v4959 = v4958;

	i8 v4960 = (i8)(intptr_t)(ws+48);
	i2 v4961 = *(i2*)(intptr_t)v4960;
	i2 v4962 = v4961+(+1);
	i8 v4963 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v4963 = v4962;

endsub:;
	*p4956 = *(i2*)(intptr_t)(ws+3392);
}

// AllocSubrId workspace at ws+3336 length ws+2
void f238_AllocSubrId(i2* p4964 /* id */) {

	i8 v4965 = (i8)(intptr_t)(ws+50);
	i2 v4966 = *(i2*)(intptr_t)v4965;
	i8 v4967 = (i8)(intptr_t)(ws+3336);
	*(i2*)(intptr_t)v4967 = v4966;

	i8 v4968 = (i8)(intptr_t)(ws+50);
	i2 v4969 = *(i2*)(intptr_t)v4968;
	i2 v4970 = v4969+(+1);
	i8 v4971 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v4971 = v4970;

endsub:;
	*p4964 = *(i2*)(intptr_t)(ws+3336);
}

// MidWriter workspace at ws+3440 length ws+8
void f239_MidWriter(i8 p4972 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p4972; /*node */

endsub:;
}

// ArchAlignUp workspace at ws+3392 length ws+8
void f240_ArchAlignUp(i2* p4973 /* newvalue */, i1 p4974 /* alignment */, i2 p4975 /* value */) {
	*(i2*)(intptr_t)(ws+3392) = p4975; /*value */
	*(i1*)(intptr_t)(ws+3394) = p4974; /*alignment */

	i8 v4976 = (i8)(intptr_t)(ws+3394);
	i1 v4977 = *(i1*)(intptr_t)v4976;
	i1 v4978 = v4977+(-1);
	i2 v4979 = v4978;
	i8 v4980 = (i8)(intptr_t)(ws+3398);
	*(i2*)(intptr_t)v4980 = v4979;

	i8 v4981 = (i8)(intptr_t)(ws+3392);
	i2 v4982 = *(i2*)(intptr_t)v4981;
	i8 v4983 = (i8)(intptr_t)(ws+3398);
	i2 v4984 = *(i2*)(intptr_t)v4983;
	i2 v4985 = v4982+v4984;
	i8 v4986 = (i8)(intptr_t)(ws+3398);
	i2 v4987 = *(i2*)(intptr_t)v4986;
	i2 v4988 = ~v4987;
	i2 v4989 = v4985&v4988;
	i8 v4990 = (i8)(intptr_t)(ws+3396);
	*(i2*)(intptr_t)v4990 = v4989;

endsub:;
	*p4973 = *(i2*)(intptr_t)(ws+3396);
}
const i1 c02_s0100[] = { 0x75,0x69,0x6e,0x74,0x36,0x34,0 };
	void f225_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0101[] = { 0x69,0x6e,0x74,0x36,0x34,0 };
	void f225_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0102[] = { 0x75,0x69,0x6e,0x74,0x33,0x32,0 };
	void f225_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0103[] = { 0x69,0x6e,0x74,0x33,0x32,0 };
	void f225_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0104[] = { 0x75,0x69,0x6e,0x74,0x31,0x36,0 };
	void f225_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0105[] = { 0x69,0x6e,0x74,0x31,0x36,0 };
	void f225_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0106[] = { 0x75,0x69,0x6e,0x74,0x38,0 };
	void f225_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0107[] = { 0x69,0x6e,0x74,0x38,0 };
	void f225_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0108[] = { 0x69,0x6e,0x74,0x70,0x74,0x72,0 };
const i1 c02_s0109[] = { 0x75,0x69,0x6e,0x74,0x36,0x34,0 };
	void f218_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f222_AddAliasString(i8 /* real */, i8 /* name */);

// ArchInitTypes workspace at ws+3208 length ws+0
void f241_ArchInitTypes(void) {

	i1 v4991 = (i1)+8;
	i1 v4992 = (i1)+8;
	i1 v4993 = (i1)+0;
	i8 v4994 = (i8)(intptr_t)c02_s0100;
	i8 v4995 = (i8)(intptr_t)(f225_MakeNumberType);
	i8 v4996;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4995)(&v4996, v4994, v4993, v4992, v4991);
	i8 v4997 = (i8)(intptr_t)(ws+1464);
	*(i8*)(intptr_t)v4997 = v4996;

	i1 v4998 = (i1)+8;
	i1 v4999 = (i1)+8;
	i1 v5000 = (i1)+1;
	i8 v5001 = (i8)(intptr_t)c02_s0101;
	i8 v5002 = (i8)(intptr_t)(f225_MakeNumberType);
	i8 v5003;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v5002)(&v5003, v5001, v5000, v4999, v4998);
	i8 v5004 = (i8)(intptr_t)(ws+1472);
	*(i8*)(intptr_t)v5004 = v5003;

	i1 v5005 = (i1)+4;
	i1 v5006 = (i1)+4;
	i1 v5007 = (i1)+0;
	i8 v5008 = (i8)(intptr_t)c02_s0102;
	i8 v5009 = (i8)(intptr_t)(f225_MakeNumberType);
	i8 v5010;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v5009)(&v5010, v5008, v5007, v5006, v5005);
	i8 v5011 = (i8)(intptr_t)(ws+1480);
	*(i8*)(intptr_t)v5011 = v5010;

	i1 v5012 = (i1)+4;
	i1 v5013 = (i1)+4;
	i1 v5014 = (i1)+1;
	i8 v5015 = (i8)(intptr_t)c02_s0103;
	i8 v5016 = (i8)(intptr_t)(f225_MakeNumberType);
	i8 v5017;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v5016)(&v5017, v5015, v5014, v5013, v5012);
	i8 v5018 = (i8)(intptr_t)(ws+1488);
	*(i8*)(intptr_t)v5018 = v5017;

	i1 v5019 = (i1)+2;
	i1 v5020 = (i1)+2;
	i1 v5021 = (i1)+0;
	i8 v5022 = (i8)(intptr_t)c02_s0104;
	i8 v5023 = (i8)(intptr_t)(f225_MakeNumberType);
	i8 v5024;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v5023)(&v5024, v5022, v5021, v5020, v5019);
	i8 v5025 = (i8)(intptr_t)(ws+1496);
	*(i8*)(intptr_t)v5025 = v5024;

	i1 v5026 = (i1)+2;
	i1 v5027 = (i1)+2;
	i1 v5028 = (i1)+1;
	i8 v5029 = (i8)(intptr_t)c02_s0105;
	i8 v5030 = (i8)(intptr_t)(f225_MakeNumberType);
	i8 v5031;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v5030)(&v5031, v5029, v5028, v5027, v5026);
	i8 v5032 = (i8)(intptr_t)(ws+1504);
	*(i8*)(intptr_t)v5032 = v5031;

	i1 v5033 = (i1)+1;
	i1 v5034 = (i1)+1;
	i1 v5035 = (i1)+0;
	i8 v5036 = (i8)(intptr_t)c02_s0106;
	i8 v5037 = (i8)(intptr_t)(f225_MakeNumberType);
	i8 v5038;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v5037)(&v5038, v5036, v5035, v5034, v5033);
	i8 v5039 = (i8)(intptr_t)(ws+1512);
	*(i8*)(intptr_t)v5039 = v5038;

	i1 v5040 = (i1)+1;
	i1 v5041 = (i1)+1;
	i1 v5042 = (i1)+1;
	i8 v5043 = (i8)(intptr_t)c02_s0107;
	i8 v5044 = (i8)(intptr_t)(f225_MakeNumberType);
	i8 v5045;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v5044)(&v5045, v5043, v5042, v5041, v5040);
	i8 v5046 = (i8)(intptr_t)(ws+1520);
	*(i8*)(intptr_t)v5046 = v5045;

	i8 v5047 = (i8)(intptr_t)(ws+1464);
	i8 v5048 = *(i8*)(intptr_t)v5047;
	i8 v5049 = (i8)(intptr_t)(ws+1528);
	*(i8*)(intptr_t)v5049 = v5048;

	i8 v5050 = (i8)(intptr_t)c02_s0108;
	i8 v5051 = (i8)+0;
	i8 v5052 = (i8)(intptr_t)c02_s0109;
	i8 v5053 = (i8)(intptr_t)(f218_LookupSymbol);
	i8 v5054;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v5053)(&v5054, v5052, v5051);
	i8 v5055 = (i8)(intptr_t)(f222_AddAliasString);

	((void(*)(i8 /* real */, i8 /* name */))(intptr_t)v5055)(v5054, v5050);

endsub:;
}

// ArchGuessIntType workspace at ws+3360 length ws+16
void f242_ArchGuessIntType(i8* p5056 /* symbol */, i4 p5057 /* max */, i4 p5058 /* min */) {
	*(i4*)(intptr_t)(ws+3360) = p5058; /*min */
	*(i4*)(intptr_t)(ws+3364) = p5057; /*max */

	i8 v5059 = (i8)(intptr_t)(ws+3360);
	i4 v5060 = *(i4*)(intptr_t)v5059;
	i4 v5061 = (i4)+0;
	if ((s4)v5060<(s4)v5061) goto c02_0430; else goto c02_0431;

c02_0431:;

	i4 v5062 = (i4)+255;
	i8 v5063 = (i8)(intptr_t)(ws+3364);
	i4 v5064 = *(i4*)(intptr_t)v5063;
	if ((s4)v5062<(s4)v5064) goto c02_0430; else goto c02_042f;

c02_042f:;

	i8 v5065 = (i8)(intptr_t)(ws+1512);
	i8 v5066 = *(i8*)(intptr_t)v5065;
	i8 v5067 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v5067 = v5066;

	goto c02_042a;

c02_0430:;

	i8 v5068 = (i8)(intptr_t)(ws+3360);
	i4 v5069 = *(i4*)(intptr_t)v5068;
	i4 v5070 = (i4)-128;
	if ((s4)v5069<(s4)v5070) goto c02_0437; else goto c02_0438;

c02_0438:;

	i4 v5071 = (i4)+127;
	i8 v5072 = (i8)(intptr_t)(ws+3364);
	i4 v5073 = *(i4*)(intptr_t)v5072;
	if ((s4)v5071<(s4)v5073) goto c02_0437; else goto c02_0436;

c02_0436:;

	i8 v5074 = (i8)(intptr_t)(ws+1520);
	i8 v5075 = *(i8*)(intptr_t)v5074;
	i8 v5076 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v5076 = v5075;

	goto c02_042a;

c02_0437:;

	i8 v5077 = (i8)(intptr_t)(ws+3360);
	i4 v5078 = *(i4*)(intptr_t)v5077;
	i4 v5079 = (i4)+0;
	if ((s4)v5078<(s4)v5079) goto c02_043e; else goto c02_043f;

c02_043f:;

	i4 v5080 = (i4)+65535;
	i8 v5081 = (i8)(intptr_t)(ws+3364);
	i4 v5082 = *(i4*)(intptr_t)v5081;
	if ((s4)v5080<(s4)v5082) goto c02_043e; else goto c02_043d;

c02_043d:;

	i8 v5083 = (i8)(intptr_t)(ws+1496);
	i8 v5084 = *(i8*)(intptr_t)v5083;
	i8 v5085 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v5085 = v5084;

	goto c02_042a;

c02_043e:;

	i8 v5086 = (i8)(intptr_t)(ws+3360);
	i4 v5087 = *(i4*)(intptr_t)v5086;
	i4 v5088 = (i4)-32768;
	if ((s4)v5087<(s4)v5088) goto c02_0445; else goto c02_0446;

c02_0446:;

	i4 v5089 = (i4)+32767;
	i8 v5090 = (i8)(intptr_t)(ws+3364);
	i4 v5091 = *(i4*)(intptr_t)v5090;
	if ((s4)v5089<(s4)v5091) goto c02_0445; else goto c02_0444;

c02_0444:;

	i8 v5092 = (i8)(intptr_t)(ws+1504);
	i8 v5093 = *(i8*)(intptr_t)v5092;
	i8 v5094 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v5094 = v5093;

	goto c02_042a;

c02_0445:;

	i8 v5095 = (i8)(intptr_t)(ws+3360);
	i4 v5096 = *(i4*)(intptr_t)v5095;
	i4 v5097 = (i4)+0;
	if ((s4)v5096<(s4)v5097) goto c02_044a; else goto c02_0449;

c02_0449:;

	i8 v5098 = (i8)(intptr_t)(ws+1480);
	i8 v5099 = *(i8*)(intptr_t)v5098;
	i8 v5100 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v5100 = v5099;

	goto c02_042a;

c02_044a:;

	i8 v5101 = (i8)(intptr_t)(ws+1488);
	i8 v5102 = *(i8*)(intptr_t)v5101;
	i8 v5103 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v5103 = v5102;

c02_042a:;

endsub:;
	*p5056 = *(i8*)(intptr_t)(ws+3368);
}
	void f240_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);

// ArchInitVariable workspace at ws+3368 length ws+18
void f243_ArchInitVariable(i8 p5104 /* symbol */) {
	*(i8*)(intptr_t)(ws+3368) = p5104; /*symbol */

	i8 v5105 = (i8)(intptr_t)(ws+3368);
	i8 v5106 = *(i8*)(intptr_t)v5105;
	i8 v5107 = *(i8*)(intptr_t)v5106;
	i8 v5108 = v5107+(+8);
	i8 v5109 = *(i8*)(intptr_t)v5108;
	i8 v5110 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v5110 = v5109;

	i8 v5111 = (i8)(intptr_t)(ws+3376);
	i8 v5112 = *(i8*)(intptr_t)v5111;
	i8 v5113 = v5112+(+58);
	i2 v5114 = *(i2*)(intptr_t)v5113;
	i8 v5115 = (i8)(intptr_t)(ws+3384);
	*(i2*)(intptr_t)v5115 = v5114;

	i8 v5116 = (i8)(intptr_t)(ws+3384);
	i2 v5117 = *(i2*)(intptr_t)v5116;
	i8 v5118 = (i8)(intptr_t)(ws+3368);
	i8 v5119 = *(i8*)(intptr_t)v5118;
	i8 v5120 = *(i8*)(intptr_t)v5119;
	i8 v5121 = *(i8*)(intptr_t)v5120;
	i8 v5122 = v5121+(+53);
	i1 v5123 = *(i1*)(intptr_t)v5122;
	i8 v5124 = (i8)(intptr_t)(f240_ArchAlignUp);
	i2 v5125;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v5124)(&v5125, v5123, v5117);
	i8 v5126 = (i8)(intptr_t)(ws+3384);
	*(i2*)(intptr_t)v5126 = v5125;

	i8 v5127 = (i8)(intptr_t)(ws+3384);
	i2 v5128 = *(i2*)(intptr_t)v5127;
	i8 v5129 = (i8)(intptr_t)(ws+3368);
	i8 v5130 = *(i8*)(intptr_t)v5129;
	i8 v5131 = *(i8*)(intptr_t)v5130;
	i8 v5132 = v5131+(+24);
	*(i2*)(intptr_t)v5132 = v5128;

	i8 v5133 = (i8)(intptr_t)(ws+3384);
	i2 v5134 = *(i2*)(intptr_t)v5133;
	i8 v5135 = (i8)(intptr_t)(ws+3368);
	i8 v5136 = *(i8*)(intptr_t)v5135;
	i8 v5137 = *(i8*)(intptr_t)v5136;
	i8 v5138 = *(i8*)(intptr_t)v5137;
	i8 v5139 = v5138+(+48);
	i2 v5140 = *(i2*)(intptr_t)v5139;
	i2 v5141 = v5134+v5140;
	i8 v5142 = (i8)(intptr_t)(ws+3376);
	i8 v5143 = *(i8*)(intptr_t)v5142;
	i8 v5144 = v5143+(+58);
	*(i2*)(intptr_t)v5144 = v5141;

endsub:;
}
	void f240_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);

// ArchInitMember workspace at ws+3328 length ws+18
void f244_ArchInitMember(i2 p5145 /* position */, i8 p5146 /* member */, i8 p5147 /* containing */) {
	*(i8*)(intptr_t)(ws+3328) = p5147; /*containing */
	*(i8*)(intptr_t)(ws+3336) = p5146; /*member */
	*(i2*)(intptr_t)(ws+3344) = p5145; /*position */

	i8 v5148 = (i8)(intptr_t)(ws+3344);
	i2 v5149 = *(i2*)(intptr_t)v5148;
	i8 v5150 = (i8)(intptr_t)(ws+3336);
	i8 v5151 = *(i8*)(intptr_t)v5150;
	i8 v5152 = *(i8*)(intptr_t)v5151;
	i8 v5153 = *(i8*)(intptr_t)v5152;
	i8 v5154 = v5153+(+53);
	i1 v5155 = *(i1*)(intptr_t)v5154;
	i8 v5156 = (i8)(intptr_t)(f240_ArchAlignUp);
	i2 v5157;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v5156)(&v5157, v5155, v5149);
	i8 v5158 = (i8)(intptr_t)(ws+3344);
	*(i2*)(intptr_t)v5158 = v5157;

	i8 v5159 = (i8)(intptr_t)(ws+3344);
	i2 v5160 = *(i2*)(intptr_t)v5159;
	i8 v5161 = (i8)(intptr_t)(ws+3336);
	i8 v5162 = *(i8*)(intptr_t)v5161;
	i8 v5163 = *(i8*)(intptr_t)v5162;
	i8 v5164 = v5163+(+24);
	*(i2*)(intptr_t)v5164 = v5160;

	i8 v5165 = (i8)(intptr_t)(ws+3344);
	i2 v5166 = *(i2*)(intptr_t)v5165;
	i8 v5167 = (i8)(intptr_t)(ws+3336);
	i8 v5168 = *(i8*)(intptr_t)v5167;
	i8 v5169 = *(i8*)(intptr_t)v5168;
	i8 v5170 = *(i8*)(intptr_t)v5169;
	i8 v5171 = v5170+(+48);
	i2 v5172 = *(i2*)(intptr_t)v5171;
	i2 v5173 = v5166+v5172;
	i8 v5174 = (i8)(intptr_t)(ws+3344);
	*(i2*)(intptr_t)v5174 = v5173;

	i8 v5175 = (i8)(intptr_t)(ws+3328);
	i8 v5176 = *(i8*)(intptr_t)v5175;
	i8 v5177 = v5176+(+48);
	i2 v5178 = *(i2*)(intptr_t)v5177;
	i8 v5179 = (i8)(intptr_t)(ws+3344);
	i2 v5180 = *(i2*)(intptr_t)v5179;
	if (v5178<v5180) goto c02_044e; else goto c02_044f;

c02_044e:;

	i8 v5181 = (i8)(intptr_t)(ws+3344);
	i2 v5182 = *(i2*)(intptr_t)v5181;
	i8 v5183 = (i8)(intptr_t)(ws+3328);
	i8 v5184 = *(i8*)(intptr_t)v5183;
	i8 v5185 = v5184+(+48);
	*(i2*)(intptr_t)v5185 = v5182;

c02_044f:;

c02_044b:;

endsub:;
}

// WriteMid1 workspace at ws+3448 length ws+0
void f245_WriteMid1(i8 p5186 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5186; /*node */

endsub:;
}
	void f177_E_b32(i4 /* quad */);

// WriteMid2 workspace at ws+3448 length ws+0
void f246_WriteMid2(i8 p5187 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5187; /*node */

	i8 v5188 = (i8)(intptr_t)(ws+3440);
	i8 v5189 = *(i8*)(intptr_t)v5188;
	i4 v5190 = *(i4*)(intptr_t)v5189;
	i8 v5191 = (i8)(intptr_t)(f177_E_b32);

	((void(*)(i4 /* quad */))(intptr_t)v5191)(v5190);

endsub:;
}
	void f176_E_b16(i2 /* word */);
	void f176_E_b16(i2 /* word */);
	void f176_E_b16(i2 /* word */);
	void f175_E_b8(i1 /* byte */);

// WriteMid3 workspace at ws+3448 length ws+0
void f247_WriteMid3(i8 p5192 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5192; /*node */

	i8 v5193 = (i8)(intptr_t)(ws+3440);
	i8 v5194 = *(i8*)(intptr_t)v5193;
	i2 v5195 = *(i2*)(intptr_t)v5194;
	i8 v5196 = (i8)(intptr_t)(f176_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5196)(v5195);

	i8 v5197 = (i8)(intptr_t)(ws+3440);
	i8 v5198 = *(i8*)(intptr_t)v5197;
	i8 v5199 = v5198+(+2);
	i2 v5200 = *(i2*)(intptr_t)v5199;
	i8 v5201 = (i8)(intptr_t)(f176_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5201)(v5200);

	i8 v5202 = (i8)(intptr_t)(ws+3440);
	i8 v5203 = *(i8*)(intptr_t)v5202;
	i8 v5204 = v5203+(+4);
	i2 v5205 = *(i2*)(intptr_t)v5204;
	i8 v5206 = (i8)(intptr_t)(f176_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5206)(v5205);

	i8 v5207 = (i8)(intptr_t)(ws+3440);
	i8 v5208 = *(i8*)(intptr_t)v5207;
	i8 v5209 = v5208+(+6);
	i1 v5210 = *(i1*)(intptr_t)v5209;
	i8 v5211 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5211)(v5210);

endsub:;
}
	void f175_E_b8(i1 /* byte */);

// WriteMid4 workspace at ws+3448 length ws+0
void f248_WriteMid4(i8 p5212 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5212; /*node */

	i8 v5213 = (i8)(intptr_t)(ws+3440);
	i8 v5214 = *(i8*)(intptr_t)v5213;
	i1 v5215 = *(i1*)(intptr_t)v5214;
	i8 v5216 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5216)(v5215);

endsub:;
}
	void f177_E_b32(i4 /* quad */);
	void f176_E_b16(i2 /* word */);

// WriteMid5 workspace at ws+3448 length ws+0
void f249_WriteMid5(i8 p5217 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5217; /*node */

	i8 v5218 = (i8)(intptr_t)(ws+3440);
	i8 v5219 = *(i8*)(intptr_t)v5218;
	i4 v5220 = *(i4*)(intptr_t)v5219;
	i8 v5221 = (i8)(intptr_t)(f177_E_b32);

	((void(*)(i4 /* quad */))(intptr_t)v5221)(v5220);

	i8 v5222 = (i8)(intptr_t)(ws+3440);
	i8 v5223 = *(i8*)(intptr_t)v5222;
	i8 v5224 = v5223+(+4);
	i2 v5225 = *(i2*)(intptr_t)v5224;
	i8 v5226 = (i8)(intptr_t)(f176_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5226)(v5225);

endsub:;
}
	void f176_E_b16(i2 /* word */);

// WriteMid6 workspace at ws+3448 length ws+0
void f250_WriteMid6(i8 p5227 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5227; /*node */

	i8 v5228 = (i8)(intptr_t)(ws+3440);
	i8 v5229 = *(i8*)(intptr_t)v5228;
	i2 v5230 = *(i2*)(intptr_t)v5229;
	i8 v5231 = (i8)(intptr_t)(f176_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5231)(v5230);

endsub:;
}
	void f176_E_b16(i2 /* word */);
	void f175_E_b8(i1 /* byte */);
	void f178_E_bsize(i2 /* size */);
	void f175_E_b8(i1 /* byte */);

// WriteMid7 workspace at ws+3448 length ws+0
void f251_WriteMid7(i8 p5232 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5232; /*node */

	i8 v5233 = (i8)(intptr_t)(ws+3440);
	i8 v5234 = *(i8*)(intptr_t)v5233;
	i8 v5235 = *(i8*)(intptr_t)v5234;
	i8 v5236 = *(i8*)(intptr_t)v5235;
	i8 v5237 = v5236+(+8);
	i8 v5238 = *(i8*)(intptr_t)v5237;
	i8 v5239 = v5238+(+56);
	i2 v5240 = *(i2*)(intptr_t)v5239;
	i8 v5241 = (i8)(intptr_t)(f176_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5241)(v5240);

	i8 v5242 = (i8)(intptr_t)(ws+3440);
	i8 v5243 = *(i8*)(intptr_t)v5242;
	i8 v5244 = *(i8*)(intptr_t)v5243;
	i8 v5245 = *(i8*)(intptr_t)v5244;
	i8 v5246 = v5245+(+26);
	i1 v5247 = *(i1*)(intptr_t)v5246;
	i8 v5248 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5248)(v5247);

	i8 v5249 = (i8)(intptr_t)(ws+3440);
	i8 v5250 = *(i8*)(intptr_t)v5249;
	i8 v5251 = *(i8*)(intptr_t)v5250;
	i8 v5252 = *(i8*)(intptr_t)v5251;
	i8 v5253 = v5252+(+24);
	i2 v5254 = *(i2*)(intptr_t)v5253;
	i8 v5255 = (i8)(intptr_t)(f178_E_bsize);

	((void(*)(i2 /* size */))(intptr_t)v5255)(v5254);

	i8 v5256 = (i8)(intptr_t)(ws+3440);
	i8 v5257 = *(i8*)(intptr_t)v5256;
	i8 v5258 = *(i8*)(intptr_t)v5257;
	i8 v5259 = *(i8*)(intptr_t)v5258;
	i8 v5260 = *(i8*)(intptr_t)v5259;
	i8 v5261 = v5260+(+48);
	i2 v5262 = *(i2*)(intptr_t)v5261;
	i1 v5263 = v5262;
	i8 v5264 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5264)(v5263);

endsub:;
}
	void f186_E_countedstring(i8 /* text */);

// WriteMid8 workspace at ws+3448 length ws+0
void f252_WriteMid8(i8 p5265 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5265; /*node */

	i8 v5266 = (i8)(intptr_t)(ws+3440);
	i8 v5267 = *(i8*)(intptr_t)v5266;
	i8 v5268 = *(i8*)(intptr_t)v5267;
	i8 v5269 = (i8)(intptr_t)(f186_E_countedstring);

	((void(*)(i8 /* text */))(intptr_t)v5269)(v5268);

endsub:;
}
	void f176_E_b16(i2 /* word */);
	void f175_E_b8(i1 /* byte */);

// WriteMid9 workspace at ws+3448 length ws+0
void f253_WriteMid9(i8 p5270 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5270; /*node */

	i8 v5271 = (i8)(intptr_t)(ws+3440);
	i8 v5272 = *(i8*)(intptr_t)v5271;
	i8 v5273 = *(i8*)(intptr_t)v5272;
	i8 v5274 = v5273+(+56);
	i2 v5275 = *(i2*)(intptr_t)v5274;
	i8 v5276 = (i8)(intptr_t)(f176_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5276)(v5275);

	i8 v5277 = (i8)(intptr_t)(ws+3440);
	i8 v5278 = *(i8*)(intptr_t)v5277;
	i8 v5279 = v5278+(+8);
	i1 v5280 = *(i1*)(intptr_t)v5279;
	i8 v5281 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5281)(v5280);

endsub:;
}
	void f176_E_b16(i2 /* word */);

// WriteMid10 workspace at ws+3448 length ws+0
void f254_WriteMid10(i8 p5282 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5282; /*node */

	i8 v5283 = (i8)(intptr_t)(ws+3440);
	i8 v5284 = *(i8*)(intptr_t)v5283;
	i8 v5285 = *(i8*)(intptr_t)v5284;
	i8 v5286 = v5285+(+56);
	i2 v5287 = *(i2*)(intptr_t)v5286;
	i8 v5288 = (i8)(intptr_t)(f176_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5288)(v5287);

endsub:;
}
	void f176_E_b16(i2 /* word */);
	void f175_E_b8(i1 /* byte */);
	void f178_E_bsize(i2 /* size */);
	void f175_E_b8(i1 /* byte */);
	void f178_E_bsize(i2 /* size */);

// WriteMid11 workspace at ws+3448 length ws+0
void f255_WriteMid11(i8 p5289 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5289; /*node */

	i8 v5290 = (i8)(intptr_t)(ws+3440);
	i8 v5291 = *(i8*)(intptr_t)v5290;
	i8 v5292 = *(i8*)(intptr_t)v5291;
	i8 v5293 = *(i8*)(intptr_t)v5292;
	i8 v5294 = v5293+(+8);
	i8 v5295 = *(i8*)(intptr_t)v5294;
	i8 v5296 = v5295+(+56);
	i2 v5297 = *(i2*)(intptr_t)v5296;
	i8 v5298 = (i8)(intptr_t)(f176_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5298)(v5297);

	i8 v5299 = (i8)(intptr_t)(ws+3440);
	i8 v5300 = *(i8*)(intptr_t)v5299;
	i8 v5301 = *(i8*)(intptr_t)v5300;
	i8 v5302 = *(i8*)(intptr_t)v5301;
	i8 v5303 = v5302+(+26);
	i1 v5304 = *(i1*)(intptr_t)v5303;
	i8 v5305 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5305)(v5304);

	i8 v5306 = (i8)(intptr_t)(ws+3440);
	i8 v5307 = *(i8*)(intptr_t)v5306;
	i8 v5308 = *(i8*)(intptr_t)v5307;
	i8 v5309 = *(i8*)(intptr_t)v5308;
	i8 v5310 = v5309+(+24);
	i2 v5311 = *(i2*)(intptr_t)v5310;
	i8 v5312 = (i8)(intptr_t)(f178_E_bsize);

	((void(*)(i2 /* size */))(intptr_t)v5312)(v5311);

	i8 v5313 = (i8)(intptr_t)(ws+3440);
	i8 v5314 = *(i8*)(intptr_t)v5313;
	i8 v5315 = *(i8*)(intptr_t)v5314;
	i8 v5316 = *(i8*)(intptr_t)v5315;
	i8 v5317 = *(i8*)(intptr_t)v5316;
	i8 v5318 = v5317+(+48);
	i2 v5319 = *(i2*)(intptr_t)v5318;
	i1 v5320 = v5319;
	i8 v5321 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5321)(v5320);

	i8 v5322 = (i8)(intptr_t)(ws+3440);
	i8 v5323 = *(i8*)(intptr_t)v5322;
	i8 v5324 = v5323+(+8);
	i2 v5325 = *(i2*)(intptr_t)v5324;
	i8 v5326 = (i8)(intptr_t)(f178_E_bsize);

	((void(*)(i2 /* size */))(intptr_t)v5326)(v5325);

endsub:;
}
	void f245_WriteMid1(i8 /* node */);
	void f246_WriteMid2(i8 /* node */);
	void f247_WriteMid3(i8 /* node */);
	void f248_WriteMid4(i8 /* node */);
	void f249_WriteMid5(i8 /* node */);
	void f250_WriteMid6(i8 /* node */);
	void f251_WriteMid7(i8 /* node */);
	void f252_WriteMid8(i8 /* node */);
	void f253_WriteMid9(i8 /* node */);
	void f254_WriteMid10(i8 /* node */);
	void f255_WriteMid11(i8 /* node */);
static data f3___main_s0450[] = {

	{ .ptr = (void*)f245_WriteMid1 },

	{ .ptr = (void*)f246_WriteMid2 },

	{ .ptr = (void*)f247_WriteMid3 },

	{ .ptr = (void*)f248_WriteMid4 },

	{ .ptr = (void*)f249_WriteMid5 },

	{ .ptr = (void*)f250_WriteMid6 },

	{ .ptr = (void*)f251_WriteMid7 },

	{ .ptr = (void*)f252_WriteMid8 },

	{ .ptr = (void*)f253_WriteMid9 },

	{ .ptr = (void*)f254_WriteMid10 },

	{ .ptr = (void*)f255_WriteMid11 },

};
static data f3___main_s0451[] = {








	{ .i1 = { 0x00,0x00,0x00,0x09,0x09,0x06,0x01,0x01}},








	{ .i1 = { 0x01,0x01,0x01,0x07,0x0a,0x09,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x07,0x06,0x09,0x01,0x00,0x00}},








	{ .i1 = { 0x00,0x05,0x05,0x00,0x09,0x09,0x09,0x09}},








	{ .i1 = { 0x09,0x09,0x08,0x08,0x08,0x08,0x08,0x08}},








	{ .i1 = { 0x08,0x08,0x08,0x08,0x01,0x07,0x0a,0x09}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x04,0x04,0x04,0x04,0x04,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x03,0x03,0x03,0x03,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},


	{ .i1 = { 0x00}},
};
	void f175_E_b8(i1 /* byte */);
	void f60_PushNode(i8 /* node */);
	void f62_NextNode(i8* /* node */);
	void f175_E_b8(i1 /* byte */);
	void f63_Discard(i8 /* node */);

// ReallyGenerate workspace at ws+3408 length ws+25
void f257_ReallyGenerate(i8 p5372 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3408) = p5372; /*rootnode */

	i1 v5373 = (i1)+77;
	i8 v5374 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5374)(v5373);

	i8 v5375 = (i8)(intptr_t)(ws+224);
	i8 v5376 = *(i8*)(intptr_t)v5375;
	i8 v5377 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v5377 = v5376;

	i8 v5378 = (i8)(intptr_t)(ws+3408);
	i8 v5379 = *(i8*)(intptr_t)v5378;
	i8 v5380 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v5380)(v5379);

c02_045f:;

	i8 v5381 = (i8)(intptr_t)(ws+224);
	i8 v5382 = *(i8*)(intptr_t)v5381;
	i8 v5383 = (i8)(intptr_t)(ws+3416);
	i8 v5384 = *(i8*)(intptr_t)v5383;
	if (v5382==v5384) goto c02_0462; else goto c02_0461;

c02_0461:;

	i8 v5385 = (i8)(intptr_t)(f62_NextNode);
	i8 v5386;

	((void(*)(i8* /* node */))(intptr_t)v5385)(&v5386);
	i8 v5387 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v5387 = v5386;

	i8 v5388 = (i8)(intptr_t)(ws+3424);
	i8 v5389 = *(i8*)(intptr_t)v5388;
	i8 v5390 = v5389+(+40);
	i1 v5391 = *(i1*)(intptr_t)v5390;
	i8 v5392 = (i8)(intptr_t)(f175_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5392)(v5391);

	i8 v5393 = (i8)(intptr_t)((i1*)f3___main_s0451);
	i8 v5394 = (i8)(intptr_t)(ws+3424);
	i8 v5395 = *(i8*)(intptr_t)v5394;
	i8 v5396 = v5395+(+40);
	i1 v5397 = *(i1*)(intptr_t)v5396;
	i1 v5398 = v5397+(-1);
	i8 v5399 = v5398;
	i8 v5400 = v5393+v5399;
	i1 v5401 = *(i1*)(intptr_t)v5400;
	i8 v5402 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v5402 = v5401;

	i8 v5403 = (i8)(intptr_t)(ws+3424);
	i8 v5404 = *(i8*)(intptr_t)v5403;
	i8 v5405 = (i8)(intptr_t)((i1*)f3___main_s0450);
	i8 v5406 = (i8)(intptr_t)(ws+3432);
	i1 v5407 = *(i1*)(intptr_t)v5406;
	i8 v5408 = v5407;
	i1 v5409 = (i1)+3;
	i8 v5410 = ((i8)v5408)<<v5409;
	i8 v5411 = v5405+v5410;
	i8 v5412 = *(i8*)(intptr_t)v5411;

	((void(*)(i8 /* node */))(intptr_t)v5412)(v5404);

	goto c02_045f;

c02_0462:;

	i8 v5413 = (i8)(intptr_t)(ws+3408);
	i8 v5414 = *(i8*)(intptr_t)v5413;
	i8 v5415 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v5415)(v5414);

endsub:;
}
	void f63_Discard(i8 /* node */);
	void f123_MidAsmgroupstart(i8* /* m */);
	void f257_ReallyGenerate(i8 /* rootnode */);
	void f104_MidAsmgroupend(i8* /* m */);
	void f257_ReallyGenerate(i8 /* rootnode */);
	void f257_ReallyGenerate(i8 /* rootnode */);

// Generate workspace at ws+3392 length ws+9
void f258_Generate(i8 p5418 /* statement */) {
	*(i8*)(intptr_t)(ws+3392) = p5418; /*statement */

	i8 v5419 = (i8)(intptr_t)(ws+3392);
	i8 v5420 = *(i8*)(intptr_t)v5419;
	i8 v5421 = v5420+(+40);
	i1 v5422 = *(i1*)(intptr_t)v5421;
	i8 v5423 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v5423 = v5422;

	i8 v5424 = (i8)(intptr_t)(ws+1536);
	i1 v5425 = *(i1*)(intptr_t)v5424;
	i1 v5426 = (i1)+27;
	if (v5425==v5426) goto c02_0468; else goto c02_046a;

c02_046a:;

	i8 v5427 = (i8)(intptr_t)(ws+1536);
	i1 v5428 = *(i1*)(intptr_t)v5427;
	i1 v5429 = (i1)+28;
	if (v5428==v5429) goto c02_0468; else goto c02_0469;

c02_0468:;

	i8 v5430 = (i8)(intptr_t)(ws+3400);
	i1 v5431 = *(i1*)(intptr_t)v5430;
	i1 v5432 = (i1)+26;
	if (v5431==v5432) goto c02_0471; else goto c02_0472;

c02_0472:;

	i8 v5433 = (i8)(intptr_t)(ws+3400);
	i1 v5434 = *(i1*)(intptr_t)v5433;
	i1 v5435 = (i1)+5;
	if (v5434==v5435) goto c02_0471; else goto c02_0470;

c02_0470:;

	i8 v5436 = (i8)(intptr_t)(ws+3392);
	i8 v5437 = *(i8*)(intptr_t)v5436;
	i8 v5438 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v5438)(v5437);

	goto endsub;

c02_0471:;

c02_046b:;

c02_0469:;

c02_0463:;

	i8 v5439 = (i8)(intptr_t)(ws+3400);
	i1 v5440 = *(i1*)(intptr_t)v5439;
	i1 v5441 = (i1)+18;
	if (v5440==v5441) goto c02_047a; else goto c02_0479;

c02_047a:;

	i8 v5442 = (i8)(intptr_t)(ws+1536);
	i1 v5443 = *(i1*)(intptr_t)v5442;
	i1 v5444 = (i1)+23;
	if (v5443==v5444) goto c02_0479; else goto c02_0478;

c02_0478:;

	i8 v5445 = (i8)(intptr_t)(f123_MidAsmgroupstart);
	i8 v5446;

	((void(*)(i8* /* m */))(intptr_t)v5445)(&v5446);
	i8 v5447 = (i8)(intptr_t)(f257_ReallyGenerate);

	((void(*)(i8 /* rootnode */))(intptr_t)v5447)(v5446);

c02_0479:;

c02_0473:;

	i8 v5448 = (i8)(intptr_t)(ws+1536);
	i1 v5449 = *(i1*)(intptr_t)v5448;
	i1 v5450 = (i1)+23;
	if (v5449==v5450) goto c02_0482; else goto c02_0481;

c02_0482:;

	i8 v5451 = (i8)(intptr_t)(ws+3400);
	i1 v5452 = *(i1*)(intptr_t)v5451;
	i1 v5453 = (i1)+18;
	if (v5452==v5453) goto c02_0481; else goto c02_0480;

c02_0480:;

	i8 v5454 = (i8)(intptr_t)(f104_MidAsmgroupend);
	i8 v5455;

	((void(*)(i8* /* m */))(intptr_t)v5454)(&v5455);
	i8 v5456 = (i8)(intptr_t)(f257_ReallyGenerate);

	((void(*)(i8 /* rootnode */))(intptr_t)v5456)(v5455);

c02_0481:;

c02_047b:;

	i8 v5457 = (i8)(intptr_t)(ws+3400);
	i1 v5458 = *(i1*)(intptr_t)v5457;
	i8 v5459 = (i8)(intptr_t)(ws+1536);
	*(i1*)(intptr_t)v5459 = v5458;

	i8 v5460 = (i8)(intptr_t)(ws+3392);
	i8 v5461 = *(i8*)(intptr_t)v5460;
	i8 v5462 = (i8)(intptr_t)(f257_ReallyGenerate);

	((void(*)(i8 /* rootnode */))(intptr_t)v5462)(v5461);

endsub:;
}
	void f60_PushNode(i8 /* node */);
	void f61_PopNode(i8* /* node */);
	void f60_PushNode(i8 /* node */);
	void f60_PushNode(i8 /* node */);
	void f63_Discard(i8 /* node */);

// push_and_free workspace at ws+3392 length ws+0
void f260_push_and_free(void) {

	i8 v5520 = (i8)(intptr_t)(ws+3360);
	i2 v5521 = *(i2*)(intptr_t)v5520;
	i8 v5522 = (i8)(intptr_t)(ws+3376);
	i8 v5523 = *(i8*)(intptr_t)v5522;
	*(i2*)(intptr_t)v5523 = v5521;

	i8 v5524 = (i8)(intptr_t)(ws+3362);
	i2 v5525 = *(i2*)(intptr_t)v5524;
	i8 v5526 = (i8)(intptr_t)(ws+3376);
	i8 v5527 = *(i8*)(intptr_t)v5526;
	i8 v5528 = v5527+(+2);
	*(i2*)(intptr_t)v5528 = v5525;

	i8 v5529 = (i8)(intptr_t)(ws+3364);
	i2 v5530 = *(i2*)(intptr_t)v5529;
	i8 v5531 = (i8)(intptr_t)(ws+3376);
	i8 v5532 = *(i8*)(intptr_t)v5531;
	i8 v5533 = v5532+(+4);
	*(i2*)(intptr_t)v5533 = v5530;

	i8 v5534 = (i8)+0;
	i8 v5535 = (i8)(intptr_t)(ws+3352);
	i8 v5536 = *(i8*)(intptr_t)v5535;
	i8 v5537 = v5536+(+24);
	*(i8*)(intptr_t)v5537 = v5534;

	i8 v5538 = (i8)+0;
	i8 v5539 = (i8)(intptr_t)(ws+3352);
	i8 v5540 = *(i8*)(intptr_t)v5539;
	i8 v5541 = v5540+(+32);
	*(i8*)(intptr_t)v5541 = v5538;

	i8 v5542 = (i8)(intptr_t)(ws+3376);
	i8 v5543 = *(i8*)(intptr_t)v5542;
	i8 v5544 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v5544)(v5543);

	i8 v5545 = (i8)(intptr_t)(ws+3368);
	i8 v5546 = *(i8*)(intptr_t)v5545;
	i8 v5547 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v5547)(v5546);

	i8 v5548 = (i8)(intptr_t)(ws+3352);
	i8 v5549 = *(i8*)(intptr_t)v5548;
	i8 v5550 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v5550)(v5549);

endsub:;
}
	void f237_AllocLabel(i2* /* label */);
	void f260_push_and_free(void);
	void f237_AllocLabel(i2* /* label */);
	void f260_push_and_free(void);
	void f258_Generate(i8 /* statement */);
	void f136_MidLabel(i8* /* m */, i2 /* label */);
	void f258_Generate(i8 /* statement */);

// GenerateConditional workspace at ws+3336 length ws+54
void f259_GenerateConditional(i8 p5463 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3336) = p5463; /*rootnode */

	i8 v5464 = (i8)(intptr_t)(ws+224);
	i8 v5465 = *(i8*)(intptr_t)v5464;
	i8 v5466 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v5466 = v5465;

	i8 v5467 = (i8)(intptr_t)(ws+3336);
	i8 v5468 = *(i8*)(intptr_t)v5467;
	i8 v5469 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v5469)(v5468);

c02_0485:;

	i8 v5470 = (i8)(intptr_t)(ws+224);
	i8 v5471 = *(i8*)(intptr_t)v5470;
	i8 v5472 = (i8)(intptr_t)(ws+3344);
	i8 v5473 = *(i8*)(intptr_t)v5472;
	if (v5471==v5473) goto c02_0488; else goto c02_0487;

c02_0487:;

	i8 v5474 = (i8)(intptr_t)(f61_PopNode);
	i8 v5475;

	((void(*)(i8* /* node */))(intptr_t)v5474)(&v5475);
	i8 v5476 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5476 = v5475;

	i8 v5477 = (i8)(intptr_t)(ws+3352);
	i8 v5478 = *(i8*)(intptr_t)v5477;
	i2 v5479 = *(i2*)(intptr_t)v5478;
	i8 v5480 = (i8)(intptr_t)(ws+3360);
	*(i2*)(intptr_t)v5480 = v5479;

	i8 v5481 = (i8)(intptr_t)(ws+3352);
	i8 v5482 = *(i8*)(intptr_t)v5481;
	i8 v5483 = v5482+(+2);
	i2 v5484 = *(i2*)(intptr_t)v5483;
	i8 v5485 = (i8)(intptr_t)(ws+3362);
	*(i2*)(intptr_t)v5485 = v5484;

	i8 v5486 = (i8)(intptr_t)(ws+3352);
	i8 v5487 = *(i8*)(intptr_t)v5486;
	i8 v5488 = v5487+(+4);
	i2 v5489 = *(i2*)(intptr_t)v5488;
	i8 v5490 = (i8)(intptr_t)(ws+3364);
	*(i2*)(intptr_t)v5490 = v5489;

	i8 v5491 = (i8)(intptr_t)(ws+3352);
	i8 v5492 = *(i8*)(intptr_t)v5491;
	i8 v5493 = v5492+(+24);
	i8 v5494 = *(i8*)(intptr_t)v5493;
	i8 v5495 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v5495 = v5494;

	i8 v5496 = (i8)(intptr_t)(ws+3352);
	i8 v5497 = *(i8*)(intptr_t)v5496;
	i8 v5498 = v5497+(+32);
	i8 v5499 = *(i8*)(intptr_t)v5498;
	i8 v5500 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v5500 = v5499;

	i8 v5501 = (i8)(intptr_t)(ws+3352);
	i8 v5502 = *(i8*)(intptr_t)v5501;
	i8 v5503 = v5502+(+40);
	i1 v5504 = *(i1*)(intptr_t)v5503;
	i8 v5505 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v5505 = v5504;

	i8 v5506 = (i8)(intptr_t)(ws+3352);
	i8 v5507 = *(i8*)(intptr_t)v5506;
	i8 v5508 = v5507+(+6);
	i1 v5509 = *(i1*)(intptr_t)v5508;
	i1 v5510 = (i1)+0;
	if (v5509==v5510) goto c02_048d; else goto c02_048c;

c02_048c:;

	i8 v5511 = (i8)(intptr_t)(ws+3360);
	i2 v5512 = *(i2*)(intptr_t)v5511;
	i8 v5513 = (i8)(intptr_t)(ws+3386);
	*(i2*)(intptr_t)v5513 = v5512;

	i8 v5514 = (i8)(intptr_t)(ws+3362);
	i2 v5515 = *(i2*)(intptr_t)v5514;
	i8 v5516 = (i8)(intptr_t)(ws+3360);
	*(i2*)(intptr_t)v5516 = v5515;

	i8 v5517 = (i8)(intptr_t)(ws+3386);
	i2 v5518 = *(i2*)(intptr_t)v5517;
	i8 v5519 = (i8)(intptr_t)(ws+3362);
	*(i2*)(intptr_t)v5519 = v5518;

c02_048d:;

c02_0489:;


	i8 v5551 = (i8)(intptr_t)(ws+3384);
	i1 v5552 = *(i1*)(intptr_t)v5551;

	if (v5552 != +60) goto c02_048f;

	i8 v5553 = (i8)(intptr_t)(f237_AllocLabel);
	i2 v5554;

	((void(*)(i2* /* label */))(intptr_t)v5553)(&v5554);
	i8 v5555 = (i8)(intptr_t)(ws+3388);
	*(i2*)(intptr_t)v5555 = v5554;

	i8 v5556 = (i8)(intptr_t)(ws+3360);
	i2 v5557 = *(i2*)(intptr_t)v5556;
	i8 v5558 = (i8)(intptr_t)(ws+3368);
	i8 v5559 = *(i8*)(intptr_t)v5558;
	*(i2*)(intptr_t)v5559 = v5557;

	i8 v5560 = (i8)(intptr_t)(ws+3388);
	i2 v5561 = *(i2*)(intptr_t)v5560;
	i8 v5562 = (i8)(intptr_t)(ws+3368);
	i8 v5563 = *(i8*)(intptr_t)v5562;
	i8 v5564 = v5563+(+2);
	*(i2*)(intptr_t)v5564 = v5561;

	i8 v5565 = (i8)(intptr_t)(ws+3388);
	i2 v5566 = *(i2*)(intptr_t)v5565;
	i8 v5567 = (i8)(intptr_t)(ws+3368);
	i8 v5568 = *(i8*)(intptr_t)v5567;
	i8 v5569 = v5568+(+4);
	*(i2*)(intptr_t)v5569 = v5566;

	i8 v5570 = (i8)(intptr_t)(f260_push_and_free);

	((void(*)(void))(intptr_t)v5570)();

	goto c02_048e;

c02_048f:;

	if (v5552 != +59) goto c02_0490;

	i8 v5571 = (i8)(intptr_t)(f237_AllocLabel);
	i2 v5572;

	((void(*)(i2* /* label */))(intptr_t)v5571)(&v5572);
	i8 v5573 = (i8)(intptr_t)(ws+3388);
	*(i2*)(intptr_t)v5573 = v5572;

	i8 v5574 = (i8)(intptr_t)(ws+3388);
	i2 v5575 = *(i2*)(intptr_t)v5574;
	i8 v5576 = (i8)(intptr_t)(ws+3368);
	i8 v5577 = *(i8*)(intptr_t)v5576;
	*(i2*)(intptr_t)v5577 = v5575;

	i8 v5578 = (i8)(intptr_t)(ws+3362);
	i2 v5579 = *(i2*)(intptr_t)v5578;
	i8 v5580 = (i8)(intptr_t)(ws+3368);
	i8 v5581 = *(i8*)(intptr_t)v5580;
	i8 v5582 = v5581+(+2);
	*(i2*)(intptr_t)v5582 = v5579;

	i8 v5583 = (i8)(intptr_t)(ws+3388);
	i2 v5584 = *(i2*)(intptr_t)v5583;
	i8 v5585 = (i8)(intptr_t)(ws+3368);
	i8 v5586 = *(i8*)(intptr_t)v5585;
	i8 v5587 = v5586+(+4);
	*(i2*)(intptr_t)v5587 = v5584;

	i8 v5588 = (i8)(intptr_t)(f260_push_and_free);

	((void(*)(void))(intptr_t)v5588)();

	goto c02_048e;

c02_0490:;

	i8 v5589 = (i8)(intptr_t)(ws+3360);
	i2 v5590 = *(i2*)(intptr_t)v5589;
	i8 v5591 = (i8)(intptr_t)(ws+3352);
	i8 v5592 = *(i8*)(intptr_t)v5591;
	*(i2*)(intptr_t)v5592 = v5590;

	i8 v5593 = (i8)(intptr_t)(ws+3362);
	i2 v5594 = *(i2*)(intptr_t)v5593;
	i8 v5595 = (i8)(intptr_t)(ws+3352);
	i8 v5596 = *(i8*)(intptr_t)v5595;
	i8 v5597 = v5596+(+2);
	*(i2*)(intptr_t)v5597 = v5594;

	i8 v5598 = (i8)(intptr_t)(ws+3352);
	i8 v5599 = *(i8*)(intptr_t)v5598;
	i8 v5600 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v5600)(v5599);

	i8 v5601 = (i8)(intptr_t)(ws+3364);
	i2 v5602 = *(i2*)(intptr_t)v5601;
	i8 v5603 = (i8)(intptr_t)(f136_MidLabel);
	i8 v5604;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v5603)(&v5604, v5602);
	i8 v5605 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v5605)(v5604);

c02_048e:;


	goto c02_0485;

c02_0488:;

endsub:;
}
	void f223_CheckNotPartialType(i8 /* type */);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f243_ArchInitVariable(i8 /* symbol */);

// InitVariable workspace at ws+3344 length ws+24
void f261_InitVariable(i8 p5606 /* type */, i8 p5607 /* symbol */, i8 p5608 /* subr */) {
	*(i8*)(intptr_t)(ws+3344) = p5608; /*subr */
	*(i8*)(intptr_t)(ws+3352) = p5607; /*symbol */
	*(i8*)(intptr_t)(ws+3360) = p5606; /*type */

	i8 v5609 = (i8)(intptr_t)(ws+3360);
	i8 v5610 = *(i8*)(intptr_t)v5609;
	i8 v5611 = (i8)(intptr_t)(f223_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v5611)(v5610);

	i1 v5612 = (i1)+28;
	i8 v5613 = (i8)(intptr_t)(ws+3352);
	i8 v5614 = *(i8*)(intptr_t)v5613;
	i8 v5615 = v5614+(+32);
	*(i1*)(intptr_t)v5615 = v5612;

	i8 v5616 = (i8)+27;
	i8 v5617 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v5618;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v5617)(&v5618, v5616);
	i8 v5619 = (i8)(intptr_t)(ws+3352);
	i8 v5620 = *(i8*)(intptr_t)v5619;
	*(i8*)(intptr_t)v5620 = v5618;

	i8 v5621 = (i8)(intptr_t)(ws+3360);
	i8 v5622 = *(i8*)(intptr_t)v5621;
	i8 v5623 = (i8)(intptr_t)(ws+3352);
	i8 v5624 = *(i8*)(intptr_t)v5623;
	i8 v5625 = *(i8*)(intptr_t)v5624;
	*(i8*)(intptr_t)v5625 = v5622;

	i8 v5626 = (i8)(intptr_t)(ws+3344);
	i8 v5627 = *(i8*)(intptr_t)v5626;
	i8 v5628 = (i8)(intptr_t)(ws+3352);
	i8 v5629 = *(i8*)(intptr_t)v5628;
	i8 v5630 = *(i8*)(intptr_t)v5629;
	i8 v5631 = v5630+(+8);
	*(i8*)(intptr_t)v5631 = v5627;

	i8 v5632 = (i8)(intptr_t)(ws+3352);
	i8 v5633 = *(i8*)(intptr_t)v5632;
	i8 v5634 = (i8)(intptr_t)(f243_ArchInitVariable);

	((void(*)(i8 /* symbol */))(intptr_t)v5634)(v5633);

endsub:;
}
	void f66_AllocNewType(i8* /* type */);
	void f70_StrDupBraced(i8* /* news */, i8 /* s */);
	void f224_AddTypeToNamespace(i8 /* name */, i8 /* type */, i8 /* namespace */);

// MakePointerType workspace at ws+3376 length ws+16
void f262_MakePointerType(i8* p5635 /* ptrtype */, i8 p5636 /* type */) {
	*(i8*)(intptr_t)(ws+3376) = p5636; /*type */

	i8 v5637 = (i8)(intptr_t)(ws+3376);
	i8 v5638 = *(i8*)(intptr_t)v5637;
	i8 v5639 = v5638+(+40);
	i8 v5640 = *(i8*)(intptr_t)v5639;
	i8 v5641 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v5641 = v5640;

	i8 v5642 = (i8)(intptr_t)(ws+3384);
	i8 v5643 = *(i8*)(intptr_t)v5642;
	i8 v5644 = (i8)+0;
	if (v5643==v5644) goto c02_0494; else goto c02_0495;

c02_0494:;

	i8 v5645 = (i8)(intptr_t)(f66_AllocNewType);
	i8 v5646;

	((void(*)(i8* /* type */))(intptr_t)v5645)(&v5646);
	i8 v5647 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v5647 = v5646;

	i1 v5648 = (i1)+3;
	i8 v5649 = (i8)(intptr_t)(ws+3384);
	i8 v5650 = *(i8*)(intptr_t)v5649;
	i8 v5651 = v5650+(+52);
	*(i1*)(intptr_t)v5651 = v5648;

	i8 v5652 = (i8)(intptr_t)(ws+1528);
	i8 v5653 = *(i8*)(intptr_t)v5652;
	i8 v5654 = v5653+(+48);
	i2 v5655 = *(i2*)(intptr_t)v5654;
	i8 v5656 = (i8)(intptr_t)(ws+3384);
	i8 v5657 = *(i8*)(intptr_t)v5656;
	i8 v5658 = v5657+(+48);
	*(i2*)(intptr_t)v5658 = v5655;

	i8 v5659 = (i8)(intptr_t)(ws+1528);
	i8 v5660 = *(i8*)(intptr_t)v5659;
	i8 v5661 = v5660+(+53);
	i1 v5662 = *(i1*)(intptr_t)v5661;
	i8 v5663 = (i8)(intptr_t)(ws+3384);
	i8 v5664 = *(i8*)(intptr_t)v5663;
	i8 v5665 = v5664+(+53);
	*(i1*)(intptr_t)v5665 = v5662;

	i8 v5666 = (i8)(intptr_t)(ws+1528);
	i8 v5667 = *(i8*)(intptr_t)v5666;
	i8 v5668 = v5667+(+50);
	i2 v5669 = *(i2*)(intptr_t)v5668;
	i8 v5670 = (i8)(intptr_t)(ws+3384);
	i8 v5671 = *(i8*)(intptr_t)v5670;
	i8 v5672 = v5671+(+50);
	*(i2*)(intptr_t)v5672 = v5669;

	i8 v5673 = (i8)(intptr_t)(ws+3376);
	i8 v5674 = *(i8*)(intptr_t)v5673;
	i8 v5675 = (i8)(intptr_t)(ws+3384);
	i8 v5676 = *(i8*)(intptr_t)v5675;
	*(i8*)(intptr_t)v5676 = v5674;

	i8 v5677 = (i8)(intptr_t)(ws+3384);
	i8 v5678 = *(i8*)(intptr_t)v5677;
	i8 v5679 = (i8)(intptr_t)(ws+3376);
	i8 v5680 = *(i8*)(intptr_t)v5679;
	i8 v5681 = v5680+(+40);
	*(i8*)(intptr_t)v5681 = v5678;

	i8 v5682 = (i8)(intptr_t)(ws+3376);
	i8 v5683 = *(i8*)(intptr_t)v5682;
	i8 v5684 = v5683+(+32);
	i8 v5685 = *(i8*)(intptr_t)v5684;
	i8 v5686 = v5685+(+16);
	i8 v5687 = *(i8*)(intptr_t)v5686;
	i8 v5688 = (i8)(intptr_t)(ws+3384);
	i8 v5689 = *(i8*)(intptr_t)v5688;
	i8 v5690 = (i8)(intptr_t)(ws+3376);
	i8 v5691 = *(i8*)(intptr_t)v5690;
	i8 v5692 = v5691+(+32);
	i8 v5693 = *(i8*)(intptr_t)v5692;
	i8 v5694 = v5693+(+8);
	i8 v5695 = *(i8*)(intptr_t)v5694;
	i8 v5696 = (i8)(intptr_t)(f70_StrDupBraced);
	i8 v5697;

	((void(*)(i8* /* news */, i8 /* s */))(intptr_t)v5696)(&v5697, v5695);
	i8 v5698 = (i8)(intptr_t)(f224_AddTypeToNamespace);

	((void(*)(i8 /* name */, i8 /* type */, i8 /* namespace */))(intptr_t)v5698)(v5697, v5689, v5687);

c02_0495:;

c02_0491:;

endsub:;
	*p5635 = *(i8*)(intptr_t)(ws+3384);
}
	void f223_CheckNotPartialType(i8 /* type */);
	void f66_AllocNewType(i8* /* type */);
	void f242_ArchGuessIntType(i8* /* symbol */, i4 /* max */, i4 /* min */);
	void f71_StrDupArrayed(i8* /* news */, i2 /* i */, i8 /* s */);
	void f224_AddTypeToNamespace(i8 /* name */, i8 /* type */, i8 /* namespace */);

// MakeArrayType workspace at ws+3328 length ws+26
void f263_MakeArrayType(i8* p5699 /* arraytype */, i2 p5700 /* size */, i8 p5701 /* type */) {
	*(i8*)(intptr_t)(ws+3328) = p5701; /*type */
	*(i2*)(intptr_t)(ws+3336) = p5700; /*size */

	i8 v5702 = (i8)(intptr_t)(ws+3328);
	i8 v5703 = *(i8*)(intptr_t)v5702;
	i8 v5704 = (i8)(intptr_t)(f223_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v5704)(v5703);

	i8 v5705 = (i8)(intptr_t)(f66_AllocNewType);
	i8 v5706;

	((void(*)(i8* /* type */))(intptr_t)v5705)(&v5706);
	i8 v5707 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v5707 = v5706;

	i1 v5708 = (i1)+4;
	i8 v5709 = (i8)(intptr_t)(ws+3344);
	i8 v5710 = *(i8*)(intptr_t)v5709;
	i8 v5711 = v5710+(+52);
	*(i1*)(intptr_t)v5711 = v5708;

	i2 v5712 = (i2)+0;
	i8 v5713 = (i8)(intptr_t)(ws+3352);
	*(i2*)(intptr_t)v5713 = v5712;

	i2 v5714 = (i2)+0;
	i8 v5715 = (i8)(intptr_t)(ws+3336);
	i2 v5716 = *(i2*)(intptr_t)v5715;
	if (v5714<v5716) goto c02_0499; else goto c02_049a;

c02_0499:;

	i8 v5717 = (i8)(intptr_t)(ws+3328);
	i8 v5718 = *(i8*)(intptr_t)v5717;
	i8 v5719 = v5718+(+50);
	i2 v5720 = *(i2*)(intptr_t)v5719;
	i8 v5721 = (i8)(intptr_t)(ws+3336);
	i2 v5722 = *(i2*)(intptr_t)v5721;
	i2 v5723 = v5722+(-1);
	i2 v5724 = v5720*v5723;
	i8 v5725 = (i8)(intptr_t)(ws+3328);
	i8 v5726 = *(i8*)(intptr_t)v5725;
	i8 v5727 = v5726+(+48);
	i2 v5728 = *(i2*)(intptr_t)v5727;
	i2 v5729 = v5724+v5728;
	i8 v5730 = (i8)(intptr_t)(ws+3352);
	*(i2*)(intptr_t)v5730 = v5729;

c02_049a:;

c02_0496:;

	i8 v5731 = (i8)(intptr_t)(ws+3352);
	i2 v5732 = *(i2*)(intptr_t)v5731;
	i8 v5733 = (i8)(intptr_t)(ws+3344);
	i8 v5734 = *(i8*)(intptr_t)v5733;
	i8 v5735 = v5734+(+48);
	*(i2*)(intptr_t)v5735 = v5732;

	i8 v5736 = (i8)(intptr_t)(ws+3328);
	i8 v5737 = *(i8*)(intptr_t)v5736;
	i8 v5738 = v5737+(+53);
	i1 v5739 = *(i1*)(intptr_t)v5738;
	i8 v5740 = (i8)(intptr_t)(ws+3344);
	i8 v5741 = *(i8*)(intptr_t)v5740;
	i8 v5742 = v5741+(+53);
	*(i1*)(intptr_t)v5742 = v5739;

	i8 v5743 = (i8)(intptr_t)(ws+3328);
	i8 v5744 = *(i8*)(intptr_t)v5743;
	i8 v5745 = v5744+(+50);
	i2 v5746 = *(i2*)(intptr_t)v5745;
	i8 v5747 = (i8)(intptr_t)(ws+3336);
	i2 v5748 = *(i2*)(intptr_t)v5747;
	i2 v5749 = v5746*v5748;
	i8 v5750 = (i8)(intptr_t)(ws+3344);
	i8 v5751 = *(i8*)(intptr_t)v5750;
	i8 v5752 = v5751+(+50);
	*(i2*)(intptr_t)v5752 = v5749;

	i8 v5753 = (i8)(intptr_t)(ws+3328);
	i8 v5754 = *(i8*)(intptr_t)v5753;
	i8 v5755 = (i8)(intptr_t)(ws+3344);
	i8 v5756 = *(i8*)(intptr_t)v5755;
	*(i8*)(intptr_t)v5756 = v5754;

	i8 v5757 = (i8)(intptr_t)(ws+3336);
	i2 v5758 = *(i2*)(intptr_t)v5757;
	i8 v5759 = (i8)(intptr_t)(ws+3344);
	i8 v5760 = *(i8*)(intptr_t)v5759;
	i8 v5761 = v5760+(+8);
	*(i2*)(intptr_t)v5761 = v5758;

	i4 v5762 = (i4)+0;
	i8 v5763 = (i8)(intptr_t)(ws+3336);
	i2 v5764 = *(i2*)(intptr_t)v5763;
	i2 v5765 = v5764+(-1);
	i4 v5766 = v5765;
	i8 v5767 = (i8)(intptr_t)(f242_ArchGuessIntType);
	i8 v5768;

	((void(*)(i8* /* symbol */, i4 /* max */, i4 /* min */))(intptr_t)v5767)(&v5768, v5766, v5762);
	i8 v5769 = (i8)(intptr_t)(ws+3344);
	i8 v5770 = *(i8*)(intptr_t)v5769;
	i8 v5771 = v5770+(+16);
	*(i8*)(intptr_t)v5771 = v5768;

	i8 v5772 = (i8)(intptr_t)(ws+3328);
	i8 v5773 = *(i8*)(intptr_t)v5772;
	i8 v5774 = v5773+(+32);
	i8 v5775 = *(i8*)(intptr_t)v5774;
	i8 v5776 = v5775+(+16);
	i8 v5777 = *(i8*)(intptr_t)v5776;
	i8 v5778 = (i8)(intptr_t)(ws+3344);
	i8 v5779 = *(i8*)(intptr_t)v5778;
	i8 v5780 = (i8)(intptr_t)(ws+3328);
	i8 v5781 = *(i8*)(intptr_t)v5780;
	i8 v5782 = v5781+(+32);
	i8 v5783 = *(i8*)(intptr_t)v5782;
	i8 v5784 = v5783+(+8);
	i8 v5785 = *(i8*)(intptr_t)v5784;
	i8 v5786 = (i8)(intptr_t)(ws+3336);
	i2 v5787 = *(i2*)(intptr_t)v5786;
	i8 v5788 = (i8)(intptr_t)(f71_StrDupArrayed);
	i8 v5789;

	((void(*)(i8* /* news */, i2 /* i */, i8 /* s */))(intptr_t)v5788)(&v5789, v5787, v5785);
	i8 v5790 = (i8)(intptr_t)(f224_AddTypeToNamespace);

	((void(*)(i8 /* name */, i8 /* type */, i8 /* namespace */))(intptr_t)v5790)(v5789, v5779, v5777);

endsub:;
	*p5699 = *(i8*)(intptr_t)(ws+3344);
}

// QueueNamespace workspace at ws+3384 length ws+16
void f265_QueueNamespace(i8 p5794 /* namespace */) {
	*(i8*)(intptr_t)(ws+3384) = p5794; /*namespace */

c02_049d:;

	i8 v5795 = (i8)(intptr_t)(ws+3384);
	i8 v5796 = *(i8*)(intptr_t)v5795;
	i8 v5797 = *(i8*)(intptr_t)v5796;
	i8 v5798 = (i8)+0;
	if (v5797==v5798) goto c02_04a0; else goto c02_049f;

c02_049f:;

	i8 v5799 = (i8)(intptr_t)(ws+3384);
	i8 v5800 = *(i8*)(intptr_t)v5799;
	i8 v5801 = *(i8*)(intptr_t)v5800;
	i8 v5802 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v5802 = v5801;

	i8 v5803 = (i8)(intptr_t)(ws+3392);
	i8 v5804 = *(i8*)(intptr_t)v5803;
	i8 v5805 = v5804+(+24);
	i8 v5806 = *(i8*)(intptr_t)v5805;
	i8 v5807 = (i8)(intptr_t)(ws+3384);
	i8 v5808 = *(i8*)(intptr_t)v5807;
	*(i8*)(intptr_t)v5808 = v5806;

	i8 v5809 = (i8)(intptr_t)(ws+3352);
	i8 v5810 = *(i8*)(intptr_t)v5809;
	i8 v5811 = (i8)(intptr_t)(ws+3392);
	i8 v5812 = *(i8*)(intptr_t)v5811;
	i8 v5813 = v5812+(+24);
	*(i8*)(intptr_t)v5813 = v5810;

	i8 v5814 = (i8)(intptr_t)(ws+3392);
	i8 v5815 = *(i8*)(intptr_t)v5814;
	i8 v5816 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5816 = v5815;

	goto c02_049d;

c02_04a0:;

endsub:;
}
	void f100_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f99_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f265_QueueNamespace(i8 /* namespace */);
	void f265_QueueNamespace(i8 /* namespace */);
	void f34_Free(i8 /* block */);
	void f67_FreeType(i8 /* type */);
	void f34_Free(i8 /* block */);
	void f34_Free(i8 /* block */);
	void f65_FreeSymbol(i8 /* symbol */);

// DestructSubroutineContents workspace at ws+3344 length ws+40
void f264_DestructSubroutineContents(i8 p5791 /* subr */) {
	*(i8*)(intptr_t)(ws+3344) = p5791; /*subr */

	i8 v5792 = (i8)+0;
	i8 v5793 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5793 = v5792;


	i8 v5817 = (i8)(intptr_t)(ws+3344);
	i8 v5818 = *(i8*)(intptr_t)v5817;
	i8 v5819 = v5818+(+81);
	i1 v5820 = *(i1*)(intptr_t)v5819;
	i1 v5821 = (i1)+0;
	if (v5820==v5821) goto c02_04a5; else goto c02_04a4;

c02_04a4:;

	i8 v5822 = (i8)(intptr_t)(ws+3344);
	i8 v5823 = *(i8*)(intptr_t)v5822;
	i8 v5824 = (i8)(intptr_t)(ws+3344);
	i8 v5825 = *(i8*)(intptr_t)v5824;
	i8 v5826 = v5825+(+81);
	i1 v5827 = *(i1*)(intptr_t)v5826;
	i1 v5828 = v5827+(-1);
	i8 v5829 = (i8)(intptr_t)(f100_GetOutputParameter);
	i8 v5830;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v5829)(&v5830, v5828, v5823);
	i8 v5831 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v5831 = v5830;

	goto c02_04a1;

c02_04a5:;

	i8 v5832 = (i8)(intptr_t)(ws+3344);
	i8 v5833 = *(i8*)(intptr_t)v5832;
	i8 v5834 = v5833+(+80);
	i1 v5835 = *(i1*)(intptr_t)v5834;
	i1 v5836 = (i1)+0;
	if (v5835==v5836) goto c02_04a9; else goto c02_04a8;

c02_04a8:;

	i8 v5837 = (i8)(intptr_t)(ws+3344);
	i8 v5838 = *(i8*)(intptr_t)v5837;
	i8 v5839 = (i8)(intptr_t)(ws+3344);
	i8 v5840 = *(i8*)(intptr_t)v5839;
	i8 v5841 = v5840+(+80);
	i1 v5842 = *(i1*)(intptr_t)v5841;
	i1 v5843 = v5842+(-1);
	i8 v5844 = (i8)(intptr_t)(f99_GetInputParameter);
	i8 v5845;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v5844)(&v5845, v5843, v5838);
	i8 v5846 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v5846 = v5845;

	goto c02_04a1;

c02_04a9:;

	i8 v5847 = (i8)+0;
	i8 v5848 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v5848 = v5847;

c02_04a1:;

	i8 v5849 = (i8)(intptr_t)(ws+3344);
	i8 v5850 = *(i8*)(intptr_t)v5849;
	i8 v5851 = v5850+(+16);
	i8 v5852 = *(i8*)(intptr_t)v5851;
	i8 v5853 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5853 = v5852;

	i8 v5854 = (i8)(intptr_t)(ws+3360);
	i8 v5855 = *(i8*)(intptr_t)v5854;
	i8 v5856 = (i8)+0;
	if (v5855==v5856) goto c02_04ae; else goto c02_04ad;

c02_04ad:;

	i8 v5857 = (i8)(intptr_t)(ws+3360);
	i8 v5858 = *(i8*)(intptr_t)v5857;
	i8 v5859 = v5858+(+24);
	i8 v5860 = *(i8*)(intptr_t)v5859;
	i8 v5861 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5861 = v5860;

c02_04ae:;

c02_04aa:;

c02_04b1:;

	i8 v5862 = (i8)(intptr_t)(ws+3352);
	i8 v5863 = *(i8*)(intptr_t)v5862;
	i8 v5864 = (i8)+0;
	if (v5863==v5864) goto c02_04b4; else goto c02_04b3;

c02_04b3:;

	i8 v5865 = (i8)(intptr_t)(ws+3352);
	i8 v5866 = *(i8*)(intptr_t)v5865;
	i8 v5867 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v5867 = v5866;

	i8 v5868 = (i8)(intptr_t)(ws+3352);
	i8 v5869 = *(i8*)(intptr_t)v5868;
	i8 v5870 = v5869+(+24);
	i8 v5871 = *(i8*)(intptr_t)v5870;
	i8 v5872 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5872 = v5871;

	i8 v5873 = (i8)(intptr_t)(ws+3368);
	i8 v5874 = *(i8*)(intptr_t)v5873;
	i8 v5875 = v5874+(+32);
	i1 v5876 = *(i1*)(intptr_t)v5875;

	if (v5876 != +30) goto c02_04b6;

	i8 v5877 = (i8)(intptr_t)(ws+3368);
	i8 v5878 = *(i8*)(intptr_t)v5877;
	i8 v5879 = *(i8*)(intptr_t)v5878;
	i8 v5880 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v5880 = v5879;

	i8 v5881 = (i8)(intptr_t)(ws+3376);
	i8 v5882 = *(i8*)(intptr_t)v5881;
	i8 v5883 = v5882+(+52);
	i1 v5884 = *(i1*)(intptr_t)v5883;

	if (v5884 != +5) goto c02_04b8;

	i8 v5885 = (i8)(intptr_t)(ws+3376);
	i8 v5886 = *(i8*)(intptr_t)v5885;
	i8 v5887 = (i8)(intptr_t)(f265_QueueNamespace);

	((void(*)(i8 /* namespace */))(intptr_t)v5887)(v5886);

	goto c02_04b7;

c02_04b8:;

	if (v5884 != +6) goto c02_04b9;

	i8 v5888 = (i8)(intptr_t)(ws+3376);
	i8 v5889 = *(i8*)(intptr_t)v5888;
	i8 v5890 = *(i8*)(intptr_t)v5889;
	i8 v5891 = v5890+(+16);
	i8 v5892 = (i8)(intptr_t)(f265_QueueNamespace);

	((void(*)(i8 /* namespace */))(intptr_t)v5892)(v5891);

	i8 v5893 = (i8)(intptr_t)(ws+3376);
	i8 v5894 = *(i8*)(intptr_t)v5893;
	i8 v5895 = *(i8*)(intptr_t)v5894;
	i8 v5896 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v5896)(v5895);

c02_04b9:;

c02_04b7:;


	i8 v5897 = (i8)(intptr_t)(ws+3376);
	i8 v5898 = *(i8*)(intptr_t)v5897;
	i8 v5899 = (i8)(intptr_t)(f67_FreeType);

	((void(*)(i8 /* type */))(intptr_t)v5899)(v5898);

	goto c02_04b5;

c02_04b6:;

	if (v5876 != +28) goto c02_04ba;

	i8 v5900 = (i8)(intptr_t)(ws+3368);
	i8 v5901 = *(i8*)(intptr_t)v5900;
	i8 v5902 = *(i8*)(intptr_t)v5901;
	i8 v5903 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v5903)(v5902);

c02_04ba:;

c02_04b5:;


	i8 v5904 = (i8)(intptr_t)(ws+3368);
	i8 v5905 = *(i8*)(intptr_t)v5904;
	i8 v5906 = v5905+(+8);
	i8 v5907 = *(i8*)(intptr_t)v5906;
	i8 v5908 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v5908)(v5907);

	i8 v5909 = (i8)(intptr_t)(ws+3368);
	i8 v5910 = *(i8*)(intptr_t)v5909;
	i8 v5911 = (i8)(intptr_t)(f65_FreeSymbol);

	((void(*)(i8 /* symbol */))(intptr_t)v5911)(v5910);

	goto c02_04b1;

c02_04b4:;

	i8 v5912 = (i8)(intptr_t)(ws+3360);
	i8 v5913 = *(i8*)(intptr_t)v5912;
	i8 v5914 = (i8)+0;
	if (v5913==v5914) goto c02_04bf; else goto c02_04be;

c02_04be:;

	i8 v5915 = (i8)+0;
	i8 v5916 = (i8)(intptr_t)(ws+3360);
	i8 v5917 = *(i8*)(intptr_t)v5916;
	i8 v5918 = v5917+(+24);
	*(i8*)(intptr_t)v5918 = v5915;

	goto c02_04bb;

c02_04bf:;

	i8 v5919 = (i8)+0;
	i8 v5920 = (i8)(intptr_t)(ws+3344);
	i8 v5921 = *(i8*)(intptr_t)v5920;
	i8 v5922 = v5921+(+16);
	*(i8*)(intptr_t)v5922 = v5919;

c02_04bb:;

	i8 v5923 = (i8)(intptr_t)(ws+3360);
	i8 v5924 = *(i8*)(intptr_t)v5923;
	i8 v5925 = (i8)(intptr_t)(ws+3344);
	i8 v5926 = *(i8*)(intptr_t)v5925;
	i8 v5927 = v5926+(+24);
	*(i8*)(intptr_t)v5927 = v5924;

endsub:;
}
	void f72_InternalStrDup(i8* /* news */, i8 /* s */);
	void f220_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);

// CopyParameterList workspace at ws+3336 length ws+32
void f266_CopyParameterList(i8 p5928 /* subr */, i8 p5929 /* param */) {
	*(i8*)(intptr_t)(ws+3336) = p5929; /*param */
	*(i8*)(intptr_t)(ws+3344) = p5928; /*subr */

	i8 v5930 = (i8)+0;
	i8 v5931 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5931 = v5930;

c02_04c2:;

	i8 v5932 = (i8)(intptr_t)(ws+3336);
	i8 v5933 = *(i8*)(intptr_t)v5932;
	i8 v5934 = (i8)+0;
	if (v5933==v5934) goto c02_04c5; else goto c02_04c4;

c02_04c4:;

	i8 v5935 = (i8)(intptr_t)(ws+3344);
	i8 v5936 = *(i8*)(intptr_t)v5935;
	i8 v5937 = v5936+(+16);
	i8 v5938 = (i8)(intptr_t)(ws+3336);
	i8 v5939 = *(i8*)(intptr_t)v5938;
	i8 v5940 = v5939+(+8);
	i8 v5941 = *(i8*)(intptr_t)v5940;
	i8 v5942 = (i8)(intptr_t)(f72_InternalStrDup);
	i8 v5943;

	((void(*)(i8* /* news */, i8 /* s */))(intptr_t)v5942)(&v5943, v5941);
	i8 v5944 = (i8)(intptr_t)(f220_AddSymbol);
	i8 v5945;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v5944)(&v5945, v5943, v5937);
	i8 v5946 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v5946 = v5945;

	i1 v5947 = (i1)+28;
	i8 v5948 = (i8)(intptr_t)(ws+3360);
	i8 v5949 = *(i8*)(intptr_t)v5948;
	i8 v5950 = v5949+(+32);
	*(i1*)(intptr_t)v5950 = v5947;

	i8 v5951 = (i8)+27;
	i8 v5952 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v5953;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v5952)(&v5953, v5951);
	i8 v5954 = (i8)(intptr_t)(ws+3360);
	i8 v5955 = *(i8*)(intptr_t)v5954;
	*(i8*)(intptr_t)v5955 = v5953;

	i8 v5956 = (i8)(intptr_t)(ws+3336);
	i8 v5957 = *(i8*)(intptr_t)v5956;
	i8 v5958 = *(i8*)(intptr_t)v5957;
	i8 v5959 = *(i8*)(intptr_t)v5958;
	i8 v5960 = (i8)(intptr_t)(ws+3360);
	i8 v5961 = *(i8*)(intptr_t)v5960;
	i8 v5962 = *(i8*)(intptr_t)v5961;
	*(i8*)(intptr_t)v5962 = v5959;

	i8 v5963 = (i8)(intptr_t)(ws+3336);
	i8 v5964 = *(i8*)(intptr_t)v5963;
	i8 v5965 = *(i8*)(intptr_t)v5964;
	i8 v5966 = v5965+(+8);
	i8 v5967 = *(i8*)(intptr_t)v5966;
	i8 v5968 = (i8)(intptr_t)(ws+3360);
	i8 v5969 = *(i8*)(intptr_t)v5968;
	i8 v5970 = *(i8*)(intptr_t)v5969;
	i8 v5971 = v5970+(+8);
	*(i8*)(intptr_t)v5971 = v5967;

	i8 v5972 = (i8)(intptr_t)(ws+3336);
	i8 v5973 = *(i8*)(intptr_t)v5972;
	i8 v5974 = *(i8*)(intptr_t)v5973;
	i8 v5975 = v5974+(+26);
	i1 v5976 = *(i1*)(intptr_t)v5975;
	i8 v5977 = (i8)(intptr_t)(ws+3360);
	i8 v5978 = *(i8*)(intptr_t)v5977;
	i8 v5979 = *(i8*)(intptr_t)v5978;
	i8 v5980 = v5979+(+26);
	*(i1*)(intptr_t)v5980 = v5976;

	i8 v5981 = (i8)(intptr_t)(ws+3336);
	i8 v5982 = *(i8*)(intptr_t)v5981;
	i8 v5983 = *(i8*)(intptr_t)v5982;
	i8 v5984 = v5983+(+24);
	i2 v5985 = *(i2*)(intptr_t)v5984;
	i8 v5986 = (i8)(intptr_t)(ws+3360);
	i8 v5987 = *(i8*)(intptr_t)v5986;
	i8 v5988 = *(i8*)(intptr_t)v5987;
	i8 v5989 = v5988+(+24);
	*(i2*)(intptr_t)v5989 = v5985;

	i8 v5990 = (i8)(intptr_t)(ws+3352);
	i8 v5991 = *(i8*)(intptr_t)v5990;
	i8 v5992 = (i8)+0;
	if (v5991==v5992) goto c02_04ca; else goto c02_04c9;

c02_04c9:;

	i8 v5993 = (i8)(intptr_t)(ws+3360);
	i8 v5994 = *(i8*)(intptr_t)v5993;
	i8 v5995 = (i8)(intptr_t)(ws+3352);
	i8 v5996 = *(i8*)(intptr_t)v5995;
	i8 v5997 = *(i8*)(intptr_t)v5996;
	i8 v5998 = v5997+(+16);
	*(i8*)(intptr_t)v5998 = v5994;

c02_04ca:;

c02_04c6:;

	i8 v5999 = (i8)(intptr_t)(ws+3360);
	i8 v6000 = *(i8*)(intptr_t)v5999;
	i8 v6001 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6001 = v6000;

	i8 v6002 = (i8)(intptr_t)(ws+3336);
	i8 v6003 = *(i8*)(intptr_t)v6002;
	i8 v6004 = *(i8*)(intptr_t)v6003;
	i8 v6005 = v6004+(+16);
	i8 v6006 = *(i8*)(intptr_t)v6005;
	i8 v6007 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v6007 = v6006;

	goto c02_04c2;

c02_04c5:;

endsub:;
}
	void f66_AllocNewType(i8* /* type */);
	void f64_AllocNewSymbol(i8* /* symbol */);
const i1 c02_s010a[] = { 0x5f,0x5f,0x6d,0x61,0x69,0x6e,0 };
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f219_AddToNamespace(i8 /* symbol */, i8 /* namespace */);

// CreateMainSubroutine workspace at ws+3208 length ws+16
void f267_CreateMainSubroutine(void) {

	i8 v6008 = (i8)(intptr_t)(f66_AllocNewType);
	i8 v6009;

	((void(*)(i8* /* type */))(intptr_t)v6008)(&v6009);
	i8 v6010 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v6010 = v6009;

	i1 v6011 = (i1)+6;
	i8 v6012 = (i8)(intptr_t)(ws+3208);
	i8 v6013 = *(i8*)(intptr_t)v6012;
	i8 v6014 = v6013+(+52);
	*(i1*)(intptr_t)v6014 = v6011;

	i8 v6015 = (i8)(intptr_t)(f64_AllocNewSymbol);
	i8 v6016;

	((void(*)(i8* /* symbol */))(intptr_t)v6015)(&v6016);
	i8 v6017 = (i8)(intptr_t)(ws+3216);
	*(i8*)(intptr_t)v6017 = v6016;

	i1 v6018 = (i1)+30;
	i8 v6019 = (i8)(intptr_t)(ws+3216);
	i8 v6020 = *(i8*)(intptr_t)v6019;
	i8 v6021 = v6020+(+32);
	*(i1*)(intptr_t)v6021 = v6018;

	i8 v6022 = (i8)(intptr_t)c02_s010a;
	i8 v6023 = (i8)(intptr_t)(ws+3216);
	i8 v6024 = *(i8*)(intptr_t)v6023;
	i8 v6025 = v6024+(+8);
	*(i8*)(intptr_t)v6025 = v6022;

	i8 v6026 = (i8)(intptr_t)(ws+3208);
	i8 v6027 = *(i8*)(intptr_t)v6026;
	i8 v6028 = (i8)(intptr_t)(ws+3216);
	i8 v6029 = *(i8*)(intptr_t)v6028;
	*(i8*)(intptr_t)v6029 = v6027;

	i8 v6030 = (i8)(intptr_t)(ws+3216);
	i8 v6031 = *(i8*)(intptr_t)v6030;
	i8 v6032 = (i8)(intptr_t)(ws+3208);
	i8 v6033 = *(i8*)(intptr_t)v6032;
	i8 v6034 = v6033+(+32);
	*(i8*)(intptr_t)v6034 = v6031;

	i8 v6035 = (i8)+83;
	i8 v6036 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v6037;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v6036)(&v6037, v6035);
	i8 v6038 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v6038 = v6037;

	i8 v6039 = (i8)(intptr_t)(ws+3216);
	i8 v6040 = *(i8*)(intptr_t)v6039;
	i8 v6041 = (i8)(intptr_t)(ws+40);
	i8 v6042 = *(i8*)(intptr_t)v6041;
	*(i8*)(intptr_t)v6042 = v6040;

	i8 v6043 = (i8)(intptr_t)(ws+3208);
	i8 v6044 = *(i8*)(intptr_t)v6043;
	i8 v6045 = (i8)(intptr_t)(ws+40);
	i8 v6046 = *(i8*)(intptr_t)v6045;
	i8 v6047 = v6046+(+40);
	*(i8*)(intptr_t)v6047 = v6044;

	i8 v6048 = (i8)(intptr_t)(ws+40);
	i8 v6049 = *(i8*)(intptr_t)v6048;
	i8 v6050 = (i8)(intptr_t)(ws+40);
	i8 v6051 = *(i8*)(intptr_t)v6050;
	i8 v6052 = v6051+(+48);
	*(i8*)(intptr_t)v6052 = v6049;

	i8 v6053 = (i8)(intptr_t)(ws+40);
	i8 v6054 = *(i8*)(intptr_t)v6053;
	i8 v6055 = (i8)(intptr_t)(ws+3208);
	i8 v6056 = *(i8*)(intptr_t)v6055;
	*(i8*)(intptr_t)v6056 = v6054;

	i8 v6057 = (i8)(intptr_t)(ws+40);
	i8 v6058 = *(i8*)(intptr_t)v6057;
	i8 v6059 = v6058+(+16);
	i8 v6060 = (i8)(intptr_t)(ws+3216);
	i8 v6061 = *(i8*)(intptr_t)v6060;
	i8 v6062 = (i8)(intptr_t)(f219_AddToNamespace);

	((void(*)(i8 /* symbol */, i8 /* namespace */))(intptr_t)v6062)(v6061, v6059);

endsub:;
}
	void f203_EmitterDeclareWorkspace(i2 /* workspace */, i1 /* wid */, i8 /* subr */);

// ReportWorkspaces workspace at ws+3344 length ws+12
void f268_ReportWorkspaces(i8 p6063 /* subr */) {
	*(i8*)(intptr_t)(ws+3344) = p6063; /*subr */

	i1 v6064 = (i1)+0;
	i8 v6065 = (i8)(intptr_t)(ws+3352);
	*(i1*)(intptr_t)v6065 = v6064;

c02_04cd:;

	i8 v6066 = (i8)(intptr_t)(ws+3352);
	i1 v6067 = *(i1*)(intptr_t)v6066;
	i1 v6068 = (i1)+4;
	if (v6067==v6068) goto c02_04d0; else goto c02_04cf;

c02_04cf:;

	i8 v6069 = (i8)(intptr_t)(ws+3344);
	i8 v6070 = *(i8*)(intptr_t)v6069;
	i8 v6071 = v6070+(+58);
	i8 v6072 = (i8)(intptr_t)(ws+3352);
	i1 v6073 = *(i1*)(intptr_t)v6072;
	i8 v6074 = v6073;
	i1 v6075 = (i1)+1;
	i8 v6076 = ((i8)v6074)<<v6075;
	i8 v6077 = v6071+v6076;
	i2 v6078 = *(i2*)(intptr_t)v6077;
	i8 v6079 = (i8)(intptr_t)(ws+3354);
	*(i2*)(intptr_t)v6079 = v6078;

	i8 v6080 = (i8)(intptr_t)(ws+3354);
	i2 v6081 = *(i2*)(intptr_t)v6080;
	i2 v6082 = (i2)+0;
	if (v6081==v6082) goto c02_04d5; else goto c02_04d4;

c02_04d4:;

	i8 v6083 = (i8)(intptr_t)(ws+3344);
	i8 v6084 = *(i8*)(intptr_t)v6083;
	i8 v6085 = (i8)(intptr_t)(ws+3352);
	i1 v6086 = *(i1*)(intptr_t)v6085;
	i8 v6087 = (i8)(intptr_t)(ws+3354);
	i2 v6088 = *(i2*)(intptr_t)v6087;
	i8 v6089 = (i8)(intptr_t)(f203_EmitterDeclareWorkspace);

	((void(*)(i2 /* workspace */, i1 /* wid */, i8 /* subr */))(intptr_t)v6089)(v6088, v6086, v6084);

c02_04d5:;

c02_04d1:;

	i8 v6090 = (i8)(intptr_t)(ws+3352);
	i1 v6091 = *(i1*)(intptr_t)v6090;
	i1 v6092 = v6091+(+1);
	i8 v6093 = (i8)(intptr_t)(ws+3352);
	*(i1*)(intptr_t)v6093 = v6092;

	goto c02_04cd;

c02_04d0:;

endsub:;
}
	void f74_StartError(void);
	void f12_print(i8 /* ptr */);
const i1 c02_s010b[] = { 0x20,0x61,0x6e,0x64,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s010c[] = { 0x20,0x61,0x72,0x65,0x20,0x6e,0x6f,0x74,0x20,0x63,0x6f,0x6d,0x70,0x61,0x74,0x69,0x62,0x6c,0x65,0x20,0x69,0x6e,0x20,0x74,0x68,0x69,0x73,0x20,0x63,0x6f,0x6e,0x74,0x65,0x78,0x74,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// expr_i_cant_do_that workspace at ws+3424 length ws+16
void f269_expr_i_cant_do_that(i8 p6094 /* rhs */, i8 p6095 /* lhs */) {
	*(i8*)(intptr_t)(ws+3424) = p6095; /*lhs */
	*(i8*)(intptr_t)(ws+3432) = p6094; /*rhs */

	i8 v6096 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v6096)();

	i8 v6097 = (i8)(intptr_t)(ws+3424);
	i8 v6098 = *(i8*)(intptr_t)v6097;
	i8 v6099 = v6098+(+16);
	i8 v6100 = *(i8*)(intptr_t)v6099;
	i8 v6101 = v6100+(+32);
	i8 v6102 = *(i8*)(intptr_t)v6101;
	i8 v6103 = v6102+(+8);
	i8 v6104 = *(i8*)(intptr_t)v6103;
	i8 v6105 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6105)(v6104);

	i8 v6106 = (i8)(intptr_t)c02_s010b;
	i8 v6107 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6107)(v6106);

	i8 v6108 = (i8)(intptr_t)(ws+3432);
	i8 v6109 = *(i8*)(intptr_t)v6108;
	i8 v6110 = v6109+(+16);
	i8 v6111 = *(i8*)(intptr_t)v6110;
	i8 v6112 = v6111+(+32);
	i8 v6113 = *(i8*)(intptr_t)v6112;
	i8 v6114 = v6113+(+8);
	i8 v6115 = *(i8*)(intptr_t)v6114;
	i8 v6116 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6116)(v6115);

	i8 v6117 = (i8)(intptr_t)c02_s010c;
	i8 v6118 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6118)(v6117);

	i8 v6119 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v6119)();

endsub:;
}
	void f74_StartError(void);
const i1 c02_s010d[] = { 0x74,0x79,0x70,0x65,0x20,0x6d,0x69,0x73,0x6d,0x61,0x74,0x63,0x68,0x3a,0x20,0x65,0x78,0x70,0x72,0x65,0x73,0x73,0x69,0x6f,0x6e,0x20,0x77,0x61,0x73,0x20,0x61,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s010e[] = { 0x2c,0x20,0x75,0x73,0x65,0x64,0x20,0x77,0x68,0x65,0x6e,0x20,0x61,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s010f[] = { 0x20,0x77,0x61,0x73,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);
	void f231_IsScalar(i1* /* result */, i8 /* type */);
	void f74_StartError(void);
	void f12_print(i8 /* ptr */);
const i1 c02_s0110[] = { 0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x62,0x65,0x20,0x75,0x73,0x65,0x64,0x20,0x68,0x65,0x72,0x65,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// CheckExpressionType workspace at ws+3392 length ws+16
void f270_CheckExpressionType(i8 p6120 /* type */, i8 p6121 /* node */) {
	*(i8*)(intptr_t)(ws+3392) = p6121; /*node */
	*(i8*)(intptr_t)(ws+3400) = p6120; /*type */

	i8 v6122 = (i8)(intptr_t)(ws+3392);
	i8 v6123 = *(i8*)(intptr_t)v6122;
	i8 v6124 = v6123+(+16);
	i8 v6125 = *(i8*)(intptr_t)v6124;
	i8 v6126 = (i8)+0;
	if (v6125==v6126) goto c02_04d9; else goto c02_04da;

c02_04d9:;

	i8 v6127 = (i8)(intptr_t)(ws+3400);
	i8 v6128 = *(i8*)(intptr_t)v6127;
	i8 v6129 = (i8)(intptr_t)(ws+3392);
	i8 v6130 = *(i8*)(intptr_t)v6129;
	i8 v6131 = v6130+(+16);
	*(i8*)(intptr_t)v6131 = v6128;

c02_04da:;

c02_04d6:;

	i8 v6132 = (i8)(intptr_t)(ws+3392);
	i8 v6133 = *(i8*)(intptr_t)v6132;
	i8 v6134 = v6133+(+16);
	i8 v6135 = *(i8*)(intptr_t)v6134;
	i8 v6136 = (i8)(intptr_t)(ws+3400);
	i8 v6137 = *(i8*)(intptr_t)v6136;
	if (v6135==v6137) goto c02_04df; else goto c02_04de;

c02_04de:;

	i8 v6138 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v6138)();

	i8 v6139 = (i8)(intptr_t)c02_s010d;
	i8 v6140 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6140)(v6139);

	i8 v6141 = (i8)(intptr_t)(ws+3392);
	i8 v6142 = *(i8*)(intptr_t)v6141;
	i8 v6143 = v6142+(+16);
	i8 v6144 = *(i8*)(intptr_t)v6143;
	i8 v6145 = v6144+(+32);
	i8 v6146 = *(i8*)(intptr_t)v6145;
	i8 v6147 = v6146+(+8);
	i8 v6148 = *(i8*)(intptr_t)v6147;
	i8 v6149 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6149)(v6148);

	i8 v6150 = (i8)(intptr_t)c02_s010e;
	i8 v6151 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6151)(v6150);

	i8 v6152 = (i8)(intptr_t)(ws+3400);
	i8 v6153 = *(i8*)(intptr_t)v6152;
	i8 v6154 = v6153+(+32);
	i8 v6155 = *(i8*)(intptr_t)v6154;
	i8 v6156 = v6155+(+8);
	i8 v6157 = *(i8*)(intptr_t)v6156;
	i8 v6158 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6158)(v6157);

	i8 v6159 = (i8)(intptr_t)c02_s010f;
	i8 v6160 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6160)(v6159);

	i8 v6161 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v6161)();

c02_04df:;

c02_04db:;

	i8 v6162 = (i8)(intptr_t)(ws+3400);
	i8 v6163 = *(i8*)(intptr_t)v6162;
	i8 v6164 = (i8)(intptr_t)(f231_IsScalar);
	i1 v6165;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6164)(&v6165, v6163);
	i1 v6166 = (i1)+0;
	if (v6165==v6166) goto c02_04e3; else goto c02_04e4;

c02_04e3:;

	i8 v6167 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v6167)();

	i8 v6168 = (i8)(intptr_t)(ws+3400);
	i8 v6169 = *(i8*)(intptr_t)v6168;
	i8 v6170 = v6169+(+32);
	i8 v6171 = *(i8*)(intptr_t)v6170;
	i8 v6172 = v6171+(+8);
	i8 v6173 = *(i8*)(intptr_t)v6172;
	i8 v6174 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6174)(v6173);

	i8 v6175 = (i8)(intptr_t)c02_s0110;
	i8 v6176 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6176)(v6175);

	i8 v6177 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v6177)();

c02_04e4:;

c02_04e0:;

endsub:;
}
	void f229_IsNum(i1* /* result */, i8 /* type */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s0111[] = { 0x6c,0x68,0x73,0x2e,0x74,0x79,0x70,0x65,0x3d,0 };
	void f12_print(i8 /* ptr */);
	void f21_print_hex_i32(i4 /* value */);
	void f13_print_nl(void);
const i1 c02_s0112[] = { 0x72,0x68,0x73,0x2e,0x74,0x79,0x70,0x65,0x3d,0 };
	void f12_print(i8 /* ptr */);
	void f21_print_hex_i32(i4 /* value */);
	void f13_print_nl(void);
const i1 c02_s0113[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x75,0x73,0x65,0x20,0x61,0x6e,0x20,0x75,0x6e,0x74,0x79,0x70,0x65,0x64,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x69,0x6e,0x20,0x74,0x68,0x69,0x73,0x20,0x63,0x6f,0x6e,0x74,0x65,0x78,0x74,0 };
	void f76_SimpleError(i8 /* message */);
	void f229_IsNum(i1* /* result */, i8 /* type */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s0114[] = { 0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0x20,0x6d,0x61,0x79,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x70,0x70,0x65,0x61,0x72,0x20,0x6f,0x6e,0x20,0x74,0x68,0x65,0x20,0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x61,0x6e,0x20,0x61,0x64,0x64,0x69,0x74,0x69,0x6f,0x6e,0x20,0x6f,0x72,0x20,0x73,0x75,0x62,0x74,0x72,0x61,0x63,0x74,0x69,0x6f,0x6e,0 };
	void f76_SimpleError(i8 /* message */);

// ResolveUntypedConstantsForAddOrSub workspace at ws+3368 length ws+16
void f271_ResolveUntypedConstantsForAddOrSub(i8 p6178 /* rhs */, i8 p6179 /* lhs */) {
	*(i8*)(intptr_t)(ws+3368) = p6179; /*lhs */
	*(i8*)(intptr_t)(ws+3376) = p6178; /*rhs */

	i8 v6180 = (i8)(intptr_t)(ws+3368);
	i8 v6181 = *(i8*)(intptr_t)v6180;
	i8 v6182 = v6181+(+16);
	i8 v6183 = *(i8*)(intptr_t)v6182;
	i8 v6184 = (i8)+0;
	if (v6183==v6184) goto c02_04eb; else goto c02_04ec;

c02_04ec:;

	i8 v6185 = (i8)(intptr_t)(ws+3376);
	i8 v6186 = *(i8*)(intptr_t)v6185;
	i8 v6187 = v6186+(+16);
	i8 v6188 = *(i8*)(intptr_t)v6187;
	i8 v6189 = (i8)+0;
	if (v6188==v6189) goto c02_04ea; else goto c02_04eb;

c02_04ea:;

	i8 v6190 = (i8)(intptr_t)(ws+3368);
	i8 v6191 = *(i8*)(intptr_t)v6190;
	i8 v6192 = v6191+(+16);
	i8 v6193 = *(i8*)(intptr_t)v6192;
	i8 v6194 = (i8)(intptr_t)(f229_IsNum);
	i1 v6195;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6194)(&v6195, v6193);
	i1 v6196 = (i1)+0;
	if (v6195==v6196) goto c02_04f1; else goto c02_04f0;

c02_04f0:;

	i8 v6197 = (i8)(intptr_t)(ws+3368);
	i8 v6198 = *(i8*)(intptr_t)v6197;
	i8 v6199 = v6198+(+16);
	i8 v6200 = *(i8*)(intptr_t)v6199;
	i8 v6201 = (i8)(intptr_t)(ws+3376);
	i8 v6202 = *(i8*)(intptr_t)v6201;
	i8 v6203 = v6202+(+16);
	*(i8*)(intptr_t)v6203 = v6200;

	goto c02_04ed;

c02_04f1:;

	i8 v6204 = (i8)(intptr_t)(ws+3368);
	i8 v6205 = *(i8*)(intptr_t)v6204;
	i8 v6206 = v6205+(+16);
	i8 v6207 = *(i8*)(intptr_t)v6206;
	i8 v6208 = (i8)(intptr_t)(f68_IsPtr);
	i1 v6209;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6208)(&v6209, v6207);
	i1 v6210 = (i1)+0;
	if (v6209==v6210) goto c02_04f5; else goto c02_04f4;

c02_04f4:;

	i8 v6211 = (i8)(intptr_t)(ws+1528);
	i8 v6212 = *(i8*)(intptr_t)v6211;
	i8 v6213 = (i8)(intptr_t)(ws+3376);
	i8 v6214 = *(i8*)(intptr_t)v6213;
	i8 v6215 = v6214+(+16);
	*(i8*)(intptr_t)v6215 = v6212;

	goto c02_04ed;

c02_04f5:;

	i8 v6216 = (i8)(intptr_t)c02_s0111;
	i8 v6217 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6217)(v6216);

	i8 v6218 = (i8)(intptr_t)(ws+3368);
	i8 v6219 = *(i8*)(intptr_t)v6218;
	i8 v6220 = v6219+(+16);
	i8 v6221 = *(i8*)(intptr_t)v6220;
	i4 v6222 = v6221;
	i8 v6223 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v6223)(v6222);

	i8 v6224 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6224)();

	i8 v6225 = (i8)(intptr_t)c02_s0112;
	i8 v6226 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6226)(v6225);

	i8 v6227 = (i8)(intptr_t)(ws+3376);
	i8 v6228 = *(i8*)(intptr_t)v6227;
	i8 v6229 = v6228+(+16);
	i8 v6230 = *(i8*)(intptr_t)v6229;
	i4 v6231 = v6230;
	i8 v6232 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v6232)(v6231);

	i8 v6233 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6233)();

	i8 v6234 = (i8)(intptr_t)c02_s0113;
	i8 v6235 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6235)(v6234);

c02_04ed:;

c02_04eb:;

c02_04e5:;

	i8 v6236 = (i8)(intptr_t)(ws+3368);
	i8 v6237 = *(i8*)(intptr_t)v6236;
	i8 v6238 = v6237+(+16);
	i8 v6239 = *(i8*)(intptr_t)v6238;
	i8 v6240 = (i8)+0;
	if (v6239==v6240) goto c02_04fd; else goto c02_04fc;

c02_04fd:;

	i8 v6241 = (i8)(intptr_t)(ws+3376);
	i8 v6242 = *(i8*)(intptr_t)v6241;
	i8 v6243 = v6242+(+16);
	i8 v6244 = *(i8*)(intptr_t)v6243;
	i8 v6245 = (i8)+0;
	if (v6244==v6245) goto c02_04fc; else goto c02_04fb;

c02_04fb:;

	i8 v6246 = (i8)(intptr_t)(ws+3376);
	i8 v6247 = *(i8*)(intptr_t)v6246;
	i8 v6248 = v6247+(+16);
	i8 v6249 = *(i8*)(intptr_t)v6248;
	i8 v6250 = (i8)(intptr_t)(f229_IsNum);
	i1 v6251;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6250)(&v6251, v6249);
	i1 v6252 = (i1)+0;
	if (v6251==v6252) goto c02_0502; else goto c02_0501;

c02_0501:;

	i8 v6253 = (i8)(intptr_t)(ws+3376);
	i8 v6254 = *(i8*)(intptr_t)v6253;
	i8 v6255 = v6254+(+16);
	i8 v6256 = *(i8*)(intptr_t)v6255;
	i8 v6257 = (i8)(intptr_t)(ws+3368);
	i8 v6258 = *(i8*)(intptr_t)v6257;
	i8 v6259 = v6258+(+16);
	*(i8*)(intptr_t)v6259 = v6256;

	goto c02_04fe;

c02_0502:;

	i8 v6260 = (i8)(intptr_t)(ws+3376);
	i8 v6261 = *(i8*)(intptr_t)v6260;
	i8 v6262 = v6261+(+16);
	i8 v6263 = *(i8*)(intptr_t)v6262;
	i8 v6264 = (i8)(intptr_t)(f68_IsPtr);
	i1 v6265;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6264)(&v6265, v6263);
	i1 v6266 = (i1)+0;
	if (v6265==v6266) goto c02_0506; else goto c02_0505;

c02_0505:;

	i8 v6267 = (i8)(intptr_t)c02_s0114;
	i8 v6268 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6268)(v6267);

c02_0506:;

c02_04fe:;

c02_04fc:;

c02_04f6:;

endsub:;
}
	void f269_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// ResolveUntypedConstantsSimply workspace at ws+3392 length ws+32
void f272_ResolveUntypedConstantsSimply(i8 p6269 /* rhs */, i8 p6270 /* lhs */) {
	*(i8*)(intptr_t)(ws+3392) = p6270; /*lhs */
	*(i8*)(intptr_t)(ws+3400) = p6269; /*rhs */

	i8 v6271 = (i8)(intptr_t)(ws+3392);
	i8 v6272 = *(i8*)(intptr_t)v6271;
	i8 v6273 = v6272+(+16);
	i8 v6274 = *(i8*)(intptr_t)v6273;
	i8 v6275 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v6275 = v6274;

	i8 v6276 = (i8)(intptr_t)(ws+3400);
	i8 v6277 = *(i8*)(intptr_t)v6276;
	i8 v6278 = v6277+(+16);
	i8 v6279 = *(i8*)(intptr_t)v6278;
	i8 v6280 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6280 = v6279;

	i8 v6281 = (i8)(intptr_t)(ws+3408);
	i8 v6282 = *(i8*)(intptr_t)v6281;
	i8 v6283 = (i8)+0;
	if (v6282==v6283) goto c02_050d; else goto c02_050e;

c02_050e:;

	i8 v6284 = (i8)(intptr_t)(ws+3416);
	i8 v6285 = *(i8*)(intptr_t)v6284;
	i8 v6286 = (i8)+0;
	if (v6285==v6286) goto c02_050c; else goto c02_050d;

c02_050c:;

	i8 v6287 = (i8)(intptr_t)(ws+3408);
	i8 v6288 = *(i8*)(intptr_t)v6287;
	i8 v6289 = (i8)(intptr_t)(ws+3400);
	i8 v6290 = *(i8*)(intptr_t)v6289;
	i8 v6291 = v6290+(+16);
	*(i8*)(intptr_t)v6291 = v6288;

	goto c02_0507;

c02_050d:;

	i8 v6292 = (i8)(intptr_t)(ws+3408);
	i8 v6293 = *(i8*)(intptr_t)v6292;
	i8 v6294 = (i8)+0;
	if (v6293==v6294) goto c02_0515; else goto c02_0514;

c02_0515:;

	i8 v6295 = (i8)(intptr_t)(ws+3416);
	i8 v6296 = *(i8*)(intptr_t)v6295;
	i8 v6297 = (i8)+0;
	if (v6296==v6297) goto c02_0514; else goto c02_0513;

c02_0513:;

	i8 v6298 = (i8)(intptr_t)(ws+3416);
	i8 v6299 = *(i8*)(intptr_t)v6298;
	i8 v6300 = (i8)(intptr_t)(ws+3392);
	i8 v6301 = *(i8*)(intptr_t)v6300;
	i8 v6302 = v6301+(+16);
	*(i8*)(intptr_t)v6302 = v6299;

	goto c02_0507;

c02_0514:;

	i8 v6303 = (i8)(intptr_t)(ws+3408);
	i8 v6304 = *(i8*)(intptr_t)v6303;
	i8 v6305 = (i8)(intptr_t)(ws+3416);
	i8 v6306 = *(i8*)(intptr_t)v6305;
	if (v6304==v6306) goto c02_0519; else goto c02_0518;

c02_0518:;

	i8 v6307 = (i8)(intptr_t)(ws+3392);
	i8 v6308 = *(i8*)(intptr_t)v6307;
	i8 v6309 = (i8)(intptr_t)(ws+3400);
	i8 v6310 = *(i8*)(intptr_t)v6309;
	i8 v6311 = (i8)(intptr_t)(f269_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6311)(v6310, v6308);

c02_0519:;

c02_0507:;

endsub:;
}
	void f229_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s0115[] = { 0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };
	void f76_SimpleError(i8 /* message */);

// CheckNumber workspace at ws+3392 length ws+8
void f273_CheckNumber(i8 p6312 /* node */) {
	*(i8*)(intptr_t)(ws+3392) = p6312; /*node */

	i8 v6313 = (i8)(intptr_t)(ws+3392);
	i8 v6314 = *(i8*)(intptr_t)v6313;
	i8 v6315 = v6314+(+16);
	i8 v6316 = *(i8*)(intptr_t)v6315;
	i8 v6317 = (i8)(intptr_t)(f229_IsNum);
	i1 v6318;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6317)(&v6318, v6316);
	i1 v6319 = (i1)+0;
	if (v6318==v6319) goto c02_051d; else goto c02_051e;

c02_051d:;

	i8 v6320 = (i8)(intptr_t)c02_s0115;
	i8 v6321 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6321)(v6320);

c02_051e:;

c02_051a:;

endsub:;
}
	void f272_ResolveUntypedConstantsSimply(i8 /* rhs */, i8 /* lhs */);
	void f273_CheckNumber(i8 /* node */);
	void f273_CheckNumber(i8 /* node */);

// ResolveUntypedConstantsNeedingNumbers workspace at ws+3376 length ws+16
void f274_ResolveUntypedConstantsNeedingNumbers(i8 p6322 /* rhs */, i8 p6323 /* lhs */) {
	*(i8*)(intptr_t)(ws+3376) = p6323; /*lhs */
	*(i8*)(intptr_t)(ws+3384) = p6322; /*rhs */

	i8 v6324 = (i8)(intptr_t)(ws+3376);
	i8 v6325 = *(i8*)(intptr_t)v6324;
	i8 v6326 = (i8)(intptr_t)(ws+3384);
	i8 v6327 = *(i8*)(intptr_t)v6326;
	i8 v6328 = (i8)(intptr_t)(f272_ResolveUntypedConstantsSimply);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6328)(v6327, v6325);

	i8 v6329 = (i8)(intptr_t)(ws+3376);
	i8 v6330 = *(i8*)(intptr_t)v6329;
	i8 v6331 = (i8)(intptr_t)(f273_CheckNumber);

	((void(*)(i8 /* node */))(intptr_t)v6331)(v6330);

	i8 v6332 = (i8)(intptr_t)(ws+3384);
	i8 v6333 = *(i8*)(intptr_t)v6332;
	i8 v6334 = (i8)(intptr_t)(f273_CheckNumber);

	((void(*)(i8 /* node */))(intptr_t)v6334)(v6333);

endsub:;
}
	void f272_ResolveUntypedConstantsSimply(i8 /* rhs */, i8 /* lhs */);
	void f269_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// CondSimple workspace at ws+3368 length ws+16
void f275_CondSimple(i8 p6335 /* rhs */, i8 p6336 /* lhs */) {
	*(i8*)(intptr_t)(ws+3368) = p6336; /*lhs */
	*(i8*)(intptr_t)(ws+3376) = p6335; /*rhs */

	i8 v6337 = (i8)(intptr_t)(ws+3368);
	i8 v6338 = *(i8*)(intptr_t)v6337;
	i8 v6339 = (i8)(intptr_t)(ws+3376);
	i8 v6340 = *(i8*)(intptr_t)v6339;
	i8 v6341 = (i8)(intptr_t)(f272_ResolveUntypedConstantsSimply);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6341)(v6340, v6338);

	i8 v6342 = (i8)(intptr_t)(ws+3368);
	i8 v6343 = *(i8*)(intptr_t)v6342;
	i8 v6344 = v6343+(+16);
	i8 v6345 = *(i8*)(intptr_t)v6344;
	i8 v6346 = (i8)(intptr_t)(ws+3376);
	i8 v6347 = *(i8*)(intptr_t)v6346;
	i8 v6348 = v6347+(+16);
	i8 v6349 = *(i8*)(intptr_t)v6348;
	if (v6345==v6349) goto c02_0523; else goto c02_0522;

c02_0522:;

	i8 v6350 = (i8)(intptr_t)(ws+3368);
	i8 v6351 = *(i8*)(intptr_t)v6350;
	i8 v6352 = (i8)(intptr_t)(ws+3376);
	i8 v6353 = *(i8*)(intptr_t)v6352;
	i8 v6354 = (i8)(intptr_t)(f269_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6354)(v6353, v6351);

c02_0523:;

c02_051f:;

endsub:;
}
	void f167_NodeWidth(i1* /* width */, i8 /* node */);
	void f171_MidC1Op(i8* /* result */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// Expr1Simple workspace at ws+3328 length ws+24
void f276_Expr1Simple(i8* p6355 /* result */, i8 p6356 /* lhs */, i1 p6357 /* op */) {
	*(i1*)(intptr_t)(ws+3328) = p6357; /*op */
	*(i8*)(intptr_t)(ws+3336) = p6356; /*lhs */

	i8 v6358 = (i8)(intptr_t)(ws+3328);
	i1 v6359 = *(i1*)(intptr_t)v6358;
	i8 v6360 = (i8)(intptr_t)(ws+3336);
	i8 v6361 = *(i8*)(intptr_t)v6360;
	i8 v6362 = (i8)(intptr_t)(f167_NodeWidth);
	i1 v6363;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v6362)(&v6363, v6361);
	i8 v6364 = (i8)(intptr_t)(ws+3336);
	i8 v6365 = *(i8*)(intptr_t)v6364;
	i8 v6366 = (i8)(intptr_t)(f171_MidC1Op);
	i8 v6367;

	((void(*)(i8* /* result */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v6366)(&v6367, v6365, v6363, v6359);
	i8 v6368 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v6368 = v6367;

	i8 v6369 = (i8)(intptr_t)(ws+3336);
	i8 v6370 = *(i8*)(intptr_t)v6369;
	i8 v6371 = v6370+(+16);
	i8 v6372 = *(i8*)(intptr_t)v6371;
	i8 v6373 = (i8)(intptr_t)(ws+3344);
	i8 v6374 = *(i8*)(intptr_t)v6373;
	i8 v6375 = v6374+(+16);
	*(i8*)(intptr_t)v6375 = v6372;

endsub:;
	*p6355 = *(i8*)(intptr_t)(ws+3344);
}
	void f271_ResolveUntypedConstantsForAddOrSub(i8 /* rhs */, i8 /* lhs */);
	void f269_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// cant_add_that workspace at ws+3368 length ws+0
void f278_cant_add_that(void) {

	i8 v6384 = (i8)(intptr_t)(ws+3328);
	i8 v6385 = *(i8*)(intptr_t)v6384;
	i8 v6386 = (i8)(intptr_t)(ws+3336);
	i8 v6387 = *(i8*)(intptr_t)v6386;
	i8 v6388 = (i8)(intptr_t)(f269_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6388)(v6387, v6385);

endsub:;
}
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f278_cant_add_that(void);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f278_cant_add_that(void);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f278_cant_add_that(void);
	void f167_NodeWidth(i1* /* width */, i8 /* node */);
	void f173_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// ExprAdd workspace at ws+3328 length ws+40
void f277_ExprAdd(i8* p6376 /* result */, i8 p6377 /* rhs */, i8 p6378 /* lhs */) {
	*(i8*)(intptr_t)(ws+3328) = p6378; /*lhs */
	*(i8*)(intptr_t)(ws+3336) = p6377; /*rhs */

	i8 v6379 = (i8)(intptr_t)(ws+3328);
	i8 v6380 = *(i8*)(intptr_t)v6379;
	i8 v6381 = (i8)(intptr_t)(ws+3336);
	i8 v6382 = *(i8*)(intptr_t)v6381;
	i8 v6383 = (i8)(intptr_t)(f271_ResolveUntypedConstantsForAddOrSub);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6383)(v6382, v6380);


	i8 v6389 = (i8)(intptr_t)(ws+3328);
	i8 v6390 = *(i8*)(intptr_t)v6389;
	i8 v6391 = v6390+(+16);
	i8 v6392 = *(i8*)(intptr_t)v6391;
	i8 v6393 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6393 = v6392;

	i8 v6394 = (i8)(intptr_t)(ws+3336);
	i8 v6395 = *(i8*)(intptr_t)v6394;
	i8 v6396 = v6395+(+16);
	i8 v6397 = *(i8*)(intptr_t)v6396;
	i8 v6398 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v6398 = v6397;

	i8 v6399 = (i8)(intptr_t)(ws+3352);
	i8 v6400 = *(i8*)(intptr_t)v6399;
	i8 v6401 = (i8)(intptr_t)(f68_IsPtr);
	i1 v6402;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6401)(&v6402, v6400);
	i1 v6403 = (i1)+0;
	if (v6402==v6403) goto c02_0528; else goto c02_0527;

c02_0527:;

	i8 v6404 = (i8)(intptr_t)(ws+3360);
	i8 v6405 = *(i8*)(intptr_t)v6404;
	i8 v6406 = (i8)(intptr_t)(f68_IsPtr);
	i1 v6407;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6406)(&v6407, v6405);
	i1 v6408 = (i1)+0;
	if (v6407==v6408) goto c02_0530; else goto c02_052e;

c02_0530:;

	i8 v6409 = (i8)(intptr_t)(ws+3360);
	i8 v6410 = *(i8*)(intptr_t)v6409;
	i8 v6411 = (i8)(intptr_t)(ws+1528);
	i8 v6412 = *(i8*)(intptr_t)v6411;
	if (v6410==v6412) goto c02_052f; else goto c02_052e;

c02_052e:;

	i8 v6413 = (i8)(intptr_t)(f278_cant_add_that);

	((void(*)(void))(intptr_t)v6413)();

c02_052f:;

c02_0529:;

	goto c02_0524;

c02_0528:;

	i8 v6414 = (i8)(intptr_t)(ws+3360);
	i8 v6415 = *(i8*)(intptr_t)v6414;
	i8 v6416 = (i8)(intptr_t)(f68_IsPtr);
	i1 v6417;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6416)(&v6417, v6415);
	i1 v6418 = (i1)+0;
	if (v6417==v6418) goto c02_0534; else goto c02_0533;

c02_0533:;

	i8 v6419 = (i8)(intptr_t)(f278_cant_add_that);

	((void(*)(void))(intptr_t)v6419)();

	goto c02_0524;

c02_0534:;

	i8 v6420 = (i8)(intptr_t)(ws+3352);
	i8 v6421 = *(i8*)(intptr_t)v6420;
	i8 v6422 = (i8)(intptr_t)(f68_IsPtr);
	i1 v6423;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6422)(&v6423, v6421);
	i1 v6424 = (i1)+0;
	if (v6423==v6424) goto c02_053b; else goto c02_053a;

c02_053b:;

	i8 v6425 = (i8)(intptr_t)(ws+3352);
	i8 v6426 = *(i8*)(intptr_t)v6425;
	i8 v6427 = (i8)(intptr_t)(ws+3360);
	i8 v6428 = *(i8*)(intptr_t)v6427;
	if (v6426==v6428) goto c02_053a; else goto c02_0539;

c02_0539:;

	i8 v6429 = (i8)(intptr_t)(f278_cant_add_that);

	((void(*)(void))(intptr_t)v6429)();

c02_053a:;

c02_0524:;

	i1 v6430 = (i1)+161;
	i8 v6431 = (i8)(intptr_t)(ws+3328);
	i8 v6432 = *(i8*)(intptr_t)v6431;
	i8 v6433 = (i8)(intptr_t)(f167_NodeWidth);
	i1 v6434;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v6433)(&v6434, v6432);
	i8 v6435 = (i8)(intptr_t)(ws+3328);
	i8 v6436 = *(i8*)(intptr_t)v6435;
	i8 v6437 = (i8)(intptr_t)(ws+3336);
	i8 v6438 = *(i8*)(intptr_t)v6437;
	i8 v6439 = (i8)(intptr_t)(f173_MidC2Op);
	i8 v6440;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v6439)(&v6440, v6438, v6436, v6434, v6430);
	i8 v6441 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v6441 = v6440;

	i8 v6442 = (i8)(intptr_t)(ws+3352);
	i8 v6443 = *(i8*)(intptr_t)v6442;
	i8 v6444 = (i8)(intptr_t)(ws+3344);
	i8 v6445 = *(i8*)(intptr_t)v6444;
	i8 v6446 = v6445+(+16);
	*(i8*)(intptr_t)v6446 = v6443;

endsub:;
	*p6376 = *(i8*)(intptr_t)(ws+3344);
}
	void f271_ResolveUntypedConstantsForAddOrSub(i8 /* rhs */, i8 /* lhs */);
	void f269_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// cant_sub_that workspace at ws+3368 length ws+0
void f280_cant_sub_that(void) {

	i8 v6455 = (i8)(intptr_t)(ws+3328);
	i8 v6456 = *(i8*)(intptr_t)v6455;
	i8 v6457 = (i8)(intptr_t)(ws+3336);
	i8 v6458 = *(i8*)(intptr_t)v6457;
	i8 v6459 = (i8)(intptr_t)(f269_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6459)(v6458, v6456);

endsub:;
}
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f280_cant_sub_that(void);
	void f229_IsNum(i1* /* result */, i8 /* type */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f280_cant_sub_that(void);
	void f229_IsNum(i1* /* result */, i8 /* type */);
	void f229_IsNum(i1* /* result */, i8 /* type */);
	void f280_cant_sub_that(void);
	void f167_NodeWidth(i1* /* width */, i8 /* node */);
	void f173_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);

// ExprSub workspace at ws+3328 length ws+40
void f279_ExprSub(i8* p6447 /* result */, i8 p6448 /* rhs */, i8 p6449 /* lhs */) {
	*(i8*)(intptr_t)(ws+3328) = p6449; /*lhs */
	*(i8*)(intptr_t)(ws+3336) = p6448; /*rhs */

	i8 v6450 = (i8)(intptr_t)(ws+3328);
	i8 v6451 = *(i8*)(intptr_t)v6450;
	i8 v6452 = (i8)(intptr_t)(ws+3336);
	i8 v6453 = *(i8*)(intptr_t)v6452;
	i8 v6454 = (i8)(intptr_t)(f271_ResolveUntypedConstantsForAddOrSub);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6454)(v6453, v6451);


	i8 v6460 = (i8)(intptr_t)(ws+3328);
	i8 v6461 = *(i8*)(intptr_t)v6460;
	i8 v6462 = v6461+(+16);
	i8 v6463 = *(i8*)(intptr_t)v6462;
	i8 v6464 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6464 = v6463;

	i8 v6465 = (i8)(intptr_t)(ws+3336);
	i8 v6466 = *(i8*)(intptr_t)v6465;
	i8 v6467 = v6466+(+16);
	i8 v6468 = *(i8*)(intptr_t)v6467;
	i8 v6469 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v6469 = v6468;

	i8 v6470 = (i8)(intptr_t)(ws+3352);
	i8 v6471 = *(i8*)(intptr_t)v6470;
	i8 v6472 = (i8)(intptr_t)(f68_IsPtr);
	i1 v6473;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6472)(&v6473, v6471);
	i1 v6474 = (i1)+0;
	if (v6473==v6474) goto c02_0544; else goto c02_0546;

c02_0546:;

	i8 v6475 = (i8)(intptr_t)(ws+3360);
	i8 v6476 = *(i8*)(intptr_t)v6475;
	i8 v6477 = (i8)(intptr_t)(f68_IsPtr);
	i1 v6478;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6477)(&v6478, v6476);
	i1 v6479 = (i1)+0;
	if (v6478==v6479) goto c02_0545; else goto c02_0544;

c02_0545:;

	i8 v6480 = (i8)(intptr_t)(ws+3360);
	i8 v6481 = *(i8*)(intptr_t)v6480;
	i8 v6482 = (i8)(intptr_t)(ws+1528);
	i8 v6483 = *(i8*)(intptr_t)v6482;
	if (v6481==v6483) goto c02_0544; else goto c02_0543;

c02_0543:;

	i8 v6484 = (i8)(intptr_t)(f280_cant_sub_that);

	((void(*)(void))(intptr_t)v6484)();

	goto c02_053c;

c02_0544:;

	i8 v6485 = (i8)(intptr_t)(ws+3352);
	i8 v6486 = *(i8*)(intptr_t)v6485;
	i8 v6487 = (i8)(intptr_t)(f229_IsNum);
	i1 v6488;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6487)(&v6488, v6486);
	i1 v6489 = (i1)+0;
	if (v6488==v6489) goto c02_054c; else goto c02_054d;

c02_054d:;

	i8 v6490 = (i8)(intptr_t)(ws+3360);
	i8 v6491 = *(i8*)(intptr_t)v6490;
	i8 v6492 = (i8)(intptr_t)(f68_IsPtr);
	i1 v6493;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6492)(&v6493, v6491);
	i1 v6494 = (i1)+0;
	if (v6493==v6494) goto c02_054c; else goto c02_054b;

c02_054b:;

	i8 v6495 = (i8)(intptr_t)(f280_cant_sub_that);

	((void(*)(void))(intptr_t)v6495)();

	goto c02_053c;

c02_054c:;

	i8 v6496 = (i8)(intptr_t)(ws+3352);
	i8 v6497 = *(i8*)(intptr_t)v6496;
	i8 v6498 = (i8)(intptr_t)(f229_IsNum);
	i1 v6499;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6498)(&v6499, v6497);
	i1 v6500 = (i1)+0;
	if (v6499==v6500) goto c02_0555; else goto c02_0557;

c02_0557:;

	i8 v6501 = (i8)(intptr_t)(ws+3360);
	i8 v6502 = *(i8*)(intptr_t)v6501;
	i8 v6503 = (i8)(intptr_t)(f229_IsNum);
	i1 v6504;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6503)(&v6504, v6502);
	i1 v6505 = (i1)+0;
	if (v6504==v6505) goto c02_0555; else goto c02_0556;

c02_0556:;

	i8 v6506 = (i8)(intptr_t)(ws+3352);
	i8 v6507 = *(i8*)(intptr_t)v6506;
	i8 v6508 = (i8)(intptr_t)(ws+3360);
	i8 v6509 = *(i8*)(intptr_t)v6508;
	if (v6507==v6509) goto c02_0555; else goto c02_0554;

c02_0554:;

	i8 v6510 = (i8)(intptr_t)(f280_cant_sub_that);

	((void(*)(void))(intptr_t)v6510)();

c02_0555:;

c02_053c:;

	i1 v6511 = (i1)+136;
	i8 v6512 = (i8)(intptr_t)(ws+3328);
	i8 v6513 = *(i8*)(intptr_t)v6512;
	i8 v6514 = (i8)(intptr_t)(f167_NodeWidth);
	i1 v6515;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v6514)(&v6515, v6513);
	i8 v6516 = (i8)(intptr_t)(ws+3328);
	i8 v6517 = *(i8*)(intptr_t)v6516;
	i8 v6518 = (i8)(intptr_t)(ws+3336);
	i8 v6519 = *(i8*)(intptr_t)v6518;
	i8 v6520 = (i8)(intptr_t)(f173_MidC2Op);
	i8 v6521;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v6520)(&v6521, v6519, v6517, v6515, v6511);
	i8 v6522 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v6522 = v6521;

	i8 v6523 = (i8)(intptr_t)(ws+3352);
	i8 v6524 = *(i8*)(intptr_t)v6523;
	i8 v6525 = (i8)(intptr_t)(f68_IsPtr);
	i1 v6526;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6525)(&v6526, v6524);
	i1 v6527 = (i1)+0;
	if (v6526==v6527) goto c02_055e; else goto c02_055f;

c02_055f:;

	i8 v6528 = (i8)(intptr_t)(ws+3352);
	i8 v6529 = *(i8*)(intptr_t)v6528;
	i8 v6530 = (i8)(intptr_t)(ws+3360);
	i8 v6531 = *(i8*)(intptr_t)v6530;
	if (v6529==v6531) goto c02_055d; else goto c02_055e;

c02_055d:;

	i8 v6532 = (i8)(intptr_t)(ws+1528);
	i8 v6533 = *(i8*)(intptr_t)v6532;
	i8 v6534 = (i8)(intptr_t)(ws+3344);
	i8 v6535 = *(i8*)(intptr_t)v6534;
	i8 v6536 = v6535+(+16);
	*(i8*)(intptr_t)v6536 = v6533;

	goto c02_0558;

c02_055e:;

	i8 v6537 = (i8)(intptr_t)(ws+3352);
	i8 v6538 = *(i8*)(intptr_t)v6537;
	i8 v6539 = (i8)(intptr_t)(ws+3344);
	i8 v6540 = *(i8*)(intptr_t)v6539;
	i8 v6541 = v6540+(+16);
	*(i8*)(intptr_t)v6541 = v6538;

c02_0558:;

endsub:;
	*p6447 = *(i8*)(intptr_t)(ws+3344);
}
	void f274_ResolveUntypedConstantsNeedingNumbers(i8 /* rhs */, i8 /* lhs */);
	void f230_IsSNum(i1* /* result */, i8 /* type */);
	void f167_NodeWidth(i1* /* width */, i8 /* node */);
	void f173_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// Expr2Simple workspace at ws+3328 length ws+48
void f281_Expr2Simple(i8* p6542 /* result */, i8 p6543 /* rhs */, i8 p6544 /* lhs */, i1 p6545 /* uop */, i1 p6546 /* sop */) {
	*(i1*)(intptr_t)(ws+3328) = p6546; /*sop */
	*(i1*)(intptr_t)(ws+3329) = p6545; /*uop */
	*(i8*)(intptr_t)(ws+3336) = p6544; /*lhs */
	*(i8*)(intptr_t)(ws+3344) = p6543; /*rhs */

	i8 v6547 = (i8)(intptr_t)(ws+3336);
	i8 v6548 = *(i8*)(intptr_t)v6547;
	i8 v6549 = (i8)(intptr_t)(ws+3344);
	i8 v6550 = *(i8*)(intptr_t)v6549;
	i8 v6551 = (i8)(intptr_t)(f274_ResolveUntypedConstantsNeedingNumbers);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6551)(v6550, v6548);

	i8 v6552 = (i8)(intptr_t)(ws+3329);
	i1 v6553 = *(i1*)(intptr_t)v6552;
	i8 v6554 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v6554 = v6553;

	i8 v6555 = (i8)(intptr_t)(ws+3336);
	i8 v6556 = *(i8*)(intptr_t)v6555;
	i8 v6557 = v6556+(+16);
	i8 v6558 = *(i8*)(intptr_t)v6557;
	i8 v6559 = (i8)(intptr_t)(f230_IsSNum);
	i1 v6560;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6559)(&v6560, v6558);
	i1 v6561 = (i1)+0;
	if (v6560==v6561) goto c02_0564; else goto c02_0563;

c02_0563:;

	i8 v6562 = (i8)(intptr_t)(ws+3328);
	i1 v6563 = *(i1*)(intptr_t)v6562;
	i8 v6564 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v6564 = v6563;

c02_0564:;

c02_0560:;

	i8 v6565 = (i8)(intptr_t)(ws+3336);
	i8 v6566 = *(i8*)(intptr_t)v6565;
	i8 v6567 = v6566+(+16);
	i8 v6568 = *(i8*)(intptr_t)v6567;
	i8 v6569 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v6569 = v6568;

	i8 v6570 = (i8)(intptr_t)(ws+3360);
	i1 v6571 = *(i1*)(intptr_t)v6570;
	i8 v6572 = (i8)(intptr_t)(ws+3336);
	i8 v6573 = *(i8*)(intptr_t)v6572;
	i8 v6574 = (i8)(intptr_t)(f167_NodeWidth);
	i1 v6575;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v6574)(&v6575, v6573);
	i8 v6576 = (i8)(intptr_t)(ws+3336);
	i8 v6577 = *(i8*)(intptr_t)v6576;
	i8 v6578 = (i8)(intptr_t)(ws+3344);
	i8 v6579 = *(i8*)(intptr_t)v6578;
	i8 v6580 = (i8)(intptr_t)(f173_MidC2Op);
	i8 v6581;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v6580)(&v6581, v6579, v6577, v6575, v6571);
	i8 v6582 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6582 = v6581;

	i8 v6583 = (i8)(intptr_t)(ws+3368);
	i8 v6584 = *(i8*)(intptr_t)v6583;
	i8 v6585 = (i8)(intptr_t)(ws+3352);
	i8 v6586 = *(i8*)(intptr_t)v6585;
	i8 v6587 = v6586+(+16);
	*(i8*)(intptr_t)v6587 = v6584;

endsub:;
	*p6542 = *(i8*)(intptr_t)(ws+3352);
}
const i1 c02_s0116[] = { 0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x73,0x68,0x69,0x66,0x74,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x62,0x65,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x69,0x66,0x20,0x74,0x68,0x65,0x20,0x52,0x48,0x53,0x20,0x69,0x73,0x20,0x61,0x6c,0x73,0x6f,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };
	void f76_SimpleError(i8 /* message */);

// expr_i_checkrhsconst workspace at ws+3376 length ws+8
void f282_expr_i_checkrhsconst(i8 p6588 /* rhs */) {
	*(i8*)(intptr_t)(ws+3376) = p6588; /*rhs */

	i8 v6589 = (i8)(intptr_t)(ws+3376);
	i8 v6590 = *(i8*)(intptr_t)v6589;
	i8 v6591 = v6590+(+40);
	i1 v6592 = *(i1*)(intptr_t)v6591;
	i1 v6593 = (i1)+45;
	if (v6592==v6593) goto c02_0569; else goto c02_0568;

c02_0568:;

	i8 v6594 = (i8)(intptr_t)c02_s0116;
	i8 v6595 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6595)(v6594);

c02_0569:;

c02_0565:;

endsub:;
}
	void f229_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s0117[] = { 0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0x20,0x6f,0x6e,0x20,0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x73,0x68,0x69,0x66,0x74,0 };
	void f76_SimpleError(i8 /* message */);
	void f270_CheckExpressionType(i8 /* type */, i8 /* node */);

// expr_i_checkshift workspace at ws+3376 length ws+16
void f283_expr_i_checkshift(i8 p6596 /* rhs */, i8 p6597 /* lhs */) {
	*(i8*)(intptr_t)(ws+3376) = p6597; /*lhs */
	*(i8*)(intptr_t)(ws+3384) = p6596; /*rhs */

	i8 v6598 = (i8)(intptr_t)(ws+3376);
	i8 v6599 = *(i8*)(intptr_t)v6598;
	i8 v6600 = v6599+(+16);
	i8 v6601 = *(i8*)(intptr_t)v6600;
	i8 v6602 = (i8)(intptr_t)(f229_IsNum);
	i1 v6603;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6602)(&v6603, v6601);
	i1 v6604 = (i1)+0;
	if (v6603==v6604) goto c02_056d; else goto c02_056e;

c02_056d:;

	i8 v6605 = (i8)(intptr_t)c02_s0117;
	i8 v6606 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6606)(v6605);

c02_056e:;

c02_056a:;

	i8 v6607 = (i8)(intptr_t)(ws+3384);
	i8 v6608 = *(i8*)(intptr_t)v6607;
	i8 v6609 = (i8)(intptr_t)(ws+1512);
	i8 v6610 = *(i8*)(intptr_t)v6609;
	i8 v6611 = (i8)(intptr_t)(f270_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v6611)(v6610, v6608);

endsub:;
}
	void f230_IsSNum(i1* /* result */, i8 /* type */);
	void f282_expr_i_checkrhsconst(i8 /* rhs */);
	void f170_FoldConstant2(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */);
	void f63_Discard(i8 /* node */);
	void f283_expr_i_checkshift(i8 /* rhs */, i8 /* lhs */);
	void f167_NodeWidth(i1* /* width */, i8 /* node */);
	void f173_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// ExprShift workspace at ws+3328 length ws+48
void f284_ExprShift(i8* p6612 /* result */, i8 p6613 /* rhs */, i8 p6614 /* lhs */, i1 p6615 /* uop */, i1 p6616 /* sop */) {
	*(i1*)(intptr_t)(ws+3328) = p6616; /*sop */
	*(i1*)(intptr_t)(ws+3329) = p6615; /*uop */
	*(i8*)(intptr_t)(ws+3336) = p6614; /*lhs */
	*(i8*)(intptr_t)(ws+3344) = p6613; /*rhs */

	i8 v6617 = (i8)(intptr_t)(ws+3329);
	i1 v6618 = *(i1*)(intptr_t)v6617;
	i8 v6619 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v6619 = v6618;

	i8 v6620 = (i8)(intptr_t)(ws+3336);
	i8 v6621 = *(i8*)(intptr_t)v6620;
	i8 v6622 = v6621+(+16);
	i8 v6623 = *(i8*)(intptr_t)v6622;
	i8 v6624 = (i8)(intptr_t)(f230_IsSNum);
	i1 v6625;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6624)(&v6625, v6623);
	i1 v6626 = (i1)+0;
	if (v6625==v6626) goto c02_0573; else goto c02_0572;

c02_0572:;

	i8 v6627 = (i8)(intptr_t)(ws+3328);
	i1 v6628 = *(i1*)(intptr_t)v6627;
	i8 v6629 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v6629 = v6628;

c02_0573:;

c02_056f:;

	i8 v6630 = (i8)(intptr_t)(ws+3336);
	i8 v6631 = *(i8*)(intptr_t)v6630;
	i8 v6632 = v6631+(+40);
	i1 v6633 = *(i1*)(intptr_t)v6632;
	i1 v6634 = (i1)+45;
	if (v6633==v6634) goto c02_0577; else goto c02_0578;

c02_0577:;

	i8 v6635 = (i8)(intptr_t)(ws+3344);
	i8 v6636 = *(i8*)(intptr_t)v6635;
	i8 v6637 = (i8)(intptr_t)(f282_expr_i_checkrhsconst);

	((void(*)(i8 /* rhs */))(intptr_t)v6637)(v6636);

	i8 v6638 = (i8)(intptr_t)(ws+3360);
	i1 v6639 = *(i1*)(intptr_t)v6638;
	i8 v6640 = (i8)(intptr_t)(ws+3336);
	i8 v6641 = *(i8*)(intptr_t)v6640;
	i8 v6642 = (i8)(intptr_t)(ws+3344);
	i8 v6643 = *(i8*)(intptr_t)v6642;
	i8 v6644 = (i8)(intptr_t)(f170_FoldConstant2);
	i4 v6645;

	((void(*)(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */))(intptr_t)v6644)(&v6645, v6643, v6641, v6639);
	i8 v6646 = (i8)(intptr_t)(ws+3336);
	i8 v6647 = *(i8*)(intptr_t)v6646;
	*(i4*)(intptr_t)v6647 = v6645;

	i8 v6648 = (i8)(intptr_t)(ws+3336);
	i8 v6649 = *(i8*)(intptr_t)v6648;
	i8 v6650 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6650 = v6649;

	i8 v6651 = (i8)(intptr_t)(ws+3344);
	i8 v6652 = *(i8*)(intptr_t)v6651;
	i8 v6653 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v6653)(v6652);

	goto endsub;

c02_0578:;

c02_0574:;

	i8 v6654 = (i8)(intptr_t)(ws+3336);
	i8 v6655 = *(i8*)(intptr_t)v6654;
	i8 v6656 = (i8)(intptr_t)(ws+3344);
	i8 v6657 = *(i8*)(intptr_t)v6656;
	i8 v6658 = (i8)(intptr_t)(f283_expr_i_checkshift);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6658)(v6657, v6655);

	i8 v6659 = (i8)(intptr_t)(ws+3336);
	i8 v6660 = *(i8*)(intptr_t)v6659;
	i8 v6661 = v6660+(+16);
	i8 v6662 = *(i8*)(intptr_t)v6661;
	i8 v6663 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v6663 = v6662;

	i8 v6664 = (i8)(intptr_t)(ws+3360);
	i1 v6665 = *(i1*)(intptr_t)v6664;
	i8 v6666 = (i8)(intptr_t)(ws+3336);
	i8 v6667 = *(i8*)(intptr_t)v6666;
	i8 v6668 = (i8)(intptr_t)(f167_NodeWidth);
	i1 v6669;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v6668)(&v6669, v6667);
	i8 v6670 = (i8)(intptr_t)(ws+3336);
	i8 v6671 = *(i8*)(intptr_t)v6670;
	i8 v6672 = (i8)(intptr_t)(ws+3344);
	i8 v6673 = *(i8*)(intptr_t)v6672;
	i8 v6674 = (i8)(intptr_t)(f173_MidC2Op);
	i8 v6675;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v6674)(&v6675, v6673, v6671, v6669, v6665);
	i8 v6676 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6676 = v6675;

	i8 v6677 = (i8)(intptr_t)(ws+3368);
	i8 v6678 = *(i8*)(intptr_t)v6677;
	i8 v6679 = (i8)(intptr_t)(ws+3352);
	i8 v6680 = *(i8*)(intptr_t)v6679;
	i8 v6681 = v6680+(+16);
	*(i8*)(intptr_t)v6681 = v6678;

endsub:;
	*p6612 = *(i8*)(intptr_t)(ws+3352);
}
const i1 c02_s0118[] = { 0x6e,0x6f,0x64,0x65,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f76_SimpleError(i8 /* message */);

// PushNode workspace at ws+3472 length ws+8
void f60_PushNode(i8 p6682 /* node */) {
	*(i8*)(intptr_t)(ws+3472) = p6682; /*node */

	i8 v6683 = (i8)(intptr_t)(ws+3472);
	i8 v6684 = *(i8*)(intptr_t)v6683;
	i8 v6685 = (i8)+0;
	if (v6684==v6685) goto c02_057d; else goto c02_057c;

c02_057c:;

	i8 v6686 = (i8)(intptr_t)(ws+224);
	i8 v6687 = *(i8*)(intptr_t)v6686;
	i8 v6688 = (i8)(intptr_t)(ws+224);
	if (v6687==v6688) goto c02_0581; else goto c02_0582;

c02_0581:;

	i8 v6689 = (i8)(intptr_t)c02_s0118;
	i8 v6690 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6690)(v6689);

c02_0582:;

c02_057e:;

	i8 v6691 = (i8)(intptr_t)(ws+3472);
	i8 v6692 = *(i8*)(intptr_t)v6691;
	i8 v6693 = (i8)(intptr_t)(ws+224);
	i8 v6694 = *(i8*)(intptr_t)v6693;
	*(i8*)(intptr_t)v6694 = v6692;

	i8 v6695 = (i8)(intptr_t)(ws+224);
	i8 v6696 = *(i8*)(intptr_t)v6695;
	i8 v6697 = v6696+(+8);
	i8 v6698 = (i8)(intptr_t)(ws+224);
	*(i8*)(intptr_t)v6698 = v6697;

c02_057d:;

c02_0579:;

endsub:;
}

// PopNode workspace at ws+3472 length ws+8
void f61_PopNode(i8* p6699 /* node */) {

	i8 v6700 = (i8)(intptr_t)(ws+224);
	i8 v6701 = *(i8*)(intptr_t)v6700;
	i8 v6702 = v6701+(-8);
	i8 v6703 = (i8)(intptr_t)(ws+224);
	*(i8*)(intptr_t)v6703 = v6702;

	i8 v6704 = (i8)(intptr_t)(ws+224);
	i8 v6705 = *(i8*)(intptr_t)v6704;
	i8 v6706 = *(i8*)(intptr_t)v6705;
	i8 v6707 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v6707 = v6706;

endsub:;
	*p6699 = *(i8*)(intptr_t)(ws+3472);
}
	void f61_PopNode(i8* /* node */);
	void f60_PushNode(i8 /* node */);
	void f60_PushNode(i8 /* node */);

// NextNode workspace at ws+3464 length ws+8
void f62_NextNode(i8* p6708 /* node */) {

	i8 v6709 = (i8)(intptr_t)(f61_PopNode);
	i8 v6710;

	((void(*)(i8* /* node */))(intptr_t)v6709)(&v6710);
	i8 v6711 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v6711 = v6710;

	i8 v6712 = (i8)(intptr_t)(ws+3464);
	i8 v6713 = *(i8*)(intptr_t)v6712;
	i8 v6714 = (i8)+0;
	if (v6713==v6714) goto c02_0587; else goto c02_0586;

c02_0586:;

	i8 v6715 = (i8)(intptr_t)(ws+3464);
	i8 v6716 = *(i8*)(intptr_t)v6715;
	i8 v6717 = v6716+(+24);
	i8 v6718 = *(i8*)(intptr_t)v6717;
	i8 v6719 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v6719)(v6718);

	i8 v6720 = (i8)(intptr_t)(ws+3464);
	i8 v6721 = *(i8*)(intptr_t)v6720;
	i8 v6722 = v6721+(+32);
	i8 v6723 = *(i8*)(intptr_t)v6722;
	i8 v6724 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v6724)(v6723);

c02_0587:;

c02_0583:;

endsub:;
	*p6708 = *(i8*)(intptr_t)(ws+3464);
}
	void f60_PushNode(i8 /* node */);
	void f62_NextNode(i8* /* node */);
	void f166_FreeNode(i8 /* node */);

// Discard workspace at ws+3440 length ws+24
void f63_Discard(i8 p6725 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p6725; /*node */

	i8 v6726 = (i8)(intptr_t)(ws+224);
	i8 v6727 = *(i8*)(intptr_t)v6726;
	i8 v6728 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v6728 = v6727;

	i8 v6729 = (i8)(intptr_t)(ws+3440);
	i8 v6730 = *(i8*)(intptr_t)v6729;
	i8 v6731 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v6731)(v6730);

c02_058a:;

	i8 v6732 = (i8)(intptr_t)(ws+224);
	i8 v6733 = *(i8*)(intptr_t)v6732;
	i8 v6734 = (i8)(intptr_t)(ws+3448);
	i8 v6735 = *(i8*)(intptr_t)v6734;
	if (v6733==v6735) goto c02_058d; else goto c02_058c;

c02_058c:;

	i8 v6736 = (i8)(intptr_t)(f62_NextNode);
	i8 v6737;

	((void(*)(i8* /* node */))(intptr_t)v6736)(&v6737);
	i8 v6738 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v6738 = v6737;

	i8 v6739 = (i8)(intptr_t)(ws+3456);
	i8 v6740 = *(i8*)(intptr_t)v6739;
	i8 v6741 = (i8)(intptr_t)(f166_FreeNode);

	((void(*)(i8 /* node */))(intptr_t)v6741)(v6740);

	goto c02_058a;

c02_058d:;

endsub:;
}
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f237_AllocLabel(i2* /* label */);
	void f237_AllocLabel(i2* /* label */);

// BeginNormalLoop workspace at ws+3336 length ws+8
void f285_BeginNormalLoop(i8* p6742 /* ll */) {

	i8 v6743 = (i8)+8;
	i8 v6744 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v6745;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v6744)(&v6745, v6743);
	i8 v6746 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v6746 = v6745;

	i8 v6747 = (i8)(intptr_t)(f237_AllocLabel);
	i2 v6748;

	((void(*)(i2* /* label */))(intptr_t)v6747)(&v6748);
	i8 v6749 = (i8)(intptr_t)(ws+3336);
	i8 v6750 = *(i8*)(intptr_t)v6749;
	*(i2*)(intptr_t)v6750 = v6748;

	i8 v6751 = (i8)(intptr_t)(f237_AllocLabel);
	i2 v6752;

	((void(*)(i2* /* label */))(intptr_t)v6751)(&v6752);
	i8 v6753 = (i8)(intptr_t)(ws+3336);
	i8 v6754 = *(i8*)(intptr_t)v6753;
	i8 v6755 = v6754+(+2);
	*(i2*)(intptr_t)v6755 = v6752;

	i8 v6756 = (i8)(intptr_t)(ws+52);
	i2 v6757 = *(i2*)(intptr_t)v6756;
	i8 v6758 = (i8)(intptr_t)(ws+3336);
	i8 v6759 = *(i8*)(intptr_t)v6758;
	i8 v6760 = v6759+(+4);
	*(i2*)(intptr_t)v6760 = v6757;

	i8 v6761 = (i8)(intptr_t)(ws+54);
	i2 v6762 = *(i2*)(intptr_t)v6761;
	i8 v6763 = (i8)(intptr_t)(ws+3336);
	i8 v6764 = *(i8*)(intptr_t)v6763;
	i8 v6765 = v6764+(+6);
	*(i2*)(intptr_t)v6765 = v6762;

	i8 v6766 = (i8)(intptr_t)(ws+3336);
	i8 v6767 = *(i8*)(intptr_t)v6766;
	i8 v6768 = v6767+(+2);
	i2 v6769 = *(i2*)(intptr_t)v6768;
	i8 v6770 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v6770 = v6769;

	i8 v6771 = (i8)(intptr_t)(ws+3336);
	i8 v6772 = *(i8*)(intptr_t)v6771;
	i2 v6773 = *(i2*)(intptr_t)v6772;
	i8 v6774 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v6774 = v6773;

endsub:;
	*p6742 = *(i8*)(intptr_t)(ws+3336);
}
	void f133_MidJump(i8* /* m */, i2 /* label */);
	void f258_Generate(i8 /* statement */);
	void f136_MidLabel(i8* /* m */, i2 /* label */);
	void f258_Generate(i8 /* statement */);
	void f34_Free(i8 /* block */);

// TerminateNormalLoop workspace at ws+3328 length ws+8
void f286_TerminateNormalLoop(i8 p6775 /* ll */) {
	*(i8*)(intptr_t)(ws+3328) = p6775; /*ll */

	i8 v6776 = (i8)(intptr_t)(ws+54);
	i2 v6777 = *(i2*)(intptr_t)v6776;
	i8 v6778 = (i8)(intptr_t)(f133_MidJump);
	i8 v6779;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v6778)(&v6779, v6777);
	i8 v6780 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v6780)(v6779);

	i8 v6781 = (i8)(intptr_t)(ws+52);
	i2 v6782 = *(i2*)(intptr_t)v6781;
	i8 v6783 = (i8)(intptr_t)(f136_MidLabel);
	i8 v6784;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v6783)(&v6784, v6782);
	i8 v6785 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v6785)(v6784);

	i8 v6786 = (i8)(intptr_t)(ws+3328);
	i8 v6787 = *(i8*)(intptr_t)v6786;
	i8 v6788 = v6787+(+4);
	i2 v6789 = *(i2*)(intptr_t)v6788;
	i8 v6790 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v6790 = v6789;

	i8 v6791 = (i8)(intptr_t)(ws+3328);
	i8 v6792 = *(i8*)(intptr_t)v6791;
	i8 v6793 = v6792+(+6);
	i2 v6794 = *(i2*)(intptr_t)v6793;
	i8 v6795 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v6795 = v6794;

	i8 v6796 = (i8)(intptr_t)(ws+3328);
	i8 v6797 = *(i8*)(intptr_t)v6796;
	i8 v6798 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v6798)(v6797);

endsub:;
}

// Negate workspace at ws+3328 length ws+8
void f287_Negate(i8 p6799 /* node */) {
	*(i8*)(intptr_t)(ws+3328) = p6799; /*node */

	i8 v6800 = (i8)(intptr_t)(ws+3328);
	i8 v6801 = *(i8*)(intptr_t)v6800;
	i8 v6802 = v6801+(+6);
	i1 v6803 = *(i1*)(intptr_t)v6802;
	i1 v6804 = v6803^(+1);
	i8 v6805 = (i8)(intptr_t)(ws+3328);
	i8 v6806 = *(i8*)(intptr_t)v6805;
	i8 v6807 = v6806+(+6);
	*(i1*)(intptr_t)v6807 = v6804;

endsub:;
}
	void f275_CondSimple(i8 /* rhs */, i8 /* lhs */);
	void f237_AllocLabel(i2* /* label */);
	void f237_AllocLabel(i2* /* label */);
	void f167_NodeWidth(i1* /* width */, i8 /* node */);
	void f160_MidBeq(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */);

// ConditionalEq workspace at ws+3328 length ws+37
void f288_ConditionalEq(i8* p6808 /* result */, i1 p6809 /* negated */, i8 p6810 /* rhs */, i8 p6811 /* lhs */) {
	*(i8*)(intptr_t)(ws+3328) = p6811; /*lhs */
	*(i8*)(intptr_t)(ws+3336) = p6810; /*rhs */
	*(i1*)(intptr_t)(ws+3344) = p6809; /*negated */

	i8 v6812 = (i8)(intptr_t)(ws+3328);
	i8 v6813 = *(i8*)(intptr_t)v6812;
	i8 v6814 = (i8)(intptr_t)(ws+3336);
	i8 v6815 = *(i8*)(intptr_t)v6814;
	i8 v6816 = (i8)(intptr_t)(f275_CondSimple);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6816)(v6815, v6813);

	i8 v6817 = (i8)(intptr_t)(f237_AllocLabel);
	i2 v6818;

	((void(*)(i2* /* label */))(intptr_t)v6817)(&v6818);
	i8 v6819 = (i8)(intptr_t)(ws+3360);
	*(i2*)(intptr_t)v6819 = v6818;

	i8 v6820 = (i8)(intptr_t)(f237_AllocLabel);
	i2 v6821;

	((void(*)(i2* /* label */))(intptr_t)v6820)(&v6821);
	i8 v6822 = (i8)(intptr_t)(ws+3362);
	*(i2*)(intptr_t)v6822 = v6821;

	i8 v6823 = (i8)(intptr_t)(ws+3328);
	i8 v6824 = *(i8*)(intptr_t)v6823;
	i8 v6825 = (i8)(intptr_t)(f167_NodeWidth);
	i1 v6826;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v6825)(&v6826, v6824);
	i8 v6827 = (i8)(intptr_t)(ws+3364);
	*(i1*)(intptr_t)v6827 = v6826;

	i8 v6828 = (i8)(intptr_t)(ws+3364);
	i1 v6829 = *(i1*)(intptr_t)v6828;
	i8 v6830 = (i8)(intptr_t)(ws+3328);
	i8 v6831 = *(i8*)(intptr_t)v6830;
	i8 v6832 = (i8)(intptr_t)(ws+3336);
	i8 v6833 = *(i8*)(intptr_t)v6832;
	i8 v6834 = (i8)(intptr_t)(ws+3360);
	i2 v6835 = *(i2*)(intptr_t)v6834;
	i8 v6836 = (i8)(intptr_t)(ws+3362);
	i2 v6837 = *(i2*)(intptr_t)v6836;
	i2 v6838 = (i2)+0;
	i8 v6839 = (i8)(intptr_t)(ws+3344);
	i1 v6840 = *(i1*)(intptr_t)v6839;
	i8 v6841 = (i8)(intptr_t)(f160_MidBeq);
	i8 v6842;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v6841)(&v6842, v6840, v6838, v6837, v6835, v6833, v6831, v6829);
	i8 v6843 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6843 = v6842;

endsub:;
	*p6808 = *(i8*)(intptr_t)(ws+3352);
}
	void f275_CondSimple(i8 /* rhs */, i8 /* lhs */);
	void f237_AllocLabel(i2* /* label */);
	void f237_AllocLabel(i2* /* label */);
	void f167_NodeWidth(i1* /* width */, i8 /* node */);
	void f230_IsSNum(i1* /* result */, i8 /* type */);
	void f127_MidBlts(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f147_MidBltu(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */);

// ConditionalLt workspace at ws+3328 length ws+37
void f289_ConditionalLt(i8* p6844 /* result */, i1 p6845 /* negated */, i8 p6846 /* rhs */, i8 p6847 /* lhs */) {
	*(i8*)(intptr_t)(ws+3328) = p6847; /*lhs */
	*(i8*)(intptr_t)(ws+3336) = p6846; /*rhs */
	*(i1*)(intptr_t)(ws+3344) = p6845; /*negated */

	i8 v6848 = (i8)(intptr_t)(ws+3328);
	i8 v6849 = *(i8*)(intptr_t)v6848;
	i8 v6850 = (i8)(intptr_t)(ws+3336);
	i8 v6851 = *(i8*)(intptr_t)v6850;
	i8 v6852 = (i8)(intptr_t)(f275_CondSimple);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6852)(v6851, v6849);

	i8 v6853 = (i8)(intptr_t)(f237_AllocLabel);
	i2 v6854;

	((void(*)(i2* /* label */))(intptr_t)v6853)(&v6854);
	i8 v6855 = (i8)(intptr_t)(ws+3360);
	*(i2*)(intptr_t)v6855 = v6854;

	i8 v6856 = (i8)(intptr_t)(f237_AllocLabel);
	i2 v6857;

	((void(*)(i2* /* label */))(intptr_t)v6856)(&v6857);
	i8 v6858 = (i8)(intptr_t)(ws+3362);
	*(i2*)(intptr_t)v6858 = v6857;

	i8 v6859 = (i8)(intptr_t)(ws+3328);
	i8 v6860 = *(i8*)(intptr_t)v6859;
	i8 v6861 = (i8)(intptr_t)(f167_NodeWidth);
	i1 v6862;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v6861)(&v6862, v6860);
	i8 v6863 = (i8)(intptr_t)(ws+3364);
	*(i1*)(intptr_t)v6863 = v6862;

	i8 v6864 = (i8)(intptr_t)(ws+3328);
	i8 v6865 = *(i8*)(intptr_t)v6864;
	i8 v6866 = v6865+(+16);
	i8 v6867 = *(i8*)(intptr_t)v6866;
	i8 v6868 = (i8)(intptr_t)(f230_IsSNum);
	i1 v6869;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6868)(&v6869, v6867);
	i1 v6870 = (i1)+0;
	if (v6869==v6870) goto c02_0592; else goto c02_0591;

c02_0591:;

	i8 v6871 = (i8)(intptr_t)(ws+3364);
	i1 v6872 = *(i1*)(intptr_t)v6871;
	i8 v6873 = (i8)(intptr_t)(ws+3328);
	i8 v6874 = *(i8*)(intptr_t)v6873;
	i8 v6875 = (i8)(intptr_t)(ws+3336);
	i8 v6876 = *(i8*)(intptr_t)v6875;
	i8 v6877 = (i8)(intptr_t)(ws+3360);
	i2 v6878 = *(i2*)(intptr_t)v6877;
	i8 v6879 = (i8)(intptr_t)(ws+3362);
	i2 v6880 = *(i2*)(intptr_t)v6879;
	i2 v6881 = (i2)+0;
	i8 v6882 = (i8)(intptr_t)(ws+3344);
	i1 v6883 = *(i1*)(intptr_t)v6882;
	i8 v6884 = (i8)(intptr_t)(f127_MidBlts);
	i8 v6885;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v6884)(&v6885, v6883, v6881, v6880, v6878, v6876, v6874, v6872);
	i8 v6886 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6886 = v6885;

	goto c02_058e;

c02_0592:;

	i8 v6887 = (i8)(intptr_t)(ws+3364);
	i1 v6888 = *(i1*)(intptr_t)v6887;
	i8 v6889 = (i8)(intptr_t)(ws+3328);
	i8 v6890 = *(i8*)(intptr_t)v6889;
	i8 v6891 = (i8)(intptr_t)(ws+3336);
	i8 v6892 = *(i8*)(intptr_t)v6891;
	i8 v6893 = (i8)(intptr_t)(ws+3360);
	i2 v6894 = *(i2*)(intptr_t)v6893;
	i8 v6895 = (i8)(intptr_t)(ws+3362);
	i2 v6896 = *(i2*)(intptr_t)v6895;
	i2 v6897 = (i2)+0;
	i8 v6898 = (i8)(intptr_t)(ws+3344);
	i1 v6899 = *(i1*)(intptr_t)v6898;
	i8 v6900 = (i8)(intptr_t)(f147_MidBltu);
	i8 v6901;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v6900)(&v6901, v6899, v6897, v6896, v6894, v6892, v6890, v6888);
	i8 v6902 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6902 = v6901;

c02_058e:;

endsub:;
	*p6844 = *(i8*)(intptr_t)(ws+3352);
}
const i1 c02_s0119[] = { 0x40,0x6e,0x65,0x78,0x74,0x20,0x61,0x6e,0x64,0x20,0x40,0x70,0x72,0x65,0x76,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x20,0x6f,0x6e,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0 };
	void f76_SimpleError(i8 /* message */);

// parser_i_bad_next_prev workspace at ws+3328 length ws+0
void f290_parser_i_bad_next_prev(void) {

	i8 v6903 = (i8)(intptr_t)c02_s0119;
	i8 v6904 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6904)(v6903);

endsub:;
}
const i1 c02_s011a[] = { 0x6f,0x6e,0x6c,0x79,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x76,0x61,0x6c,0x75,0x65,0x73,0x20,0x61,0x72,0x65,0x20,0x61,0x6c,0x6c,0x6f,0x77,0x65,0x64,0x20,0x68,0x65,0x72,0x65,0 };
	void f76_SimpleError(i8 /* message */);

// parser_i_constant_error workspace at ws+3352 length ws+0
void f291_parser_i_constant_error(void) {

	i8 v6905 = (i8)(intptr_t)c02_s011a;
	i8 v6906 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6906)(v6905);

endsub:;
}
	void f74_StartError(void);
const i1 c02_s011b[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s011c[] = { 0x20,0x74,0x61,0x6b,0x65,0x73,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f18_print_i8(i1 /* value */);
const i1 c02_s011d[] = { 0x20,0x62,0x75,0x74,0x20,0x77,0x61,0x73,0x20,0x67,0x69,0x76,0x65,0x6e,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f18_print_i8(i1 /* value */);
	void f75_EndError(void);

// i_check_sub_call_args workspace at ws+3376 length ws+8
void f292_i_check_sub_call_args(void) {

	i8 v6907 = (i8)(intptr_t)(ws+80);
	i8 v6908 = *(i8*)(intptr_t)v6907;
	i8 v6909 = v6908+(+8);
	i8 v6910 = *(i8*)(intptr_t)v6909;
	i8 v6911 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v6911 = v6910;

	i8 v6912 = (i8)(intptr_t)(ws+80);
	i8 v6913 = *(i8*)(intptr_t)v6912;
	i8 v6914 = v6913+(+40);
	i1 v6915 = *(i1*)(intptr_t)v6914;
	i8 v6916 = (i8)(intptr_t)(ws+3376);
	i8 v6917 = *(i8*)(intptr_t)v6916;
	i8 v6918 = v6917+(+80);
	i1 v6919 = *(i1*)(intptr_t)v6918;
	if (v6915==v6919) goto c02_0597; else goto c02_0596;

c02_0596:;

	i8 v6920 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v6920)();

	i8 v6921 = (i8)(intptr_t)c02_s011b;
	i8 v6922 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6922)(v6921);

	i8 v6923 = (i8)(intptr_t)(ws+3376);
	i8 v6924 = *(i8*)(intptr_t)v6923;
	i8 v6925 = *(i8*)(intptr_t)v6924;
	i8 v6926 = v6925+(+8);
	i8 v6927 = *(i8*)(intptr_t)v6926;
	i8 v6928 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6928)(v6927);

	i8 v6929 = (i8)(intptr_t)c02_s011c;
	i8 v6930 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6930)(v6929);

	i8 v6931 = (i8)(intptr_t)(ws+3376);
	i8 v6932 = *(i8*)(intptr_t)v6931;
	i8 v6933 = v6932+(+80);
	i1 v6934 = *(i1*)(intptr_t)v6933;
	i8 v6935 = (i8)(intptr_t)(f18_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v6935)(v6934);

	i8 v6936 = (i8)(intptr_t)c02_s011d;
	i8 v6937 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6937)(v6936);

	i8 v6938 = (i8)(intptr_t)(ws+80);
	i8 v6939 = *(i8*)(intptr_t)v6938;
	i8 v6940 = v6939+(+40);
	i1 v6941 = *(i1*)(intptr_t)v6940;
	i8 v6942 = (i8)(intptr_t)(f18_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v6942)(v6941);

	i8 v6943 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v6943)();

c02_0597:;

c02_0593:;

endsub:;
}
	void f202_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	void f34_Free(i8 /* block */);

// i_end_call workspace at ws+3376 length ws+8
void f293_i_end_call(void) {

	i8 v6944 = (i8)(intptr_t)(ws+40);
	i8 v6945 = *(i8*)(intptr_t)v6944;
	i8 v6946 = (i8)(intptr_t)(ws+80);
	i8 v6947 = *(i8*)(intptr_t)v6946;
	i8 v6948 = v6947+(+8);
	i8 v6949 = *(i8*)(intptr_t)v6948;
	i8 v6950 = (i8)(intptr_t)(f202_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v6950)(v6949, v6945);

	i8 v6951 = (i8)(intptr_t)(ws+80);
	i8 v6952 = *(i8*)(intptr_t)v6951;
	i8 v6953 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v6953 = v6952;

	i8 v6954 = (i8)(intptr_t)(ws+3376);
	i8 v6955 = *(i8*)(intptr_t)v6954;
	i8 v6956 = v6955+(+16);
	i8 v6957 = *(i8*)(intptr_t)v6956;
	i8 v6958 = (i8)(intptr_t)(ws+80);
	*(i8*)(intptr_t)v6958 = v6957;

	i8 v6959 = (i8)(intptr_t)(ws+3376);
	i8 v6960 = *(i8*)(intptr_t)v6959;
	i8 v6961 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v6961)(v6960);

endsub:;
}
	void f74_StartError(void);
const i1 c02_s011e[] = { 0x61,0x74,0x74,0x65,0x6d,0x70,0x74,0x20,0x74,0x6f,0x20,0x72,0x65,0x64,0x65,0x66,0x69,0x6e,0x65,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// SymbolRedeclarationError workspace at ws+3328 length ws+0
void f294_SymbolRedeclarationError(void) {

	i8 v6962 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v6962)();

	i8 v6963 = (i8)(intptr_t)c02_s011e;
	i8 v6964 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6964)(v6963);

	i8 v6965 = (i8)(intptr_t)(ws+72);
	i8 v6966 = *(i8*)(intptr_t)v6965;
	i8 v6967 = v6966+(+32);
	i8 v6968 = *(i8*)(intptr_t)v6967;
	i8 v6969 = v6968+(+8);
	i8 v6970 = *(i8*)(intptr_t)v6969;
	i8 v6971 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6971)(v6970);

	i8 v6972 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v6972)();

endsub:;
}
	void f74_StartError(void);
const i1 c02_s011f[] = { 0x77,0x72,0x6f,0x6e,0x67,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x6f,0x66,0x20,0x65,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x73,0x20,0x69,0x6e,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x66,0x6f,0x72,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// WrongNumberOfElementsError workspace at ws+3368 length ws+0
void f295_WrongNumberOfElementsError(void) {

	i8 v6973 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v6973)();

	i8 v6974 = (i8)(intptr_t)c02_s011f;
	i8 v6975 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6975)(v6974);

	i8 v6976 = (i8)(intptr_t)(ws+72);
	i8 v6977 = *(i8*)(intptr_t)v6976;
	i8 v6978 = v6977+(+32);
	i8 v6979 = *(i8*)(intptr_t)v6978;
	i8 v6980 = v6979+(+8);
	i8 v6981 = *(i8*)(intptr_t)v6980;
	i8 v6982 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6982)(v6981);

	i8 v6983 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v6983)();

endsub:;
}
	void f227_IsArray(i1* /* result */, i8 /* type */);
	void f240_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	void f242_ArchGuessIntType(i8* /* symbol */, i4 /* max */, i4 /* min */);
	void f295_WrongNumberOfElementsError(void);
	void f295_WrongNumberOfElementsError(void);

// CheckEndOfInitialiser workspace at ws+3328 length ws+4
void f296_CheckEndOfInitialiser(void) {

	i8 v6984 = (i8)(intptr_t)(ws+72);
	i8 v6985 = *(i8*)(intptr_t)v6984;
	i8 v6986 = (i8)(intptr_t)(f227_IsArray);
	i1 v6987;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6986)(&v6987, v6985);
	i1 v6988 = (i1)+0;
	if (v6987==v6988) goto c02_059c; else goto c02_059b;

c02_059b:;

	i8 v6989 = (i8)(intptr_t)(ws+72);
	i8 v6990 = *(i8*)(intptr_t)v6989;
	i8 v6991 = *(i8*)(intptr_t)v6990;
	i8 v6992 = v6991+(+50);
	i2 v6993 = *(i2*)(intptr_t)v6992;
	i8 v6994 = (i8)(intptr_t)(ws+3328);
	*(i2*)(intptr_t)v6994 = v6993;

	i8 v6995 = (i8)(intptr_t)(ws+1560);
	i2 v6996 = *(i2*)(intptr_t)v6995;
	i8 v6997 = (i8)(intptr_t)(ws+72);
	i8 v6998 = *(i8*)(intptr_t)v6997;
	i8 v6999 = *(i8*)(intptr_t)v6998;
	i8 v7000 = v6999+(+53);
	i1 v7001 = *(i1*)(intptr_t)v7000;
	i8 v7002 = (i8)(intptr_t)(f240_ArchAlignUp);
	i2 v7003;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v7002)(&v7003, v7001, v6996);
	i8 v7004 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v7004 = v7003;

	i8 v7005 = (i8)(intptr_t)(ws+72);
	i8 v7006 = *(i8*)(intptr_t)v7005;
	i8 v7007 = v7006+(+48);
	i2 v7008 = *(i2*)(intptr_t)v7007;
	i2 v7009 = (i2)+0;
	if (v7008==v7009) goto c02_05a0; else goto c02_05a1;

c02_05a0:;

	i8 v7010 = (i8)(intptr_t)(ws+1560);
	i2 v7011 = *(i2*)(intptr_t)v7010;
	i8 v7012 = (i8)(intptr_t)(ws+72);
	i8 v7013 = *(i8*)(intptr_t)v7012;
	i8 v7014 = v7013+(+48);
	*(i2*)(intptr_t)v7014 = v7011;

	i8 v7015 = (i8)(intptr_t)(ws+1560);
	i2 v7016 = *(i2*)(intptr_t)v7015;
	i8 v7017 = (i8)(intptr_t)(ws+3328);
	i2 v7018 = *(i2*)(intptr_t)v7017;
	i2 v7019 = v7016/v7018;
	i8 v7020 = (i8)(intptr_t)(ws+3330);
	*(i2*)(intptr_t)v7020 = v7019;

	i8 v7021 = (i8)(intptr_t)(ws+3330);
	i2 v7022 = *(i2*)(intptr_t)v7021;
	i8 v7023 = (i8)(intptr_t)(ws+72);
	i8 v7024 = *(i8*)(intptr_t)v7023;
	i8 v7025 = v7024+(+8);
	*(i2*)(intptr_t)v7025 = v7022;

	i4 v7026 = (i4)+0;
	i8 v7027 = (i8)(intptr_t)(ws+3330);
	i2 v7028 = *(i2*)(intptr_t)v7027;
	i2 v7029 = v7028+(-1);
	i4 v7030 = v7029;
	i8 v7031 = (i8)(intptr_t)(f242_ArchGuessIntType);
	i8 v7032;

	((void(*)(i8* /* symbol */, i4 /* max */, i4 /* min */))(intptr_t)v7031)(&v7032, v7030, v7026);
	i8 v7033 = (i8)(intptr_t)(ws+72);
	i8 v7034 = *(i8*)(intptr_t)v7033;
	i8 v7035 = v7034+(+16);
	*(i8*)(intptr_t)v7035 = v7032;

c02_05a1:;

c02_059d:;

	i8 v7036 = (i8)(intptr_t)(ws+1560);
	i2 v7037 = *(i2*)(intptr_t)v7036;
	i8 v7038 = (i8)(intptr_t)(ws+72);
	i8 v7039 = *(i8*)(intptr_t)v7038;
	i8 v7040 = v7039+(+48);
	i2 v7041 = *(i2*)(intptr_t)v7040;
	if (v7037==v7041) goto c02_05a6; else goto c02_05a5;

c02_05a5:;

	i8 v7042 = (i8)(intptr_t)(f295_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v7042)();

c02_05a6:;

c02_05a2:;

	goto c02_0598;

c02_059c:;

	i8 v7043 = (i8)(intptr_t)(ws+1552);
	i8 v7044 = *(i8*)(intptr_t)v7043;
	i8 v7045 = (i8)+0;
	if (v7044==v7045) goto c02_05ab; else goto c02_05aa;

c02_05aa:;

	i8 v7046 = (i8)(intptr_t)(f295_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v7046)();

c02_05ab:;

c02_05a7:;

c02_0598:;

endsub:;
}
	void f227_IsArray(i1* /* result */, i8 /* type */);

// GetInitedMember workspace at ws+3368 length ws+16
void f297_GetInitedMember(i8* p7047 /* member */, i8* p7048 /* type */) {

	i8 v7049 = (i8)+0;
	i8 v7050 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v7050 = v7049;

	i8 v7051 = (i8)(intptr_t)(ws+72);
	i8 v7052 = *(i8*)(intptr_t)v7051;
	i8 v7053 = (i8)(intptr_t)(f227_IsArray);
	i1 v7054;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7053)(&v7054, v7052);
	i1 v7055 = (i1)+0;
	if (v7054==v7055) goto c02_05b0; else goto c02_05af;

c02_05af:;

	i8 v7056 = (i8)(intptr_t)(ws+72);
	i8 v7057 = *(i8*)(intptr_t)v7056;
	i8 v7058 = *(i8*)(intptr_t)v7057;
	i8 v7059 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v7059 = v7058;

	goto c02_05ac;

c02_05b0:;

	i8 v7060 = (i8)(intptr_t)(ws+1552);
	i8 v7061 = *(i8*)(intptr_t)v7060;
	i8 v7062 = (i8)+0;
	if (v7061==v7062) goto c02_05b4; else goto c02_05b5;

c02_05b4:;

	i8 v7063 = (i8)+0;
	i8 v7064 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v7064 = v7063;

	goto endsub;

c02_05b5:;

c02_05b1:;

	i8 v7065 = (i8)(intptr_t)(ws+1552);
	i8 v7066 = *(i8*)(intptr_t)v7065;
	i8 v7067 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v7067 = v7066;

	i8 v7068 = (i8)(intptr_t)(ws+1552);
	i8 v7069 = *(i8*)(intptr_t)v7068;
	i8 v7070 = *(i8*)(intptr_t)v7069;
	i8 v7071 = *(i8*)(intptr_t)v7070;
	i8 v7072 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v7072 = v7071;

	i8 v7073 = (i8)(intptr_t)(ws+1552);
	i8 v7074 = *(i8*)(intptr_t)v7073;
	i8 v7075 = v7074+(+24);
	i8 v7076 = *(i8*)(intptr_t)v7075;
	i8 v7077 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v7077 = v7076;

c02_05ac:;

endsub:;
	*p7048 = *(i8*)(intptr_t)(ws+3376);
	*p7047 = *(i8*)(intptr_t)(ws+3368);
}
	void f240_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	void f105_MidInit(i8* /* m */, i4 /* value */, i1 /* width */);
	void f258_Generate(i8 /* statement */);

// AlignTo workspace at ws+3368 length ws+4
void f298_AlignTo(i1 p7078 /* alignment */) {
	*(i1*)(intptr_t)(ws+3368) = p7078; /*alignment */

	i8 v7079 = (i8)(intptr_t)(ws+1562);
	i2 v7080 = *(i2*)(intptr_t)v7079;
	i8 v7081 = (i8)(intptr_t)(ws+3368);
	i1 v7082 = *(i1*)(intptr_t)v7081;
	i8 v7083 = (i8)(intptr_t)(f240_ArchAlignUp);
	i2 v7084;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v7083)(&v7084, v7082, v7080);
	i8 v7085 = (i8)(intptr_t)(ws+3370);
	*(i2*)(intptr_t)v7085 = v7084;

c02_05b8:;

	i8 v7086 = (i8)(intptr_t)(ws+1562);
	i2 v7087 = *(i2*)(intptr_t)v7086;
	i8 v7088 = (i8)(intptr_t)(ws+3370);
	i2 v7089 = *(i2*)(intptr_t)v7088;
	if (v7087==v7089) goto c02_05bb; else goto c02_05ba;

c02_05ba:;

	i1 v7090 = (i1)+1;
	i4 v7091 = (i4)+0;
	i8 v7092 = (i8)(intptr_t)(f105_MidInit);
	i8 v7093;

	((void(*)(i8* /* m */, i4 /* value */, i1 /* width */))(intptr_t)v7092)(&v7093, v7091, v7090);
	i8 v7094 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7094)(v7093);

	i8 v7095 = (i8)(intptr_t)(ws+1560);
	i2 v7096 = *(i2*)(intptr_t)v7095;
	i2 v7097 = v7096+(+1);
	i8 v7098 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v7098 = v7097;

	i8 v7099 = (i8)(intptr_t)(ws+1562);
	i2 v7100 = *(i2*)(intptr_t)v7099;
	i2 v7101 = v7100+(+1);
	i8 v7102 = (i8)(intptr_t)(ws+1562);
	*(i2*)(intptr_t)v7102 = v7101;

	goto c02_05b8;

c02_05bb:;

endsub:;
}
const i1 c02_s0120[] = { 0x6f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6f,0x72,0x64,0x65,0x72,0x20,0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x61,0x74,0x69,0x6f,0x6e,0 };
	void f76_SimpleError(i8 /* message */);

// CheckForOverlaps workspace at ws+3368 length ws+8
void f299_CheckForOverlaps(i8 p7103 /* member */) {
	*(i8*)(intptr_t)(ws+3368) = p7103; /*member */

	i8 v7104 = (i8)(intptr_t)(ws+3368);
	i8 v7105 = *(i8*)(intptr_t)v7104;
	i8 v7106 = (i8)+0;
	if (v7105==v7106) goto c02_05bf; else goto c02_05c0;

c02_05bf:;

	goto endsub;

c02_05c0:;

c02_05bc:;

	i8 v7107 = (i8)(intptr_t)(ws+3368);
	i8 v7108 = *(i8*)(intptr_t)v7107;
	i8 v7109 = *(i8*)(intptr_t)v7108;
	i8 v7110 = v7109+(+24);
	i2 v7111 = *(i2*)(intptr_t)v7110;
	i8 v7112 = (i8)(intptr_t)(ws+1560);
	i2 v7113 = *(i2*)(intptr_t)v7112;
	if (v7111<v7113) goto c02_05c4; else goto c02_05c5;

c02_05c4:;

	i8 v7114 = (i8)(intptr_t)c02_s0120;
	i8 v7115 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7115)(v7114);

c02_05c5:;

c02_05c1:;

endsub:;
}
	void f297_GetInitedMember(i8* /* member */, i8* /* type */);
	void f295_WrongNumberOfElementsError(void);
	void f298_AlignTo(i1 /* alignment */);
	void f299_CheckForOverlaps(i8 /* member */);

// GetInitedMemberChecked workspace at ws+3352 length ws+16
void f300_GetInitedMemberChecked(i8* p7116 /* member */, i8* p7117 /* type */) {

	i8 v7118 = (i8)(intptr_t)(f297_GetInitedMember);
	i8 v7119;
	i8 v7120;

	((void(*)(i8* /* member */, i8* /* type */))(intptr_t)v7118)(&v7119, &v7120);

	i8 v7121 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v7121 = v7120;

	i8 v7122 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v7122 = v7119;

	i8 v7123 = (i8)(intptr_t)(ws+3360);
	i8 v7124 = *(i8*)(intptr_t)v7123;
	i8 v7125 = (i8)+0;
	if (v7124==v7125) goto c02_05c9; else goto c02_05ca;

c02_05c9:;

	i8 v7126 = (i8)(intptr_t)(f295_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v7126)();

c02_05ca:;

c02_05c6:;

	i8 v7127 = (i8)(intptr_t)(ws+3360);
	i8 v7128 = *(i8*)(intptr_t)v7127;
	i8 v7129 = v7128+(+53);
	i1 v7130 = *(i1*)(intptr_t)v7129;
	i8 v7131 = (i8)(intptr_t)(f298_AlignTo);

	((void(*)(i1 /* alignment */))(intptr_t)v7131)(v7130);

	i8 v7132 = (i8)(intptr_t)(ws+3352);
	i8 v7133 = *(i8*)(intptr_t)v7132;
	i8 v7134 = (i8)(intptr_t)(f299_CheckForOverlaps);

	((void(*)(i8 /* member */))(intptr_t)v7134)(v7133);

endsub:;
	*p7117 = *(i8*)(intptr_t)(ws+3360);
	*p7116 = *(i8*)(intptr_t)(ws+3352);
}
static data f3___main_s05cb[] = {




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
static data f3___main_s05cc[] = {








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
static data f3___main_s05cd[] = {




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
static data f3___main_s05ce[] = {




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
static data f3___main_s05cf[] = {




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
const i1 c02_s0121[] = { 0x24,0 };
const i1 c02_s0122[] = { 0x41,0x53,0x4d,0 };
const i1 c02_s0123[] = { 0x41,0x53,0x53,0x49,0x47,0x4e,0 };
const i1 c02_s0124[] = { 0x42,0x52,0x45,0x41,0x4b,0 };
const i1 c02_s0125[] = { 0x43,0x4c,0x4f,0x53,0x45,0x50,0x41,0x52,0x45,0x4e,0 };
const i1 c02_s0126[] = { 0x43,0x4c,0x4f,0x53,0x45,0x53,0x51,0 };
const i1 c02_s0127[] = { 0x43,0x4f,0x4c,0x4f,0x4e,0 };
const i1 c02_s0128[] = { 0x43,0x4f,0x4e,0x53,0x54,0 };
const i1 c02_s0129[] = { 0x44,0x4f,0x54,0 };
const i1 c02_s012a[] = { 0x45,0x4c,0x53,0x45,0 };
const i1 c02_s012b[] = { 0x45,0x4e,0x44,0 };
const i1 c02_s012c[] = { 0x45,0x58,0x54,0x45,0x52,0x4e,0 };
const i1 c02_s012d[] = { 0x49,0x46,0 };
const i1 c02_s012e[] = { 0x4c,0x4f,0x4f,0x50,0 };
const i1 c02_s012f[] = { 0x4d,0x49,0x4e,0x55,0x53,0 };
const i1 c02_s0130[] = { 0x4e,0x4f,0x54,0 };
const i1 c02_s0131[] = { 0x4f,0x50,0x45,0x4e,0x50,0x41,0x52,0x45,0x4e,0 };
const i1 c02_s0132[] = { 0x4f,0x50,0x45,0x4e,0x53,0x51,0 };
const i1 c02_s0133[] = { 0x50,0x45,0x52,0x43,0x45,0x4e,0x54,0 };
const i1 c02_s0134[] = { 0x50,0x4c,0x55,0x53,0 };
const i1 c02_s0135[] = { 0x52,0x45,0x43,0x4f,0x52,0x44,0 };
const i1 c02_s0136[] = { 0x52,0x45,0x54,0x55,0x52,0x4e,0 };
const i1 c02_s0137[] = { 0x53,0x45,0x4d,0x49,0x43,0x4f,0x4c,0x4f,0x4e,0 };
const i1 c02_s0138[] = { 0x53,0x4c,0x41,0x53,0x48,0 };
const i1 c02_s0139[] = { 0x53,0x54,0x41,0x52,0 };
const i1 c02_s013a[] = { 0x53,0x55,0x42,0 };
const i1 c02_s013b[] = { 0x54,0x48,0x45,0x4e,0 };
const i1 c02_s013c[] = { 0x54,0x49,0x4c,0x44,0x45,0 };
const i1 c02_s013d[] = { 0x56,0x41,0x52,0 };
const i1 c02_s013e[] = { 0x57,0x48,0x49,0x4c,0x45,0 };
const i1 c02_s013f[] = { 0x54,0x59,0x50,0x45,0 };
const i1 c02_s0140[] = { 0x4f,0x50,0x45,0x4e,0x42,0x52,0 };
const i1 c02_s0141[] = { 0x43,0x4c,0x4f,0x53,0x45,0x42,0x52,0 };
const i1 c02_s0142[] = { 0x49,0x44,0 };
const i1 c02_s0143[] = { 0x4e,0x55,0x4d,0x42,0x45,0x52,0 };
const i1 c02_s0144[] = { 0x41,0x54,0 };
const i1 c02_s0145[] = { 0x42,0x59,0x54,0x45,0x53,0x4f,0x46,0 };
const i1 c02_s0146[] = { 0x45,0x4c,0x53,0x45,0x49,0x46,0 };
const i1 c02_s0147[] = { 0x49,0x4e,0x54,0 };
const i1 c02_s0148[] = { 0x54,0x59,0x50,0x45,0x44,0x45,0x46,0 };
const i1 c02_s0149[] = { 0x53,0x49,0x5a,0x45,0x4f,0x46,0 };
const i1 c02_s014a[] = { 0x53,0x54,0x52,0x49,0x4e,0x47,0 };
const i1 c02_s014b[] = { 0x49,0x4d,0x50,0x4c,0 };
const i1 c02_s014c[] = { 0x44,0x45,0x43,0x4c,0 };
const i1 c02_s014d[] = { 0x49,0x4e,0x54,0x45,0x52,0x46,0x41,0x43,0x45,0 };
const i1 c02_s014e[] = { 0x43,0x4f,0x4d,0x4d,0x41,0 };
const i1 c02_s014f[] = { 0x41,0x4e,0x44,0 };
const i1 c02_s0150[] = { 0x4f,0x52,0 };
const i1 c02_s0151[] = { 0x50,0x49,0x50,0x45,0 };
const i1 c02_s0152[] = { 0x43,0x41,0x52,0x45,0x54,0 };
const i1 c02_s0153[] = { 0x4c,0x54,0x4f,0x50,0 };
const i1 c02_s0154[] = { 0x4c,0x45,0x4f,0x50,0 };
const i1 c02_s0155[] = { 0x47,0x54,0x4f,0x50,0 };
const i1 c02_s0156[] = { 0x47,0x45,0x4f,0x50,0 };
const i1 c02_s0157[] = { 0x45,0x51,0x4f,0x50,0 };
const i1 c02_s0158[] = { 0x4e,0x45,0x4f,0x50,0 };
const i1 c02_s0159[] = { 0x4c,0x53,0x48,0x49,0x46,0x54,0 };
const i1 c02_s015a[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0 };
const i1 c02_s015b[] = { 0x41,0x53,0 };
const i1 c02_s015c[] = { 0x41,0x4d,0x50,0x45,0x52,0x53,0x41,0x4e,0x44,0 };
const i1 c02_s015d[] = { 0x4e,0x45,0x58,0x54,0 };
const i1 c02_s015e[] = { 0x50,0x52,0x45,0x56,0 };
const i1 c02_s015f[] = { 0x49,0x4e,0x44,0x45,0x58,0x4f,0x46,0 };
const i1 c02_s0160[] = { 0x43,0x4f,0x4e,0x54,0x49,0x4e,0x55,0x45,0 };
const i1 c02_s0161[] = { 0x43,0x41,0x53,0x45,0 };
const i1 c02_s0162[] = { 0x49,0x53,0 };
const i1 c02_s0163[] = { 0x57,0x48,0x45,0x4e,0 };
const i1 c02_s0164[] = { 0x41,0x4c,0x49,0x41,0x53,0 };
const i1 c02_s0165[] = { 0x49,0x4d,0x50,0x4c,0x45,0x4d,0x45,0x4e,0x54,0x53,0 };
static data f3___main_s05d0[] = {

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

	{ .ptr = (void*)c02_s0165 },

};
const i1 c02_s0166[] = { 0x66,0x72,0x65,0x65,0x20,0x75,0x6e,0x75,0x73,0x65,0x64,0x20,0x73,0x74,0x72,0x69,0x6e,0x67,0x0a,0 };
	void f12_print(i8 /* ptr */);
	void f34_Free(i8 /* block */);

// token_destructor workspace at ws+3392 length ws+0
void f302_token_destructor(void) {

	i8 v7137 = (i8)(intptr_t)(ws+3376);
	i1 v7138 = *(i1*)(intptr_t)v7137;
	i1 v7139 = (i1)+41;
	if (v7138==v7139) goto c02_05d6; else goto c02_05d8;

c02_05d8:;

	i8 v7140 = (i8)(intptr_t)(ws+3376);
	i1 v7141 = *(i1*)(intptr_t)v7140;
	i1 v7142 = (i1)+33;
	if (v7141==v7142) goto c02_05d6; else goto c02_05d7;

c02_05d6:;

	i8 v7143 = (i8)(intptr_t)c02_s0166;
	i8 v7144 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7144)(v7143);

	i8 v7145 = (i8)(intptr_t)(ws+3384);
	i8 v7146 = *(i8*)(intptr_t)v7145;
	i8 v7147 = *(i8*)(intptr_t)v7146;
	i8 v7148 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v7148)(v7147);

c02_05d7:;

c02_05d1:;

endsub:;
}
	void f302_token_destructor(void);

// yy_destructor workspace at ws+3376 length ws+16
void f301_yy_destructor(i8 p7135 /* yypminor */, i1 p7136 /* yymajor */) {
	*(i1*)(intptr_t)(ws+3376) = p7136; /*yymajor */
	*(i8*)(intptr_t)(ws+3384) = p7135; /*yypminor */


	i8 v7149 = (i8)(intptr_t)(ws+3376);
	i1 v7150 = *(i1*)(intptr_t)v7149;
	i1 v7151 = (i1)+0;
	if (v7150==v7151) goto c02_05df; else goto c02_05e0;

c02_05e0:;

	i8 v7152 = (i8)(intptr_t)(ws+3376);
	i1 v7153 = *(i1*)(intptr_t)v7152;
	i1 v7154 = (i1)+69;
	if (v7153<v7154) goto c02_05de; else goto c02_05df;

c02_05de:;

	i8 v7155 = (i8)(intptr_t)(f302_token_destructor);

	((void(*)(void))(intptr_t)v7155)();

c02_05df:;

c02_05d9:;

endsub:;
}
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// yy_pop_parser_stack workspace at ws+3328 length ws+0
void f303_yy_pop_parser_stack(void) {

	i8 v7156 = (i8)(intptr_t)(ws+1568);
	i8 v7157 = *(i8*)(intptr_t)v7156;
	i8 v7158 = v7157+(-16);
	i8 v7159 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v7159 = v7158;

	i8 v7160 = (i8)(intptr_t)(ws+1568);
	i8 v7161 = *(i8*)(intptr_t)v7160;
	i8 v7162 = v7161+(+2);
	i1 v7163 = *(i1*)(intptr_t)v7162;
	i8 v7164 = (i8)(intptr_t)(ws+1568);
	i8 v7165 = *(i8*)(intptr_t)v7164;
	i8 v7166 = v7165+(+8);
	i8 v7167 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7167)(v7166, v7163);

endsub:;
}
	void f303_yy_pop_parser_stack(void);

// yy_pop_all_parser_stack workspace at ws+3328 length ws+0
void f304_yy_pop_all_parser_stack(void) {

c02_05e3:;

	i8 v7168 = (i8)(intptr_t)(ws+1568);
	i8 v7169 = *(i8*)(intptr_t)v7168;
	i8 v7170 = (i8)(intptr_t)(ws+1576);
	if (v7169==v7170) goto c02_05e6; else goto c02_05e5;

c02_05e5:;

	i8 v7171 = (i8)(intptr_t)(f303_yy_pop_parser_stack);

	((void(*)(void))(intptr_t)v7171)();

	goto c02_05e3;

c02_05e6:;

endsub:;
}
	void f304_yy_pop_all_parser_stack(void);
	void f74_StartError(void);
const i1 c02_s0167[] = { 0x70,0x61,0x72,0x73,0x65,0x72,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// yy_stack_overflow workspace at ws+3328 length ws+0
void f305_yy_stack_overflow(void) {

	i8 v7172 = (i8)(intptr_t)(f304_yy_pop_all_parser_stack);

	((void(*)(void))(intptr_t)v7172)();

	i8 v7173 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v7173)();

	i8 v7174 = (i8)(intptr_t)c02_s0167;
	i8 v7175 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7175)(v7174);

	i8 v7176 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v7176)();

endsub:;
}
static data f3___main_s05e7[] = {








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
static data f3___main_s05e8[] = {








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
void f307_CopyMinor(i8 p7201 /* dest */, i8 p7202 /* src */) {
	*(i8*)(intptr_t)(ws+3328) = p7202; /*src */
	*(i8*)(intptr_t)(ws+3336) = p7201; /*dest */

	i8 v7203 = (i8)(intptr_t)(ws+3328);
	i8 v7204 = *(i8*)(intptr_t)v7203;
	i8 v7205 = (i8)+8;
	i8 v7206 = (i8)(intptr_t)(ws+3336);
	i8 v7207 = *(i8*)(intptr_t)v7206;
	i8 v7208 = (i8)(intptr_t)(f31_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v7208)(v7207, v7205, v7204);

endsub:;
}
	void f305_yy_stack_overflow(void);
	void f307_CopyMinor(i8 /* dest */, i8 /* src */);

// Reducer workspace at ws+3328 length ws+0
void f309_Reducer(void) {

endsub:;
}
	void f148_MidReturn(i8* /* m */);
	void f258_Generate(i8 /* statement */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_0 workspace at ws+3328 length ws+0
void f310_reduce_0(void) {

	i8 v7250 = (i8)(intptr_t)(f148_MidReturn);
	i8 v7251;

	((void(*)(i8* /* m */))(intptr_t)v7250)(&v7251);
	i8 v7252 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7252)(v7251);

	i1 v7253 = (i1)+22;
	i8 v7254 = (i8)(intptr_t)(ws+3248);
	i8 v7255 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7255)(v7254, v7253);

endsub:;
}
	void f261_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_1 workspace at ws+3328 length ws+0
void f311_reduce_1(void) {

	i8 v7256 = (i8)(intptr_t)(ws+40);
	i8 v7257 = *(i8*)(intptr_t)v7256;
	i8 v7258 = (i8)(intptr_t)(ws+3272);
	i8 v7259 = *(i8*)(intptr_t)v7258;
	i8 v7260 = (i8)(intptr_t)(ws+3256);
	i8 v7261 = *(i8*)(intptr_t)v7260;
	i8 v7262 = (i8)(intptr_t)(f261_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v7262)(v7261, v7259, v7257);

	i1 v7263 = (i1)+6;
	i8 v7264 = (i8)(intptr_t)(ws+3264);
	i8 v7265 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7265)(v7264, v7263);

	i1 v7266 = (i1)+22;
	i8 v7267 = (i8)(intptr_t)(ws+3248);
	i8 v7268 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7268)(v7267, v7266);

endsub:;
}
	void f261_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f270_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f132_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f134_MidDeref(i8* /* m */, i8 /* left */, i1 /* width */);
	void f163_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f258_Generate(i8 /* statement */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_2 workspace at ws+3328 length ws+1
void f312_reduce_2(void) {

	i8 v7269 = (i8)(intptr_t)(ws+40);
	i8 v7270 = *(i8*)(intptr_t)v7269;
	i8 v7271 = (i8)(intptr_t)(ws+3288);
	i8 v7272 = *(i8*)(intptr_t)v7271;
	i8 v7273 = (i8)(intptr_t)(ws+3272);
	i8 v7274 = *(i8*)(intptr_t)v7273;
	i8 v7275 = (i8)(intptr_t)(f261_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v7275)(v7274, v7272, v7270);

	i8 v7276 = (i8)(intptr_t)(ws+3256);
	i8 v7277 = *(i8*)(intptr_t)v7276;
	i8 v7278 = (i8)(intptr_t)(ws+3288);
	i8 v7279 = *(i8*)(intptr_t)v7278;
	i8 v7280 = *(i8*)(intptr_t)v7279;
	i8 v7281 = *(i8*)(intptr_t)v7280;
	i8 v7282 = (i8)(intptr_t)(f270_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v7282)(v7281, v7277);

	i8 v7283 = (i8)(intptr_t)(ws+3256);
	i8 v7284 = *(i8*)(intptr_t)v7283;
	i8 v7285 = v7284+(+16);
	i8 v7286 = *(i8*)(intptr_t)v7285;
	i8 v7287 = v7286+(+48);
	i2 v7288 = *(i2*)(intptr_t)v7287;
	i1 v7289 = v7288;
	i8 v7290 = (i8)(intptr_t)(ws+3328);
	*(i1*)(intptr_t)v7290 = v7289;

	i8 v7291 = (i8)(intptr_t)(ws+3328);
	i1 v7292 = *(i1*)(intptr_t)v7291;
	i8 v7293 = (i8)(intptr_t)(ws+3256);
	i8 v7294 = *(i8*)(intptr_t)v7293;
	i8 v7295 = (i8)(intptr_t)(ws+3328);
	i1 v7296 = *(i1*)(intptr_t)v7295;
	i8 v7297 = (i8)(intptr_t)(ws+3288);
	i8 v7298 = *(i8*)(intptr_t)v7297;
	i2 v7299 = (i2)+0;
	i8 v7300 = (i8)(intptr_t)(f132_MidAddress);
	i8 v7301;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v7300)(&v7301, v7299, v7298);
	i8 v7302 = (i8)(intptr_t)(f134_MidDeref);
	i8 v7303;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v7302)(&v7303, v7301, v7296);
	i8 v7304 = (i8)(intptr_t)(f163_MidStore);
	i8 v7305;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v7304)(&v7305, v7303, v7294, v7292);
	i8 v7306 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7306)(v7305);

	i1 v7307 = (i1)+6;
	i8 v7308 = (i8)(intptr_t)(ws+3280);
	i8 v7309 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7309)(v7308, v7307);

	i1 v7310 = (i1)+2;
	i8 v7311 = (i8)(intptr_t)(ws+3264);
	i8 v7312 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7312)(v7311, v7310);

	i1 v7313 = (i1)+22;
	i8 v7314 = (i8)(intptr_t)(ws+3248);
	i8 v7315 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7315)(v7314, v7313);

endsub:;
}
const i1 c02_s016a[] = { 0x74,0x79,0x70,0x65,0x73,0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x62,0x65,0x20,0x69,0x6e,0x66,0x65,0x72,0x72,0x65,0x64,0x20,0x66,0x6f,0x72,0x20,0x6e,0x75,0x6d,0x65,0x72,0x69,0x63,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x73,0 };
	void f76_SimpleError(i8 /* message */);
	void f231_IsScalar(i1* /* result */, i8 /* type */);
const i1 c02_s016b[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x73,0x73,0x69,0x67,0x6e,0x20,0x74,0x6f,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x73,0 };
	void f76_SimpleError(i8 /* message */);
	void f261_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f270_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f132_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f134_MidDeref(i8* /* m */, i8 /* left */, i1 /* width */);
	void f163_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f258_Generate(i8 /* statement */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_3 workspace at ws+3328 length ws+9
void f313_reduce_3(void) {

	i8 v7316 = (i8)(intptr_t)(ws+3256);
	i8 v7317 = *(i8*)(intptr_t)v7316;
	i8 v7318 = v7317+(+16);
	i8 v7319 = *(i8*)(intptr_t)v7318;
	i8 v7320 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v7320 = v7319;

	i8 v7321 = (i8)(intptr_t)(ws+3328);
	i8 v7322 = *(i8*)(intptr_t)v7321;
	i8 v7323 = (i8)+0;
	if (v7322==v7323) goto c02_05f7; else goto c02_05f8;

c02_05f7:;

	i8 v7324 = (i8)(intptr_t)c02_s016a;
	i8 v7325 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7325)(v7324);

c02_05f8:;

c02_05f4:;

	i8 v7326 = (i8)(intptr_t)(ws+3328);
	i8 v7327 = *(i8*)(intptr_t)v7326;
	i8 v7328 = (i8)(intptr_t)(f231_IsScalar);
	i1 v7329;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7328)(&v7329, v7327);
	i1 v7330 = (i1)+0;
	if (v7329==v7330) goto c02_05fc; else goto c02_05fd;

c02_05fc:;

	i8 v7331 = (i8)(intptr_t)c02_s016b;
	i8 v7332 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7332)(v7331);

c02_05fd:;

c02_05f9:;

	i8 v7333 = (i8)(intptr_t)(ws+40);
	i8 v7334 = *(i8*)(intptr_t)v7333;
	i8 v7335 = (i8)(intptr_t)(ws+3272);
	i8 v7336 = *(i8*)(intptr_t)v7335;
	i8 v7337 = (i8)(intptr_t)(ws+3328);
	i8 v7338 = *(i8*)(intptr_t)v7337;
	i8 v7339 = (i8)(intptr_t)(f261_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v7339)(v7338, v7336, v7334);

	i8 v7340 = (i8)(intptr_t)(ws+3256);
	i8 v7341 = *(i8*)(intptr_t)v7340;
	i8 v7342 = (i8)(intptr_t)(ws+3272);
	i8 v7343 = *(i8*)(intptr_t)v7342;
	i8 v7344 = *(i8*)(intptr_t)v7343;
	i8 v7345 = *(i8*)(intptr_t)v7344;
	i8 v7346 = (i8)(intptr_t)(f270_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v7346)(v7345, v7341);

	i8 v7347 = (i8)(intptr_t)(ws+3256);
	i8 v7348 = *(i8*)(intptr_t)v7347;
	i8 v7349 = v7348+(+16);
	i8 v7350 = *(i8*)(intptr_t)v7349;
	i8 v7351 = v7350+(+48);
	i2 v7352 = *(i2*)(intptr_t)v7351;
	i1 v7353 = v7352;
	i8 v7354 = (i8)(intptr_t)(ws+3336);
	*(i1*)(intptr_t)v7354 = v7353;

	i8 v7355 = (i8)(intptr_t)(ws+3336);
	i1 v7356 = *(i1*)(intptr_t)v7355;
	i8 v7357 = (i8)(intptr_t)(ws+3256);
	i8 v7358 = *(i8*)(intptr_t)v7357;
	i8 v7359 = (i8)(intptr_t)(ws+3336);
	i1 v7360 = *(i1*)(intptr_t)v7359;
	i8 v7361 = (i8)(intptr_t)(ws+3272);
	i8 v7362 = *(i8*)(intptr_t)v7361;
	i2 v7363 = (i2)+0;
	i8 v7364 = (i8)(intptr_t)(f132_MidAddress);
	i8 v7365;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v7364)(&v7365, v7363, v7362);
	i8 v7366 = (i8)(intptr_t)(f134_MidDeref);
	i8 v7367;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v7366)(&v7367, v7365, v7360);
	i8 v7368 = (i8)(intptr_t)(f163_MidStore);
	i8 v7369;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v7368)(&v7369, v7367, v7358, v7356);
	i8 v7370 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7370)(v7369);

	i1 v7371 = (i1)+2;
	i8 v7372 = (i8)(intptr_t)(ws+3264);
	i8 v7373 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7373)(v7372, v7371);

	i1 v7374 = (i1)+22;
	i8 v7375 = (i8)(intptr_t)(ws+3248);
	i8 v7376 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7376)(v7375, v7374);

endsub:;
}
	void f234_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f270_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f134_MidDeref(i8* /* m */, i8 /* left */, i1 /* width */);
	void f163_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f258_Generate(i8 /* statement */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_4 workspace at ws+3328 length ws+17
void f314_reduce_4(void) {

	i8 v7377 = (i8)(intptr_t)(ws+3272);
	i8 v7378 = *(i8*)(intptr_t)v7377;
	i8 v7379 = v7378+(+16);
	i8 v7380 = *(i8*)(intptr_t)v7379;
	i8 v7381 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v7381 = v7380;

	i8 v7382 = (i8)(intptr_t)(ws+3272);
	i8 v7383 = *(i8*)(intptr_t)v7382;
	i8 v7384 = (i8)(intptr_t)(f234_UndoLValue);
	i8 v7385;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v7384)(&v7385, v7383);
	i8 v7386 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v7386 = v7385;

	i8 v7387 = (i8)(intptr_t)(ws+3256);
	i8 v7388 = *(i8*)(intptr_t)v7387;
	i8 v7389 = (i8)(intptr_t)(ws+3328);
	i8 v7390 = *(i8*)(intptr_t)v7389;
	i8 v7391 = (i8)(intptr_t)(f270_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v7391)(v7390, v7388);

	i8 v7392 = (i8)(intptr_t)(ws+3328);
	i8 v7393 = *(i8*)(intptr_t)v7392;
	i8 v7394 = v7393+(+48);
	i2 v7395 = *(i2*)(intptr_t)v7394;
	i1 v7396 = v7395;
	i8 v7397 = (i8)(intptr_t)(ws+3344);
	*(i1*)(intptr_t)v7397 = v7396;

	i8 v7398 = (i8)(intptr_t)(ws+3344);
	i1 v7399 = *(i1*)(intptr_t)v7398;
	i8 v7400 = (i8)(intptr_t)(ws+3256);
	i8 v7401 = *(i8*)(intptr_t)v7400;
	i8 v7402 = (i8)(intptr_t)(ws+3344);
	i1 v7403 = *(i1*)(intptr_t)v7402;
	i8 v7404 = (i8)(intptr_t)(ws+3336);
	i8 v7405 = *(i8*)(intptr_t)v7404;
	i8 v7406 = (i8)(intptr_t)(f134_MidDeref);
	i8 v7407;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v7406)(&v7407, v7405, v7403);
	i8 v7408 = (i8)(intptr_t)(f163_MidStore);
	i8 v7409;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v7408)(&v7409, v7407, v7401, v7399);
	i8 v7410 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7410)(v7409);

	i1 v7411 = (i1)+2;
	i8 v7412 = (i8)(intptr_t)(ws+3264);
	i8 v7413 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7413)(v7412, v7411);

	i1 v7414 = (i1)+22;
	i8 v7415 = (i8)(intptr_t)(ws+3248);
	i8 v7416 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7416)(v7415, v7414);

endsub:;
}
	void f286_TerminateNormalLoop(i8 /* ll */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_5 workspace at ws+3328 length ws+0
void f315_reduce_5(void) {

	i8 v7417 = (i8)(intptr_t)(ws+3272);
	i8 v7418 = *(i8*)(intptr_t)v7417;
	i8 v7419 = (i8)(intptr_t)(f286_TerminateNormalLoop);

	((void(*)(i8 /* ll */))(intptr_t)v7419)(v7418);

	i1 v7420 = (i1)+10;
	i8 v7421 = (i8)(intptr_t)(ws+3256);
	i8 v7422 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7422)(v7421, v7420);

	i1 v7423 = (i1)+13;
	i8 v7424 = (i8)(intptr_t)(ws+3248);
	i8 v7425 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7425)(v7424, v7423);

endsub:;
}
	void f285_BeginNormalLoop(i8* /* ll */);
	void f136_MidLabel(i8* /* m */, i2 /* label */);
	void f258_Generate(i8 /* statement */);

// reduce_6 workspace at ws+3328 length ws+0
void f316_reduce_6(void) {

	i8 v7426 = (i8)(intptr_t)(f285_BeginNormalLoop);
	i8 v7427;

	((void(*)(i8* /* ll */))(intptr_t)v7426)(&v7427);
	i8 v7428 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7428 = v7427;

	i8 v7429 = (i8)(intptr_t)(ws+54);
	i2 v7430 = *(i2*)(intptr_t)v7429;
	i8 v7431 = (i8)(intptr_t)(f136_MidLabel);
	i8 v7432;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7431)(&v7432, v7430);
	i8 v7433 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7433)(v7432);

endsub:;
}
	void f286_TerminateNormalLoop(i8 /* ll */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_7 workspace at ws+3328 length ws+0
void f317_reduce_7(void) {

	i8 v7434 = (i8)(intptr_t)(ws+3272);
	i8 v7435 = *(i8*)(intptr_t)v7434;
	i8 v7436 = (i8)(intptr_t)(f286_TerminateNormalLoop);

	((void(*)(i8 /* ll */))(intptr_t)v7436)(v7435);

	i1 v7437 = (i1)+10;
	i8 v7438 = (i8)(intptr_t)(ws+3256);
	i8 v7439 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7439)(v7438, v7437);

	i1 v7440 = (i1)+13;
	i8 v7441 = (i8)(intptr_t)(ws+3248);
	i8 v7442 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7442)(v7441, v7440);

endsub:;
}
	void f285_BeginNormalLoop(i8* /* ll */);
	void f136_MidLabel(i8* /* m */, i2 /* label */);
	void f258_Generate(i8 /* statement */);
	void f237_AllocLabel(i2* /* label */);
	void f237_AllocLabel(i2* /* label */);
	void f259_GenerateConditional(i8 /* rootnode */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_8 workspace at ws+3328 length ws+2
void f318_reduce_8(void) {

	i8 v7443 = (i8)(intptr_t)(f285_BeginNormalLoop);
	i8 v7444;

	((void(*)(i8* /* ll */))(intptr_t)v7443)(&v7444);
	i8 v7445 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7445 = v7444;

	i8 v7446 = (i8)(intptr_t)(ws+54);
	i2 v7447 = *(i2*)(intptr_t)v7446;
	i8 v7448 = (i8)(intptr_t)(f136_MidLabel);
	i8 v7449;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7448)(&v7449, v7447);
	i8 v7450 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7450)(v7449);

	i8 v7451 = (i8)(intptr_t)(f237_AllocLabel);
	i2 v7452;

	((void(*)(i2* /* label */))(intptr_t)v7451)(&v7452);
	i8 v7453 = (i8)(intptr_t)(ws+3328);
	*(i2*)(intptr_t)v7453 = v7452;

	i8 v7454 = (i8)(intptr_t)(f237_AllocLabel);
	i2 v7455;

	((void(*)(i2* /* label */))(intptr_t)v7454)(&v7455);
	i8 v7456 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v7456 = v7455;

	i8 v7457 = (i8)(intptr_t)(ws+3328);
	i2 v7458 = *(i2*)(intptr_t)v7457;
	i8 v7459 = (i8)(intptr_t)(ws+3256);
	i8 v7460 = *(i8*)(intptr_t)v7459;
	*(i2*)(intptr_t)v7460 = v7458;

	i8 v7461 = (i8)(intptr_t)(ws+52);
	i2 v7462 = *(i2*)(intptr_t)v7461;
	i8 v7463 = (i8)(intptr_t)(ws+3256);
	i8 v7464 = *(i8*)(intptr_t)v7463;
	i8 v7465 = v7464+(+2);
	*(i2*)(intptr_t)v7465 = v7462;

	i8 v7466 = (i8)(intptr_t)(ws+3328);
	i2 v7467 = *(i2*)(intptr_t)v7466;
	i8 v7468 = (i8)(intptr_t)(ws+3256);
	i8 v7469 = *(i8*)(intptr_t)v7468;
	i8 v7470 = v7469+(+4);
	*(i2*)(intptr_t)v7470 = v7467;

	i8 v7471 = (i8)(intptr_t)(ws+3256);
	i8 v7472 = *(i8*)(intptr_t)v7471;
	i8 v7473 = (i8)(intptr_t)(f259_GenerateConditional);

	((void(*)(i8 /* rootnode */))(intptr_t)v7473)(v7472);

	i8 v7474 = (i8)(intptr_t)(ws+52);
	i2 v7475 = *(i2*)(intptr_t)v7474;
	i8 v7476 = (i8)(intptr_t)(ws+3240);
	i8 v7477 = *(i8*)(intptr_t)v7476;
	i8 v7478 = v7477+(+2);
	*(i2*)(intptr_t)v7478 = v7475;

	i1 v7479 = (i1)+13;
	i8 v7480 = (i8)(intptr_t)(ws+3248);
	i8 v7481 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7481)(v7480, v7479);

endsub:;
}
const i1 c02_s016c[] = { 0x6e,0x6f,0x74,0x68,0x69,0x6e,0x67,0x20,0x74,0x6f,0x20,0x62,0x72,0x65,0x61,0x6b,0x20,0x74,0x6f,0 };
	void f76_SimpleError(i8 /* message */);
	void f133_MidJump(i8* /* m */, i2 /* label */);
	void f258_Generate(i8 /* statement */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_9 workspace at ws+3328 length ws+0
void f319_reduce_9(void) {

	i8 v7482 = (i8)(intptr_t)(ws+52);
	i2 v7483 = *(i2*)(intptr_t)v7482;
	i2 v7484 = (i2)+0;
	if (v7483==v7484) goto c02_0601; else goto c02_0602;

c02_0601:;

	i8 v7485 = (i8)(intptr_t)c02_s016c;
	i8 v7486 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7486)(v7485);

c02_0602:;

c02_05fe:;

	i8 v7487 = (i8)(intptr_t)(ws+52);
	i2 v7488 = *(i2*)(intptr_t)v7487;
	i8 v7489 = (i8)(intptr_t)(f133_MidJump);
	i8 v7490;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7489)(&v7490, v7488);
	i8 v7491 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7491)(v7490);

	i1 v7492 = (i1)+22;
	i8 v7493 = (i8)(intptr_t)(ws+3248);
	i8 v7494 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7494)(v7493, v7492);

endsub:;
}
const i1 c02_s016d[] = { 0x6e,0x6f,0x74,0x68,0x69,0x6e,0x67,0x20,0x74,0x6f,0x20,0x63,0x6f,0x6e,0x74,0x69,0x6e,0x75,0x65,0x20,0x74,0x6f,0 };
	void f76_SimpleError(i8 /* message */);
	void f133_MidJump(i8* /* m */, i2 /* label */);
	void f258_Generate(i8 /* statement */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_10 workspace at ws+3328 length ws+0
void f320_reduce_10(void) {

	i8 v7495 = (i8)(intptr_t)(ws+54);
	i2 v7496 = *(i2*)(intptr_t)v7495;
	i2 v7497 = (i2)+0;
	if (v7496==v7497) goto c02_0606; else goto c02_0607;

c02_0606:;

	i8 v7498 = (i8)(intptr_t)c02_s016d;
	i8 v7499 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7499)(v7498);

c02_0607:;

c02_0603:;

	i8 v7500 = (i8)(intptr_t)(ws+54);
	i2 v7501 = *(i2*)(intptr_t)v7500;
	i8 v7502 = (i8)(intptr_t)(f133_MidJump);
	i8 v7503;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7502)(&v7503, v7501);
	i8 v7504 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7504)(v7503);

	i1 v7505 = (i1)+22;
	i8 v7506 = (i8)(intptr_t)(ws+3248);
	i8 v7507 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7507)(v7506, v7505);

endsub:;
}
	void f136_MidLabel(i8* /* m */, i2 /* label */);
	void f258_Generate(i8 /* statement */);
	void f34_Free(i8 /* block */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_11 workspace at ws+3328 length ws+8
void f321_reduce_11(void) {

	i8 v7508 = (i8)(intptr_t)(ws+56);
	i8 v7509 = *(i8*)(intptr_t)v7508;
	i2 v7510 = *(i2*)(intptr_t)v7509;
	i8 v7511 = (i8)(intptr_t)(f136_MidLabel);
	i8 v7512;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7511)(&v7512, v7510);
	i8 v7513 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7513)(v7512);

	i8 v7514 = (i8)(intptr_t)(ws+56);
	i8 v7515 = *(i8*)(intptr_t)v7514;
	i8 v7516 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v7516 = v7515;

	i8 v7517 = (i8)(intptr_t)(ws+56);
	i8 v7518 = *(i8*)(intptr_t)v7517;
	i8 v7519 = v7518+(+8);
	i8 v7520 = *(i8*)(intptr_t)v7519;
	i8 v7521 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)v7521 = v7520;

	i8 v7522 = (i8)(intptr_t)(ws+3328);
	i8 v7523 = *(i8*)(intptr_t)v7522;
	i8 v7524 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v7524)(v7523);

	i1 v7525 = (i1)+26;
	i8 v7526 = (i8)(intptr_t)(ws+3280);
	i8 v7527 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7527)(v7526, v7525);

	i1 v7528 = (i1)+10;
	i8 v7529 = (i8)(intptr_t)(ws+3256);
	i8 v7530 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7530)(v7529, v7528);

	i1 v7531 = (i1)+12;
	i8 v7532 = (i8)(intptr_t)(ws+3248);
	i8 v7533 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7533)(v7532, v7531);

endsub:;
}
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f237_AllocLabel(i2* /* label */);

// reduce_12 workspace at ws+3328 length ws+8
void f322_reduce_12(void) {

	i8 v7534 = (i8)+16;
	i8 v7535 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v7536;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v7535)(&v7536, v7534);
	i8 v7537 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v7537 = v7536;

	i8 v7538 = (i8)(intptr_t)(ws+56);
	i8 v7539 = *(i8*)(intptr_t)v7538;
	i8 v7540 = (i8)(intptr_t)(ws+3328);
	i8 v7541 = *(i8*)(intptr_t)v7540;
	i8 v7542 = v7541+(+8);
	*(i8*)(intptr_t)v7542 = v7539;

	i8 v7543 = (i8)(intptr_t)(ws+3328);
	i8 v7544 = *(i8*)(intptr_t)v7543;
	i8 v7545 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)v7545 = v7544;

	i8 v7546 = (i8)(intptr_t)(f237_AllocLabel);
	i2 v7547;

	((void(*)(i2* /* label */))(intptr_t)v7546)(&v7547);
	i8 v7548 = (i8)(intptr_t)(ws+56);
	i8 v7549 = *(i8*)(intptr_t)v7548;
	*(i2*)(intptr_t)v7549 = v7547;

endsub:;
}
	void f237_AllocLabel(i2* /* label */);
	void f237_AllocLabel(i2* /* label */);
	void f259_GenerateConditional(i8 /* rootnode */);

// reduce_13 workspace at ws+3328 length ws+4
void f323_reduce_13(void) {

	i8 v7550 = (i8)(intptr_t)(f237_AllocLabel);
	i2 v7551;

	((void(*)(i2* /* label */))(intptr_t)v7550)(&v7551);
	i8 v7552 = (i8)(intptr_t)(ws+3328);
	*(i2*)(intptr_t)v7552 = v7551;

	i8 v7553 = (i8)(intptr_t)(f237_AllocLabel);
	i2 v7554;

	((void(*)(i2* /* label */))(intptr_t)v7553)(&v7554);
	i8 v7555 = (i8)(intptr_t)(ws+3330);
	*(i2*)(intptr_t)v7555 = v7554;

	i8 v7556 = (i8)(intptr_t)(ws+3328);
	i2 v7557 = *(i2*)(intptr_t)v7556;
	i8 v7558 = (i8)(intptr_t)(ws+56);
	i8 v7559 = *(i8*)(intptr_t)v7558;
	i8 v7560 = v7559+(+2);
	*(i2*)(intptr_t)v7560 = v7557;

	i8 v7561 = (i8)(intptr_t)(ws+3330);
	i2 v7562 = *(i2*)(intptr_t)v7561;
	i8 v7563 = (i8)(intptr_t)(ws+56);
	i8 v7564 = *(i8*)(intptr_t)v7563;
	i8 v7565 = v7564+(+4);
	*(i2*)(intptr_t)v7565 = v7562;

	i8 v7566 = (i8)(intptr_t)(ws+3328);
	i2 v7567 = *(i2*)(intptr_t)v7566;
	i8 v7568 = (i8)(intptr_t)(ws+3248);
	i8 v7569 = *(i8*)(intptr_t)v7568;
	*(i2*)(intptr_t)v7569 = v7567;

	i8 v7570 = (i8)(intptr_t)(ws+3330);
	i2 v7571 = *(i2*)(intptr_t)v7570;
	i8 v7572 = (i8)(intptr_t)(ws+3248);
	i8 v7573 = *(i8*)(intptr_t)v7572;
	i8 v7574 = v7573+(+2);
	*(i2*)(intptr_t)v7574 = v7571;

	i8 v7575 = (i8)(intptr_t)(ws+3328);
	i2 v7576 = *(i2*)(intptr_t)v7575;
	i8 v7577 = (i8)(intptr_t)(ws+3248);
	i8 v7578 = *(i8*)(intptr_t)v7577;
	i8 v7579 = v7578+(+4);
	*(i2*)(intptr_t)v7579 = v7576;

	i8 v7580 = (i8)(intptr_t)(ws+3248);
	i8 v7581 = *(i8*)(intptr_t)v7580;
	i8 v7582 = (i8)(intptr_t)(f259_GenerateConditional);

	((void(*)(i8 /* rootnode */))(intptr_t)v7582)(v7581);

endsub:;
}
	void f136_MidLabel(i8* /* m */, i2 /* label */);
	void f258_Generate(i8 /* statement */);

// reduce_14 workspace at ws+3328 length ws+0
void f324_reduce_14(void) {

	i8 v7583 = (i8)(intptr_t)(ws+56);
	i8 v7584 = *(i8*)(intptr_t)v7583;
	i8 v7585 = v7584+(+4);
	i2 v7586 = *(i2*)(intptr_t)v7585;
	i8 v7587 = (i8)(intptr_t)(f136_MidLabel);
	i8 v7588;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7587)(&v7588, v7586);
	i8 v7589 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7589)(v7588);

endsub:;
}
	void f133_MidJump(i8* /* m */, i2 /* label */);
	void f258_Generate(i8 /* statement */);
	void f136_MidLabel(i8* /* m */, i2 /* label */);
	void f258_Generate(i8 /* statement */);

// reduce_15 workspace at ws+3328 length ws+0
void f325_reduce_15(void) {

	i8 v7590 = (i8)(intptr_t)(ws+56);
	i8 v7591 = *(i8*)(intptr_t)v7590;
	i2 v7592 = *(i2*)(intptr_t)v7591;
	i8 v7593 = (i8)(intptr_t)(f133_MidJump);
	i8 v7594;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7593)(&v7594, v7592);
	i8 v7595 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7595)(v7594);

	i8 v7596 = (i8)(intptr_t)(ws+56);
	i8 v7597 = *(i8*)(intptr_t)v7596;
	i8 v7598 = v7597+(+4);
	i2 v7599 = *(i2*)(intptr_t)v7598;
	i8 v7600 = (i8)(intptr_t)(f136_MidLabel);
	i8 v7601;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7600)(&v7601, v7599);
	i8 v7602 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7602)(v7601);

endsub:;
}
	void f133_MidJump(i8* /* m */, i2 /* label */);
	void f258_Generate(i8 /* statement */);
	void f136_MidLabel(i8* /* m */, i2 /* label */);
	void f258_Generate(i8 /* statement */);

// reduce_16 workspace at ws+3328 length ws+0
void f326_reduce_16(void) {

	i8 v7603 = (i8)(intptr_t)(ws+56);
	i8 v7604 = *(i8*)(intptr_t)v7603;
	i2 v7605 = *(i2*)(intptr_t)v7604;
	i8 v7606 = (i8)(intptr_t)(f133_MidJump);
	i8 v7607;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7606)(&v7607, v7605);
	i8 v7608 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7608)(v7607);

	i8 v7609 = (i8)(intptr_t)(ws+56);
	i8 v7610 = *(i8*)(intptr_t)v7609;
	i8 v7611 = v7610+(+4);
	i2 v7612 = *(i2*)(intptr_t)v7611;
	i8 v7613 = (i8)(intptr_t)(f136_MidLabel);
	i8 v7614;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7613)(&v7614, v7612);
	i8 v7615 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7615)(v7614);

endsub:;
}
	void f136_MidLabel(i8* /* m */, i2 /* label */);
	void f258_Generate(i8 /* statement */);
	void f136_MidLabel(i8* /* m */, i2 /* label */);
	void f258_Generate(i8 /* statement */);
	void f149_MidEndcase(i8* /* m */, i1 /* width */);
	void f258_Generate(i8 /* statement */);
	void f34_Free(i8 /* block */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_17 workspace at ws+3328 length ws+8
void f327_reduce_17(void) {

	i8 v7616 = (i8)(intptr_t)(ws+64);
	i8 v7617 = *(i8*)(intptr_t)v7616;
	i8 v7618 = v7617+(+17);
	i1 v7619 = *(i1*)(intptr_t)v7618;
	i1 v7620 = (i1)+0;
	if (v7619==v7620) goto c02_060f; else goto c02_060e;

c02_060f:;

	i8 v7621 = (i8)(intptr_t)(ws+64);
	i8 v7622 = *(i8*)(intptr_t)v7621;
	i2 v7623 = *(i2*)(intptr_t)v7622;
	i2 v7624 = (i2)+0;
	if (v7623==v7624) goto c02_060e; else goto c02_060d;

c02_060d:;

	i8 v7625 = (i8)(intptr_t)(ws+64);
	i8 v7626 = *(i8*)(intptr_t)v7625;
	i2 v7627 = *(i2*)(intptr_t)v7626;
	i8 v7628 = (i8)(intptr_t)(f136_MidLabel);
	i8 v7629;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7628)(&v7629, v7627);
	i8 v7630 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7630)(v7629);

c02_060e:;

c02_0608:;

	i8 v7631 = (i8)(intptr_t)(ws+64);
	i8 v7632 = *(i8*)(intptr_t)v7631;
	i8 v7633 = v7632+(+2);
	i2 v7634 = *(i2*)(intptr_t)v7633;
	i8 v7635 = (i8)(intptr_t)(f136_MidLabel);
	i8 v7636;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7635)(&v7636, v7634);
	i8 v7637 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7637)(v7636);

	i8 v7638 = (i8)(intptr_t)(ws+64);
	i8 v7639 = *(i8*)(intptr_t)v7638;
	i8 v7640 = v7639+(+16);
	i1 v7641 = *(i1*)(intptr_t)v7640;
	i8 v7642 = (i8)(intptr_t)(f149_MidEndcase);
	i8 v7643;

	((void(*)(i8* /* m */, i1 /* width */))(intptr_t)v7642)(&v7643, v7641);
	i8 v7644 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7644)(v7643);

	i8 v7645 = (i8)(intptr_t)(ws+64);
	i8 v7646 = *(i8*)(intptr_t)v7645;
	i8 v7647 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v7647 = v7646;

	i8 v7648 = (i8)(intptr_t)(ws+3328);
	i8 v7649 = *(i8*)(intptr_t)v7648;
	i8 v7650 = v7649+(+8);
	i8 v7651 = *(i8*)(intptr_t)v7650;
	i8 v7652 = (i8)(intptr_t)(ws+64);
	*(i8*)(intptr_t)v7652 = v7651;

	i8 v7653 = (i8)(intptr_t)(ws+3328);
	i8 v7654 = *(i8*)(intptr_t)v7653;
	i8 v7655 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v7655)(v7654);

	i1 v7656 = (i1)+10;
	i8 v7657 = (i8)(intptr_t)(ws+3264);
	i8 v7658 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7658)(v7657, v7656);

	i1 v7659 = (i1)+64;
	i8 v7660 = (i8)(intptr_t)(ws+3256);
	i8 v7661 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7661)(v7660, v7659);

	i1 v7662 = (i1)+22;
	i8 v7663 = (i8)(intptr_t)(ws+3248);
	i8 v7664 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7664)(v7663, v7662);

endsub:;
}
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f237_AllocLabel(i2* /* label */);
	void f229_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s016e[] = { 0x63,0x61,0x73,0x65,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x73,0x20,0x6f,0x6e,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x73,0 };
	void f76_SimpleError(i8 /* message */);
	void f167_NodeWidth(i1* /* width */, i8 /* node */);
	void f154_MidStartcase(i8* /* m */, i8 /* left */, i1 /* width */);
	void f258_Generate(i8 /* statement */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_18 workspace at ws+3328 length ws+8
void f328_reduce_18(void) {

	i8 v7665 = (i8)+18;
	i8 v7666 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v7667;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v7666)(&v7667, v7665);
	i8 v7668 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v7668 = v7667;

	i8 v7669 = (i8)(intptr_t)(ws+64);
	i8 v7670 = *(i8*)(intptr_t)v7669;
	i8 v7671 = (i8)(intptr_t)(ws+3328);
	i8 v7672 = *(i8*)(intptr_t)v7671;
	i8 v7673 = v7672+(+8);
	*(i8*)(intptr_t)v7673 = v7670;

	i8 v7674 = (i8)(intptr_t)(ws+52);
	i2 v7675 = *(i2*)(intptr_t)v7674;
	i8 v7676 = (i8)(intptr_t)(ws+3328);
	i8 v7677 = *(i8*)(intptr_t)v7676;
	i8 v7678 = v7677+(+4);
	*(i2*)(intptr_t)v7678 = v7675;

	i8 v7679 = (i8)(intptr_t)(f237_AllocLabel);
	i2 v7680;

	((void(*)(i2* /* label */))(intptr_t)v7679)(&v7680);
	i8 v7681 = (i8)(intptr_t)(ws+3328);
	i8 v7682 = *(i8*)(intptr_t)v7681;
	i8 v7683 = v7682+(+2);
	*(i2*)(intptr_t)v7683 = v7680;

	i8 v7684 = (i8)(intptr_t)(ws+3328);
	i8 v7685 = *(i8*)(intptr_t)v7684;
	i8 v7686 = (i8)(intptr_t)(ws+64);
	*(i8*)(intptr_t)v7686 = v7685;

	i8 v7687 = (i8)(intptr_t)(ws+3256);
	i8 v7688 = *(i8*)(intptr_t)v7687;
	i8 v7689 = v7688+(+16);
	i8 v7690 = *(i8*)(intptr_t)v7689;
	i8 v7691 = (i8)(intptr_t)(f229_IsNum);
	i1 v7692;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7691)(&v7692, v7690);
	i1 v7693 = (i1)+0;
	if (v7692==v7693) goto c02_0613; else goto c02_0614;

c02_0613:;

	i8 v7694 = (i8)(intptr_t)c02_s016e;
	i8 v7695 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7695)(v7694);

c02_0614:;

c02_0610:;

	i8 v7696 = (i8)(intptr_t)(ws+3256);
	i8 v7697 = *(i8*)(intptr_t)v7696;
	i8 v7698 = (i8)(intptr_t)(f167_NodeWidth);
	i1 v7699;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v7698)(&v7699, v7697);
	i8 v7700 = (i8)(intptr_t)(ws+3328);
	i8 v7701 = *(i8*)(intptr_t)v7700;
	i8 v7702 = v7701+(+16);
	*(i1*)(intptr_t)v7702 = v7699;

	i8 v7703 = (i8)(intptr_t)(ws+3328);
	i8 v7704 = *(i8*)(intptr_t)v7703;
	i8 v7705 = v7704+(+16);
	i1 v7706 = *(i1*)(intptr_t)v7705;
	i8 v7707 = (i8)(intptr_t)(ws+3256);
	i8 v7708 = *(i8*)(intptr_t)v7707;
	i8 v7709 = (i8)(intptr_t)(f154_MidStartcase);
	i8 v7710;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v7709)(&v7710, v7708, v7706);
	i8 v7711 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7711)(v7710);

	i1 v7712 = (i1)+65;
	i8 v7713 = (i8)(intptr_t)(ws+3248);
	i8 v7714 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7714)(v7713, v7712);

endsub:;
}
const i1 c02_s016f[] = { 0x77,0x68,0x65,0x6e,0x20,0x65,0x6c,0x73,0x65,0x20,0x6d,0x75,0x73,0x74,0x20,0x67,0x6f,0x20,0x6c,0x61,0x73,0x74,0 };
	void f76_SimpleError(i8 /* message */);
	void f133_MidJump(i8* /* m */, i2 /* label */);
	void f258_Generate(i8 /* statement */);
	void f136_MidLabel(i8* /* m */, i2 /* label */);
	void f258_Generate(i8 /* statement */);
	void f237_AllocLabel(i2* /* label */);
	void f107_MidWhencase(i8* /* m */, i2 /* falselabel */, i4 /* value */, i1 /* width */);
	void f258_Generate(i8 /* statement */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_19 workspace at ws+3328 length ws+0
void f329_reduce_19(void) {

	i8 v7715 = (i8)(intptr_t)(ws+64);
	i8 v7716 = *(i8*)(intptr_t)v7715;
	i8 v7717 = v7716+(+17);
	i1 v7718 = *(i1*)(intptr_t)v7717;
	i1 v7719 = (i1)+0;
	if (v7718==v7719) goto c02_0619; else goto c02_0618;

c02_0618:;

	i8 v7720 = (i8)(intptr_t)c02_s016f;
	i8 v7721 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7721)(v7720);

c02_0619:;

c02_0615:;

	i8 v7722 = (i8)(intptr_t)(ws+64);
	i8 v7723 = *(i8*)(intptr_t)v7722;
	i2 v7724 = *(i2*)(intptr_t)v7723;
	i2 v7725 = (i2)+0;
	if (v7724==v7725) goto c02_061e; else goto c02_061d;

c02_061d:;

	i8 v7726 = (i8)(intptr_t)(ws+64);
	i8 v7727 = *(i8*)(intptr_t)v7726;
	i8 v7728 = v7727+(+2);
	i2 v7729 = *(i2*)(intptr_t)v7728;
	i8 v7730 = (i8)(intptr_t)(f133_MidJump);
	i8 v7731;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7730)(&v7731, v7729);
	i8 v7732 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7732)(v7731);

	i8 v7733 = (i8)(intptr_t)(ws+64);
	i8 v7734 = *(i8*)(intptr_t)v7733;
	i2 v7735 = *(i2*)(intptr_t)v7734;
	i8 v7736 = (i8)(intptr_t)(f136_MidLabel);
	i8 v7737;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7736)(&v7737, v7735);
	i8 v7738 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7738)(v7737);

c02_061e:;

c02_061a:;

	i8 v7739 = (i8)(intptr_t)(f237_AllocLabel);
	i2 v7740;

	((void(*)(i2* /* label */))(intptr_t)v7739)(&v7740);
	i8 v7741 = (i8)(intptr_t)(ws+64);
	i8 v7742 = *(i8*)(intptr_t)v7741;
	*(i2*)(intptr_t)v7742 = v7740;

	i8 v7743 = (i8)(intptr_t)(ws+64);
	i8 v7744 = *(i8*)(intptr_t)v7743;
	i8 v7745 = v7744+(+16);
	i1 v7746 = *(i1*)(intptr_t)v7745;
	i8 v7747 = (i8)(intptr_t)(ws+3256);
	i4 v7748 = *(i4*)(intptr_t)v7747;
	i8 v7749 = (i8)(intptr_t)(ws+64);
	i8 v7750 = *(i8*)(intptr_t)v7749;
	i2 v7751 = *(i2*)(intptr_t)v7750;
	i8 v7752 = (i8)(intptr_t)(f107_MidWhencase);
	i8 v7753;

	((void(*)(i8* /* m */, i2 /* falselabel */, i4 /* value */, i1 /* width */))(intptr_t)v7752)(&v7753, v7751, v7748, v7746);
	i8 v7754 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7754)(v7753);

	i1 v7755 = (i1)+6;
	i8 v7756 = (i8)(intptr_t)(ws+3248);
	i8 v7757 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7757)(v7756, v7755);

endsub:;
}
const i1 c02_s0170[] = { 0x6f,0x6e,0x6c,0x79,0x20,0x6f,0x6e,0x65,0x20,0x77,0x68,0x65,0x6e,0x20,0x65,0x6c,0x73,0x65,0x20,0x61,0x6c,0x6c,0x6f,0x77,0x65,0x64,0 };
	void f76_SimpleError(i8 /* message */);
	void f133_MidJump(i8* /* m */, i2 /* label */);
	void f258_Generate(i8 /* statement */);
	void f136_MidLabel(i8* /* m */, i2 /* label */);
	void f258_Generate(i8 /* statement */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_20 workspace at ws+3328 length ws+0
void f330_reduce_20(void) {

	i8 v7758 = (i8)(intptr_t)(ws+64);
	i8 v7759 = *(i8*)(intptr_t)v7758;
	i8 v7760 = v7759+(+17);
	i1 v7761 = *(i1*)(intptr_t)v7760;
	i1 v7762 = (i1)+0;
	if (v7761==v7762) goto c02_0623; else goto c02_0622;

c02_0622:;

	i8 v7763 = (i8)(intptr_t)c02_s0170;
	i8 v7764 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7764)(v7763);

c02_0623:;

c02_061f:;

	i8 v7765 = (i8)(intptr_t)(ws+64);
	i8 v7766 = *(i8*)(intptr_t)v7765;
	i2 v7767 = *(i2*)(intptr_t)v7766;
	i2 v7768 = (i2)+0;
	if (v7767==v7768) goto c02_0628; else goto c02_0627;

c02_0627:;

	i8 v7769 = (i8)(intptr_t)(ws+64);
	i8 v7770 = *(i8*)(intptr_t)v7769;
	i8 v7771 = v7770+(+2);
	i2 v7772 = *(i2*)(intptr_t)v7771;
	i8 v7773 = (i8)(intptr_t)(f133_MidJump);
	i8 v7774;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7773)(&v7774, v7772);
	i8 v7775 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7775)(v7774);

	i8 v7776 = (i8)(intptr_t)(ws+64);
	i8 v7777 = *(i8*)(intptr_t)v7776;
	i2 v7778 = *(i2*)(intptr_t)v7777;
	i8 v7779 = (i8)(intptr_t)(f136_MidLabel);
	i8 v7780;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7779)(&v7780, v7778);
	i8 v7781 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7781)(v7780);

c02_0628:;

c02_0624:;

	i2 v7782 = (i2)+0;
	i8 v7783 = (i8)(intptr_t)(ws+64);
	i8 v7784 = *(i8*)(intptr_t)v7783;
	*(i2*)(intptr_t)v7784 = v7782;

	i1 v7785 = (i1)+1;
	i8 v7786 = (i8)(intptr_t)(ws+64);
	i8 v7787 = *(i8*)(intptr_t)v7786;
	i8 v7788 = v7787+(+17);
	*(i1*)(intptr_t)v7788 = v7785;

	i1 v7789 = (i1)+9;
	i8 v7790 = (i8)(intptr_t)(ws+3256);
	i8 v7791 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7791)(v7790, v7789);

	i1 v7792 = (i1)+6;
	i8 v7793 = (i8)(intptr_t)(ws+3248);
	i8 v7794 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7794)(v7793, v7792);

endsub:;
}
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_21 workspace at ws+3328 length ws+0
void f331_reduce_21(void) {

	i8 v7795 = (i8)(intptr_t)(ws+3256);
	i8 v7796 = *(i8*)(intptr_t)v7795;
	i8 v7797 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7797 = v7796;

	i1 v7798 = (i1)+4;
	i8 v7799 = (i8)(intptr_t)(ws+3248);
	i8 v7800 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7800)(v7799, v7798);

endsub:;
}
	void f287_Negate(i8 /* node */);

// reduce_22 workspace at ws+3328 length ws+0
void f332_reduce_22(void) {

	i8 v7801 = (i8)(intptr_t)(ws+3248);
	i8 v7802 = *(i8*)(intptr_t)v7801;
	i8 v7803 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7803 = v7802;

	i8 v7804 = (i8)(intptr_t)(ws+3248);
	i8 v7805 = *(i8*)(intptr_t)v7804;
	i8 v7806 = (i8)(intptr_t)(f287_Negate);

	((void(*)(i8 /* node */))(intptr_t)v7806)(v7805);

endsub:;
}
	void f153_MidBand(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_23 workspace at ws+3328 length ws+0
void f333_reduce_23(void) {

	i8 v7807 = (i8)(intptr_t)(ws+3264);
	i8 v7808 = *(i8*)(intptr_t)v7807;
	i8 v7809 = (i8)(intptr_t)(ws+3248);
	i8 v7810 = *(i8*)(intptr_t)v7809;
	i2 v7811 = (i2)+0;
	i2 v7812 = (i2)+0;
	i2 v7813 = (i2)+0;
	i1 v7814 = (i1)+0;
	i8 v7815 = (i8)(intptr_t)(f153_MidBand);
	i8 v7816;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */))(intptr_t)v7815)(&v7816, v7814, v7813, v7812, v7811, v7810, v7808);
	i8 v7817 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7817 = v7816;

	i1 v7818 = (i1)+46;
	i8 v7819 = (i8)(intptr_t)(ws+3256);
	i8 v7820 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7820)(v7819, v7818);

endsub:;
}
	void f110_MidBor(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_24 workspace at ws+3328 length ws+0
void f334_reduce_24(void) {

	i8 v7821 = (i8)(intptr_t)(ws+3264);
	i8 v7822 = *(i8*)(intptr_t)v7821;
	i8 v7823 = (i8)(intptr_t)(ws+3248);
	i8 v7824 = *(i8*)(intptr_t)v7823;
	i2 v7825 = (i2)+0;
	i2 v7826 = (i2)+0;
	i2 v7827 = (i2)+0;
	i1 v7828 = (i1)+0;
	i8 v7829 = (i8)(intptr_t)(f110_MidBor);
	i8 v7830;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */))(intptr_t)v7829)(&v7830, v7828, v7827, v7826, v7825, v7824, v7822);
	i8 v7831 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7831 = v7830;

	i1 v7832 = (i1)+47;
	i8 v7833 = (i8)(intptr_t)(ws+3256);
	i8 v7834 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7834)(v7833, v7832);

endsub:;
}
	void f288_ConditionalEq(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_25 workspace at ws+3328 length ws+0
void f335_reduce_25(void) {

	i8 v7835 = (i8)(intptr_t)(ws+3264);
	i8 v7836 = *(i8*)(intptr_t)v7835;
	i8 v7837 = (i8)(intptr_t)(ws+3248);
	i8 v7838 = *(i8*)(intptr_t)v7837;
	i1 v7839 = (i1)+0;
	i8 v7840 = (i8)(intptr_t)(f288_ConditionalEq);
	i8 v7841;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7840)(&v7841, v7839, v7838, v7836);
	i8 v7842 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7842 = v7841;

	i1 v7843 = (i1)+54;
	i8 v7844 = (i8)(intptr_t)(ws+3256);
	i8 v7845 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7845)(v7844, v7843);

endsub:;
}
	void f288_ConditionalEq(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_26 workspace at ws+3328 length ws+0
void f336_reduce_26(void) {

	i8 v7846 = (i8)(intptr_t)(ws+3264);
	i8 v7847 = *(i8*)(intptr_t)v7846;
	i8 v7848 = (i8)(intptr_t)(ws+3248);
	i8 v7849 = *(i8*)(intptr_t)v7848;
	i1 v7850 = (i1)+1;
	i8 v7851 = (i8)(intptr_t)(f288_ConditionalEq);
	i8 v7852;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7851)(&v7852, v7850, v7849, v7847);
	i8 v7853 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7853 = v7852;

	i1 v7854 = (i1)+55;
	i8 v7855 = (i8)(intptr_t)(ws+3256);
	i8 v7856 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7856)(v7855, v7854);

endsub:;
}
	void f289_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_27 workspace at ws+3328 length ws+0
void f337_reduce_27(void) {

	i8 v7857 = (i8)(intptr_t)(ws+3264);
	i8 v7858 = *(i8*)(intptr_t)v7857;
	i8 v7859 = (i8)(intptr_t)(ws+3248);
	i8 v7860 = *(i8*)(intptr_t)v7859;
	i1 v7861 = (i1)+0;
	i8 v7862 = (i8)(intptr_t)(f289_ConditionalLt);
	i8 v7863;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7862)(&v7863, v7861, v7860, v7858);
	i8 v7864 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7864 = v7863;

	i1 v7865 = (i1)+50;
	i8 v7866 = (i8)(intptr_t)(ws+3256);
	i8 v7867 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7867)(v7866, v7865);

endsub:;
}
	void f289_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_28 workspace at ws+3328 length ws+0
void f338_reduce_28(void) {

	i8 v7868 = (i8)(intptr_t)(ws+3264);
	i8 v7869 = *(i8*)(intptr_t)v7868;
	i8 v7870 = (i8)(intptr_t)(ws+3248);
	i8 v7871 = *(i8*)(intptr_t)v7870;
	i1 v7872 = (i1)+1;
	i8 v7873 = (i8)(intptr_t)(f289_ConditionalLt);
	i8 v7874;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7873)(&v7874, v7872, v7871, v7869);
	i8 v7875 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7875 = v7874;

	i1 v7876 = (i1)+53;
	i8 v7877 = (i8)(intptr_t)(ws+3256);
	i8 v7878 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7878)(v7877, v7876);

endsub:;
}
	void f289_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_29 workspace at ws+3328 length ws+0
void f339_reduce_29(void) {

	i8 v7879 = (i8)(intptr_t)(ws+3248);
	i8 v7880 = *(i8*)(intptr_t)v7879;
	i8 v7881 = (i8)(intptr_t)(ws+3264);
	i8 v7882 = *(i8*)(intptr_t)v7881;
	i1 v7883 = (i1)+0;
	i8 v7884 = (i8)(intptr_t)(f289_ConditionalLt);
	i8 v7885;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7884)(&v7885, v7883, v7882, v7880);
	i8 v7886 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7886 = v7885;

	i1 v7887 = (i1)+52;
	i8 v7888 = (i8)(intptr_t)(ws+3256);
	i8 v7889 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7889)(v7888, v7887);

endsub:;
}
	void f289_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_30 workspace at ws+3328 length ws+0
void f340_reduce_30(void) {

	i8 v7890 = (i8)(intptr_t)(ws+3248);
	i8 v7891 = *(i8*)(intptr_t)v7890;
	i8 v7892 = (i8)(intptr_t)(ws+3264);
	i8 v7893 = *(i8*)(intptr_t)v7892;
	i1 v7894 = (i1)+1;
	i8 v7895 = (i8)(intptr_t)(f289_ConditionalLt);
	i8 v7896;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7895)(&v7896, v7894, v7893, v7891);
	i8 v7897 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7897 = v7896;

	i1 v7898 = (i1)+51;
	i8 v7899 = (i8)(intptr_t)(ws+3256);
	i8 v7900 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7900)(v7899, v7898);

endsub:;
}
	void f151_MidConstant(i8* /* m */, i4 /* value */);

// reduce_31 workspace at ws+3328 length ws+0
void f341_reduce_31(void) {

	i8 v7901 = (i8)(intptr_t)(ws+3248);
	i4 v7902 = *(i4*)(intptr_t)v7901;
	i8 v7903 = (i8)(intptr_t)(f151_MidConstant);
	i8 v7904;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v7903)(&v7904, v7902);
	i8 v7905 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7905 = v7904;

endsub:;
}
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_32 workspace at ws+3328 length ws+0
void f342_reduce_32(void) {

	i8 v7906 = (i8)(intptr_t)(ws+3256);
	i8 v7907 = *(i8*)(intptr_t)v7906;
	i8 v7908 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7908 = v7907;

	i1 v7909 = (i1)+4;
	i8 v7910 = (i8)(intptr_t)(ws+3248);
	i8 v7911 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7911)(v7910, v7909);

endsub:;
}

// reduce_33 workspace at ws+3328 length ws+0
void f343_reduce_33(void) {

	i8 v7912 = (i8)(intptr_t)(ws+3248);
	i8 v7913 = *(i8*)(intptr_t)v7912;
	i8 v7914 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7914 = v7913;

endsub:;
}
	void f276_Expr1Simple(i8* /* result */, i8 /* lhs */, i1 /* op */);

// reduce_34 workspace at ws+3328 length ws+0
void f344_reduce_34(void) {

	i1 v7915 = (i1)+116;
	i8 v7916 = (i8)(intptr_t)(ws+3248);
	i8 v7917 = *(i8*)(intptr_t)v7916;
	i8 v7918 = (i8)(intptr_t)(f276_Expr1Simple);
	i8 v7919;

	((void(*)(i8* /* result */, i8 /* lhs */, i1 /* op */))(intptr_t)v7918)(&v7919, v7917, v7915);
	i8 v7920 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7920 = v7919;

endsub:;
}
	void f276_Expr1Simple(i8* /* result */, i8 /* lhs */, i1 /* op */);

// reduce_35 workspace at ws+3328 length ws+0
void f345_reduce_35(void) {

	i1 v7921 = (i1)+111;
	i8 v7922 = (i8)(intptr_t)(ws+3248);
	i8 v7923 = *(i8*)(intptr_t)v7922;
	i8 v7924 = (i8)(intptr_t)(f276_Expr1Simple);
	i8 v7925;

	((void(*)(i8* /* result */, i8 /* lhs */, i1 /* op */))(intptr_t)v7924)(&v7925, v7923, v7921);
	i8 v7926 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7926 = v7925;

endsub:;
}
	void f277_ExprAdd(i8* /* result */, i8 /* rhs */, i8 /* lhs */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_36 workspace at ws+3328 length ws+0
void f346_reduce_36(void) {

	i8 v7927 = (i8)(intptr_t)(ws+3264);
	i8 v7928 = *(i8*)(intptr_t)v7927;
	i8 v7929 = (i8)(intptr_t)(ws+3248);
	i8 v7930 = *(i8*)(intptr_t)v7929;
	i8 v7931 = (i8)(intptr_t)(f277_ExprAdd);
	i8 v7932;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7931)(&v7932, v7930, v7928);
	i8 v7933 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7933 = v7932;

	i1 v7934 = (i1)+19;
	i8 v7935 = (i8)(intptr_t)(ws+3256);
	i8 v7936 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7936)(v7935, v7934);

endsub:;
}
	void f279_ExprSub(i8* /* result */, i8 /* rhs */, i8 /* lhs */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_37 workspace at ws+3328 length ws+0
void f347_reduce_37(void) {

	i8 v7937 = (i8)(intptr_t)(ws+3264);
	i8 v7938 = *(i8*)(intptr_t)v7937;
	i8 v7939 = (i8)(intptr_t)(ws+3248);
	i8 v7940 = *(i8*)(intptr_t)v7939;
	i8 v7941 = (i8)(intptr_t)(f279_ExprSub);
	i8 v7942;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7941)(&v7942, v7940, v7938);
	i8 v7943 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7943 = v7942;

	i1 v7944 = (i1)+14;
	i8 v7945 = (i8)(intptr_t)(ws+3256);
	i8 v7946 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7946)(v7945, v7944);

endsub:;
}
	void f281_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_38 workspace at ws+3328 length ws+0
void f348_reduce_38(void) {

	i1 v7947 = (i1)+166;
	i1 v7948 = (i1)+166;
	i8 v7949 = (i8)(intptr_t)(ws+3264);
	i8 v7950 = *(i8*)(intptr_t)v7949;
	i8 v7951 = (i8)(intptr_t)(ws+3248);
	i8 v7952 = *(i8*)(intptr_t)v7951;
	i8 v7953 = (i8)(intptr_t)(f281_Expr2Simple);
	i8 v7954;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v7953)(&v7954, v7952, v7950, v7948, v7947);
	i8 v7955 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7955 = v7954;

	i1 v7956 = (i1)+24;
	i8 v7957 = (i8)(intptr_t)(ws+3256);
	i8 v7958 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7958)(v7957, v7956);

endsub:;
}
	void f281_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_39 workspace at ws+3328 length ws+0
void f349_reduce_39(void) {

	i1 v7959 = (i1)+146;
	i1 v7960 = (i1)+141;
	i8 v7961 = (i8)(intptr_t)(ws+3264);
	i8 v7962 = *(i8*)(intptr_t)v7961;
	i8 v7963 = (i8)(intptr_t)(ws+3248);
	i8 v7964 = *(i8*)(intptr_t)v7963;
	i8 v7965 = (i8)(intptr_t)(f281_Expr2Simple);
	i8 v7966;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v7965)(&v7966, v7964, v7962, v7960, v7959);
	i8 v7967 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7967 = v7966;

	i1 v7968 = (i1)+23;
	i8 v7969 = (i8)(intptr_t)(ws+3256);
	i8 v7970 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7970)(v7969, v7968);

endsub:;
}
	void f281_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_40 workspace at ws+3328 length ws+0
void f350_reduce_40(void) {

	i1 v7971 = (i1)+156;
	i1 v7972 = (i1)+151;
	i8 v7973 = (i8)(intptr_t)(ws+3264);
	i8 v7974 = *(i8*)(intptr_t)v7973;
	i8 v7975 = (i8)(intptr_t)(ws+3248);
	i8 v7976 = *(i8*)(intptr_t)v7975;
	i8 v7977 = (i8)(intptr_t)(f281_Expr2Simple);
	i8 v7978;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v7977)(&v7978, v7976, v7974, v7972, v7971);
	i8 v7979 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7979 = v7978;

	i1 v7980 = (i1)+18;
	i8 v7981 = (i8)(intptr_t)(ws+3256);
	i8 v7982 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7982)(v7981, v7980);

endsub:;
}
	void f281_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_41 workspace at ws+3328 length ws+0
void f351_reduce_41(void) {

	i1 v7983 = (i1)+181;
	i1 v7984 = (i1)+181;
	i8 v7985 = (i8)(intptr_t)(ws+3264);
	i8 v7986 = *(i8*)(intptr_t)v7985;
	i8 v7987 = (i8)(intptr_t)(ws+3248);
	i8 v7988 = *(i8*)(intptr_t)v7987;
	i8 v7989 = (i8)(intptr_t)(f281_Expr2Simple);
	i8 v7990;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v7989)(&v7990, v7988, v7986, v7984, v7983);
	i8 v7991 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7991 = v7990;

	i1 v7992 = (i1)+49;
	i8 v7993 = (i8)(intptr_t)(ws+3256);
	i8 v7994 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7994)(v7993, v7992);

endsub:;
}
	void f281_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_42 workspace at ws+3328 length ws+0
void f352_reduce_42(void) {

	i1 v7995 = (i1)+171;
	i1 v7996 = (i1)+171;
	i8 v7997 = (i8)(intptr_t)(ws+3264);
	i8 v7998 = *(i8*)(intptr_t)v7997;
	i8 v7999 = (i8)(intptr_t)(ws+3248);
	i8 v8000 = *(i8*)(intptr_t)v7999;
	i8 v8001 = (i8)(intptr_t)(f281_Expr2Simple);
	i8 v8002;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v8001)(&v8002, v8000, v7998, v7996, v7995);
	i8 v8003 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8003 = v8002;

	i1 v8004 = (i1)+59;
	i8 v8005 = (i8)(intptr_t)(ws+3256);
	i8 v8006 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8006)(v8005, v8004);

endsub:;
}
	void f281_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_43 workspace at ws+3328 length ws+0
void f353_reduce_43(void) {

	i1 v8007 = (i1)+176;
	i1 v8008 = (i1)+176;
	i8 v8009 = (i8)(intptr_t)(ws+3264);
	i8 v8010 = *(i8*)(intptr_t)v8009;
	i8 v8011 = (i8)(intptr_t)(ws+3248);
	i8 v8012 = *(i8*)(intptr_t)v8011;
	i8 v8013 = (i8)(intptr_t)(f281_Expr2Simple);
	i8 v8014;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v8013)(&v8014, v8012, v8010, v8008, v8007);
	i8 v8015 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8015 = v8014;

	i1 v8016 = (i1)+48;
	i8 v8017 = (i8)(intptr_t)(ws+3256);
	i8 v8018 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8018)(v8017, v8016);

endsub:;
}
	void f284_ExprShift(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_44 workspace at ws+3328 length ws+0
void f354_reduce_44(void) {

	i1 v8019 = (i1)+121;
	i1 v8020 = (i1)+121;
	i8 v8021 = (i8)(intptr_t)(ws+3264);
	i8 v8022 = *(i8*)(intptr_t)v8021;
	i8 v8023 = (i8)(intptr_t)(ws+3248);
	i8 v8024 = *(i8*)(intptr_t)v8023;
	i8 v8025 = (i8)(intptr_t)(f284_ExprShift);
	i8 v8026;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v8025)(&v8026, v8024, v8022, v8020, v8019);
	i8 v8027 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8027 = v8026;

	i1 v8028 = (i1)+56;
	i8 v8029 = (i8)(intptr_t)(ws+3256);
	i8 v8030 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8030)(v8029, v8028);

endsub:;
}
	void f284_ExprShift(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_45 workspace at ws+3328 length ws+0
void f355_reduce_45(void) {

	i1 v8031 = (i1)+131;
	i1 v8032 = (i1)+126;
	i8 v8033 = (i8)(intptr_t)(ws+3264);
	i8 v8034 = *(i8*)(intptr_t)v8033;
	i8 v8035 = (i8)(intptr_t)(ws+3248);
	i8 v8036 = *(i8*)(intptr_t)v8035;
	i8 v8037 = (i8)(intptr_t)(f284_ExprShift);
	i8 v8038;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v8037)(&v8038, v8036, v8034, v8032, v8031);
	i8 v8039 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8039 = v8038;

	i1 v8040 = (i1)+57;
	i8 v8041 = (i8)(intptr_t)(ws+3256);
	i8 v8042 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8042)(v8041, v8040);

endsub:;
}
	void f223_CheckNotPartialType(i8 /* type */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s0171[] = { 0x63,0x61,0x73,0x74,0x20,0x62,0x65,0x74,0x77,0x65,0x65,0x6e,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x61,0x6e,0x64,0x20,0x6e,0x6f,0x6e,0x2d,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x6f,0x66,0x20,0x64,0x69,0x66,0x66,0x65,0x72,0x65,0x6e,0x74,0x20,0x73,0x69,0x7a,0x65,0 };
	void f76_SimpleError(i8 /* message */);
	void f230_IsSNum(i1* /* result */, i8 /* type */);
	void f174_MidCCast(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_46 workspace at ws+3328 length ws+0
void f356_reduce_46(void) {

	i8 v8043 = (i8)(intptr_t)(ws+3248);
	i8 v8044 = *(i8*)(intptr_t)v8043;
	i8 v8045 = (i8)(intptr_t)(f223_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v8045)(v8044);

	i8 v8046 = (i8)(intptr_t)(ws+3264);
	i8 v8047 = *(i8*)(intptr_t)v8046;
	i8 v8048 = v8047+(+40);
	i1 v8049 = *(i1*)(intptr_t)v8048;
	i1 v8050 = (i1)+45;
	if (v8049==v8050) goto c02_062f; else goto c02_0630;

c02_0630:;

	i8 v8051 = (i8)(intptr_t)(ws+3264);
	i8 v8052 = *(i8*)(intptr_t)v8051;
	i8 v8053 = v8052+(+16);
	i8 v8054 = *(i8*)(intptr_t)v8053;
	i8 v8055 = v8054+(+48);
	i2 v8056 = *(i2*)(intptr_t)v8055;
	i8 v8057 = (i8)(intptr_t)(ws+3248);
	i8 v8058 = *(i8*)(intptr_t)v8057;
	i8 v8059 = v8058+(+48);
	i2 v8060 = *(i2*)(intptr_t)v8059;
	if (v8056==v8060) goto c02_062f; else goto c02_062e;

c02_062e:;

	i8 v8061 = (i8)(intptr_t)(ws+3264);
	i8 v8062 = *(i8*)(intptr_t)v8061;
	i8 v8063 = v8062+(+16);
	i8 v8064 = *(i8*)(intptr_t)v8063;
	i8 v8065 = (i8)(intptr_t)(f68_IsPtr);
	i1 v8066;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8065)(&v8066, v8064);
	i1 v8067 = (i1)+0;
	if (v8066==v8067) goto c02_0638; else goto c02_0636;

c02_0638:;

	i8 v8068 = (i8)(intptr_t)(ws+3248);
	i8 v8069 = *(i8*)(intptr_t)v8068;
	i8 v8070 = (i8)(intptr_t)(f68_IsPtr);
	i1 v8071;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8070)(&v8071, v8069);
	i1 v8072 = (i1)+0;
	if (v8071==v8072) goto c02_0637; else goto c02_0636;

c02_0636:;

	i8 v8073 = (i8)(intptr_t)c02_s0171;
	i8 v8074 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8074)(v8073);

c02_0637:;

c02_0631:;

	i8 v8075 = (i8)(intptr_t)(ws+3248);
	i8 v8076 = *(i8*)(intptr_t)v8075;
	i8 v8077 = v8076+(+48);
	i2 v8078 = *(i2*)(intptr_t)v8077;
	i1 v8079 = v8078;
	i8 v8080 = (i8)(intptr_t)(ws+3264);
	i8 v8081 = *(i8*)(intptr_t)v8080;
	i8 v8082 = (i8)(intptr_t)(ws+3264);
	i8 v8083 = *(i8*)(intptr_t)v8082;
	i8 v8084 = v8083+(+16);
	i8 v8085 = *(i8*)(intptr_t)v8084;
	i8 v8086 = (i8)(intptr_t)(f230_IsSNum);
	i1 v8087;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8086)(&v8087, v8085);
	i8 v8088 = (i8)(intptr_t)(f174_MidCCast);
	i8 v8089;

	((void(*)(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */))(intptr_t)v8088)(&v8089, v8087, v8081, v8079);
	i8 v8090 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8090 = v8089;

	goto c02_0629;

c02_062f:;

	i8 v8091 = (i8)(intptr_t)(ws+3264);
	i8 v8092 = *(i8*)(intptr_t)v8091;
	i8 v8093 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8093 = v8092;

c02_0629:;

	i8 v8094 = (i8)(intptr_t)(ws+3248);
	i8 v8095 = *(i8*)(intptr_t)v8094;
	i8 v8096 = (i8)(intptr_t)(ws+3240);
	i8 v8097 = *(i8*)(intptr_t)v8096;
	i8 v8098 = v8097+(+16);
	*(i8*)(intptr_t)v8098 = v8095;

	i1 v8099 = (i1)+58;
	i8 v8100 = (i8)(intptr_t)(ws+3256);
	i8 v8101 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8101)(v8100, v8099);

endsub:;
}
	void f234_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f231_IsScalar(i1* /* result */, i8 /* type */);
const i1 c02_s0172[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x74,0x61,0x6b,0x65,0x20,0x74,0x68,0x65,0x20,0x61,0x64,0x64,0x72,0x65,0x73,0x73,0x20,0x6f,0x66,0x20,0x73,0x63,0x61,0x6c,0x61,0x72,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x73,0 };
	void f76_SimpleError(i8 /* message */);

// reduce_47 workspace at ws+3328 length ws+8
void f357_reduce_47(void) {

	i8 v8102 = (i8)(intptr_t)(ws+3248);
	i8 v8103 = *(i8*)(intptr_t)v8102;
	i8 v8104 = (i8)(intptr_t)(f234_UndoLValue);
	i8 v8105;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v8104)(&v8105, v8103);
	i8 v8106 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8106 = v8105;

	i8 v8107 = (i8)(intptr_t)(ws+3240);
	i8 v8108 = *(i8*)(intptr_t)v8107;
	i8 v8109 = v8108+(+40);
	i1 v8110 = *(i1*)(intptr_t)v8109;
	i1 v8111 = (i1)+47;
	if (v8110==v8111) goto c02_063c; else goto c02_063d;

c02_063c:;

	i8 v8112 = (i8)(intptr_t)(ws+3240);
	i8 v8113 = *(i8*)(intptr_t)v8112;
	i8 v8114 = *(i8*)(intptr_t)v8113;
	i8 v8115 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8115 = v8114;

	i8 v8116 = (i8)(intptr_t)(ws+3328);
	i8 v8117 = *(i8*)(intptr_t)v8116;
	i8 v8118 = *(i8*)(intptr_t)v8117;
	i8 v8119 = *(i8*)(intptr_t)v8118;
	i8 v8120 = (i8)(intptr_t)(f231_IsScalar);
	i1 v8121;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8120)(&v8121, v8119);
	i1 v8122 = (i1)+0;
	if (v8121==v8122) goto c02_0642; else goto c02_0641;

c02_0641:;

	i8 v8123 = (i8)(intptr_t)c02_s0172;
	i8 v8124 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8124)(v8123);

c02_0642:;

c02_063e:;

c02_063d:;

c02_0639:;

endsub:;
}
	void f234_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_48 workspace at ws+3328 length ws+0
void f358_reduce_48(void) {

	i8 v8125 = (i8)(intptr_t)(ws+3248);
	i8 v8126 = *(i8*)(intptr_t)v8125;
	i8 v8127 = (i8)(intptr_t)(f234_UndoLValue);
	i8 v8128;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v8127)(&v8128, v8126);
	i8 v8129 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8129 = v8128;

	i1 v8130 = (i1)+59;
	i8 v8131 = (i8)(intptr_t)(ws+3256);
	i8 v8132 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8132)(v8131, v8130);

endsub:;
}
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f290_parser_i_bad_next_prev(void);
	void f151_MidConstant(i8* /* m */, i4 /* value */);
	void f173_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// reduce_49 workspace at ws+3328 length ws+0
void f359_reduce_49(void) {

	i8 v8133 = (i8)(intptr_t)(ws+3248);
	i8 v8134 = *(i8*)(intptr_t)v8133;
	i8 v8135 = v8134+(+16);
	i8 v8136 = *(i8*)(intptr_t)v8135;
	i8 v8137 = (i8)(intptr_t)(f68_IsPtr);
	i1 v8138;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8137)(&v8138, v8136);
	i1 v8139 = (i1)+0;
	if (v8138==v8139) goto c02_0646; else goto c02_0647;

c02_0646:;

	i8 v8140 = (i8)(intptr_t)(f290_parser_i_bad_next_prev);

	((void(*)(void))(intptr_t)v8140)();

c02_0647:;

c02_0643:;

	i1 v8141 = (i1)+161;
	i8 v8142 = (i8)(intptr_t)(ws+1528);
	i8 v8143 = *(i8*)(intptr_t)v8142;
	i8 v8144 = v8143+(+48);
	i2 v8145 = *(i2*)(intptr_t)v8144;
	i1 v8146 = v8145;
	i8 v8147 = (i8)(intptr_t)(ws+3248);
	i8 v8148 = *(i8*)(intptr_t)v8147;
	i8 v8149 = (i8)(intptr_t)(ws+3248);
	i8 v8150 = *(i8*)(intptr_t)v8149;
	i8 v8151 = v8150+(+16);
	i8 v8152 = *(i8*)(intptr_t)v8151;
	i8 v8153 = *(i8*)(intptr_t)v8152;
	i8 v8154 = v8153+(+50);
	i2 v8155 = *(i2*)(intptr_t)v8154;
	i4 v8156 = v8155;
	i8 v8157 = (i8)(intptr_t)(f151_MidConstant);
	i8 v8158;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v8157)(&v8158, v8156);
	i8 v8159 = (i8)(intptr_t)(f173_MidC2Op);
	i8 v8160;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v8159)(&v8160, v8158, v8148, v8146, v8141);
	i8 v8161 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8161 = v8160;

	i8 v8162 = (i8)(intptr_t)(ws+3248);
	i8 v8163 = *(i8*)(intptr_t)v8162;
	i8 v8164 = v8163+(+16);
	i8 v8165 = *(i8*)(intptr_t)v8164;
	i8 v8166 = (i8)(intptr_t)(ws+3240);
	i8 v8167 = *(i8*)(intptr_t)v8166;
	i8 v8168 = v8167+(+16);
	*(i8*)(intptr_t)v8168 = v8165;

endsub:;
}
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f290_parser_i_bad_next_prev(void);
	void f151_MidConstant(i8* /* m */, i4 /* value */);
	void f173_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// reduce_50 workspace at ws+3328 length ws+0
void f360_reduce_50(void) {

	i8 v8169 = (i8)(intptr_t)(ws+3248);
	i8 v8170 = *(i8*)(intptr_t)v8169;
	i8 v8171 = v8170+(+16);
	i8 v8172 = *(i8*)(intptr_t)v8171;
	i8 v8173 = (i8)(intptr_t)(f68_IsPtr);
	i1 v8174;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8173)(&v8174, v8172);
	i1 v8175 = (i1)+0;
	if (v8174==v8175) goto c02_064b; else goto c02_064c;

c02_064b:;

	i8 v8176 = (i8)(intptr_t)(f290_parser_i_bad_next_prev);

	((void(*)(void))(intptr_t)v8176)();

c02_064c:;

c02_0648:;

	i1 v8177 = (i1)+136;
	i8 v8178 = (i8)(intptr_t)(ws+1528);
	i8 v8179 = *(i8*)(intptr_t)v8178;
	i8 v8180 = v8179+(+48);
	i2 v8181 = *(i2*)(intptr_t)v8180;
	i1 v8182 = v8181;
	i8 v8183 = (i8)(intptr_t)(ws+3248);
	i8 v8184 = *(i8*)(intptr_t)v8183;
	i8 v8185 = (i8)(intptr_t)(ws+3248);
	i8 v8186 = *(i8*)(intptr_t)v8185;
	i8 v8187 = v8186+(+16);
	i8 v8188 = *(i8*)(intptr_t)v8187;
	i8 v8189 = *(i8*)(intptr_t)v8188;
	i8 v8190 = v8189+(+50);
	i2 v8191 = *(i2*)(intptr_t)v8190;
	i4 v8192 = v8191;
	i8 v8193 = (i8)(intptr_t)(f151_MidConstant);
	i8 v8194;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v8193)(&v8194, v8192);
	i8 v8195 = (i8)(intptr_t)(f173_MidC2Op);
	i8 v8196;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v8195)(&v8196, v8194, v8184, v8182, v8177);
	i8 v8197 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8197 = v8196;

	i8 v8198 = (i8)(intptr_t)(ws+3248);
	i8 v8199 = *(i8*)(intptr_t)v8198;
	i8 v8200 = v8199+(+16);
	i8 v8201 = *(i8*)(intptr_t)v8200;
	i8 v8202 = (i8)(intptr_t)(ws+3240);
	i8 v8203 = *(i8*)(intptr_t)v8202;
	i8 v8204 = v8203+(+16);
	*(i8*)(intptr_t)v8204 = v8201;

endsub:;
}
	void f151_MidConstant(i8* /* m */, i4 /* value */);

// reduce_51 workspace at ws+3328 length ws+0
void f361_reduce_51(void) {

	i8 v8205 = (i8)(intptr_t)(ws+3248);
	i8 v8206 = *(i8*)(intptr_t)v8205;
	i8 v8207 = v8206+(+48);
	i2 v8208 = *(i2*)(intptr_t)v8207;
	i4 v8209 = v8208;
	i8 v8210 = (i8)(intptr_t)(f151_MidConstant);
	i8 v8211;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v8210)(&v8211, v8209);
	i8 v8212 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8212 = v8211;

endsub:;
}
	void f227_IsArray(i1* /* result */, i8 /* type */);
const i1 c02_s0173[] = { 0x61,0x72,0x72,0x61,0x79,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f76_SimpleError(i8 /* message */);
	void f151_MidConstant(i8* /* m */, i4 /* value */);

// reduce_52 workspace at ws+3328 length ws+0
void f362_reduce_52(void) {

	i8 v8213 = (i8)(intptr_t)(ws+3248);
	i8 v8214 = *(i8*)(intptr_t)v8213;
	i8 v8215 = (i8)(intptr_t)(f227_IsArray);
	i1 v8216;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8215)(&v8216, v8214);
	i1 v8217 = (i1)+0;
	if (v8216==v8217) goto c02_0650; else goto c02_0651;

c02_0650:;

	i8 v8218 = (i8)(intptr_t)c02_s0173;
	i8 v8219 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8219)(v8218);

c02_0651:;

c02_064d:;

	i8 v8220 = (i8)(intptr_t)(ws+3248);
	i8 v8221 = *(i8*)(intptr_t)v8220;
	i8 v8222 = v8221+(+8);
	i2 v8223 = *(i2*)(intptr_t)v8222;
	i4 v8224 = v8223;
	i8 v8225 = (i8)(intptr_t)(f151_MidConstant);
	i8 v8226;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v8225)(&v8226, v8224);
	i8 v8227 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8227 = v8226;

endsub:;
}
	void f74_StartError(void);
	void f12_print(i8 /* ptr */);
const i1 c02_s0174[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x76,0x61,0x6c,0x75,0x65,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// not_a_value workspace at ws+3328 length ws+0
void f364_not_a_value(void) {

	i8 v8228 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v8228)();

	i8 v8229 = (i8)(intptr_t)(ws+3248);
	i8 v8230 = *(i8*)(intptr_t)v8229;
	i8 v8231 = v8230+(+8);
	i8 v8232 = *(i8*)(intptr_t)v8231;
	i8 v8233 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8233)(v8232);

	i8 v8234 = (i8)(intptr_t)c02_s0174;
	i8 v8235 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8235)(v8234);

	i8 v8236 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v8236)();

endsub:;
}
	void f151_MidConstant(i8* /* m */, i4 /* value */);
	void f132_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f262_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f233_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f120_MidSubref(i8* /* m */, i8 /* subr */);
	void f364_not_a_value(void);
	void f364_not_a_value(void);

// reduce_53 workspace at ws+3328 length ws+0
void f363_reduce_53(void) {


	i8 v8237 = (i8)(intptr_t)(ws+3248);
	i8 v8238 = *(i8*)(intptr_t)v8237;
	i8 v8239 = v8238+(+32);
	i1 v8240 = *(i1*)(intptr_t)v8239;

	if (v8240 != +7) goto c02_0653;

	i8 v8241 = (i8)(intptr_t)(ws+3248);
	i8 v8242 = *(i8*)(intptr_t)v8241;
	i4 v8243 = *(i4*)(intptr_t)v8242;
	i8 v8244 = (i8)(intptr_t)(f151_MidConstant);
	i8 v8245;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v8244)(&v8245, v8243);
	i8 v8246 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8246 = v8245;

	goto c02_0652;

c02_0653:;

	if (v8240 != +28) goto c02_0654;

	i8 v8247 = (i8)(intptr_t)(ws+3248);
	i8 v8248 = *(i8*)(intptr_t)v8247;
	i2 v8249 = (i2)+0;
	i8 v8250 = (i8)(intptr_t)(f132_MidAddress);
	i8 v8251;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v8250)(&v8251, v8249, v8248);
	i8 v8252 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8252 = v8251;

	i8 v8253 = (i8)(intptr_t)(ws+3248);
	i8 v8254 = *(i8*)(intptr_t)v8253;
	i8 v8255 = *(i8*)(intptr_t)v8254;
	i8 v8256 = *(i8*)(intptr_t)v8255;
	i8 v8257 = (i8)(intptr_t)(f262_MakePointerType);
	i8 v8258;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v8257)(&v8258, v8256);
	i8 v8259 = (i8)(intptr_t)(ws+3240);
	i8 v8260 = *(i8*)(intptr_t)v8259;
	i8 v8261 = v8260+(+16);
	*(i8*)(intptr_t)v8261 = v8258;

	i8 v8262 = (i8)(intptr_t)(ws+3240);
	i8 v8263 = *(i8*)(intptr_t)v8262;
	i8 v8264 = (i8)(intptr_t)(f233_MakeLValue);
	i8 v8265;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v8264)(&v8265, v8263);
	i8 v8266 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8266 = v8265;

	goto c02_0652;

c02_0654:;

	if (v8240 != +30) goto c02_0655;

	i8 v8267 = (i8)(intptr_t)(ws+3248);
	i8 v8268 = *(i8*)(intptr_t)v8267;
	i8 v8269 = *(i8*)(intptr_t)v8268;
	i8 v8270 = v8269+(+52);
	i1 v8271 = *(i1*)(intptr_t)v8270;
	i1 v8272 = (i1)+6;
	if (v8271==v8272) goto c02_0659; else goto c02_065a;

c02_0659:;

	i8 v8273 = (i8)(intptr_t)(ws+3248);
	i8 v8274 = *(i8*)(intptr_t)v8273;
	i8 v8275 = *(i8*)(intptr_t)v8274;
	i8 v8276 = *(i8*)(intptr_t)v8275;
	i8 v8277 = (i8)(intptr_t)(f120_MidSubref);
	i8 v8278;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v8277)(&v8278, v8276);
	i8 v8279 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8279 = v8278;

	i8 v8280 = (i8)(intptr_t)(ws+3248);
	i8 v8281 = *(i8*)(intptr_t)v8280;
	i8 v8282 = *(i8*)(intptr_t)v8281;
	i8 v8283 = *(i8*)(intptr_t)v8282;
	i8 v8284 = v8283+(+48);
	i8 v8285 = *(i8*)(intptr_t)v8284;
	i8 v8286 = v8285+(+40);
	i8 v8287 = *(i8*)(intptr_t)v8286;
	i8 v8288 = (i8)(intptr_t)(ws+3240);
	i8 v8289 = *(i8*)(intptr_t)v8288;
	i8 v8290 = v8289+(+16);
	*(i8*)(intptr_t)v8290 = v8287;

	goto c02_0656;

c02_065a:;

	i8 v8291 = (i8)(intptr_t)(f364_not_a_value);

	((void(*)(void))(intptr_t)v8291)();

c02_0656:;

	goto c02_0652;

c02_0655:;

	i8 v8292 = (i8)(intptr_t)(f364_not_a_value);

	((void(*)(void))(intptr_t)v8292)();

c02_0652:;


endsub:;
}
	void f68_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s0175[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x64,0x65,0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x20,0x6e,0x6f,0x6e,0x2d,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0 };
	void f76_SimpleError(i8 /* message */);
	void f233_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_54 workspace at ws+3328 length ws+0
void f365_reduce_54(void) {

	i8 v8293 = (i8)(intptr_t)(ws+3256);
	i8 v8294 = *(i8*)(intptr_t)v8293;
	i8 v8295 = v8294+(+16);
	i8 v8296 = *(i8*)(intptr_t)v8295;
	i8 v8297 = (i8)(intptr_t)(f68_IsPtr);
	i1 v8298;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8297)(&v8298, v8296);
	i1 v8299 = (i1)+0;
	if (v8298==v8299) goto c02_065e; else goto c02_065f;

c02_065e:;

	i8 v8300 = (i8)(intptr_t)c02_s0175;
	i8 v8301 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8301)(v8300);

c02_065f:;

c02_065b:;

	i8 v8302 = (i8)(intptr_t)(ws+3256);
	i8 v8303 = *(i8*)(intptr_t)v8302;
	i8 v8304 = (i8)(intptr_t)(f233_MakeLValue);
	i8 v8305;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v8304)(&v8305, v8303);
	i8 v8306 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8306 = v8305;

	i1 v8307 = (i1)+5;
	i8 v8308 = (i8)(intptr_t)(ws+3248);
	i8 v8309 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8309)(v8308, v8307);

endsub:;
}
	void f236_MaybeUndoLValue(i8* /* address */, i8 /* lvalue */);
	void f227_IsArray(i1* /* result */, i8 /* type */);
	void f74_StartError(void);
const i1 c02_s0176[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x69,0x6e,0x64,0x65,0x78,0x20,0x61,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0x2c,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);
	void f270_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f229_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s0177[] = { 0x61,0x72,0x72,0x61,0x79,0x20,0x69,0x6e,0x64,0x69,0x63,0x65,0x73,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x73,0 };
	void f76_SimpleError(i8 /* message */);
	void f174_MidCCast(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */);
	void f151_MidConstant(i8* /* m */, i4 /* value */);
	void f173_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f173_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f262_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f233_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_55 workspace at ws+3328 length ws+48
void f366_reduce_55(void) {

	i8 v8310 = (i8)(intptr_t)(ws+3272);
	i8 v8311 = *(i8*)(intptr_t)v8310;
	i8 v8312 = v8311+(+16);
	i8 v8313 = *(i8*)(intptr_t)v8312;
	i8 v8314 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8314 = v8313;

	i8 v8315 = (i8)(intptr_t)(ws+3272);
	i8 v8316 = *(i8*)(intptr_t)v8315;
	i8 v8317 = (i8)(intptr_t)(f236_MaybeUndoLValue);
	i8 v8318;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v8317)(&v8318, v8316);
	i8 v8319 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8319 = v8318;

	i8 v8320 = (i8)(intptr_t)(ws+3328);
	i8 v8321 = *(i8*)(intptr_t)v8320;
	i8 v8322 = (i8)(intptr_t)(f227_IsArray);
	i1 v8323;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8322)(&v8323, v8321);
	i1 v8324 = (i1)+0;
	if (v8323==v8324) goto c02_0663; else goto c02_0664;

c02_0663:;

	i8 v8325 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v8325)();

	i8 v8326 = (i8)(intptr_t)c02_s0176;
	i8 v8327 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8327)(v8326);

	i8 v8328 = (i8)(intptr_t)(ws+3328);
	i8 v8329 = *(i8*)(intptr_t)v8328;
	i8 v8330 = v8329+(+32);
	i8 v8331 = *(i8*)(intptr_t)v8330;
	i8 v8332 = v8331+(+8);
	i8 v8333 = *(i8*)(intptr_t)v8332;
	i8 v8334 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8334)(v8333);

	i8 v8335 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v8335)();

c02_0664:;

c02_0660:;

	i8 v8336 = (i8)(intptr_t)(ws+3256);
	i8 v8337 = *(i8*)(intptr_t)v8336;
	i8 v8338 = (i8)(intptr_t)(ws+3328);
	i8 v8339 = *(i8*)(intptr_t)v8338;
	i8 v8340 = v8339+(+16);
	i8 v8341 = *(i8*)(intptr_t)v8340;
	i8 v8342 = (i8)(intptr_t)(f270_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v8342)(v8341, v8337);

	i8 v8343 = (i8)(intptr_t)(ws+3256);
	i8 v8344 = *(i8*)(intptr_t)v8343;
	i8 v8345 = v8344+(+16);
	i8 v8346 = *(i8*)(intptr_t)v8345;
	i8 v8347 = (i8)(intptr_t)(f229_IsNum);
	i1 v8348;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8347)(&v8348, v8346);
	i1 v8349 = (i1)+0;
	if (v8348==v8349) goto c02_0668; else goto c02_0669;

c02_0668:;

	i8 v8350 = (i8)(intptr_t)c02_s0177;
	i8 v8351 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8351)(v8350);

c02_0669:;

c02_0665:;

	i8 v8352 = (i8)(intptr_t)(ws+3328);
	i8 v8353 = *(i8*)(intptr_t)v8352;
	i8 v8354 = *(i8*)(intptr_t)v8353;
	i8 v8355 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v8355 = v8354;

	i8 v8356 = (i8)(intptr_t)(ws+1528);
	i8 v8357 = *(i8*)(intptr_t)v8356;
	i8 v8358 = v8357+(+48);
	i2 v8359 = *(i2*)(intptr_t)v8358;
	i1 v8360 = v8359;
	i8 v8361 = (i8)(intptr_t)(ws+3352);
	*(i1*)(intptr_t)v8361 = v8360;

	i1 v8362 = (i1)+166;
	i8 v8363 = (i8)(intptr_t)(ws+3352);
	i1 v8364 = *(i1*)(intptr_t)v8363;
	i8 v8365 = (i8)(intptr_t)(ws+1528);
	i8 v8366 = *(i8*)(intptr_t)v8365;
	i8 v8367 = v8366+(+48);
	i2 v8368 = *(i2*)(intptr_t)v8367;
	i1 v8369 = v8368;
	i8 v8370 = (i8)(intptr_t)(ws+3256);
	i8 v8371 = *(i8*)(intptr_t)v8370;
	i1 v8372 = (i1)+0;
	i8 v8373 = (i8)(intptr_t)(f174_MidCCast);
	i8 v8374;

	((void(*)(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */))(intptr_t)v8373)(&v8374, v8372, v8371, v8369);
	i8 v8375 = (i8)(intptr_t)(ws+3344);
	i8 v8376 = *(i8*)(intptr_t)v8375;
	i8 v8377 = v8376+(+50);
	i2 v8378 = *(i2*)(intptr_t)v8377;
	i4 v8379 = v8378;
	i8 v8380 = (i8)(intptr_t)(f151_MidConstant);
	i8 v8381;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v8380)(&v8381, v8379);
	i8 v8382 = (i8)(intptr_t)(f173_MidC2Op);
	i8 v8383;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v8382)(&v8383, v8381, v8374, v8364, v8362);
	i8 v8384 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v8384 = v8383;

	i8 v8385 = (i8)(intptr_t)(ws+1528);
	i8 v8386 = *(i8*)(intptr_t)v8385;
	i8 v8387 = (i8)(intptr_t)(ws+3360);
	i8 v8388 = *(i8*)(intptr_t)v8387;
	i8 v8389 = v8388+(+16);
	*(i8*)(intptr_t)v8389 = v8386;

	i1 v8390 = (i1)+161;
	i8 v8391 = (i8)(intptr_t)(ws+3352);
	i1 v8392 = *(i1*)(intptr_t)v8391;
	i8 v8393 = (i8)(intptr_t)(ws+3336);
	i8 v8394 = *(i8*)(intptr_t)v8393;
	i8 v8395 = (i8)(intptr_t)(ws+3360);
	i8 v8396 = *(i8*)(intptr_t)v8395;
	i8 v8397 = (i8)(intptr_t)(f173_MidC2Op);
	i8 v8398;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v8397)(&v8398, v8396, v8394, v8392, v8390);
	i8 v8399 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v8399 = v8398;

	i8 v8400 = (i8)(intptr_t)(ws+3344);
	i8 v8401 = *(i8*)(intptr_t)v8400;
	i8 v8402 = (i8)(intptr_t)(f262_MakePointerType);
	i8 v8403;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v8402)(&v8403, v8401);
	i8 v8404 = (i8)(intptr_t)(ws+3368);
	i8 v8405 = *(i8*)(intptr_t)v8404;
	i8 v8406 = v8405+(+16);
	*(i8*)(intptr_t)v8406 = v8403;

	i8 v8407 = (i8)(intptr_t)(ws+3368);
	i8 v8408 = *(i8*)(intptr_t)v8407;
	i8 v8409 = (i8)(intptr_t)(f233_MakeLValue);
	i8 v8410;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v8409)(&v8410, v8408);
	i8 v8411 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8411 = v8410;

	i1 v8412 = (i1)+17;
	i8 v8413 = (i8)(intptr_t)(ws+3264);
	i8 v8414 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8414)(v8413, v8412);

	i1 v8415 = (i1)+5;
	i8 v8416 = (i8)(intptr_t)(ws+3248);
	i8 v8417 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8417)(v8416, v8415);

endsub:;
}
	void f74_StartError(void);
	void f12_print(i8 /* ptr */);
const i1 c02_s0178[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x6f,0x72,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x74,0x6f,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// BadType workspace at ws+3352 length ws+0
void f368_BadType(void) {

	i8 v8426 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v8426)();

	i8 v8427 = (i8)(intptr_t)(ws+3328);
	i8 v8428 = *(i8*)(intptr_t)v8427;
	i8 v8429 = v8428+(+32);
	i8 v8430 = *(i8*)(intptr_t)v8429;
	i8 v8431 = v8430+(+8);
	i8 v8432 = *(i8*)(intptr_t)v8431;
	i8 v8433 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8433)(v8432);

	i8 v8434 = (i8)(intptr_t)c02_s0178;
	i8 v8435 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8435)(v8434);

	i8 v8436 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v8436)();

endsub:;
}
	void f235_IsLValue(i1* /* result */, i8 /* lvalue */);
	void f236_MaybeUndoLValue(i8* /* address */, i8 /* lvalue */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f223_CheckNotPartialType(i8 /* type */);
	void f134_MidDeref(i8* /* m */, i8 /* left */, i1 /* width */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f368_BadType(void);
	void f223_CheckNotPartialType(i8 /* type */);
	void f232_IsRecord(i1* /* result */, i8 /* type */);
	void f368_BadType(void);
	void f218_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f74_StartError(void);
	void f12_print(i8 /* ptr */);
const i1 c02_s0179[] = { 0x20,0x64,0x6f,0x65,0x73,0x20,0x6e,0x6f,0x74,0x20,0x63,0x6f,0x6e,0x74,0x61,0x69,0x6e,0x20,0x61,0x20,0x6d,0x65,0x6d,0x62,0x65,0x72,0x20,0x27,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s017a[] = { 0x27,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);
	void f34_Free(i8 /* block */);
	void f151_MidConstant(i8* /* m */, i4 /* value */);
	void f173_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f262_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f233_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_56 workspace at ws+3328 length ws+24
void f367_reduce_56(void) {

	i8 v8418 = (i8)(intptr_t)(ws+3264);
	i8 v8419 = *(i8*)(intptr_t)v8418;
	i8 v8420 = v8419+(+16);
	i8 v8421 = *(i8*)(intptr_t)v8420;
	i8 v8422 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8422 = v8421;

	i8 v8423 = (i8)(intptr_t)(ws+3264);
	i8 v8424 = *(i8*)(intptr_t)v8423;
	i8 v8425 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8425 = v8424;


	i8 v8437 = (i8)(intptr_t)(ws+3336);
	i8 v8438 = *(i8*)(intptr_t)v8437;
	i8 v8439 = (i8)(intptr_t)(f235_IsLValue);
	i1 v8440;

	((void(*)(i1* /* result */, i8 /* lvalue */))(intptr_t)v8439)(&v8440, v8438);
	i1 v8441 = (i1)+0;
	if (v8440==v8441) goto c02_066e; else goto c02_066d;

c02_066d:;

	i8 v8442 = (i8)(intptr_t)(ws+3264);
	i8 v8443 = *(i8*)(intptr_t)v8442;
	i8 v8444 = (i8)(intptr_t)(f236_MaybeUndoLValue);
	i8 v8445;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v8444)(&v8445, v8443);
	i8 v8446 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8446 = v8445;

c02_0671:;

	i8 v8447 = (i8)(intptr_t)(ws+3328);
	i8 v8448 = *(i8*)(intptr_t)v8447;
	i8 v8449 = (i8)(intptr_t)(f68_IsPtr);
	i1 v8450;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8449)(&v8450, v8448);
	i1 v8451 = (i1)+0;
	if (v8450==v8451) goto c02_0674; else goto c02_0673;

c02_0673:;

	i8 v8452 = (i8)(intptr_t)(ws+3328);
	i8 v8453 = *(i8*)(intptr_t)v8452;
	i8 v8454 = *(i8*)(intptr_t)v8453;
	i8 v8455 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8455 = v8454;

	i8 v8456 = (i8)(intptr_t)(ws+3328);
	i8 v8457 = *(i8*)(intptr_t)v8456;
	i8 v8458 = (i8)(intptr_t)(f223_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v8458)(v8457);

	i8 v8459 = (i8)(intptr_t)(ws+1528);
	i8 v8460 = *(i8*)(intptr_t)v8459;
	i8 v8461 = v8460+(+48);
	i2 v8462 = *(i2*)(intptr_t)v8461;
	i1 v8463 = v8462;
	i8 v8464 = (i8)(intptr_t)(ws+3336);
	i8 v8465 = *(i8*)(intptr_t)v8464;
	i8 v8466 = (i8)(intptr_t)(f134_MidDeref);
	i8 v8467;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v8466)(&v8467, v8465, v8463);
	i8 v8468 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8468 = v8467;

	goto c02_0671;

c02_0674:;

	goto c02_066a;

c02_066e:;

	i8 v8469 = (i8)(intptr_t)(ws+3328);
	i8 v8470 = *(i8*)(intptr_t)v8469;
	i8 v8471 = (i8)(intptr_t)(f68_IsPtr);
	i1 v8472;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8471)(&v8472, v8470);
	i1 v8473 = (i1)+0;
	if (v8472==v8473) goto c02_0678; else goto c02_0677;

c02_0677:;

	i8 v8474 = (i8)(intptr_t)(ws+3328);
	i8 v8475 = *(i8*)(intptr_t)v8474;
	i8 v8476 = *(i8*)(intptr_t)v8475;
	i8 v8477 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8477 = v8476;

	goto c02_066a;

c02_0678:;

	i8 v8478 = (i8)(intptr_t)(f368_BadType);

	((void(*)(void))(intptr_t)v8478)();

c02_066a:;

	i8 v8479 = (i8)(intptr_t)(ws+3328);
	i8 v8480 = *(i8*)(intptr_t)v8479;
	i8 v8481 = (i8)(intptr_t)(f223_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v8481)(v8480);

	i8 v8482 = (i8)(intptr_t)(ws+3328);
	i8 v8483 = *(i8*)(intptr_t)v8482;
	i8 v8484 = (i8)(intptr_t)(f232_IsRecord);
	i1 v8485;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8484)(&v8485, v8483);
	i1 v8486 = (i1)+0;
	if (v8485==v8486) goto c02_067c; else goto c02_067d;

c02_067c:;

	i8 v8487 = (i8)(intptr_t)(f368_BadType);

	((void(*)(void))(intptr_t)v8487)();

c02_067d:;

c02_0679:;

	i8 v8488 = (i8)(intptr_t)(ws+3328);
	i8 v8489 = *(i8*)(intptr_t)v8488;
	i8 v8490 = (i8)(intptr_t)(ws+3248);
	i8 v8491 = *(i8*)(intptr_t)v8490;
	i8 v8492 = (i8)(intptr_t)(f218_LookupSymbol);
	i8 v8493;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v8492)(&v8493, v8491, v8489);
	i8 v8494 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v8494 = v8493;

	i8 v8495 = (i8)(intptr_t)(ws+3344);
	i8 v8496 = *(i8*)(intptr_t)v8495;
	i8 v8497 = (i8)+0;
	if (v8496==v8497) goto c02_0681; else goto c02_0682;

c02_0681:;

	i8 v8498 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v8498)();

	i8 v8499 = (i8)(intptr_t)(ws+3328);
	i8 v8500 = *(i8*)(intptr_t)v8499;
	i8 v8501 = v8500+(+32);
	i8 v8502 = *(i8*)(intptr_t)v8501;
	i8 v8503 = v8502+(+8);
	i8 v8504 = *(i8*)(intptr_t)v8503;
	i8 v8505 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8505)(v8504);

	i8 v8506 = (i8)(intptr_t)c02_s0179;
	i8 v8507 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8507)(v8506);

	i8 v8508 = (i8)(intptr_t)(ws+3248);
	i8 v8509 = *(i8*)(intptr_t)v8508;
	i8 v8510 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8510)(v8509);

	i8 v8511 = (i8)(intptr_t)c02_s017a;
	i8 v8512 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8512)(v8511);

	i8 v8513 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v8513)();

c02_0682:;

c02_067e:;

	i8 v8514 = (i8)(intptr_t)(ws+3248);
	i8 v8515 = *(i8*)(intptr_t)v8514;
	i8 v8516 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v8516)(v8515);

	i1 v8517 = (i1)+161;
	i8 v8518 = (i8)(intptr_t)(ws+1528);
	i8 v8519 = *(i8*)(intptr_t)v8518;
	i8 v8520 = v8519+(+48);
	i2 v8521 = *(i2*)(intptr_t)v8520;
	i1 v8522 = v8521;
	i8 v8523 = (i8)(intptr_t)(ws+3336);
	i8 v8524 = *(i8*)(intptr_t)v8523;
	i8 v8525 = (i8)(intptr_t)(ws+3344);
	i8 v8526 = *(i8*)(intptr_t)v8525;
	i8 v8527 = *(i8*)(intptr_t)v8526;
	i8 v8528 = v8527+(+24);
	i2 v8529 = *(i2*)(intptr_t)v8528;
	i4 v8530 = v8529;
	i8 v8531 = (i8)(intptr_t)(f151_MidConstant);
	i8 v8532;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v8531)(&v8532, v8530);
	i8 v8533 = (i8)(intptr_t)(f173_MidC2Op);
	i8 v8534;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v8533)(&v8534, v8532, v8524, v8522, v8517);
	i8 v8535 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8535 = v8534;

	i8 v8536 = (i8)(intptr_t)(ws+3344);
	i8 v8537 = *(i8*)(intptr_t)v8536;
	i8 v8538 = *(i8*)(intptr_t)v8537;
	i8 v8539 = *(i8*)(intptr_t)v8538;
	i8 v8540 = (i8)(intptr_t)(f262_MakePointerType);
	i8 v8541;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v8540)(&v8541, v8539);
	i8 v8542 = (i8)(intptr_t)(ws+3240);
	i8 v8543 = *(i8*)(intptr_t)v8542;
	i8 v8544 = v8543+(+16);
	*(i8*)(intptr_t)v8544 = v8541;

	i8 v8545 = (i8)(intptr_t)(ws+3240);
	i8 v8546 = *(i8*)(intptr_t)v8545;
	i8 v8547 = (i8)(intptr_t)(f233_MakeLValue);
	i8 v8548;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v8547)(&v8548, v8546);
	i8 v8549 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8549 = v8548;

	i1 v8550 = (i1)+8;
	i8 v8551 = (i8)(intptr_t)(ws+3256);
	i8 v8552 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8552)(v8551, v8550);

endsub:;
}
	void f122_MidString(i8* /* m */, i8 /* text */);
	void f262_MakePointerType(i8* /* ptrtype */, i8 /* type */);

// reduce_57 workspace at ws+3328 length ws+0
void f369_reduce_57(void) {

	i8 v8553 = (i8)(intptr_t)(ws+3248);
	i8 v8554 = *(i8*)(intptr_t)v8553;
	i8 v8555 = (i8)(intptr_t)(f122_MidString);
	i8 v8556;

	((void(*)(i8* /* m */, i8 /* text */))(intptr_t)v8555)(&v8556, v8554);
	i8 v8557 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8557 = v8556;

	i8 v8558 = (i8)(intptr_t)(ws+1512);
	i8 v8559 = *(i8*)(intptr_t)v8558;
	i8 v8560 = (i8)(intptr_t)(f262_MakePointerType);
	i8 v8561;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v8560)(&v8561, v8559);
	i8 v8562 = (i8)(intptr_t)(ws+3240);
	i8 v8563 = *(i8*)(intptr_t)v8562;
	i8 v8564 = v8563+(+16);
	*(i8*)(intptr_t)v8564 = v8561;

endsub:;
}
	void f291_parser_i_constant_error(void);
	void f63_Discard(i8 /* node */);

// reduce_58 workspace at ws+3328 length ws+0
void f370_reduce_58(void) {

	i8 v8565 = (i8)(intptr_t)(ws+3248);
	i8 v8566 = *(i8*)(intptr_t)v8565;
	i8 v8567 = v8566+(+40);
	i1 v8568 = *(i1*)(intptr_t)v8567;
	i1 v8569 = (i1)+45;
	if (v8568==v8569) goto c02_0687; else goto c02_0686;

c02_0686:;

	i8 v8570 = (i8)(intptr_t)(f291_parser_i_constant_error);

	((void(*)(void))(intptr_t)v8570)();

c02_0687:;

c02_0683:;

	i8 v8571 = (i8)(intptr_t)(ws+3248);
	i8 v8572 = *(i8*)(intptr_t)v8571;
	i4 v8573 = *(i4*)(intptr_t)v8572;
	i8 v8574 = (i8)(intptr_t)(ws+3240);
	*(i4*)(intptr_t)v8574 = v8573;

	i8 v8575 = (i8)(intptr_t)(ws+3248);
	i8 v8576 = *(i8*)(intptr_t)v8575;
	i8 v8577 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v8577)(v8576);

endsub:;
}
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_59 workspace at ws+3328 length ws+0
void f371_reduce_59(void) {

	i1 v8578 = (i1)+7;
	i8 v8579 = (i8)(intptr_t)(ws+3272);
	i8 v8580 = *(i8*)(intptr_t)v8579;
	i8 v8581 = v8580+(+32);
	*(i1*)(intptr_t)v8581 = v8578;

	i8 v8582 = (i8)(intptr_t)(ws+3256);
	i4 v8583 = *(i4*)(intptr_t)v8582;
	i8 v8584 = (i8)(intptr_t)(ws+3272);
	i8 v8585 = *(i8*)(intptr_t)v8584;
	*(i4*)(intptr_t)v8585 = v8583;

	i1 v8586 = (i1)+2;
	i8 v8587 = (i8)(intptr_t)(ws+3264);
	i8 v8588 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8588)(v8587, v8586);

	i1 v8589 = (i1)+22;
	i8 v8590 = (i8)(intptr_t)(ws+3248);
	i8 v8591 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8591)(v8590, v8589);

endsub:;
}
const i1 c02_s017b[] = { 0x69,0x6e,0x76,0x61,0x6c,0x69,0x64,0x20,0x69,0x6e,0x74,0x65,0x67,0x65,0x72,0x20,0x74,0x79,0x70,0x65,0x20,0x72,0x61,0x6e,0x67,0x65,0 };
	void f76_SimpleError(i8 /* message */);
	void f242_ArchGuessIntType(i8* /* symbol */, i4 /* max */, i4 /* min */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_60 workspace at ws+3328 length ws+0
void f372_reduce_60(void) {

	i8 v8592 = (i8)(intptr_t)(ws+3272);
	i4 v8593 = *(i4*)(intptr_t)v8592;
	i8 v8594 = (i8)(intptr_t)(ws+3256);
	i4 v8595 = *(i4*)(intptr_t)v8594;
	if ((s4)v8593<(s4)v8595) goto c02_068c; else goto c02_068b;

c02_068b:;

	i8 v8596 = (i8)(intptr_t)c02_s017b;
	i8 v8597 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8597)(v8596);

c02_068c:;

c02_0688:;

	i8 v8598 = (i8)(intptr_t)(ws+3272);
	i4 v8599 = *(i4*)(intptr_t)v8598;
	i8 v8600 = (i8)(intptr_t)(ws+3256);
	i4 v8601 = *(i4*)(intptr_t)v8600;
	i8 v8602 = (i8)(intptr_t)(f242_ArchGuessIntType);
	i8 v8603;

	((void(*)(i8* /* symbol */, i4 /* max */, i4 /* min */))(intptr_t)v8602)(&v8603, v8601, v8599);
	i8 v8604 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8604 = v8603;

	i1 v8605 = (i1)+16;
	i8 v8606 = (i8)(intptr_t)(ws+3280);
	i8 v8607 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8607)(v8606, v8605);

	i1 v8608 = (i1)+45;
	i8 v8609 = (i8)(intptr_t)(ws+3264);
	i8 v8610 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8610)(v8609, v8608);

	i1 v8611 = (i1)+4;
	i8 v8612 = (i8)(intptr_t)(ws+3248);
	i8 v8613 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8613)(v8612, v8611);

endsub:;
}
	void f66_AllocNewType(i8* /* type */);
	void f74_StartError(void);
const i1 c02_s017c[] = { 0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s017d[] = { 0x20,0x74,0x6f,0x20,0x62,0x65,0x20,0x61,0x20,0x74,0x79,0x70,0x65,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// reduce_61 workspace at ws+3328 length ws+16
void f373_reduce_61(void) {

	i8 v8614 = (i8)(intptr_t)(ws+3248);
	i8 v8615 = *(i8*)(intptr_t)v8614;
	i8 v8616 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8616 = v8615;

	i8 v8617 = (i8)(intptr_t)(ws+3328);
	i8 v8618 = *(i8*)(intptr_t)v8617;
	i8 v8619 = v8618+(+32);
	i1 v8620 = *(i1*)(intptr_t)v8619;
	i1 v8621 = (i1)+0;
	if (v8620==v8621) goto c02_0690; else goto c02_0691;

c02_0690:;

	i8 v8622 = (i8)(intptr_t)(f66_AllocNewType);
	i8 v8623;

	((void(*)(i8* /* type */))(intptr_t)v8622)(&v8623);
	i8 v8624 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8624 = v8623;

	i1 v8625 = (i1)+1;
	i8 v8626 = (i8)(intptr_t)(ws+3336);
	i8 v8627 = *(i8*)(intptr_t)v8626;
	i8 v8628 = v8627+(+52);
	*(i1*)(intptr_t)v8628 = v8625;

	i1 v8629 = (i1)+30;
	i8 v8630 = (i8)(intptr_t)(ws+3328);
	i8 v8631 = *(i8*)(intptr_t)v8630;
	i8 v8632 = v8631+(+32);
	*(i1*)(intptr_t)v8632 = v8629;

	i8 v8633 = (i8)(intptr_t)(ws+3336);
	i8 v8634 = *(i8*)(intptr_t)v8633;
	i8 v8635 = (i8)(intptr_t)(ws+3328);
	i8 v8636 = *(i8*)(intptr_t)v8635;
	*(i8*)(intptr_t)v8636 = v8634;

	i8 v8637 = (i8)(intptr_t)(ws+3328);
	i8 v8638 = *(i8*)(intptr_t)v8637;
	i8 v8639 = (i8)(intptr_t)(ws+3336);
	i8 v8640 = *(i8*)(intptr_t)v8639;
	i8 v8641 = v8640+(+32);
	*(i8*)(intptr_t)v8641 = v8638;

c02_0691:;

c02_068d:;

	i8 v8642 = (i8)(intptr_t)(ws+3328);
	i8 v8643 = *(i8*)(intptr_t)v8642;
	i8 v8644 = v8643+(+32);
	i1 v8645 = *(i1*)(intptr_t)v8644;
	i1 v8646 = (i1)+30;
	if (v8645==v8646) goto c02_0696; else goto c02_0695;

c02_0695:;

	i8 v8647 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v8647)();

	i8 v8648 = (i8)(intptr_t)c02_s017c;
	i8 v8649 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8649)(v8648);

	i8 v8650 = (i8)(intptr_t)(ws+3328);
	i8 v8651 = *(i8*)(intptr_t)v8650;
	i8 v8652 = v8651+(+8);
	i8 v8653 = *(i8*)(intptr_t)v8652;
	i8 v8654 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8654)(v8653);

	i8 v8655 = (i8)(intptr_t)c02_s017d;
	i8 v8656 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8656)(v8655);

	i8 v8657 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v8657)();

c02_0696:;

c02_0692:;

	i8 v8658 = (i8)(intptr_t)(ws+3328);
	i8 v8659 = *(i8*)(intptr_t)v8658;
	i8 v8660 = *(i8*)(intptr_t)v8659;
	i8 v8661 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8661 = v8660;

endsub:;
}
	void f262_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_62 workspace at ws+3328 length ws+0
void f374_reduce_62(void) {

	i8 v8662 = (i8)(intptr_t)(ws+3256);
	i8 v8663 = *(i8*)(intptr_t)v8662;
	i8 v8664 = (i8)(intptr_t)(f262_MakePointerType);
	i8 v8665;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v8664)(&v8665, v8663);
	i8 v8666 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8666 = v8665;

	i1 v8667 = (i1)+5;
	i8 v8668 = (i8)(intptr_t)(ws+3248);
	i8 v8669 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8669)(v8668, v8667);

endsub:;
}
	void f263_MakeArrayType(i8* /* arraytype */, i2 /* size */, i8 /* type */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_63 workspace at ws+3328 length ws+0
void f375_reduce_63(void) {

	i8 v8670 = (i8)(intptr_t)(ws+3272);
	i8 v8671 = *(i8*)(intptr_t)v8670;
	i8 v8672 = (i8)(intptr_t)(ws+3256);
	i4 v8673 = *(i4*)(intptr_t)v8672;
	i2 v8674 = (s2)(s4)v8673;
	i8 v8675 = (i8)(intptr_t)(f263_MakeArrayType);
	i8 v8676;

	((void(*)(i8* /* arraytype */, i2 /* size */, i8 /* type */))(intptr_t)v8675)(&v8676, v8674, v8671);
	i8 v8677 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8677 = v8676;

	i1 v8678 = (i1)+17;
	i8 v8679 = (i8)(intptr_t)(ws+3264);
	i8 v8680 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8680)(v8679, v8678);

	i1 v8681 = (i1)+5;
	i8 v8682 = (i8)(intptr_t)(ws+3248);
	i8 v8683 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8683)(v8682, v8681);

endsub:;
}
	void f263_MakeArrayType(i8* /* arraytype */, i2 /* size */, i8 /* type */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_64 workspace at ws+3328 length ws+0
void f376_reduce_64(void) {

	i8 v8684 = (i8)(intptr_t)(ws+3264);
	i8 v8685 = *(i8*)(intptr_t)v8684;
	i2 v8686 = (i2)+0;
	i8 v8687 = (i8)(intptr_t)(f263_MakeArrayType);
	i8 v8688;

	((void(*)(i8* /* arraytype */, i2 /* size */, i8 /* type */))(intptr_t)v8687)(&v8688, v8686, v8685);
	i8 v8689 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8689 = v8688;

	i1 v8690 = (i1)+17;
	i8 v8691 = (i8)(intptr_t)(ws+3256);
	i8 v8692 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8692)(v8691, v8690);

	i1 v8693 = (i1)+5;
	i8 v8694 = (i8)(intptr_t)(ws+3248);
	i8 v8695 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8695)(v8694, v8693);

endsub:;
}
	void f227_IsArray(i1* /* result */, i8 /* type */);
	void f74_StartError(void);
	void f12_print(i8 /* ptr */);
const i1 c02_s017e[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// reduce_65 workspace at ws+3328 length ws+0
void f377_reduce_65(void) {

	i8 v8696 = (i8)(intptr_t)(ws+3248);
	i8 v8697 = *(i8*)(intptr_t)v8696;
	i8 v8698 = (i8)(intptr_t)(f227_IsArray);
	i1 v8699;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8698)(&v8699, v8697);
	i1 v8700 = (i1)+0;
	if (v8699==v8700) goto c02_069a; else goto c02_069b;

c02_069a:;

	i8 v8701 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v8701)();

	i8 v8702 = (i8)(intptr_t)(ws+3248);
	i8 v8703 = *(i8*)(intptr_t)v8702;
	i8 v8704 = v8703+(+32);
	i8 v8705 = *(i8*)(intptr_t)v8704;
	i8 v8706 = v8705+(+8);
	i8 v8707 = *(i8*)(intptr_t)v8706;
	i8 v8708 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8708)(v8707);

	i8 v8709 = (i8)(intptr_t)c02_s017e;
	i8 v8710 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8710)(v8709);

	i8 v8711 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v8711)();

c02_069b:;

c02_0697:;

	i8 v8712 = (i8)(intptr_t)(ws+3248);
	i8 v8713 = *(i8*)(intptr_t)v8712;
	i8 v8714 = v8713+(+16);
	i8 v8715 = *(i8*)(intptr_t)v8714;
	i8 v8716 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8716 = v8715;

endsub:;
}
	void f221_AddAlias(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_66 workspace at ws+3328 length ws+8
void f378_reduce_66(void) {

	i8 v8717 = (i8)+0;
	i8 v8718 = (i8)(intptr_t)(ws+3272);
	i8 v8719 = *(i8*)(intptr_t)v8718;
	i8 v8720 = (i8)(intptr_t)(ws+3256);
	i8 v8721 = *(i8*)(intptr_t)v8720;
	i8 v8722 = v8721+(+32);
	i8 v8723 = *(i8*)(intptr_t)v8722;
	i8 v8724 = (i8)(intptr_t)(f221_AddAlias);
	i8 v8725;

	((void(*)(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */))(intptr_t)v8724)(&v8725, v8723, v8719, v8717);
	i8 v8726 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8726 = v8725;

	i1 v8727 = (i1)+65;
	i8 v8728 = (i8)(intptr_t)(ws+3264);
	i8 v8729 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8729)(v8728, v8727);

	i1 v8730 = (i1)+22;
	i8 v8731 = (i8)(intptr_t)(ws+3248);
	i8 v8732 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8732)(v8731, v8730);

endsub:;
}
	void f220_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// reduce_67 workspace at ws+3328 length ws+0
void f379_reduce_67(void) {

	i8 v8733 = (i8)+0;
	i8 v8734 = (i8)(intptr_t)(ws+3248);
	i8 v8735 = *(i8*)(intptr_t)v8734;
	i8 v8736 = (i8)(intptr_t)(f220_AddSymbol);
	i8 v8737;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v8736)(&v8737, v8735, v8733);
	i8 v8738 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8738 = v8737;

endsub:;
}
	void f218_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f74_StartError(void);
const i1 c02_s017f[] = { 0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s0180[] = { 0x27,0x20,0x6e,0x6f,0x74,0x20,0x66,0x6f,0x75,0x6e,0x64,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);
	void f34_Free(i8 /* block */);

// reduce_68 workspace at ws+3328 length ws+16
void f380_reduce_68(void) {

	i8 v8739 = (i8)(intptr_t)(ws+3248);
	i8 v8740 = *(i8*)(intptr_t)v8739;
	i8 v8741 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8741 = v8740;

	i8 v8742 = (i8)+0;
	i8 v8743 = (i8)(intptr_t)(ws+3328);
	i8 v8744 = *(i8*)(intptr_t)v8743;
	i8 v8745 = (i8)(intptr_t)(f218_LookupSymbol);
	i8 v8746;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v8745)(&v8746, v8744, v8742);
	i8 v8747 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8747 = v8746;

	i8 v8748 = (i8)(intptr_t)(ws+3336);
	i8 v8749 = *(i8*)(intptr_t)v8748;
	i8 v8750 = (i8)+0;
	if (v8749==v8750) goto c02_069f; else goto c02_06a0;

c02_069f:;

	i8 v8751 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v8751)();

	i8 v8752 = (i8)(intptr_t)c02_s017f;
	i8 v8753 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8753)(v8752);

	i8 v8754 = (i8)(intptr_t)(ws+3328);
	i8 v8755 = *(i8*)(intptr_t)v8754;
	i8 v8756 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8756)(v8755);

	i8 v8757 = (i8)(intptr_t)c02_s0180;
	i8 v8758 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8758)(v8757);

	i8 v8759 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v8759)();

c02_06a0:;

c02_069c:;

	i8 v8760 = (i8)(intptr_t)(ws+3328);
	i8 v8761 = *(i8*)(intptr_t)v8760;
	i8 v8762 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v8762)(v8761);

	i8 v8763 = (i8)(intptr_t)(ws+3336);
	i8 v8764 = *(i8*)(intptr_t)v8763;
	i8 v8765 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8765 = v8764;

endsub:;
}
	void f218_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f220_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f34_Free(i8 /* block */);

// reduce_69 workspace at ws+3328 length ws+16
void f381_reduce_69(void) {

	i8 v8766 = (i8)(intptr_t)(ws+3248);
	i8 v8767 = *(i8*)(intptr_t)v8766;
	i8 v8768 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8768 = v8767;

	i8 v8769 = (i8)+0;
	i8 v8770 = (i8)(intptr_t)(ws+3328);
	i8 v8771 = *(i8*)(intptr_t)v8770;
	i8 v8772 = (i8)(intptr_t)(f218_LookupSymbol);
	i8 v8773;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v8772)(&v8773, v8771, v8769);
	i8 v8774 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8774 = v8773;

	i8 v8775 = (i8)(intptr_t)(ws+3336);
	i8 v8776 = *(i8*)(intptr_t)v8775;
	i8 v8777 = (i8)+0;
	if (v8776==v8777) goto c02_06a4; else goto c02_06a5;

c02_06a4:;

	i8 v8778 = (i8)+0;
	i8 v8779 = (i8)(intptr_t)(ws+3328);
	i8 v8780 = *(i8*)(intptr_t)v8779;
	i8 v8781 = (i8)(intptr_t)(f220_AddSymbol);
	i8 v8782;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v8781)(&v8782, v8780, v8778);
	i8 v8783 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8783 = v8782;

	goto c02_06a1;

c02_06a5:;

	i8 v8784 = (i8)(intptr_t)(ws+3328);
	i8 v8785 = *(i8*)(intptr_t)v8784;
	i8 v8786 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v8786)(v8785);

c02_06a1:;

	i8 v8787 = (i8)(intptr_t)(ws+3336);
	i8 v8788 = *(i8*)(intptr_t)v8787;
	i8 v8789 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8789 = v8788;

endsub:;
}
const i1 c02_s0181[] = { 0x73,0x69,0x6d,0x70,0x6c,0x65,0x20,0x74,0x79,0x70,0x65,0x20,0x6f,0x72,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x20,0x6e,0x61,0x6d,0x65,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f76_SimpleError(i8 /* message */);

// reduce_70 workspace at ws+3328 length ws+0
void f382_reduce_70(void) {

	i8 v8790 = (i8)(intptr_t)(ws+3248);
	i8 v8791 = *(i8*)(intptr_t)v8790;
	i8 v8792 = v8791+(+32);
	i1 v8793 = *(i1*)(intptr_t)v8792;

	if (v8793 != +28) goto c02_06a7;

	i8 v8794 = (i8)(intptr_t)(ws+3248);
	i8 v8795 = *(i8*)(intptr_t)v8794;
	i8 v8796 = *(i8*)(intptr_t)v8795;
	i8 v8797 = *(i8*)(intptr_t)v8796;
	i8 v8798 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8798 = v8797;

	goto c02_06a6;

c02_06a7:;

	if (v8793 != +30) goto c02_06a8;

	i8 v8799 = (i8)(intptr_t)(ws+3248);
	i8 v8800 = *(i8*)(intptr_t)v8799;
	i8 v8801 = *(i8*)(intptr_t)v8800;
	i8 v8802 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8802 = v8801;

	goto c02_06a6;

c02_06a8:;

	i8 v8803 = (i8)(intptr_t)c02_s0181;
	i8 v8804 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8804)(v8803);

c02_06a6:;


endsub:;
}
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_71 workspace at ws+3328 length ws+0
void f383_reduce_71(void) {

	i8 v8805 = (i8)(intptr_t)(ws+3256);
	i8 v8806 = *(i8*)(intptr_t)v8805;
	i8 v8807 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8807 = v8806;

	i1 v8808 = (i1)+4;
	i8 v8809 = (i8)(intptr_t)(ws+3248);
	i8 v8810 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8810)(v8809, v8808);

endsub:;
}
	void f292_i_check_sub_call_args(void);
const i1 c02_s0182[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x73,0x20,0x63,0x61,0x6c,0x6c,0x65,0x64,0x20,0x61,0x73,0x20,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x73,0x20,0x6d,0x75,0x73,0x74,0x20,0x68,0x61,0x76,0x65,0x20,0x65,0x78,0x61,0x63,0x74,0x6c,0x79,0x20,0x6f,0x6e,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0 };
	void f76_SimpleError(i8 /* message */);
	void f100_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f161_MidCalle(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f293_i_end_call(void);

// reduce_72 workspace at ws+3328 length ws+16
void f384_reduce_72(void) {

	i8 v8811 = (i8)(intptr_t)(ws+80);
	i8 v8812 = *(i8*)(intptr_t)v8811;
	i8 v8813 = v8812+(+8);
	i8 v8814 = *(i8*)(intptr_t)v8813;
	i8 v8815 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8815 = v8814;

	i1 v8816 = (i1)+1;
	i8 v8817 = (i8)(intptr_t)(ws+80);
	i8 v8818 = *(i8*)(intptr_t)v8817;
	i8 v8819 = v8818+(+41);
	*(i1*)(intptr_t)v8819 = v8816;

	i8 v8820 = (i8)(intptr_t)(f292_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v8820)();

	i8 v8821 = (i8)(intptr_t)(ws+3328);
	i8 v8822 = *(i8*)(intptr_t)v8821;
	i8 v8823 = v8822+(+81);
	i1 v8824 = *(i1*)(intptr_t)v8823;
	i1 v8825 = (i1)+1;
	if (v8824==v8825) goto c02_06ad; else goto c02_06ac;

c02_06ac:;

	i8 v8826 = (i8)(intptr_t)c02_s0182;
	i8 v8827 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8827)(v8826);

c02_06ad:;

c02_06a9:;

	i8 v8828 = (i8)(intptr_t)(ws+3328);
	i8 v8829 = *(i8*)(intptr_t)v8828;
	i1 v8830 = (i1)+0;
	i8 v8831 = (i8)(intptr_t)(f100_GetOutputParameter);
	i8 v8832;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v8831)(&v8832, v8830, v8829);
	i8 v8833 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8833 = v8832;

	i8 v8834 = (i8)(intptr_t)(ws+3336);
	i8 v8835 = *(i8*)(intptr_t)v8834;
	i8 v8836 = *(i8*)(intptr_t)v8835;
	i8 v8837 = *(i8*)(intptr_t)v8836;
	i8 v8838 = v8837+(+48);
	i2 v8839 = *(i2*)(intptr_t)v8838;
	i1 v8840 = v8839;
	i8 v8841 = (i8)(intptr_t)(ws+3248);
	i8 v8842 = *(i8*)(intptr_t)v8841;
	i8 v8843 = (i8)(intptr_t)(ws+80);
	i8 v8844 = *(i8*)(intptr_t)v8843;
	i8 v8845 = *(i8*)(intptr_t)v8844;
	i8 v8846 = (i8)(intptr_t)(ws+3328);
	i8 v8847 = *(i8*)(intptr_t)v8846;
	i8 v8848 = (i8)(intptr_t)(f161_MidCalle);
	i8 v8849;

	((void(*)(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v8848)(&v8849, v8847, v8845, v8842, v8840);
	i8 v8850 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8850 = v8849;

	i8 v8851 = (i8)(intptr_t)(ws+3336);
	i8 v8852 = *(i8*)(intptr_t)v8851;
	i8 v8853 = *(i8*)(intptr_t)v8852;
	i8 v8854 = *(i8*)(intptr_t)v8853;
	i8 v8855 = (i8)(intptr_t)(ws+3240);
	i8 v8856 = *(i8*)(intptr_t)v8855;
	i8 v8857 = v8856+(+16);
	*(i8*)(intptr_t)v8857 = v8854;

	i8 v8858 = (i8)(intptr_t)(f293_i_end_call);

	((void(*)(void))(intptr_t)v8858)();

endsub:;
}
	void f292_i_check_sub_call_args(void);
const i1 c02_s0183[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x73,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f76_SimpleError(i8 /* message */);
	void f119_MidCall(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */);
	void f258_Generate(i8 /* statement */);
	void f293_i_end_call(void);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_73 workspace at ws+3328 length ws+8
void f385_reduce_73(void) {

	i8 v8859 = (i8)(intptr_t)(ws+80);
	i8 v8860 = *(i8*)(intptr_t)v8859;
	i8 v8861 = v8860+(+8);
	i8 v8862 = *(i8*)(intptr_t)v8861;
	i8 v8863 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8863 = v8862;

	i8 v8864 = (i8)(intptr_t)(f292_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v8864)();

	i8 v8865 = (i8)(intptr_t)(ws+3328);
	i8 v8866 = *(i8*)(intptr_t)v8865;
	i8 v8867 = v8866+(+81);
	i1 v8868 = *(i1*)(intptr_t)v8867;
	i1 v8869 = (i1)+0;
	if (v8868==v8869) goto c02_06b2; else goto c02_06b1;

c02_06b1:;

	i8 v8870 = (i8)(intptr_t)c02_s0183;
	i8 v8871 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8871)(v8870);

c02_06b2:;

c02_06ae:;

	i8 v8872 = (i8)(intptr_t)(ws+3256);
	i8 v8873 = *(i8*)(intptr_t)v8872;
	i8 v8874 = (i8)(intptr_t)(ws+80);
	i8 v8875 = *(i8*)(intptr_t)v8874;
	i8 v8876 = *(i8*)(intptr_t)v8875;
	i8 v8877 = (i8)(intptr_t)(ws+3328);
	i8 v8878 = *(i8*)(intptr_t)v8877;
	i8 v8879 = (i8)(intptr_t)(f119_MidCall);
	i8 v8880;

	((void(*)(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */))(intptr_t)v8879)(&v8880, v8878, v8876, v8873);
	i8 v8881 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8881)(v8880);

	i8 v8882 = (i8)(intptr_t)(f293_i_end_call);

	((void(*)(void))(intptr_t)v8882)();

	i1 v8883 = (i1)+22;
	i8 v8884 = (i8)(intptr_t)(ws+3248);
	i8 v8885 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8885)(v8884, v8883);

endsub:;
}
	void f292_i_check_sub_call_args(void);
	void f119_MidCall(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */);
	void f258_Generate(i8 /* statement */);
const i1 c02_s0184[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f76_SimpleError(i8 /* message */);
	void f100_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s0185[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x73,0x73,0x69,0x67,0x6e,0x20,0x74,0x6f,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x73,0 };
	void f76_SimpleError(i8 /* message */);
	void f262_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f270_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f223_CheckNotPartialType(i8 /* type */);
	void f223_CheckNotPartialType(i8 /* type */);
	void f121_MidPoparg(i8* /* m */, i1 /* remaining */, i8 /* subr */, i1 /* width */);
	void f134_MidDeref(i8* /* m */, i8 /* left */, i1 /* width */);
	void f163_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f258_Generate(i8 /* statement */);
	void f63_Discard(i8 /* node */);
const i1 c02_s0186[] = { 0x74,0x6f,0x6f,0x20,0x66,0x65,0x77,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f76_SimpleError(i8 /* message */);
	void f293_i_end_call(void);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_74 workspace at ws+3328 length ws+41
void f386_reduce_74(void) {

	i8 v8886 = (i8)(intptr_t)(ws+80);
	i8 v8887 = *(i8*)(intptr_t)v8886;
	i8 v8888 = v8887+(+8);
	i8 v8889 = *(i8*)(intptr_t)v8888;
	i8 v8890 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8890 = v8889;

	i8 v8891 = (i8)(intptr_t)(f292_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v8891)();

	i8 v8892 = (i8)(intptr_t)(ws+3256);
	i8 v8893 = *(i8*)(intptr_t)v8892;
	i8 v8894 = (i8)(intptr_t)(ws+80);
	i8 v8895 = *(i8*)(intptr_t)v8894;
	i8 v8896 = *(i8*)(intptr_t)v8895;
	i8 v8897 = (i8)(intptr_t)(ws+3328);
	i8 v8898 = *(i8*)(intptr_t)v8897;
	i8 v8899 = (i8)(intptr_t)(f119_MidCall);
	i8 v8900;

	((void(*)(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */))(intptr_t)v8899)(&v8900, v8898, v8896, v8893);
	i8 v8901 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8901)(v8900);

	i8 v8902 = (i8)(intptr_t)(ws+3328);
	i8 v8903 = *(i8*)(intptr_t)v8902;
	i8 v8904 = v8903+(+81);
	i1 v8905 = *(i1*)(intptr_t)v8904;
	i8 v8906 = (i8)(intptr_t)(ws+3336);
	*(i1*)(intptr_t)v8906 = v8905;

	i1 v8907 = (i1)+0;
	i8 v8908 = (i8)(intptr_t)(ws+3337);
	*(i1*)(intptr_t)v8908 = v8907;

	i8 v8909 = (i8)(intptr_t)(ws+3280);
	i8 v8910 = *(i8*)(intptr_t)v8909;
	i8 v8911 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v8911 = v8910;

c02_06b5:;

	i8 v8912 = (i8)(intptr_t)(ws+3344);
	i8 v8913 = *(i8*)(intptr_t)v8912;
	i8 v8914 = (i8)+0;
	if (v8913==v8914) goto c02_06b8; else goto c02_06b7;

c02_06b7:;

	i8 v8915 = (i8)(intptr_t)(ws+3336);
	i1 v8916 = *(i1*)(intptr_t)v8915;
	i1 v8917 = (i1)+0;
	if (v8916==v8917) goto c02_06bc; else goto c02_06bd;

c02_06bc:;

	i8 v8918 = (i8)(intptr_t)c02_s0184;
	i8 v8919 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8919)(v8918);

c02_06bd:;

c02_06b9:;

	i8 v8920 = (i8)(intptr_t)(ws+3336);
	i1 v8921 = *(i1*)(intptr_t)v8920;
	i1 v8922 = v8921+(-1);
	i8 v8923 = (i8)(intptr_t)(ws+3336);
	*(i1*)(intptr_t)v8923 = v8922;

	i8 v8924 = (i8)(intptr_t)(ws+3328);
	i8 v8925 = *(i8*)(intptr_t)v8924;
	i8 v8926 = (i8)(intptr_t)(ws+3336);
	i1 v8927 = *(i1*)(intptr_t)v8926;
	i8 v8928 = (i8)(intptr_t)(f100_GetOutputParameter);
	i8 v8929;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v8928)(&v8929, v8927, v8925);
	i8 v8930 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v8930 = v8929;

	i8 v8931 = (i8)(intptr_t)(ws+3344);
	i8 v8932 = *(i8*)(intptr_t)v8931;
	i8 v8933 = v8932+(+24);
	i8 v8934 = *(i8*)(intptr_t)v8933;
	i8 v8935 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v8935 = v8934;

	i8 v8936 = (i8)+0;
	i8 v8937 = (i8)(intptr_t)(ws+3344);
	i8 v8938 = *(i8*)(intptr_t)v8937;
	i8 v8939 = v8938+(+24);
	*(i8*)(intptr_t)v8939 = v8936;

	i8 v8940 = (i8)(intptr_t)(ws+3344);
	i8 v8941 = *(i8*)(intptr_t)v8940;
	i8 v8942 = v8941+(+32);
	i8 v8943 = *(i8*)(intptr_t)v8942;
	i8 v8944 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v8944 = v8943;

	i8 v8945 = (i8)(intptr_t)(ws+3360);
	i8 v8946 = *(i8*)(intptr_t)v8945;
	i8 v8947 = v8946+(+16);
	i8 v8948 = *(i8*)(intptr_t)v8947;
	i8 v8949 = (i8)(intptr_t)(f68_IsPtr);
	i1 v8950;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8949)(&v8950, v8948);
	i1 v8951 = (i1)+0;
	if (v8950==v8951) goto c02_06c1; else goto c02_06c2;

c02_06c1:;

	i8 v8952 = (i8)(intptr_t)c02_s0185;
	i8 v8953 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8953)(v8952);

c02_06c2:;

c02_06be:;

	i8 v8954 = (i8)(intptr_t)(ws+3360);
	i8 v8955 = *(i8*)(intptr_t)v8954;
	i8 v8956 = (i8)(intptr_t)(ws+3352);
	i8 v8957 = *(i8*)(intptr_t)v8956;
	i8 v8958 = *(i8*)(intptr_t)v8957;
	i8 v8959 = *(i8*)(intptr_t)v8958;
	i8 v8960 = (i8)(intptr_t)(f262_MakePointerType);
	i8 v8961;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v8960)(&v8961, v8959);
	i8 v8962 = (i8)(intptr_t)(f270_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v8962)(v8961, v8955);

	i8 v8963 = (i8)(intptr_t)(ws+3352);
	i8 v8964 = *(i8*)(intptr_t)v8963;
	i8 v8965 = *(i8*)(intptr_t)v8964;
	i8 v8966 = *(i8*)(intptr_t)v8965;
	i8 v8967 = (i8)(intptr_t)(f223_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v8967)(v8966);

	i8 v8968 = (i8)(intptr_t)(ws+3360);
	i8 v8969 = *(i8*)(intptr_t)v8968;
	i8 v8970 = v8969+(+16);
	i8 v8971 = *(i8*)(intptr_t)v8970;
	i8 v8972 = (i8)(intptr_t)(f223_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v8972)(v8971);

	i8 v8973 = (i8)(intptr_t)(ws+3352);
	i8 v8974 = *(i8*)(intptr_t)v8973;
	i8 v8975 = *(i8*)(intptr_t)v8974;
	i8 v8976 = *(i8*)(intptr_t)v8975;
	i8 v8977 = v8976+(+48);
	i2 v8978 = *(i2*)(intptr_t)v8977;
	i1 v8979 = v8978;
	i8 v8980 = (i8)(intptr_t)(ws+3368);
	*(i1*)(intptr_t)v8980 = v8979;

	i8 v8981 = (i8)(intptr_t)(ws+3368);
	i1 v8982 = *(i1*)(intptr_t)v8981;
	i8 v8983 = (i8)(intptr_t)(ws+3368);
	i1 v8984 = *(i1*)(intptr_t)v8983;
	i8 v8985 = (i8)(intptr_t)(ws+3328);
	i8 v8986 = *(i8*)(intptr_t)v8985;
	i8 v8987 = (i8)(intptr_t)(ws+3337);
	i1 v8988 = *(i1*)(intptr_t)v8987;
	i8 v8989 = (i8)(intptr_t)(f121_MidPoparg);
	i8 v8990;

	((void(*)(i8* /* m */, i1 /* remaining */, i8 /* subr */, i1 /* width */))(intptr_t)v8989)(&v8990, v8988, v8986, v8984);
	i8 v8991 = (i8)(intptr_t)(ws+3368);
	i1 v8992 = *(i1*)(intptr_t)v8991;
	i8 v8993 = (i8)(intptr_t)(ws+3360);
	i8 v8994 = *(i8*)(intptr_t)v8993;
	i8 v8995 = (i8)(intptr_t)(f134_MidDeref);
	i8 v8996;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v8995)(&v8996, v8994, v8992);
	i8 v8997 = (i8)(intptr_t)(f163_MidStore);
	i8 v8998;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v8997)(&v8998, v8996, v8990, v8982);
	i8 v8999 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8999)(v8998);

	i8 v9000 = (i8)(intptr_t)(ws+3337);
	i1 v9001 = *(i1*)(intptr_t)v9000;
	i1 v9002 = v9001+(+1);
	i8 v9003 = (i8)(intptr_t)(ws+3337);
	*(i1*)(intptr_t)v9003 = v9002;

	i8 v9004 = (i8)(intptr_t)(ws+3352);
	i8 v9005 = *(i8*)(intptr_t)v9004;
	i8 v9006 = *(i8*)(intptr_t)v9005;
	i8 v9007 = v9006+(+16);
	i8 v9008 = *(i8*)(intptr_t)v9007;
	i8 v9009 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v9009 = v9008;

	goto c02_06b5;

c02_06b8:;

	i8 v9010 = (i8)(intptr_t)(ws+3280);
	i8 v9011 = *(i8*)(intptr_t)v9010;
	i8 v9012 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v9012)(v9011);

	i8 v9013 = (i8)(intptr_t)(ws+3337);
	i1 v9014 = *(i1*)(intptr_t)v9013;
	i8 v9015 = (i8)(intptr_t)(ws+3328);
	i8 v9016 = *(i8*)(intptr_t)v9015;
	i8 v9017 = v9016+(+81);
	i1 v9018 = *(i1*)(intptr_t)v9017;
	if (v9014==v9018) goto c02_06c7; else goto c02_06c6;

c02_06c6:;

	i8 v9019 = (i8)(intptr_t)c02_s0186;
	i8 v9020 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9020)(v9019);

c02_06c7:;

c02_06c3:;

	i8 v9021 = (i8)(intptr_t)(f293_i_end_call);

	((void(*)(void))(intptr_t)v9021)();

	i1 v9022 = (i1)+2;
	i8 v9023 = (i8)(intptr_t)(ws+3272);
	i8 v9024 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9024)(v9023, v9022);

	i1 v9025 = (i1)+22;
	i8 v9026 = (i8)(intptr_t)(ws+3248);
	i8 v9027 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9027)(v9026, v9025);

endsub:;
}
	void f228_IsSubroutine(i1* /* result */, i8 /* type */);
	void f74_StartError(void);
const i1 c02_s0187[] = { 0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s0188[] = { 0x20,0x74,0x6f,0x20,0x62,0x65,0x20,0x61,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f99_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f100_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);

// reduce_75 workspace at ws+3328 length ws+16
void f387_reduce_75(void) {

	i8 v9028 = (i8)(intptr_t)(ws+3248);
	i8 v9029 = *(i8*)(intptr_t)v9028;
	i8 v9030 = v9029+(+16);
	i8 v9031 = *(i8*)(intptr_t)v9030;
	i8 v9032 = (i8)(intptr_t)(f228_IsSubroutine);
	i1 v9033;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9032)(&v9033, v9031);
	i1 v9034 = (i1)+0;
	if (v9033==v9034) goto c02_06cb; else goto c02_06cc;

c02_06cb:;

	i8 v9035 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v9035)();

	i8 v9036 = (i8)(intptr_t)c02_s0187;
	i8 v9037 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9037)(v9036);

	i8 v9038 = (i8)(intptr_t)(ws+3248);
	i8 v9039 = *(i8*)(intptr_t)v9038;
	i8 v9040 = v9039+(+16);
	i8 v9041 = *(i8*)(intptr_t)v9040;
	i8 v9042 = v9041+(+32);
	i8 v9043 = *(i8*)(intptr_t)v9042;
	i8 v9044 = v9043+(+8);
	i8 v9045 = *(i8*)(intptr_t)v9044;
	i8 v9046 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9046)(v9045);

	i8 v9047 = (i8)(intptr_t)c02_s0188;
	i8 v9048 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9048)(v9047);

	i8 v9049 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v9049)();

c02_06cc:;

c02_06c8:;

	i8 v9050 = (i8)+42;
	i8 v9051 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v9052;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v9051)(&v9052, v9050);
	i8 v9053 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v9053 = v9052;

	i8 v9054 = (i8)(intptr_t)(ws+80);
	i8 v9055 = *(i8*)(intptr_t)v9054;
	i8 v9056 = (i8)(intptr_t)(ws+3328);
	i8 v9057 = *(i8*)(intptr_t)v9056;
	i8 v9058 = v9057+(+16);
	*(i8*)(intptr_t)v9058 = v9055;

	i8 v9059 = (i8)(intptr_t)(ws+3248);
	i8 v9060 = *(i8*)(intptr_t)v9059;
	i8 v9061 = v9060+(+16);
	i8 v9062 = *(i8*)(intptr_t)v9061;
	i8 v9063 = *(i8*)(intptr_t)v9062;
	i8 v9064 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v9064 = v9063;

	i8 v9065 = (i8)(intptr_t)(ws+3248);
	i8 v9066 = *(i8*)(intptr_t)v9065;
	i8 v9067 = (i8)(intptr_t)(ws+3328);
	i8 v9068 = *(i8*)(intptr_t)v9067;
	*(i8*)(intptr_t)v9068 = v9066;

	i8 v9069 = (i8)(intptr_t)(ws+3336);
	i8 v9070 = *(i8*)(intptr_t)v9069;
	i8 v9071 = (i8)(intptr_t)(ws+3328);
	i8 v9072 = *(i8*)(intptr_t)v9071;
	i8 v9073 = v9072+(+8);
	*(i8*)(intptr_t)v9073 = v9070;

	i8 v9074 = (i8)(intptr_t)(ws+3336);
	i8 v9075 = *(i8*)(intptr_t)v9074;
	i1 v9076 = (i1)+0;
	i8 v9077 = (i8)(intptr_t)(f99_GetInputParameter);
	i8 v9078;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v9077)(&v9078, v9076, v9075);
	i8 v9079 = (i8)(intptr_t)(ws+3328);
	i8 v9080 = *(i8*)(intptr_t)v9079;
	i8 v9081 = v9080+(+24);
	*(i8*)(intptr_t)v9081 = v9078;

	i8 v9082 = (i8)(intptr_t)(ws+3336);
	i8 v9083 = *(i8*)(intptr_t)v9082;
	i1 v9084 = (i1)+0;
	i8 v9085 = (i8)(intptr_t)(f100_GetOutputParameter);
	i8 v9086;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v9085)(&v9086, v9084, v9083);
	i8 v9087 = (i8)(intptr_t)(ws+3328);
	i8 v9088 = *(i8*)(intptr_t)v9087;
	i8 v9089 = v9088+(+32);
	*(i8*)(intptr_t)v9089 = v9086;

	i8 v9090 = (i8)(intptr_t)(ws+3328);
	i8 v9091 = *(i8*)(intptr_t)v9090;
	i8 v9092 = (i8)(intptr_t)(ws+80);
	*(i8*)(intptr_t)v9092 = v9091;

endsub:;
}
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_76 workspace at ws+3328 length ws+0
void f388_reduce_76(void) {

	i8 v9093 = (i8)(intptr_t)(ws+3256);
	i8 v9094 = *(i8*)(intptr_t)v9093;
	i8 v9095 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9095 = v9094;

	i1 v9096 = (i1)+4;
	i8 v9097 = (i8)(intptr_t)(ws+3248);
	i8 v9098 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9098)(v9097, v9096);

endsub:;
}
	void f112_MidEnd(i8* /* m */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_77 workspace at ws+3328 length ws+0
void f389_reduce_77(void) {

	i8 v9099 = (i8)(intptr_t)(f112_MidEnd);
	i8 v9100;

	((void(*)(i8* /* m */))(intptr_t)v9099)(&v9100);
	i8 v9101 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9101 = v9100;

	i1 v9102 = (i1)+4;
	i8 v9103 = (i8)(intptr_t)(ws+3248);
	i8 v9104 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9104)(v9103, v9102);

endsub:;
}

// reduce_78 workspace at ws+3328 length ws+0
void f390_reduce_78(void) {

	i8 v9105 = (i8)(intptr_t)(ws+3248);
	i8 v9106 = *(i8*)(intptr_t)v9105;
	i8 v9107 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9107 = v9106;

endsub:;
}
	void f63_Discard(i8 /* node */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_79 workspace at ws+3328 length ws+0
void f391_reduce_79(void) {

	i8 v9108 = (i8)(intptr_t)(ws+3248);
	i8 v9109 = *(i8*)(intptr_t)v9108;
	i8 v9110 = v9109+(+24);
	i8 v9111 = *(i8*)(intptr_t)v9110;
	i8 v9112 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v9112)(v9111);

	i8 v9113 = (i8)(intptr_t)(ws+3264);
	i8 v9114 = *(i8*)(intptr_t)v9113;
	i8 v9115 = (i8)(intptr_t)(ws+3248);
	i8 v9116 = *(i8*)(intptr_t)v9115;
	i8 v9117 = v9116+(+24);
	*(i8*)(intptr_t)v9117 = v9114;

	i8 v9118 = (i8)(intptr_t)(ws+3248);
	i8 v9119 = *(i8*)(intptr_t)v9118;
	i8 v9120 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9120 = v9119;

	i1 v9121 = (i1)+45;
	i8 v9122 = (i8)(intptr_t)(ws+3256);
	i8 v9123 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9123)(v9122, v9121);

endsub:;
}
	void f74_StartError(void);
const i1 c02_s0189[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0x73,0x20,0x69,0x6e,0x20,0x63,0x61,0x6c,0x6c,0x20,0x74,0x6f,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);
	void f270_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f223_CheckNotPartialType(i8 /* type */);
	void f223_CheckNotPartialType(i8 /* type */);
	void f167_NodeWidth(i1* /* width */, i8 /* node */);
	void f112_MidEnd(i8* /* m */);
	void f156_MidArg(i8* /* m */, i1 /* remaining */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */);

// reduce_80 workspace at ws+3328 length ws+8
void f392_reduce_80(void) {

	i8 v9124 = (i8)(intptr_t)(ws+80);
	i8 v9125 = *(i8*)(intptr_t)v9124;
	i8 v9126 = v9125+(+24);
	i8 v9127 = *(i8*)(intptr_t)v9126;
	i8 v9128 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v9128 = v9127;

	i8 v9129 = (i8)(intptr_t)(ws+3328);
	i8 v9130 = *(i8*)(intptr_t)v9129;
	i8 v9131 = (i8)+0;
	if (v9130==v9131) goto c02_06d0; else goto c02_06d1;

c02_06d0:;

	i8 v9132 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v9132)();

	i8 v9133 = (i8)(intptr_t)c02_s0189;
	i8 v9134 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9134)(v9133);

	i8 v9135 = (i8)(intptr_t)(ws+80);
	i8 v9136 = *(i8*)(intptr_t)v9135;
	i8 v9137 = v9136+(+8);
	i8 v9138 = *(i8*)(intptr_t)v9137;
	i8 v9139 = *(i8*)(intptr_t)v9138;
	i8 v9140 = v9139+(+8);
	i8 v9141 = *(i8*)(intptr_t)v9140;
	i8 v9142 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9142)(v9141);

	i8 v9143 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v9143)();

c02_06d1:;

c02_06cd:;

	i8 v9144 = (i8)(intptr_t)(ws+80);
	i8 v9145 = *(i8*)(intptr_t)v9144;
	i8 v9146 = v9145+(+24);
	i8 v9147 = *(i8*)(intptr_t)v9146;
	i8 v9148 = *(i8*)(intptr_t)v9147;
	i8 v9149 = v9148+(+16);
	i8 v9150 = *(i8*)(intptr_t)v9149;
	i8 v9151 = (i8)(intptr_t)(ws+80);
	i8 v9152 = *(i8*)(intptr_t)v9151;
	i8 v9153 = v9152+(+24);
	*(i8*)(intptr_t)v9153 = v9150;

	i8 v9154 = (i8)(intptr_t)(ws+3248);
	i8 v9155 = *(i8*)(intptr_t)v9154;
	i8 v9156 = (i8)(intptr_t)(ws+3328);
	i8 v9157 = *(i8*)(intptr_t)v9156;
	i8 v9158 = *(i8*)(intptr_t)v9157;
	i8 v9159 = *(i8*)(intptr_t)v9158;
	i8 v9160 = (i8)(intptr_t)(f270_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v9160)(v9159, v9155);

	i8 v9161 = (i8)(intptr_t)(ws+3328);
	i8 v9162 = *(i8*)(intptr_t)v9161;
	i8 v9163 = *(i8*)(intptr_t)v9162;
	i8 v9164 = *(i8*)(intptr_t)v9163;
	i8 v9165 = (i8)(intptr_t)(f223_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v9165)(v9164);

	i8 v9166 = (i8)(intptr_t)(ws+3248);
	i8 v9167 = *(i8*)(intptr_t)v9166;
	i8 v9168 = v9167+(+16);
	i8 v9169 = *(i8*)(intptr_t)v9168;
	i8 v9170 = (i8)(intptr_t)(f223_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v9170)(v9169);

	i8 v9171 = (i8)(intptr_t)(ws+80);
	i8 v9172 = *(i8*)(intptr_t)v9171;
	i8 v9173 = v9172+(+40);
	i1 v9174 = *(i1*)(intptr_t)v9173;
	i1 v9175 = v9174+(+1);
	i8 v9176 = (i8)(intptr_t)(ws+80);
	i8 v9177 = *(i8*)(intptr_t)v9176;
	i8 v9178 = v9177+(+40);
	*(i1*)(intptr_t)v9178 = v9175;

	i8 v9179 = (i8)(intptr_t)(ws+3248);
	i8 v9180 = *(i8*)(intptr_t)v9179;
	i8 v9181 = (i8)(intptr_t)(f167_NodeWidth);
	i1 v9182;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v9181)(&v9182, v9180);
	i8 v9183 = (i8)(intptr_t)(f112_MidEnd);
	i8 v9184;

	((void(*)(i8* /* m */))(intptr_t)v9183)(&v9184);
	i8 v9185 = (i8)(intptr_t)(ws+3248);
	i8 v9186 = *(i8*)(intptr_t)v9185;
	i8 v9187 = (i8)(intptr_t)(ws+80);
	i8 v9188 = *(i8*)(intptr_t)v9187;
	i8 v9189 = v9188+(+8);
	i8 v9190 = *(i8*)(intptr_t)v9189;
	i8 v9191 = (i8)(intptr_t)(ws+80);
	i8 v9192 = *(i8*)(intptr_t)v9191;
	i8 v9193 = v9192+(+8);
	i8 v9194 = *(i8*)(intptr_t)v9193;
	i8 v9195 = v9194+(+80);
	i1 v9196 = *(i1*)(intptr_t)v9195;
	i8 v9197 = (i8)(intptr_t)(ws+80);
	i8 v9198 = *(i8*)(intptr_t)v9197;
	i8 v9199 = v9198+(+40);
	i1 v9200 = *(i1*)(intptr_t)v9199;
	i1 v9201 = v9196-v9200;
	i8 v9202 = (i8)(intptr_t)(f156_MidArg);
	i8 v9203;

	((void(*)(i8* /* m */, i1 /* remaining */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v9202)(&v9203, v9201, v9190, v9186, v9184, v9182);
	i8 v9204 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9204 = v9203;

endsub:;
}
	void f118_MidPair(i8* /* m */, i8 /* right */, i8 /* left */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_81 workspace at ws+3328 length ws+0
void f393_reduce_81(void) {

	i8 v9205 = (i8)(intptr_t)(ws+3256);
	i8 v9206 = *(i8*)(intptr_t)v9205;
	i8 v9207 = (i8)(intptr_t)(ws+3272);
	i8 v9208 = *(i8*)(intptr_t)v9207;
	i8 v9209 = (i8)(intptr_t)(f118_MidPair);
	i8 v9210;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */))(intptr_t)v9209)(&v9210, v9208, v9206);
	i8 v9211 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9211 = v9210;

	i1 v9212 = (i1)+45;
	i8 v9213 = (i8)(intptr_t)(ws+3264);
	i8 v9214 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9214)(v9213, v9212);

	i1 v9215 = (i1)+4;
	i8 v9216 = (i8)(intptr_t)(ws+3248);
	i8 v9217 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9217)(v9216, v9215);

endsub:;
}
	void f118_MidPair(i8* /* m */, i8 /* right */, i8 /* left */);

// reduce_82 workspace at ws+3328 length ws+0
void f394_reduce_82(void) {

	i8 v9218 = (i8)(intptr_t)(ws+3248);
	i8 v9219 = *(i8*)(intptr_t)v9218;
	i8 v9220 = (i8)+0;
	i8 v9221 = (i8)(intptr_t)(f118_MidPair);
	i8 v9222;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */))(intptr_t)v9221)(&v9222, v9220, v9219);
	i8 v9223 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9223 = v9222;

endsub:;
}
	void f118_MidPair(i8* /* m */, i8 /* right */, i8 /* left */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_83 workspace at ws+3328 length ws+0
void f395_reduce_83(void) {

	i8 v9224 = (i8)(intptr_t)(ws+3248);
	i8 v9225 = *(i8*)(intptr_t)v9224;
	i8 v9226 = (i8)(intptr_t)(ws+3264);
	i8 v9227 = *(i8*)(intptr_t)v9226;
	i8 v9228 = (i8)(intptr_t)(f118_MidPair);
	i8 v9229;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */))(intptr_t)v9228)(&v9229, v9227, v9225);
	i8 v9230 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9230 = v9229;

	i1 v9231 = (i1)+45;
	i8 v9232 = (i8)(intptr_t)(ws+3256);
	i8 v9233 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9233)(v9232, v9231);

endsub:;
}
	void f234_UndoLValue(i8* /* address */, i8 /* lvalue */);

// reduce_84 workspace at ws+3328 length ws+0
void f396_reduce_84(void) {

	i8 v9234 = (i8)(intptr_t)(ws+3248);
	i8 v9235 = *(i8*)(intptr_t)v9234;
	i8 v9236 = (i8)(intptr_t)(f234_UndoLValue);
	i8 v9237;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v9236)(&v9237, v9235);
	i8 v9238 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9238 = v9237;

endsub:;
}
	void f207_EmitterEmitSubroutineFlags(i8 /* subr */);
	void f129_MidStartsub(i8* /* m */, i8 /* subr */);
	void f258_Generate(i8 /* statement */);
	void f141_MidEndsub(i8* /* m */, i8 /* subr */);
	void f258_Generate(i8 /* statement */);
	void f268_ReportWorkspaces(i8 /* subr */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_85 workspace at ws+3328 length ws+0
void f397_reduce_85(void) {

	i8 v9239 = (i8)(intptr_t)(ws+1544);
	i8 v9240 = *(i8*)(intptr_t)v9239;
	i8 v9241 = v9240+(+82);
	i1 v9242 = *(i1*)(intptr_t)v9241;
	i1 v9243 = v9242|(+2);
	i8 v9244 = (i8)(intptr_t)(ws+1544);
	i8 v9245 = *(i8*)(intptr_t)v9244;
	i8 v9246 = v9245+(+82);
	*(i1*)(intptr_t)v9246 = v9243;

	i8 v9247 = (i8)(intptr_t)(ws+1544);
	i8 v9248 = *(i8*)(intptr_t)v9247;
	i8 v9249 = (i8)(intptr_t)(f207_EmitterEmitSubroutineFlags);

	((void(*)(i8 /* subr */))(intptr_t)v9249)(v9248);

	i8 v9250 = (i8)(intptr_t)(ws+1544);
	i8 v9251 = *(i8*)(intptr_t)v9250;
	i8 v9252 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v9252 = v9251;

	i8 v9253 = (i8)(intptr_t)(ws+40);
	i8 v9254 = *(i8*)(intptr_t)v9253;
	i8 v9255 = (i8)(intptr_t)(f129_MidStartsub);
	i8 v9256;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v9255)(&v9256, v9254);
	i8 v9257 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9257)(v9256);

	i8 v9258 = (i8)(intptr_t)(ws+40);
	i8 v9259 = *(i8*)(intptr_t)v9258;
	i8 v9260 = (i8)(intptr_t)(f141_MidEndsub);
	i8 v9261;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v9260)(&v9261, v9259);
	i8 v9262 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9262)(v9261);

	i8 v9263 = (i8)(intptr_t)(ws+40);
	i8 v9264 = *(i8*)(intptr_t)v9263;
	i8 v9265 = (i8)(intptr_t)(f268_ReportWorkspaces);

	((void(*)(i8 /* subr */))(intptr_t)v9265)(v9264);

	i8 v9266 = (i8)(intptr_t)(ws+40);
	i8 v9267 = *(i8*)(intptr_t)v9266;
	i8 v9268 = v9267+(+8);
	i8 v9269 = *(i8*)(intptr_t)v9268;
	i8 v9270 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v9270 = v9269;

	i1 v9271 = (i1)+22;
	i8 v9272 = (i8)(intptr_t)(ws+3248);
	i8 v9273 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9273)(v9272, v9271);

endsub:;
}
const i1 c02_s018a[] = { 0x74,0x79,0x70,0x65,0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x6e,0x20,0x69,0x6e,0x74,0x65,0x72,0x66,0x61,0x63,0x65,0 };
	void f76_SimpleError(i8 /* message */);

// not_an_interface workspace at ws+3336 length ws+0
void f399_not_an_interface(void) {

	i8 v9274 = (i8)(intptr_t)c02_s018a;
	i8 v9275 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9275)(v9274);

endsub:;
}
	void f228_IsSubroutine(i1* /* result */, i8 /* type */);
	void f399_not_an_interface(void);
	void f399_not_an_interface(void);
	void f202_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	void f202_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	void f266_CopyParameterList(i8 /* subr */, i8 /* param */);
	void f100_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f266_CopyParameterList(i8 /* subr */, i8 /* param */);
	void f205_EmitterEmitInputParameters(i8 /* subr */);
	void f206_EmitterEmitOutputParameters(i8 /* subr */);
	void f207_EmitterEmitSubroutineFlags(i8 /* subr */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_86 workspace at ws+3328 length ws+8
void f398_reduce_86(void) {


	i8 v9276 = (i8)(intptr_t)(ws+3248);
	i8 v9277 = *(i8*)(intptr_t)v9276;
	i8 v9278 = (i8)(intptr_t)(f228_IsSubroutine);
	i1 v9279;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9278)(&v9279, v9277);
	i1 v9280 = (i1)+0;
	if (v9279==v9280) goto c02_06d5; else goto c02_06d6;

c02_06d5:;

	i8 v9281 = (i8)(intptr_t)(f399_not_an_interface);

	((void(*)(void))(intptr_t)v9281)();

c02_06d6:;

c02_06d2:;

	i8 v9282 = (i8)(intptr_t)(ws+3248);
	i8 v9283 = *(i8*)(intptr_t)v9282;
	i8 v9284 = *(i8*)(intptr_t)v9283;
	i8 v9285 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v9285 = v9284;

	i8 v9286 = (i8)(intptr_t)(ws+3328);
	i8 v9287 = *(i8*)(intptr_t)v9286;
	i8 v9288 = v9287+(+82);
	i1 v9289 = *(i1*)(intptr_t)v9288;
	i1 v9290 = v9289&(+2);
	i1 v9291 = (i1)+0;
	if (v9290==v9291) goto c02_06da; else goto c02_06db;

c02_06da:;

	i8 v9292 = (i8)(intptr_t)(f399_not_an_interface);

	((void(*)(void))(intptr_t)v9292)();

c02_06db:;

c02_06d7:;

	i8 v9293 = (i8)(intptr_t)(ws+1544);
	i8 v9294 = *(i8*)(intptr_t)v9293;
	i8 v9295 = v9294+(+82);
	i1 v9296 = *(i1*)(intptr_t)v9295;
	i1 v9297 = v9296|(+4);
	i8 v9298 = (i8)(intptr_t)(ws+1544);
	i8 v9299 = *(i8*)(intptr_t)v9298;
	i8 v9300 = v9299+(+82);
	*(i1*)(intptr_t)v9300 = v9297;

	i8 v9301 = (i8)(intptr_t)(ws+3328);
	i8 v9302 = *(i8*)(intptr_t)v9301;
	i8 v9303 = (i8)(intptr_t)(ws+1544);
	i8 v9304 = *(i8*)(intptr_t)v9303;
	i8 v9305 = v9304+(+48);
	*(i8*)(intptr_t)v9305 = v9302;

	i8 v9306 = (i8)(intptr_t)(ws+3248);
	i8 v9307 = *(i8*)(intptr_t)v9306;
	i8 v9308 = (i8)(intptr_t)(ws+1544);
	i8 v9309 = *(i8*)(intptr_t)v9308;
	i8 v9310 = v9309+(+40);
	*(i8*)(intptr_t)v9310 = v9307;

	i8 v9311 = (i8)(intptr_t)(ws+40);
	i8 v9312 = *(i8*)(intptr_t)v9311;
	i8 v9313 = (i8)(intptr_t)(ws+3328);
	i8 v9314 = *(i8*)(intptr_t)v9313;
	i8 v9315 = (i8)(intptr_t)(f202_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v9315)(v9314, v9312);

	i8 v9316 = (i8)(intptr_t)(ws+3328);
	i8 v9317 = *(i8*)(intptr_t)v9316;
	i8 v9318 = (i8)(intptr_t)(ws+1544);
	i8 v9319 = *(i8*)(intptr_t)v9318;
	i8 v9320 = (i8)(intptr_t)(f202_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v9320)(v9319, v9317);

	i8 v9321 = (i8)(intptr_t)(ws+3328);
	i8 v9322 = *(i8*)(intptr_t)v9321;
	i8 v9323 = v9322+(+80);
	i1 v9324 = *(i1*)(intptr_t)v9323;
	i8 v9325 = (i8)(intptr_t)(ws+1544);
	i8 v9326 = *(i8*)(intptr_t)v9325;
	i8 v9327 = v9326+(+80);
	*(i1*)(intptr_t)v9327 = v9324;

	i8 v9328 = (i8)(intptr_t)(ws+1544);
	i8 v9329 = *(i8*)(intptr_t)v9328;
	i8 v9330 = v9329+(+80);
	i1 v9331 = *(i1*)(intptr_t)v9330;
	i1 v9332 = (i1)+0;
	if (v9331==v9332) goto c02_06e0; else goto c02_06df;

c02_06df:;

	i8 v9333 = (i8)(intptr_t)(ws+3328);
	i8 v9334 = *(i8*)(intptr_t)v9333;
	i8 v9335 = v9334+(+16);
	i8 v9336 = *(i8*)(intptr_t)v9335;
	i8 v9337 = (i8)(intptr_t)(ws+1544);
	i8 v9338 = *(i8*)(intptr_t)v9337;
	i8 v9339 = (i8)(intptr_t)(f266_CopyParameterList);

	((void(*)(i8 /* subr */, i8 /* param */))(intptr_t)v9339)(v9338, v9336);

c02_06e0:;

c02_06dc:;

	i8 v9340 = (i8)(intptr_t)(ws+3328);
	i8 v9341 = *(i8*)(intptr_t)v9340;
	i8 v9342 = v9341+(+81);
	i1 v9343 = *(i1*)(intptr_t)v9342;
	i8 v9344 = (i8)(intptr_t)(ws+1544);
	i8 v9345 = *(i8*)(intptr_t)v9344;
	i8 v9346 = v9345+(+81);
	*(i1*)(intptr_t)v9346 = v9343;

	i8 v9347 = (i8)(intptr_t)(ws+1544);
	i8 v9348 = *(i8*)(intptr_t)v9347;
	i8 v9349 = v9348+(+81);
	i1 v9350 = *(i1*)(intptr_t)v9349;
	i1 v9351 = (i1)+0;
	if (v9350==v9351) goto c02_06e5; else goto c02_06e4;

c02_06e4:;

	i8 v9352 = (i8)(intptr_t)(ws+3328);
	i8 v9353 = *(i8*)(intptr_t)v9352;
	i1 v9354 = (i1)+0;
	i8 v9355 = (i8)(intptr_t)(f100_GetOutputParameter);
	i8 v9356;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v9355)(&v9356, v9354, v9353);
	i8 v9357 = (i8)(intptr_t)(ws+1544);
	i8 v9358 = *(i8*)(intptr_t)v9357;
	i8 v9359 = (i8)(intptr_t)(f266_CopyParameterList);

	((void(*)(i8 /* subr */, i8 /* param */))(intptr_t)v9359)(v9358, v9356);

c02_06e5:;

c02_06e1:;

	i8 v9360 = (i8)(intptr_t)(ws+1544);
	i8 v9361 = *(i8*)(intptr_t)v9360;
	i8 v9362 = (i8)(intptr_t)(f205_EmitterEmitInputParameters);

	((void(*)(i8 /* subr */))(intptr_t)v9362)(v9361);

	i8 v9363 = (i8)(intptr_t)(ws+1544);
	i8 v9364 = *(i8*)(intptr_t)v9363;
	i8 v9365 = (i8)(intptr_t)(f206_EmitterEmitOutputParameters);

	((void(*)(i8 /* subr */))(intptr_t)v9365)(v9364);

	i8 v9366 = (i8)(intptr_t)(ws+1544);
	i8 v9367 = *(i8*)(intptr_t)v9366;
	i8 v9368 = (i8)(intptr_t)(f207_EmitterEmitSubroutineFlags);

	((void(*)(i8 /* subr */))(intptr_t)v9368)(v9367);

	i1 v9369 = (i1)+68;
	i8 v9370 = (i8)(intptr_t)(ws+3256);
	i8 v9371 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9371)(v9370, v9369);

endsub:;
}
	void f200_EmitterDeclareExternalSubroutine(i8 /* external */, i2 /* id */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_87 workspace at ws+3328 length ws+0
void f400_reduce_87(void) {

	i8 v9372 = (i8)(intptr_t)(ws+1544);
	i8 v9373 = *(i8*)(intptr_t)v9372;
	i8 v9374 = v9373+(+56);
	i2 v9375 = *(i2*)(intptr_t)v9374;
	i8 v9376 = (i8)(intptr_t)(ws+3256);
	i8 v9377 = *(i8*)(intptr_t)v9376;
	i8 v9378 = (i8)(intptr_t)(f200_EmitterDeclareExternalSubroutine);

	((void(*)(i8 /* external */, i2 /* id */))(intptr_t)v9378)(v9377, v9375);

	i1 v9379 = (i1)+11;
	i8 v9380 = (i8)(intptr_t)(ws+3272);
	i8 v9381 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9381)(v9380, v9379);

	i1 v9382 = (i1)+16;
	i8 v9383 = (i8)(intptr_t)(ws+3264);
	i8 v9384 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9384)(v9383, v9382);

	i1 v9385 = (i1)+4;
	i8 v9386 = (i8)(intptr_t)(ws+3248);
	i8 v9387 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9387)(v9386, v9385);

endsub:;
}
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f238_AllocSubrId(i2* /* id */);
	void f66_AllocNewType(i8* /* type */);
	void f199_EmitterDeclareSubroutine(i8 /* subr */);

// reduce_88 workspace at ws+3328 length ws+8
void f401_reduce_88(void) {

	i8 v9388 = (i8)+83;
	i8 v9389 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v9390;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v9389)(&v9390, v9388);
	i8 v9391 = (i8)(intptr_t)(ws+1544);
	*(i8*)(intptr_t)v9391 = v9390;

	i8 v9392 = (i8)(intptr_t)(ws+40);
	i8 v9393 = *(i8*)(intptr_t)v9392;
	i8 v9394 = v9393+(+16);
	i8 v9395 = (i8)(intptr_t)(ws+1544);
	i8 v9396 = *(i8*)(intptr_t)v9395;
	i8 v9397 = v9396+(+32);
	*(i8*)(intptr_t)v9397 = v9394;

	i8 v9398 = (i8)(intptr_t)(ws+40);
	i8 v9399 = *(i8*)(intptr_t)v9398;
	i8 v9400 = (i8)(intptr_t)(ws+1544);
	i8 v9401 = *(i8*)(intptr_t)v9400;
	i8 v9402 = v9401+(+8);
	*(i8*)(intptr_t)v9402 = v9399;

	i8 v9403 = (i8)(intptr_t)(f238_AllocSubrId);
	i2 v9404;

	((void(*)(i2* /* id */))(intptr_t)v9403)(&v9404);
	i8 v9405 = (i8)(intptr_t)(ws+1544);
	i8 v9406 = *(i8*)(intptr_t)v9405;
	i8 v9407 = v9406+(+56);
	*(i2*)(intptr_t)v9407 = v9404;

	i8 v9408 = (i8)(intptr_t)(f66_AllocNewType);
	i8 v9409;

	((void(*)(i8* /* type */))(intptr_t)v9408)(&v9409);
	i8 v9410 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v9410 = v9409;

	i1 v9411 = (i1)+6;
	i8 v9412 = (i8)(intptr_t)(ws+3328);
	i8 v9413 = *(i8*)(intptr_t)v9412;
	i8 v9414 = v9413+(+52);
	*(i1*)(intptr_t)v9414 = v9411;

	i8 v9415 = (i8)(intptr_t)(ws+1528);
	i8 v9416 = *(i8*)(intptr_t)v9415;
	i8 v9417 = v9416+(+48);
	i2 v9418 = *(i2*)(intptr_t)v9417;
	i8 v9419 = (i8)(intptr_t)(ws+3328);
	i8 v9420 = *(i8*)(intptr_t)v9419;
	i8 v9421 = v9420+(+48);
	*(i2*)(intptr_t)v9421 = v9418;

	i8 v9422 = (i8)(intptr_t)(ws+1528);
	i8 v9423 = *(i8*)(intptr_t)v9422;
	i8 v9424 = v9423+(+53);
	i1 v9425 = *(i1*)(intptr_t)v9424;
	i8 v9426 = (i8)(intptr_t)(ws+3328);
	i8 v9427 = *(i8*)(intptr_t)v9426;
	i8 v9428 = v9427+(+53);
	*(i1*)(intptr_t)v9428 = v9425;

	i8 v9429 = (i8)(intptr_t)(ws+1528);
	i8 v9430 = *(i8*)(intptr_t)v9429;
	i8 v9431 = v9430+(+50);
	i2 v9432 = *(i2*)(intptr_t)v9431;
	i8 v9433 = (i8)(intptr_t)(ws+3328);
	i8 v9434 = *(i8*)(intptr_t)v9433;
	i8 v9435 = v9434+(+50);
	*(i2*)(intptr_t)v9435 = v9432;

	i8 v9436 = (i8)(intptr_t)(ws+1544);
	i8 v9437 = *(i8*)(intptr_t)v9436;
	i8 v9438 = (i8)(intptr_t)(ws+3328);
	i8 v9439 = *(i8*)(intptr_t)v9438;
	*(i8*)(intptr_t)v9439 = v9437;

	i8 v9440 = (i8)(intptr_t)(ws+3328);
	i8 v9441 = *(i8*)(intptr_t)v9440;
	i8 v9442 = (i8)(intptr_t)(ws+1544);
	i8 v9443 = *(i8*)(intptr_t)v9442;
	i8 v9444 = v9443+(+40);
	*(i8*)(intptr_t)v9444 = v9441;

	i8 v9445 = (i8)(intptr_t)(ws+1544);
	i8 v9446 = *(i8*)(intptr_t)v9445;
	i8 v9447 = (i8)(intptr_t)(ws+1544);
	i8 v9448 = *(i8*)(intptr_t)v9447;
	i8 v9449 = v9448+(+48);
	*(i8*)(intptr_t)v9449 = v9446;

	i1 v9450 = (i1)+30;
	i8 v9451 = (i8)(intptr_t)(ws+3248);
	i8 v9452 = *(i8*)(intptr_t)v9451;
	i8 v9453 = v9452+(+32);
	*(i1*)(intptr_t)v9453 = v9450;

	i8 v9454 = (i8)(intptr_t)(ws+3328);
	i8 v9455 = *(i8*)(intptr_t)v9454;
	i8 v9456 = (i8)(intptr_t)(ws+3248);
	i8 v9457 = *(i8*)(intptr_t)v9456;
	*(i8*)(intptr_t)v9457 = v9455;

	i8 v9458 = (i8)(intptr_t)(ws+3248);
	i8 v9459 = *(i8*)(intptr_t)v9458;
	i8 v9460 = (i8)(intptr_t)(ws+3328);
	i8 v9461 = *(i8*)(intptr_t)v9460;
	i8 v9462 = v9461+(+32);
	*(i8*)(intptr_t)v9462 = v9459;

	i8 v9463 = (i8)(intptr_t)(ws+3248);
	i8 v9464 = *(i8*)(intptr_t)v9463;
	i8 v9465 = (i8)(intptr_t)(ws+1544);
	i8 v9466 = *(i8*)(intptr_t)v9465;
	*(i8*)(intptr_t)v9466 = v9464;

	i8 v9467 = (i8)(intptr_t)(ws+1544);
	i8 v9468 = *(i8*)(intptr_t)v9467;
	i8 v9469 = (i8)(intptr_t)(f199_EmitterDeclareSubroutine);

	((void(*)(i8 /* subr */))(intptr_t)v9469)(v9468);

	i8 v9470 = (i8)(intptr_t)(ws+3248);
	i8 v9471 = *(i8*)(intptr_t)v9470;
	i8 v9472 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9472 = v9471;

endsub:;
}
	void f228_IsSubroutine(i1* /* result */, i8 /* type */);
const i1 c02_s018b[] = { 0x6e,0x6f,0x74,0x20,0x61,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0 };
	void f76_SimpleError(i8 /* message */);
const i1 c02_s018c[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x61,0x6c,0x72,0x65,0x61,0x64,0x79,0x20,0x69,0x6d,0x70,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x65,0x64,0 };
	void f76_SimpleError(i8 /* message */);
const i1 c02_s018d[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x69,0x6d,0x70,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x68,0x65,0x72,0x65,0 };
	void f76_SimpleError(i8 /* message */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_89 workspace at ws+3328 length ws+0
void f402_reduce_89(void) {

	i8 v9473 = (i8)(intptr_t)(ws+3248);
	i8 v9474 = *(i8*)(intptr_t)v9473;
	i8 v9475 = v9474+(+32);
	i1 v9476 = *(i1*)(intptr_t)v9475;
	i1 v9477 = (i1)+30;
	if (v9476==v9477) goto c02_06ed; else goto c02_06eb;

c02_06ed:;

	i8 v9478 = (i8)(intptr_t)(ws+3248);
	i8 v9479 = *(i8*)(intptr_t)v9478;
	i8 v9480 = *(i8*)(intptr_t)v9479;
	i8 v9481 = (i8)(intptr_t)(f228_IsSubroutine);
	i1 v9482;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9481)(&v9482, v9480);
	i1 v9483 = (i1)+0;
	if (v9482==v9483) goto c02_06eb; else goto c02_06ec;

c02_06eb:;

	i8 v9484 = (i8)(intptr_t)c02_s018b;
	i8 v9485 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9485)(v9484);

c02_06ec:;

c02_06e6:;

	i8 v9486 = (i8)(intptr_t)(ws+3248);
	i8 v9487 = *(i8*)(intptr_t)v9486;
	i8 v9488 = *(i8*)(intptr_t)v9487;
	i8 v9489 = *(i8*)(intptr_t)v9488;
	i8 v9490 = (i8)(intptr_t)(ws+1544);
	*(i8*)(intptr_t)v9490 = v9489;

	i8 v9491 = (i8)(intptr_t)(ws+1544);
	i8 v9492 = *(i8*)(intptr_t)v9491;
	i8 v9493 = v9492+(+82);
	i1 v9494 = *(i1*)(intptr_t)v9493;
	i1 v9495 = v9494&(+1);
	i1 v9496 = (i1)+0;
	if (v9495==v9496) goto c02_06f2; else goto c02_06f1;

c02_06f1:;

	i8 v9497 = (i8)(intptr_t)c02_s018c;
	i8 v9498 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9498)(v9497);

c02_06f2:;

c02_06ee:;

	i8 v9499 = (i8)(intptr_t)(ws+1544);
	i8 v9500 = *(i8*)(intptr_t)v9499;
	i8 v9501 = v9500+(+8);
	i8 v9502 = *(i8*)(intptr_t)v9501;
	i8 v9503 = (i8)(intptr_t)(ws+40);
	i8 v9504 = *(i8*)(intptr_t)v9503;
	if (v9502==v9504) goto c02_06f7; else goto c02_06f6;

c02_06f6:;

	i8 v9505 = (i8)(intptr_t)c02_s018d;
	i8 v9506 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9506)(v9505);

c02_06f7:;

c02_06f3:;

	i1 v9507 = (i1)+25;
	i8 v9508 = (i8)(intptr_t)(ws+3256);
	i8 v9509 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9509)(v9508, v9507);

endsub:;
}
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f129_MidStartsub(i8* /* m */, i8 /* subr */);
	void f258_Generate(i8 /* statement */);

// reduce_90 workspace at ws+3328 length ws+8
void f403_reduce_90(void) {

	i8 v9510 = (i8)+16;
	i8 v9511 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v9512;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v9511)(&v9512, v9510);
	i8 v9513 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v9513 = v9512;

	i8 v9514 = (i8)(intptr_t)(ws+88);
	i8 v9515 = *(i8*)(intptr_t)v9514;
	i8 v9516 = (i8)(intptr_t)(ws+3328);
	i8 v9517 = *(i8*)(intptr_t)v9516;
	i8 v9518 = v9517+(+8);
	*(i8*)(intptr_t)v9518 = v9515;

	i8 v9519 = (i8)(intptr_t)(ws+52);
	i2 v9520 = *(i2*)(intptr_t)v9519;
	i8 v9521 = (i8)(intptr_t)(ws+3328);
	i8 v9522 = *(i8*)(intptr_t)v9521;
	*(i2*)(intptr_t)v9522 = v9520;

	i2 v9523 = (i2)+0;
	i8 v9524 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v9524 = v9523;

	i8 v9525 = (i8)(intptr_t)(ws+54);
	i2 v9526 = *(i2*)(intptr_t)v9525;
	i8 v9527 = (i8)(intptr_t)(ws+3328);
	i8 v9528 = *(i8*)(intptr_t)v9527;
	i8 v9529 = v9528+(+2);
	*(i2*)(intptr_t)v9529 = v9526;

	i2 v9530 = (i2)+0;
	i8 v9531 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v9531 = v9530;

	i8 v9532 = (i8)(intptr_t)(ws+3328);
	i8 v9533 = *(i8*)(intptr_t)v9532;
	i8 v9534 = (i8)(intptr_t)(ws+88);
	*(i8*)(intptr_t)v9534 = v9533;

	i8 v9535 = (i8)(intptr_t)(ws+1544);
	i8 v9536 = *(i8*)(intptr_t)v9535;
	i8 v9537 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v9537 = v9536;

	i8 v9538 = (i8)(intptr_t)(ws+40);
	i8 v9539 = *(i8*)(intptr_t)v9538;
	i8 v9540 = (i8)(intptr_t)(f129_MidStartsub);
	i8 v9541;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v9540)(&v9541, v9539);
	i8 v9542 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9542)(v9541);

	i8 v9543 = (i8)(intptr_t)(ws+40);
	i8 v9544 = *(i8*)(intptr_t)v9543;
	i8 v9545 = v9544+(+82);
	i1 v9546 = *(i1*)(intptr_t)v9545;
	i1 v9547 = v9546|(+1);
	i8 v9548 = (i8)(intptr_t)(ws+40);
	i8 v9549 = *(i8*)(intptr_t)v9548;
	i8 v9550 = v9549+(+82);
	*(i1*)(intptr_t)v9550 = v9547;

endsub:;
}
	void f141_MidEndsub(i8* /* m */, i8 /* subr */);
	void f258_Generate(i8 /* statement */);
	void f268_ReportWorkspaces(i8 /* subr */);
	void f34_Free(i8 /* block */);
	void f264_DestructSubroutineContents(i8 /* subr */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_91 workspace at ws+3328 length ws+16
void f404_reduce_91(void) {

	i8 v9551 = (i8)(intptr_t)(ws+40);
	i8 v9552 = *(i8*)(intptr_t)v9551;
	i8 v9553 = (i8)(intptr_t)(f141_MidEndsub);
	i8 v9554;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v9553)(&v9554, v9552);
	i8 v9555 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9555)(v9554);

	i8 v9556 = (i8)(intptr_t)(ws+40);
	i8 v9557 = *(i8*)(intptr_t)v9556;
	i8 v9558 = (i8)(intptr_t)(f268_ReportWorkspaces);

	((void(*)(i8 /* subr */))(intptr_t)v9558)(v9557);

	i8 v9559 = (i8)(intptr_t)(ws+88);
	i8 v9560 = *(i8*)(intptr_t)v9559;
	i2 v9561 = *(i2*)(intptr_t)v9560;
	i8 v9562 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v9562 = v9561;

	i8 v9563 = (i8)(intptr_t)(ws+88);
	i8 v9564 = *(i8*)(intptr_t)v9563;
	i8 v9565 = v9564+(+2);
	i2 v9566 = *(i2*)(intptr_t)v9565;
	i8 v9567 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v9567 = v9566;

	i8 v9568 = (i8)(intptr_t)(ws+88);
	i8 v9569 = *(i8*)(intptr_t)v9568;
	i8 v9570 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v9570 = v9569;

	i8 v9571 = (i8)(intptr_t)(ws+3328);
	i8 v9572 = *(i8*)(intptr_t)v9571;
	i8 v9573 = v9572+(+8);
	i8 v9574 = *(i8*)(intptr_t)v9573;
	i8 v9575 = (i8)(intptr_t)(ws+88);
	*(i8*)(intptr_t)v9575 = v9574;

	i8 v9576 = (i8)(intptr_t)(ws+3328);
	i8 v9577 = *(i8*)(intptr_t)v9576;
	i8 v9578 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v9578)(v9577);

	i8 v9579 = (i8)(intptr_t)(ws+40);
	i8 v9580 = *(i8*)(intptr_t)v9579;
	i8 v9581 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v9581 = v9580;

	i8 v9582 = (i8)(intptr_t)(ws+3336);
	i8 v9583 = *(i8*)(intptr_t)v9582;
	i8 v9584 = v9583+(+8);
	i8 v9585 = *(i8*)(intptr_t)v9584;
	i8 v9586 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v9586 = v9585;

	i8 v9587 = (i8)(intptr_t)(ws+3336);
	i8 v9588 = *(i8*)(intptr_t)v9587;
	i8 v9589 = (i8)(intptr_t)(f264_DestructSubroutineContents);

	((void(*)(i8 /* subr */))(intptr_t)v9589)(v9588);

	i1 v9590 = (i1)+25;
	i8 v9591 = (i8)(intptr_t)(ws+3248);
	i8 v9592 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9592)(v9591, v9590);

endsub:;
}
	void f205_EmitterEmitInputParameters(i8 /* subr */);
	void f206_EmitterEmitOutputParameters(i8 /* subr */);

// reduce_92 workspace at ws+3328 length ws+0
void f405_reduce_92(void) {

	i1 v9593 = (i1)+0;
	i8 v9594 = (i8)(intptr_t)(ws+1544);
	i8 v9595 = *(i8*)(intptr_t)v9594;
	i8 v9596 = v9595+(+81);
	*(i1*)(intptr_t)v9596 = v9593;

	i8 v9597 = (i8)(intptr_t)(ws+1544);
	i8 v9598 = *(i8*)(intptr_t)v9597;
	i8 v9599 = (i8)(intptr_t)(f205_EmitterEmitInputParameters);

	((void(*)(i8 /* subr */))(intptr_t)v9599)(v9598);

	i8 v9600 = (i8)(intptr_t)(ws+1544);
	i8 v9601 = *(i8*)(intptr_t)v9600;
	i8 v9602 = (i8)(intptr_t)(f206_EmitterEmitOutputParameters);

	((void(*)(i8 /* subr */))(intptr_t)v9602)(v9601);

endsub:;
}
	void f98_CountParameters(i1* /* count */, i8 /* param */);
	void f205_EmitterEmitInputParameters(i8 /* subr */);
	void f206_EmitterEmitOutputParameters(i8 /* subr */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_93 workspace at ws+3328 length ws+0
void f406_reduce_93(void) {

	i8 v9603 = (i8)(intptr_t)(ws+3248);
	i8 v9604 = *(i8*)(intptr_t)v9603;
	i8 v9605 = (i8)(intptr_t)(f98_CountParameters);
	i1 v9606;

	((void(*)(i1* /* count */, i8 /* param */))(intptr_t)v9605)(&v9606, v9604);
	i8 v9607 = (i8)(intptr_t)(ws+1544);
	i8 v9608 = *(i8*)(intptr_t)v9607;
	i8 v9609 = v9608+(+81);
	*(i1*)(intptr_t)v9609 = v9606;

	i8 v9610 = (i8)(intptr_t)(ws+1544);
	i8 v9611 = *(i8*)(intptr_t)v9610;
	i8 v9612 = (i8)(intptr_t)(f205_EmitterEmitInputParameters);

	((void(*)(i8 /* subr */))(intptr_t)v9612)(v9611);

	i8 v9613 = (i8)(intptr_t)(ws+1544);
	i8 v9614 = *(i8*)(intptr_t)v9613;
	i8 v9615 = (i8)(intptr_t)(f206_EmitterEmitOutputParameters);

	((void(*)(i8 /* subr */))(intptr_t)v9615)(v9614);

	i1 v9616 = (i1)+6;
	i8 v9617 = (i8)(intptr_t)(ws+3256);
	i8 v9618 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9618)(v9617, v9616);

endsub:;
}
	void f98_CountParameters(i1* /* count */, i8 /* param */);

// reduce_94 workspace at ws+3328 length ws+0
void f407_reduce_94(void) {

	i8 v9619 = (i8)(intptr_t)(ws+3248);
	i8 v9620 = *(i8*)(intptr_t)v9619;
	i8 v9621 = (i8)(intptr_t)(f98_CountParameters);
	i1 v9622;

	((void(*)(i1* /* count */, i8 /* param */))(intptr_t)v9621)(&v9622, v9620);
	i8 v9623 = (i8)(intptr_t)(ws+1544);
	i8 v9624 = *(i8*)(intptr_t)v9623;
	i8 v9625 = v9624+(+80);
	*(i1*)(intptr_t)v9625 = v9622;

endsub:;
}
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_95 workspace at ws+3328 length ws+0
void f408_reduce_95(void) {

	i8 v9626 = (i8)+0;
	i8 v9627 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9627 = v9626;

	i1 v9628 = (i1)+4;
	i8 v9629 = (i8)(intptr_t)(ws+3248);
	i8 v9630 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9630)(v9629, v9628);

endsub:;
}
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_96 workspace at ws+3328 length ws+0
void f409_reduce_96(void) {

	i8 v9631 = (i8)(intptr_t)(ws+3256);
	i8 v9632 = *(i8*)(intptr_t)v9631;
	i8 v9633 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9633 = v9632;

	i1 v9634 = (i1)+4;
	i8 v9635 = (i8)(intptr_t)(ws+3248);
	i8 v9636 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9636)(v9635, v9634);

endsub:;
}

// reduce_97 workspace at ws+3328 length ws+0
void f410_reduce_97(void) {

	i8 v9637 = (i8)(intptr_t)(ws+3248);
	i8 v9638 = *(i8*)(intptr_t)v9637;
	i8 v9639 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9639 = v9638;

endsub:;
}
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_98 workspace at ws+3328 length ws+0
void f411_reduce_98(void) {

	i8 v9640 = (i8)(intptr_t)(ws+3248);
	i8 v9641 = *(i8*)(intptr_t)v9640;
	i8 v9642 = (i8)(intptr_t)(ws+3264);
	i8 v9643 = *(i8*)(intptr_t)v9642;
	i8 v9644 = *(i8*)(intptr_t)v9643;
	i8 v9645 = v9644+(+16);
	*(i8*)(intptr_t)v9645 = v9641;

	i8 v9646 = (i8)(intptr_t)(ws+3264);
	i8 v9647 = *(i8*)(intptr_t)v9646;
	i8 v9648 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9648 = v9647;

	i1 v9649 = (i1)+45;
	i8 v9650 = (i8)(intptr_t)(ws+3256);
	i8 v9651 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9651)(v9650, v9649);

endsub:;
}
	void f220_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f261_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_99 workspace at ws+3328 length ws+0
void f412_reduce_99(void) {

	i8 v9652 = (i8)(intptr_t)(ws+1544);
	i8 v9653 = *(i8*)(intptr_t)v9652;
	i8 v9654 = v9653+(+16);
	i8 v9655 = (i8)(intptr_t)(ws+3264);
	i8 v9656 = *(i8*)(intptr_t)v9655;
	i8 v9657 = (i8)(intptr_t)(f220_AddSymbol);
	i8 v9658;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v9657)(&v9658, v9656, v9654);
	i8 v9659 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9659 = v9658;

	i8 v9660 = (i8)(intptr_t)(ws+1544);
	i8 v9661 = *(i8*)(intptr_t)v9660;
	i8 v9662 = (i8)(intptr_t)(ws+3240);
	i8 v9663 = *(i8*)(intptr_t)v9662;
	i8 v9664 = (i8)(intptr_t)(ws+3248);
	i8 v9665 = *(i8*)(intptr_t)v9664;
	i8 v9666 = (i8)(intptr_t)(f261_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v9666)(v9665, v9663, v9661);

	i1 v9667 = (i1)+6;
	i8 v9668 = (i8)(intptr_t)(ws+3256);
	i8 v9669 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9669)(v9668, v9667);

endsub:;
}
	void f240_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_100 workspace at ws+3328 length ws+0
void f413_reduce_100(void) {

	i8 v9670 = (i8)(intptr_t)(ws+72);
	i8 v9671 = *(i8*)(intptr_t)v9670;
	i8 v9672 = v9671+(+48);
	i2 v9673 = *(i2*)(intptr_t)v9672;
	i8 v9674 = (i8)(intptr_t)(ws+72);
	i8 v9675 = *(i8*)(intptr_t)v9674;
	i8 v9676 = v9675+(+53);
	i1 v9677 = *(i1*)(intptr_t)v9676;
	i8 v9678 = (i8)(intptr_t)(f240_ArchAlignUp);
	i2 v9679;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v9678)(&v9679, v9677, v9673);
	i8 v9680 = (i8)(intptr_t)(ws+72);
	i8 v9681 = *(i8*)(intptr_t)v9680;
	i8 v9682 = v9681+(+50);
	*(i2*)(intptr_t)v9682 = v9679;

	i1 v9683 = (i1)+65;
	i8 v9684 = (i8)(intptr_t)(ws+3272);
	i8 v9685 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9685)(v9684, v9683);

	i1 v9686 = (i1)+10;
	i8 v9687 = (i8)(intptr_t)(ws+3256);
	i8 v9688 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9688)(v9687, v9686);

	i1 v9689 = (i1)+20;
	i8 v9690 = (i8)(intptr_t)(ws+3248);
	i8 v9691 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9691)(v9690, v9689);

endsub:;
}
	void f294_SymbolRedeclarationError(void);
	void f66_AllocNewType(i8* /* type */);
	void f294_SymbolRedeclarationError(void);

// reduce_101 workspace at ws+3328 length ws+0
void f414_reduce_101(void) {

	i8 v9692 = (i8)(intptr_t)(ws+3248);
	i8 v9693 = *(i8*)(intptr_t)v9692;
	i8 v9694 = v9693+(+32);
	i1 v9695 = *(i1*)(intptr_t)v9694;

	if (v9695 != +30) goto c02_06f9;

	i8 v9696 = (i8)(intptr_t)(ws+3248);
	i8 v9697 = *(i8*)(intptr_t)v9696;
	i8 v9698 = *(i8*)(intptr_t)v9697;
	i8 v9699 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v9699 = v9698;

	i8 v9700 = (i8)(intptr_t)(ws+72);
	i8 v9701 = *(i8*)(intptr_t)v9700;
	i8 v9702 = v9701+(+52);
	i1 v9703 = *(i1*)(intptr_t)v9702;
	i1 v9704 = (i1)+1;
	if (v9703==v9704) goto c02_06fe; else goto c02_06fd;

c02_06fd:;

	i8 v9705 = (i8)(intptr_t)(f294_SymbolRedeclarationError);

	((void(*)(void))(intptr_t)v9705)();

c02_06fe:;

c02_06fa:;

	goto c02_06f8;

c02_06f9:;

	if (v9695 != +0) goto c02_06ff;

	i8 v9706 = (i8)(intptr_t)(f66_AllocNewType);
	i8 v9707;

	((void(*)(i8* /* type */))(intptr_t)v9706)(&v9707);
	i8 v9708 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v9708 = v9707;

	i1 v9709 = (i1)+30;
	i8 v9710 = (i8)(intptr_t)(ws+3248);
	i8 v9711 = *(i8*)(intptr_t)v9710;
	i8 v9712 = v9711+(+32);
	*(i1*)(intptr_t)v9712 = v9709;

	i8 v9713 = (i8)(intptr_t)(ws+72);
	i8 v9714 = *(i8*)(intptr_t)v9713;
	i8 v9715 = (i8)(intptr_t)(ws+3248);
	i8 v9716 = *(i8*)(intptr_t)v9715;
	*(i8*)(intptr_t)v9716 = v9714;

	i8 v9717 = (i8)(intptr_t)(ws+3248);
	i8 v9718 = *(i8*)(intptr_t)v9717;
	i8 v9719 = (i8)(intptr_t)(ws+72);
	i8 v9720 = *(i8*)(intptr_t)v9719;
	i8 v9721 = v9720+(+32);
	*(i8*)(intptr_t)v9721 = v9718;

	goto c02_06f8;

c02_06ff:;

	i8 v9722 = (i8)(intptr_t)(f294_SymbolRedeclarationError);

	((void(*)(void))(intptr_t)v9722)();

c02_06f8:;


	i1 v9723 = (i1)+5;
	i8 v9724 = (i8)(intptr_t)(ws+72);
	i8 v9725 = *(i8*)(intptr_t)v9724;
	i8 v9726 = v9725+(+52);
	*(i1*)(intptr_t)v9726 = v9723;

endsub:;
}
	void f223_CheckNotPartialType(i8 /* type */);
	void f232_IsRecord(i1* /* result */, i8 /* type */);
	void f74_StartError(void);
	void f12_print(i8 /* ptr */);
const i1 c02_s018e[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x74,0x79,0x70,0x65,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// reduce_102 workspace at ws+3328 length ws+0
void f415_reduce_102(void) {

	i8 v9727 = (i8)(intptr_t)(ws+3248);
	i8 v9728 = *(i8*)(intptr_t)v9727;
	i8 v9729 = (i8)(intptr_t)(f223_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v9729)(v9728);

	i8 v9730 = (i8)(intptr_t)(ws+3248);
	i8 v9731 = *(i8*)(intptr_t)v9730;
	i8 v9732 = (i8)(intptr_t)(f232_IsRecord);
	i1 v9733;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9732)(&v9733, v9731);
	i1 v9734 = (i1)+0;
	if (v9733==v9734) goto c02_0703; else goto c02_0704;

c02_0703:;

	i8 v9735 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v9735)();

	i8 v9736 = (i8)(intptr_t)(ws+3248);
	i8 v9737 = *(i8*)(intptr_t)v9736;
	i8 v9738 = v9737+(+32);
	i8 v9739 = *(i8*)(intptr_t)v9738;
	i8 v9740 = v9739+(+8);
	i8 v9741 = *(i8*)(intptr_t)v9740;
	i8 v9742 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9742)(v9741);

	i8 v9743 = (i8)(intptr_t)c02_s018e;
	i8 v9744 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9744)(v9743);

	i8 v9745 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v9745)();

c02_0704:;

c02_0700:;

	i8 v9746 = (i8)(intptr_t)(ws+3248);
	i8 v9747 = *(i8*)(intptr_t)v9746;
	i8 v9748 = v9747+(+53);
	i1 v9749 = *(i1*)(intptr_t)v9748;
	i8 v9750 = (i8)(intptr_t)(ws+72);
	i8 v9751 = *(i8*)(intptr_t)v9750;
	i8 v9752 = v9751+(+53);
	*(i1*)(intptr_t)v9752 = v9749;

	i8 v9753 = (i8)(intptr_t)(ws+3248);
	i8 v9754 = *(i8*)(intptr_t)v9753;
	i8 v9755 = v9754+(+48);
	i2 v9756 = *(i2*)(intptr_t)v9755;
	i8 v9757 = (i8)(intptr_t)(ws+72);
	i8 v9758 = *(i8*)(intptr_t)v9757;
	i8 v9759 = v9758+(+48);
	*(i2*)(intptr_t)v9759 = v9756;

	i8 v9760 = (i8)(intptr_t)(ws+3248);
	i8 v9761 = *(i8*)(intptr_t)v9760;
	i8 v9762 = (i8)(intptr_t)(ws+72);
	i8 v9763 = *(i8*)(intptr_t)v9762;
	i8 v9764 = v9763+(+16);
	*(i8*)(intptr_t)v9764 = v9761;

endsub:;
}
	void f223_CheckNotPartialType(i8 /* type */);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f244_ArchInitMember(i2 /* position */, i8 /* member */, i8 /* containing */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_103 workspace at ws+3328 length ws+0
void f416_reduce_103(void) {

	i8 v9765 = (i8)(intptr_t)(ws+3256);
	i8 v9766 = *(i8*)(intptr_t)v9765;
	i8 v9767 = (i8)(intptr_t)(f223_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v9767)(v9766);

	i8 v9768 = (i8)(intptr_t)(ws+72);
	i8 v9769 = *(i8*)(intptr_t)v9768;
	i8 v9770 = v9769+(+53);
	i1 v9771 = *(i1*)(intptr_t)v9770;
	i8 v9772 = (i8)(intptr_t)(ws+3256);
	i8 v9773 = *(i8*)(intptr_t)v9772;
	i8 v9774 = v9773+(+53);
	i1 v9775 = *(i1*)(intptr_t)v9774;
	if (v9771<v9775) goto c02_0708; else goto c02_0709;

c02_0708:;

	i8 v9776 = (i8)(intptr_t)(ws+3256);
	i8 v9777 = *(i8*)(intptr_t)v9776;
	i8 v9778 = v9777+(+53);
	i1 v9779 = *(i1*)(intptr_t)v9778;
	i8 v9780 = (i8)(intptr_t)(ws+72);
	i8 v9781 = *(i8*)(intptr_t)v9780;
	i8 v9782 = v9781+(+53);
	*(i1*)(intptr_t)v9782 = v9779;

c02_0709:;

c02_0705:;

	i1 v9783 = (i1)+28;
	i8 v9784 = (i8)(intptr_t)(ws+3280);
	i8 v9785 = *(i8*)(intptr_t)v9784;
	i8 v9786 = v9785+(+32);
	*(i1*)(intptr_t)v9786 = v9783;

	i8 v9787 = (i8)+27;
	i8 v9788 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v9789;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v9788)(&v9789, v9787);
	i8 v9790 = (i8)(intptr_t)(ws+3280);
	i8 v9791 = *(i8*)(intptr_t)v9790;
	*(i8*)(intptr_t)v9791 = v9789;

	i8 v9792 = (i8)(intptr_t)(ws+3256);
	i8 v9793 = *(i8*)(intptr_t)v9792;
	i8 v9794 = (i8)(intptr_t)(ws+3280);
	i8 v9795 = *(i8*)(intptr_t)v9794;
	i8 v9796 = *(i8*)(intptr_t)v9795;
	*(i8*)(intptr_t)v9796 = v9793;

	i8 v9797 = (i8)(intptr_t)(ws+72);
	i8 v9798 = *(i8*)(intptr_t)v9797;
	i8 v9799 = (i8)(intptr_t)(ws+3280);
	i8 v9800 = *(i8*)(intptr_t)v9799;
	i8 v9801 = (i8)(intptr_t)(ws+3272);
	i2 v9802 = *(i2*)(intptr_t)v9801;
	i8 v9803 = (i8)(intptr_t)(f244_ArchInitMember);

	((void(*)(i2 /* position */, i8 /* member */, i8 /* containing */))(intptr_t)v9803)(v9802, v9800, v9798);

	i1 v9804 = (i1)+6;
	i8 v9805 = (i8)(intptr_t)(ws+3264);
	i8 v9806 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9806)(v9805, v9804);

	i1 v9807 = (i1)+22;
	i8 v9808 = (i8)(intptr_t)(ws+3248);
	i8 v9809 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9809)(v9808, v9807);

endsub:;
}

// reduce_104 workspace at ws+3328 length ws+0
void f417_reduce_104(void) {

	i8 v9810 = (i8)(intptr_t)(ws+72);
	i8 v9811 = *(i8*)(intptr_t)v9810;
	i8 v9812 = v9811+(+48);
	i2 v9813 = *(i2*)(intptr_t)v9812;
	i8 v9814 = (i8)(intptr_t)(ws+3240);
	*(i2*)(intptr_t)v9814 = v9813;

endsub:;
}
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_105 workspace at ws+3328 length ws+0
void f418_reduce_105(void) {

	i8 v9815 = (i8)(intptr_t)(ws+3256);
	i4 v9816 = *(i4*)(intptr_t)v9815;
	i2 v9817 = (s2)(s4)v9816;
	i8 v9818 = (i8)(intptr_t)(ws+3240);
	*(i2*)(intptr_t)v9818 = v9817;

	i1 v9819 = (i1)+16;
	i8 v9820 = (i8)(intptr_t)(ws+3264);
	i8 v9821 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9821)(v9820, v9819);

	i1 v9822 = (i1)+4;
	i8 v9823 = (i8)(intptr_t)(ws+3248);
	i8 v9824 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9824)(v9823, v9822);

endsub:;
}
	void f220_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// reduce_106 workspace at ws+3328 length ws+0
void f419_reduce_106(void) {

	i8 v9825 = (i8)(intptr_t)(ws+72);
	i8 v9826 = *(i8*)(intptr_t)v9825;
	i8 v9827 = (i8)(intptr_t)(ws+3248);
	i8 v9828 = *(i8*)(intptr_t)v9827;
	i8 v9829 = (i8)(intptr_t)(f220_AddSymbol);
	i8 v9830;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v9829)(&v9830, v9828, v9826);
	i8 v9831 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9831 = v9830;

	i8 v9832 = (i8)(intptr_t)(ws+72);
	i8 v9833 = *(i8*)(intptr_t)v9832;
	i8 v9834 = v9833+(+24);
	i1 v9835 = *(i1*)(intptr_t)v9834;
	i1 v9836 = v9835+(+1);
	i8 v9837 = (i8)(intptr_t)(ws+72);
	i8 v9838 = *(i8*)(intptr_t)v9837;
	i8 v9839 = v9838+(+24);
	*(i1*)(intptr_t)v9839 = v9836;

endsub:;
}
	void f296_CheckEndOfInitialiser(void);
	void f159_MidEndinit(i8* /* m */);
	void f258_Generate(i8 /* statement */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_107 workspace at ws+3328 length ws+0
void f420_reduce_107(void) {

	i8 v9840 = (i8)(intptr_t)(f296_CheckEndOfInitialiser);

	((void(*)(void))(intptr_t)v9840)();

	i8 v9841 = (i8)(intptr_t)(f159_MidEndinit);
	i8 v9842;

	((void(*)(i8* /* m */))(intptr_t)v9841)(&v9842);
	i8 v9843 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9843)(v9842);

	i1 v9844 = (i1)+31;
	i8 v9845 = (i8)(intptr_t)(ws+3272);
	i8 v9846 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9846)(v9845, v9844);

	i1 v9847 = (i1)+32;
	i8 v9848 = (i8)(intptr_t)(ws+3256);
	i8 v9849 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9849)(v9848, v9847);

	i1 v9850 = (i1)+22;
	i8 v9851 = (i8)(intptr_t)(ws+3248);
	i8 v9852 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9852)(v9851, v9850);

endsub:;
}
	void f223_CheckNotPartialType(i8 /* type */);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f237_AllocLabel(i2* /* label */);
	void f227_IsArray(i1* /* result */, i8 /* type */);
	void f232_IsRecord(i1* /* result */, i8 /* type */);
const i1 c02_s018f[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x73,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x20,0x6f,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0x73,0x20,0x6f,0x72,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x73,0 };
	void f76_SimpleError(i8 /* message */);
	void f232_IsRecord(i1* /* result */, i8 /* type */);
const i1 c02_s0190[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x27,0x74,0x20,0x73,0x74,0x61,0x74,0x69,0x63,0x61,0x6c,0x6c,0x79,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x20,0x61,0x6e,0x20,0x69,0x6e,0x68,0x65,0x72,0x69,0x74,0x65,0x64,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0 };
	void f76_SimpleError(i8 /* message */);
	void f232_IsRecord(i1* /* result */, i8 /* type */);
	void f126_MidStartinit(i8* /* m */, i8 /* sym */);
	void f258_Generate(i8 /* statement */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_108 workspace at ws+3328 length ws+0
void f421_reduce_108(void) {

	i8 v9853 = (i8)(intptr_t)(ws+3256);
	i8 v9854 = *(i8*)(intptr_t)v9853;
	i8 v9855 = (i8)(intptr_t)(f223_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v9855)(v9854);

	i1 v9856 = (i1)+28;
	i8 v9857 = (i8)(intptr_t)(ws+3272);
	i8 v9858 = *(i8*)(intptr_t)v9857;
	i8 v9859 = v9858+(+32);
	*(i1*)(intptr_t)v9859 = v9856;

	i8 v9860 = (i8)+27;
	i8 v9861 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v9862;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v9861)(&v9862, v9860);
	i8 v9863 = (i8)(intptr_t)(ws+3272);
	i8 v9864 = *(i8*)(intptr_t)v9863;
	*(i8*)(intptr_t)v9864 = v9862;

	i8 v9865 = (i8)(intptr_t)(ws+3256);
	i8 v9866 = *(i8*)(intptr_t)v9865;
	i8 v9867 = (i8)(intptr_t)(ws+3272);
	i8 v9868 = *(i8*)(intptr_t)v9867;
	i8 v9869 = *(i8*)(intptr_t)v9868;
	*(i8*)(intptr_t)v9869 = v9866;

	i8 v9870 = (i8)(intptr_t)(ws+40);
	i8 v9871 = *(i8*)(intptr_t)v9870;
	i8 v9872 = (i8)(intptr_t)(ws+3272);
	i8 v9873 = *(i8*)(intptr_t)v9872;
	i8 v9874 = *(i8*)(intptr_t)v9873;
	i8 v9875 = v9874+(+8);
	*(i8*)(intptr_t)v9875 = v9871;

	i1 v9876 = (i1)+255;
	i8 v9877 = (i8)(intptr_t)(ws+3272);
	i8 v9878 = *(i8*)(intptr_t)v9877;
	i8 v9879 = *(i8*)(intptr_t)v9878;
	i8 v9880 = v9879+(+26);
	*(i1*)(intptr_t)v9880 = v9876;

	i8 v9881 = (i8)(intptr_t)(f237_AllocLabel);
	i2 v9882;

	((void(*)(i2* /* label */))(intptr_t)v9881)(&v9882);
	i8 v9883 = (i8)(intptr_t)(ws+3272);
	i8 v9884 = *(i8*)(intptr_t)v9883;
	i8 v9885 = *(i8*)(intptr_t)v9884;
	i8 v9886 = v9885+(+24);
	*(i2*)(intptr_t)v9886 = v9882;

	i8 v9887 = (i8)(intptr_t)(ws+3256);
	i8 v9888 = *(i8*)(intptr_t)v9887;
	i8 v9889 = (i8)(intptr_t)(f227_IsArray);
	i1 v9890;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9889)(&v9890, v9888);
	i1 v9891 = (i1)+0;
	if (v9890==v9891) goto c02_0711; else goto c02_0710;

c02_0711:;

	i8 v9892 = (i8)(intptr_t)(ws+3256);
	i8 v9893 = *(i8*)(intptr_t)v9892;
	i8 v9894 = (i8)(intptr_t)(f232_IsRecord);
	i1 v9895;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9894)(&v9895, v9893);
	i1 v9896 = (i1)+0;
	if (v9895==v9896) goto c02_070f; else goto c02_0710;

c02_070f:;

	i8 v9897 = (i8)(intptr_t)c02_s018f;
	i8 v9898 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9898)(v9897);

c02_0710:;

c02_070a:;

	i8 v9899 = (i8)(intptr_t)(ws+3256);
	i8 v9900 = *(i8*)(intptr_t)v9899;
	i8 v9901 = (i8)(intptr_t)(f232_IsRecord);
	i1 v9902;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9901)(&v9902, v9900);
	i1 v9903 = (i1)+0;
	if (v9902==v9903) goto c02_0718; else goto c02_0719;

c02_0719:;

	i8 v9904 = (i8)(intptr_t)(ws+3256);
	i8 v9905 = *(i8*)(intptr_t)v9904;
	i8 v9906 = v9905+(+16);
	i8 v9907 = *(i8*)(intptr_t)v9906;
	i8 v9908 = (i8)+0;
	if (v9907==v9908) goto c02_0718; else goto c02_0717;

c02_0717:;

	i8 v9909 = (i8)(intptr_t)c02_s0190;
	i8 v9910 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9910)(v9909);

c02_0718:;

c02_0712:;

	i8 v9911 = (i8)(intptr_t)(ws+3256);
	i8 v9912 = *(i8*)(intptr_t)v9911;
	i8 v9913 = (i8)(intptr_t)(f232_IsRecord);
	i1 v9914;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9913)(&v9914, v9912);
	i1 v9915 = (i1)+0;
	if (v9914==v9915) goto c02_071e; else goto c02_071d;

c02_071d:;

	i8 v9916 = (i8)(intptr_t)(ws+3256);
	i8 v9917 = *(i8*)(intptr_t)v9916;
	i8 v9918 = *(i8*)(intptr_t)v9917;
	i8 v9919 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v9919 = v9918;

c02_071e:;

c02_071a:;

	i8 v9920 = (i8)(intptr_t)(ws+3256);
	i8 v9921 = *(i8*)(intptr_t)v9920;
	i8 v9922 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v9922 = v9921;

	i2 v9923 = (i2)+0;
	i8 v9924 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v9924 = v9923;

	i2 v9925 = (i2)+0;
	i8 v9926 = (i8)(intptr_t)(ws+1562);
	*(i2*)(intptr_t)v9926 = v9925;

	i8 v9927 = (i8)(intptr_t)(ws+3272);
	i8 v9928 = *(i8*)(intptr_t)v9927;
	i8 v9929 = (i8)(intptr_t)(f126_MidStartinit);
	i8 v9930;

	((void(*)(i8* /* m */, i8 /* sym */))(intptr_t)v9929)(&v9930, v9928);
	i8 v9931 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9931)(v9930);

	i1 v9932 = (i1)+6;
	i8 v9933 = (i8)(intptr_t)(ws+3264);
	i8 v9934 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9934)(v9933, v9932);

	i1 v9935 = (i1)+2;
	i8 v9936 = (i8)(intptr_t)(ws+3248);
	i8 v9937 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9937)(v9936, v9935);

endsub:;
}
	void f300_GetInitedMemberChecked(i8* /* member */, i8* /* type */);
	void f298_AlignTo(i1 /* alignment */);
	void f229_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s0191[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x61,0x6e,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };
	void f76_SimpleError(i8 /* message */);
	void f105_MidInit(i8* /* m */, i4 /* value */, i1 /* width */);
	void f258_Generate(i8 /* statement */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s0192[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x61,0x20,0x73,0x74,0x72,0x69,0x6e,0x67,0 };
	void f76_SimpleError(i8 /* message */);
	void f150_MidInitstring(i8* /* m */, i8 /* text */);
	void f258_Generate(i8 /* statement */);
const i1 c02_s0193[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6f,0x66,0x20,0x77,0x72,0x6f,0x6e,0x67,0x20,0x74,0x79,0x70,0x65,0 };
	void f76_SimpleError(i8 /* message */);
	void f164_MidInitaddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f258_Generate(i8 /* statement */);
const i1 c02_s0194[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6f,0x66,0x20,0x77,0x72,0x6f,0x6e,0x67,0x20,0x74,0x79,0x70,0x65,0 };
	void f76_SimpleError(i8 /* message */);
	void f142_MidInitsubref(i8* /* m */, i8 /* subr */);
	void f258_Generate(i8 /* statement */);
	void f291_parser_i_constant_error(void);
	void f63_Discard(i8 /* node */);

// reduce_109 workspace at ws+3328 length ws+18
void f422_reduce_109(void) {

	i8 v9938 = (i8)(intptr_t)(f300_GetInitedMemberChecked);
	i8 v9939;
	i8 v9940;

	((void(*)(i8* /* member */, i8* /* type */))(intptr_t)v9938)(&v9939, &v9940);

	i8 v9941 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v9941 = v9940;

	i8 v9942 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v9942 = v9939;

	i8 v9943 = (i8)(intptr_t)(ws+3336);
	i8 v9944 = *(i8*)(intptr_t)v9943;
	i8 v9945 = v9944+(+53);
	i1 v9946 = *(i1*)(intptr_t)v9945;
	i8 v9947 = (i8)(intptr_t)(f298_AlignTo);

	((void(*)(i1 /* alignment */))(intptr_t)v9947)(v9946);

	i8 v9948 = (i8)(intptr_t)(ws+3336);
	i8 v9949 = *(i8*)(intptr_t)v9948;
	i8 v9950 = v9949+(+48);
	i2 v9951 = *(i2*)(intptr_t)v9950;
	i8 v9952 = (i8)(intptr_t)(ws+3344);
	*(i2*)(intptr_t)v9952 = v9951;

	i8 v9953 = (i8)(intptr_t)(ws+3248);
	i8 v9954 = *(i8*)(intptr_t)v9953;
	i8 v9955 = v9954+(+40);
	i1 v9956 = *(i1*)(intptr_t)v9955;

	if (v9956 != +45) goto c02_0720;

	i8 v9957 = (i8)(intptr_t)(ws+3336);
	i8 v9958 = *(i8*)(intptr_t)v9957;
	i8 v9959 = (i8)(intptr_t)(f229_IsNum);
	i1 v9960;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9959)(&v9960, v9958);
	i1 v9961 = (i1)+0;
	if (v9960==v9961) goto c02_0724; else goto c02_0725;

c02_0724:;

	i8 v9962 = (i8)(intptr_t)c02_s0191;
	i8 v9963 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9963)(v9962);

c02_0725:;

c02_0721:;

	i8 v9964 = (i8)(intptr_t)(ws+3344);
	i2 v9965 = *(i2*)(intptr_t)v9964;
	i1 v9966 = v9965;
	i8 v9967 = (i8)(intptr_t)(ws+3248);
	i8 v9968 = *(i8*)(intptr_t)v9967;
	i4 v9969 = *(i4*)(intptr_t)v9968;
	i8 v9970 = (i8)(intptr_t)(f105_MidInit);
	i8 v9971;

	((void(*)(i8* /* m */, i4 /* value */, i1 /* width */))(intptr_t)v9970)(&v9971, v9969, v9966);
	i8 v9972 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9972)(v9971);

	goto c02_071f;

c02_0720:;

	if (v9956 != +46) goto c02_0726;

	i8 v9973 = (i8)(intptr_t)(ws+3336);
	i8 v9974 = *(i8*)(intptr_t)v9973;
	i8 v9975 = (i8)(intptr_t)(f68_IsPtr);
	i1 v9976;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9975)(&v9976, v9974);
	i1 v9977 = (i1)+0;
	if (v9976==v9977) goto c02_072c; else goto c02_072e;

c02_072e:;

	i8 v9978 = (i8)(intptr_t)(ws+3336);
	i8 v9979 = *(i8*)(intptr_t)v9978;
	i8 v9980 = *(i8*)(intptr_t)v9979;
	i8 v9981 = (i8)(intptr_t)(ws+1512);
	i8 v9982 = *(i8*)(intptr_t)v9981;
	if (v9980==v9982) goto c02_072d; else goto c02_072c;

c02_072c:;

	i8 v9983 = (i8)(intptr_t)c02_s0192;
	i8 v9984 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9984)(v9983);

c02_072d:;

c02_0727:;

	i8 v9985 = (i8)(intptr_t)(ws+3248);
	i8 v9986 = *(i8*)(intptr_t)v9985;
	i8 v9987 = *(i8*)(intptr_t)v9986;
	i8 v9988 = (i8)(intptr_t)(f150_MidInitstring);
	i8 v9989;

	((void(*)(i8* /* m */, i8 /* text */))(intptr_t)v9988)(&v9989, v9987);
	i8 v9990 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9990)(v9989);

	goto c02_071f;

c02_0726:;

	if (v9956 != +47) goto c02_072f;

	i8 v9991 = (i8)(intptr_t)(ws+3336);
	i8 v9992 = *(i8*)(intptr_t)v9991;
	i8 v9993 = (i8)(intptr_t)(ws+3248);
	i8 v9994 = *(i8*)(intptr_t)v9993;
	i8 v9995 = v9994+(+16);
	i8 v9996 = *(i8*)(intptr_t)v9995;
	if (v9992==v9996) goto c02_0734; else goto c02_0733;

c02_0733:;

	i8 v9997 = (i8)(intptr_t)c02_s0193;
	i8 v9998 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9998)(v9997);

c02_0734:;

c02_0730:;

	i8 v9999 = (i8)(intptr_t)(ws+3248);
	i8 v10000 = *(i8*)(intptr_t)v9999;
	i8 v10001 = *(i8*)(intptr_t)v10000;
	i8 v10002 = (i8)(intptr_t)(ws+3248);
	i8 v10003 = *(i8*)(intptr_t)v10002;
	i8 v10004 = v10003+(+8);
	i2 v10005 = *(i2*)(intptr_t)v10004;
	i8 v10006 = (i8)(intptr_t)(f164_MidInitaddress);
	i8 v10007;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v10006)(&v10007, v10005, v10001);
	i8 v10008 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10008)(v10007);

	goto c02_071f;

c02_072f:;

	if (v9956 != +48) goto c02_0735;

	i8 v10009 = (i8)(intptr_t)(ws+3336);
	i8 v10010 = *(i8*)(intptr_t)v10009;
	i8 v10011 = (i8)(intptr_t)(ws+3248);
	i8 v10012 = *(i8*)(intptr_t)v10011;
	i8 v10013 = v10012+(+16);
	i8 v10014 = *(i8*)(intptr_t)v10013;
	if (v10010==v10014) goto c02_073a; else goto c02_0739;

c02_0739:;

	i8 v10015 = (i8)(intptr_t)c02_s0194;
	i8 v10016 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10016)(v10015);

c02_073a:;

c02_0736:;

	i8 v10017 = (i8)(intptr_t)(ws+3248);
	i8 v10018 = *(i8*)(intptr_t)v10017;
	i8 v10019 = *(i8*)(intptr_t)v10018;
	i8 v10020 = (i8)(intptr_t)(f142_MidInitsubref);
	i8 v10021;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v10020)(&v10021, v10019);
	i8 v10022 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10022)(v10021);

	goto c02_071f;

c02_0735:;

	i8 v10023 = (i8)(intptr_t)(f291_parser_i_constant_error);

	((void(*)(void))(intptr_t)v10023)();

c02_071f:;


	i8 v10024 = (i8)(intptr_t)(ws+3248);
	i8 v10025 = *(i8*)(intptr_t)v10024;
	i8 v10026 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v10026)(v10025);

	i8 v10027 = (i8)(intptr_t)(ws+1560);
	i2 v10028 = *(i2*)(intptr_t)v10027;
	i8 v10029 = (i8)(intptr_t)(ws+3344);
	i2 v10030 = *(i2*)(intptr_t)v10029;
	i2 v10031 = v10028+v10030;
	i8 v10032 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v10032 = v10031;

	i8 v10033 = (i8)(intptr_t)(ws+1562);
	i2 v10034 = *(i2*)(intptr_t)v10033;
	i8 v10035 = (i8)(intptr_t)(ws+3344);
	i2 v10036 = *(i2*)(intptr_t)v10035;
	i2 v10037 = v10034+v10036;
	i8 v10038 = (i8)(intptr_t)(ws+1562);
	*(i2*)(intptr_t)v10038 = v10037;

endsub:;
}
	void f296_CheckEndOfInitialiser(void);
	void f34_Free(i8 /* block */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_110 workspace at ws+3328 length ws+0
void f423_reduce_110(void) {

	i8 v10039 = (i8)(intptr_t)(f296_CheckEndOfInitialiser);

	((void(*)(void))(intptr_t)v10039)();

	i8 v10040 = (i8)(intptr_t)(ws+1560);
	i2 v10041 = *(i2*)(intptr_t)v10040;
	i8 v10042 = (i8)(intptr_t)(ws+3264);
	i8 v10043 = *(i8*)(intptr_t)v10042;
	i8 v10044 = v10043+(+16);
	i2 v10045 = *(i2*)(intptr_t)v10044;
	i2 v10046 = v10041+v10045;
	i8 v10047 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v10047 = v10046;

	i8 v10048 = (i8)(intptr_t)(ws+3264);
	i8 v10049 = *(i8*)(intptr_t)v10048;
	i8 v10050 = *(i8*)(intptr_t)v10049;
	i8 v10051 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v10051 = v10050;

	i8 v10052 = (i8)(intptr_t)(ws+3264);
	i8 v10053 = *(i8*)(intptr_t)v10052;
	i8 v10054 = v10053+(+8);
	i8 v10055 = *(i8*)(intptr_t)v10054;
	i8 v10056 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v10056 = v10055;

	i8 v10057 = (i8)(intptr_t)(ws+3264);
	i8 v10058 = *(i8*)(intptr_t)v10057;
	i8 v10059 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v10059)(v10058);

	i1 v10060 = (i1)+32;
	i8 v10061 = (i8)(intptr_t)(ws+3248);
	i8 v10062 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10062)(v10061, v10060);

endsub:;
}
	void f300_GetInitedMemberChecked(i8* /* member */, i8* /* type */);
	void f298_AlignTo(i1 /* alignment */);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f232_IsRecord(i1* /* result */, i8 /* type */);
	void f227_IsArray(i1* /* result */, i8 /* type */);
const i1 c02_s0195[] = { 0x62,0x72,0x61,0x63,0x65,0x64,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x64,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x20,0x61,0x72,0x72,0x61,0x79,0x73,0x20,0x6f,0x72,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x73,0 };
	void f76_SimpleError(i8 /* message */);

// reduce_111 workspace at ws+3328 length ws+16
void f424_reduce_111(void) {

	i8 v10063 = (i8)(intptr_t)(f300_GetInitedMemberChecked);
	i8 v10064;
	i8 v10065;

	((void(*)(i8* /* member */, i8* /* type */))(intptr_t)v10063)(&v10064, &v10065);

	i8 v10066 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v10066 = v10065;

	i8 v10067 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v10067 = v10064;

	i8 v10068 = (i8)(intptr_t)(ws+3336);
	i8 v10069 = *(i8*)(intptr_t)v10068;
	i8 v10070 = v10069+(+53);
	i1 v10071 = *(i1*)(intptr_t)v10070;
	i8 v10072 = (i8)(intptr_t)(f298_AlignTo);

	((void(*)(i1 /* alignment */))(intptr_t)v10072)(v10071);

	i8 v10073 = (i8)+18;
	i8 v10074 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v10075;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v10074)(&v10075, v10073);
	i8 v10076 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v10076 = v10075;

	i8 v10077 = (i8)(intptr_t)(ws+72);
	i8 v10078 = *(i8*)(intptr_t)v10077;
	i8 v10079 = (i8)(intptr_t)(ws+3240);
	i8 v10080 = *(i8*)(intptr_t)v10079;
	*(i8*)(intptr_t)v10080 = v10078;

	i8 v10081 = (i8)(intptr_t)(ws+1552);
	i8 v10082 = *(i8*)(intptr_t)v10081;
	i8 v10083 = (i8)(intptr_t)(ws+3240);
	i8 v10084 = *(i8*)(intptr_t)v10083;
	i8 v10085 = v10084+(+8);
	*(i8*)(intptr_t)v10085 = v10082;

	i8 v10086 = (i8)(intptr_t)(ws+1560);
	i2 v10087 = *(i2*)(intptr_t)v10086;
	i8 v10088 = (i8)(intptr_t)(ws+3240);
	i8 v10089 = *(i8*)(intptr_t)v10088;
	i8 v10090 = v10089+(+16);
	*(i2*)(intptr_t)v10090 = v10087;

	i8 v10091 = (i8)(intptr_t)(ws+3336);
	i8 v10092 = *(i8*)(intptr_t)v10091;
	i8 v10093 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v10093 = v10092;

	i2 v10094 = (i2)+0;
	i8 v10095 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v10095 = v10094;

	i8 v10096 = (i8)(intptr_t)(ws+3336);
	i8 v10097 = *(i8*)(intptr_t)v10096;
	i8 v10098 = (i8)(intptr_t)(f232_IsRecord);
	i1 v10099;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v10098)(&v10099, v10097);
	i1 v10100 = (i1)+0;
	if (v10099==v10100) goto c02_073f; else goto c02_073e;

c02_073e:;

	i8 v10101 = (i8)(intptr_t)(ws+3336);
	i8 v10102 = *(i8*)(intptr_t)v10101;
	i8 v10103 = *(i8*)(intptr_t)v10102;
	i8 v10104 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v10104 = v10103;

	goto c02_073b;

c02_073f:;

	i8 v10105 = (i8)(intptr_t)(ws+3336);
	i8 v10106 = *(i8*)(intptr_t)v10105;
	i8 v10107 = (i8)(intptr_t)(f227_IsArray);
	i1 v10108;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v10107)(&v10108, v10106);
	i1 v10109 = (i1)+0;
	if (v10108==v10109) goto c02_0743; else goto c02_0742;

c02_0742:;

	i8 v10110 = (i8)+0;
	i8 v10111 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v10111 = v10110;

	goto c02_073b;

c02_0743:;

	i8 v10112 = (i8)(intptr_t)c02_s0195;
	i8 v10113 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10113)(v10112);

c02_073b:;

endsub:;
}
	void f135_MidAsmend(i8* /* m */);
	void f258_Generate(i8 /* statement */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_112 workspace at ws+3328 length ws+0
void f425_reduce_112(void) {

	i8 v10114 = (i8)(intptr_t)(f135_MidAsmend);
	i8 v10115;

	((void(*)(i8* /* m */))(intptr_t)v10114)(&v10115);
	i8 v10116 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10116)(v10115);

	i1 v10117 = (i1)+22;
	i8 v10118 = (i8)(intptr_t)(ws+3248);
	i8 v10119 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10119)(v10118, v10117);

endsub:;
}
	void f125_MidAsmstart(i8* /* m */);
	void f258_Generate(i8 /* statement */);

// reduce_113 workspace at ws+3328 length ws+0
void f426_reduce_113(void) {

	i8 v10120 = (i8)(intptr_t)(f125_MidAsmstart);
	i8 v10121;

	((void(*)(i8* /* m */))(intptr_t)v10120)(&v10121);
	i8 v10122 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10122)(v10121);

endsub:;
}
	void f152_MidAsmtext(i8* /* m */, i8 /* text */);
	void f258_Generate(i8 /* statement */);
	void f34_Free(i8 /* block */);

// reduce_114 workspace at ws+3328 length ws+0
void f427_reduce_114(void) {

	i8 v10123 = (i8)(intptr_t)(ws+3248);
	i8 v10124 = *(i8*)(intptr_t)v10123;
	i8 v10125 = (i8)(intptr_t)(f152_MidAsmtext);
	i8 v10126;

	((void(*)(i8* /* m */, i8 /* text */))(intptr_t)v10125)(&v10126, v10124);
	i8 v10127 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10127)(v10126);

	i8 v10128 = (i8)(intptr_t)(ws+3248);
	i8 v10129 = *(i8*)(intptr_t)v10128;
	i8 v10130 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v10130)(v10129);

endsub:;
}
	void f109_MidAsmvalue(i8* /* m */, i4 /* value */);
	void f258_Generate(i8 /* statement */);

// reduce_115 workspace at ws+3328 length ws+0
void f428_reduce_115(void) {

	i8 v10131 = (i8)(intptr_t)(ws+3248);
	i4 v10132 = *(i4*)(intptr_t)v10131;
	i8 v10133 = (i8)(intptr_t)(f109_MidAsmvalue);
	i8 v10134;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v10133)(&v10134, v10132);
	i8 v10135 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10135)(v10134);

endsub:;
}
const i1 c02_s0196[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x65,0x6d,0x69,0x74,0x20,0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x73,0x20,0x74,0x6f,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x73,0x2c,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x73,0x2c,0x20,0x6f,0x72,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x73,0 };
	void f76_SimpleError(i8 /* message */);

// bad_reference workspace at ws+3328 length ws+0
void f430_bad_reference(void) {

	i8 v10136 = (i8)(intptr_t)c02_s0196;
	i8 v10137 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10137)(v10136);

endsub:;
}
	void f228_IsSubroutine(i1* /* result */, i8 /* type */);
	void f202_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	void f115_MidAsmsubref(i8* /* m */, i8 /* subr */);
	void f258_Generate(i8 /* statement */);
	void f430_bad_reference(void);
	void f113_MidAsmsymbol(i8* /* m */, i8 /* sym */);
	void f258_Generate(i8 /* statement */);
	void f109_MidAsmvalue(i8* /* m */, i4 /* value */);
	void f258_Generate(i8 /* statement */);
	void f430_bad_reference(void);

// reduce_116 workspace at ws+3328 length ws+0
void f429_reduce_116(void) {


	i8 v10138 = (i8)(intptr_t)(ws+3248);
	i8 v10139 = *(i8*)(intptr_t)v10138;
	i8 v10140 = v10139+(+32);
	i1 v10141 = *(i1*)(intptr_t)v10140;

	if (v10141 != +30) goto c02_0745;

	i8 v10142 = (i8)(intptr_t)(ws+3248);
	i8 v10143 = *(i8*)(intptr_t)v10142;
	i8 v10144 = *(i8*)(intptr_t)v10143;
	i8 v10145 = (i8)(intptr_t)(f228_IsSubroutine);
	i1 v10146;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v10145)(&v10146, v10144);
	i1 v10147 = (i1)+0;
	if (v10146==v10147) goto c02_074a; else goto c02_0749;

c02_0749:;

	i8 v10148 = (i8)(intptr_t)(ws+40);
	i8 v10149 = *(i8*)(intptr_t)v10148;
	i8 v10150 = (i8)(intptr_t)(ws+3248);
	i8 v10151 = *(i8*)(intptr_t)v10150;
	i8 v10152 = *(i8*)(intptr_t)v10151;
	i8 v10153 = *(i8*)(intptr_t)v10152;
	i8 v10154 = (i8)(intptr_t)(f202_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v10154)(v10153, v10149);

	i8 v10155 = (i8)(intptr_t)(ws+3248);
	i8 v10156 = *(i8*)(intptr_t)v10155;
	i8 v10157 = *(i8*)(intptr_t)v10156;
	i8 v10158 = *(i8*)(intptr_t)v10157;
	i8 v10159 = (i8)(intptr_t)(f115_MidAsmsubref);
	i8 v10160;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v10159)(&v10160, v10158);
	i8 v10161 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10161)(v10160);

	goto c02_0746;

c02_074a:;

	i8 v10162 = (i8)(intptr_t)(f430_bad_reference);

	((void(*)(void))(intptr_t)v10162)();

c02_0746:;

	goto c02_0744;

c02_0745:;

	if (v10141 != +28) goto c02_074b;

	i8 v10163 = (i8)(intptr_t)(ws+3248);
	i8 v10164 = *(i8*)(intptr_t)v10163;
	i8 v10165 = (i8)(intptr_t)(f113_MidAsmsymbol);
	i8 v10166;

	((void(*)(i8* /* m */, i8 /* sym */))(intptr_t)v10165)(&v10166, v10164);
	i8 v10167 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10167)(v10166);

	goto c02_0744;

c02_074b:;

	if (v10141 != +7) goto c02_074c;

	i8 v10168 = (i8)(intptr_t)(ws+3248);
	i8 v10169 = *(i8*)(intptr_t)v10168;
	i4 v10170 = *(i4*)(intptr_t)v10169;
	i8 v10171 = (i8)(intptr_t)(f109_MidAsmvalue);
	i8 v10172;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v10171)(&v10172, v10170);
	i8 v10173 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10173)(v10172);

	goto c02_0744;

c02_074c:;

	i8 v10174 = (i8)(intptr_t)(f430_bad_reference);

	((void(*)(void))(intptr_t)v10174)();

c02_0744:;


endsub:;
}
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_122 workspace at ws+3328 length ws+0
void f431_reduce_122(void) {

	i1 v10175 = (i1)+26;
	i8 v10176 = (i8)(intptr_t)(ws+3264);
	i8 v10177 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10177)(v10176, v10175);

endsub:;
}
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_126 workspace at ws+3328 length ws+0
void f432_reduce_126(void) {

	i1 v10178 = (i1)+22;
	i8 v10179 = (i8)(intptr_t)(ws+3248);
	i8 v10180 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10180)(v10179, v10178);

endsub:;
}
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_127 workspace at ws+3328 length ws+0
void f433_reduce_127(void) {

	i1 v10181 = (i1)+25;
	i8 v10182 = (i8)(intptr_t)(ws+3280);
	i8 v10183 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10183)(v10182, v10181);

	i1 v10184 = (i1)+22;
	i8 v10185 = (i8)(intptr_t)(ws+3248);
	i8 v10186 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10186)(v10185, v10184);

endsub:;
}
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_128 workspace at ws+3328 length ws+0
void f434_reduce_128(void) {

	i1 v10187 = (i1)+22;
	i8 v10188 = (i8)(intptr_t)(ws+3248);
	i8 v10189 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10189)(v10188, v10187);

endsub:;
}
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_129 workspace at ws+3328 length ws+0
void f435_reduce_129(void) {

	i1 v10190 = (i1)+22;
	i8 v10191 = (i8)(intptr_t)(ws+3248);
	i8 v10192 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10192)(v10191, v10190);

endsub:;
}
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_135 workspace at ws+3328 length ws+0
void f436_reduce_135(void) {

	i1 v10193 = (i1)+45;
	i8 v10194 = (i8)(intptr_t)(ws+3256);
	i8 v10195 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10195)(v10194, v10193);

endsub:;
}
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_138 workspace at ws+3328 length ws+0
void f437_reduce_138(void) {

	i1 v10196 = (i1)+45;
	i8 v10197 = (i8)(intptr_t)(ws+3256);
	i8 v10198 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10198)(v10197, v10196);

endsub:;
}

// reduce_default workspace at ws+3328 length ws+0
void f438_reduce_default(void) {

endsub:;
}
	void f310_reduce_0(void);
	void f311_reduce_1(void);
	void f312_reduce_2(void);
	void f313_reduce_3(void);
	void f314_reduce_4(void);
	void f315_reduce_5(void);
	void f316_reduce_6(void);
	void f317_reduce_7(void);
	void f318_reduce_8(void);
	void f319_reduce_9(void);
	void f320_reduce_10(void);
	void f321_reduce_11(void);
	void f322_reduce_12(void);
	void f323_reduce_13(void);
	void f324_reduce_14(void);
	void f325_reduce_15(void);
	void f326_reduce_16(void);
	void f327_reduce_17(void);
	void f328_reduce_18(void);
	void f329_reduce_19(void);
	void f330_reduce_20(void);
	void f331_reduce_21(void);
	void f332_reduce_22(void);
	void f333_reduce_23(void);
	void f334_reduce_24(void);
	void f335_reduce_25(void);
	void f336_reduce_26(void);
	void f337_reduce_27(void);
	void f338_reduce_28(void);
	void f339_reduce_29(void);
	void f340_reduce_30(void);
	void f341_reduce_31(void);
	void f342_reduce_32(void);
	void f343_reduce_33(void);
	void f344_reduce_34(void);
	void f345_reduce_35(void);
	void f346_reduce_36(void);
	void f347_reduce_37(void);
	void f348_reduce_38(void);
	void f349_reduce_39(void);
	void f350_reduce_40(void);
	void f351_reduce_41(void);
	void f352_reduce_42(void);
	void f353_reduce_43(void);
	void f354_reduce_44(void);
	void f355_reduce_45(void);
	void f356_reduce_46(void);
	void f357_reduce_47(void);
	void f358_reduce_48(void);
	void f359_reduce_49(void);
	void f360_reduce_50(void);
	void f361_reduce_51(void);
	void f362_reduce_52(void);
	void f363_reduce_53(void);
	void f365_reduce_54(void);
	void f366_reduce_55(void);
	void f367_reduce_56(void);
	void f369_reduce_57(void);
	void f370_reduce_58(void);
	void f371_reduce_59(void);
	void f372_reduce_60(void);
	void f373_reduce_61(void);
	void f374_reduce_62(void);
	void f375_reduce_63(void);
	void f376_reduce_64(void);
	void f377_reduce_65(void);
	void f378_reduce_66(void);
	void f379_reduce_67(void);
	void f380_reduce_68(void);
	void f381_reduce_69(void);
	void f382_reduce_70(void);
	void f383_reduce_71(void);
	void f384_reduce_72(void);
	void f385_reduce_73(void);
	void f386_reduce_74(void);
	void f387_reduce_75(void);
	void f388_reduce_76(void);
	void f389_reduce_77(void);
	void f390_reduce_78(void);
	void f391_reduce_79(void);
	void f392_reduce_80(void);
	void f393_reduce_81(void);
	void f394_reduce_82(void);
	void f395_reduce_83(void);
	void f396_reduce_84(void);
	void f397_reduce_85(void);
	void f398_reduce_86(void);
	void f400_reduce_87(void);
	void f401_reduce_88(void);
	void f402_reduce_89(void);
	void f403_reduce_90(void);
	void f404_reduce_91(void);
	void f405_reduce_92(void);
	void f406_reduce_93(void);
	void f407_reduce_94(void);
	void f408_reduce_95(void);
	void f409_reduce_96(void);
	void f410_reduce_97(void);
	void f411_reduce_98(void);
	void f412_reduce_99(void);
	void f413_reduce_100(void);
	void f414_reduce_101(void);
	void f415_reduce_102(void);
	void f416_reduce_103(void);
	void f417_reduce_104(void);
	void f418_reduce_105(void);
	void f419_reduce_106(void);
	void f420_reduce_107(void);
	void f421_reduce_108(void);
	void f422_reduce_109(void);
	void f423_reduce_110(void);
	void f424_reduce_111(void);
	void f425_reduce_112(void);
	void f426_reduce_113(void);
	void f427_reduce_114(void);
	void f428_reduce_115(void);
	void f429_reduce_116(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f431_reduce_122(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f432_reduce_126(void);
	void f433_reduce_127(void);
	void f434_reduce_128(void);
	void f435_reduce_129(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f436_reduce_135(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f437_reduce_138(void);
static data f308_yy_reduce_s074d[] = {

	{ .ptr = (void*)f310_reduce_0 },

	{ .ptr = (void*)f311_reduce_1 },

	{ .ptr = (void*)f312_reduce_2 },

	{ .ptr = (void*)f313_reduce_3 },

	{ .ptr = (void*)f314_reduce_4 },

	{ .ptr = (void*)f315_reduce_5 },

	{ .ptr = (void*)f316_reduce_6 },

	{ .ptr = (void*)f317_reduce_7 },

	{ .ptr = (void*)f318_reduce_8 },

	{ .ptr = (void*)f319_reduce_9 },

	{ .ptr = (void*)f320_reduce_10 },

	{ .ptr = (void*)f321_reduce_11 },

	{ .ptr = (void*)f322_reduce_12 },

	{ .ptr = (void*)f323_reduce_13 },

	{ .ptr = (void*)f324_reduce_14 },

	{ .ptr = (void*)f325_reduce_15 },

	{ .ptr = (void*)f326_reduce_16 },

	{ .ptr = (void*)f327_reduce_17 },

	{ .ptr = (void*)f328_reduce_18 },

	{ .ptr = (void*)f329_reduce_19 },

	{ .ptr = (void*)f330_reduce_20 },

	{ .ptr = (void*)f331_reduce_21 },

	{ .ptr = (void*)f332_reduce_22 },

	{ .ptr = (void*)f333_reduce_23 },

	{ .ptr = (void*)f334_reduce_24 },

	{ .ptr = (void*)f335_reduce_25 },

	{ .ptr = (void*)f336_reduce_26 },

	{ .ptr = (void*)f337_reduce_27 },

	{ .ptr = (void*)f338_reduce_28 },

	{ .ptr = (void*)f339_reduce_29 },

	{ .ptr = (void*)f340_reduce_30 },

	{ .ptr = (void*)f341_reduce_31 },

	{ .ptr = (void*)f342_reduce_32 },

	{ .ptr = (void*)f343_reduce_33 },

	{ .ptr = (void*)f344_reduce_34 },

	{ .ptr = (void*)f345_reduce_35 },

	{ .ptr = (void*)f346_reduce_36 },

	{ .ptr = (void*)f347_reduce_37 },

	{ .ptr = (void*)f348_reduce_38 },

	{ .ptr = (void*)f349_reduce_39 },

	{ .ptr = (void*)f350_reduce_40 },

	{ .ptr = (void*)f351_reduce_41 },

	{ .ptr = (void*)f352_reduce_42 },

	{ .ptr = (void*)f353_reduce_43 },

	{ .ptr = (void*)f354_reduce_44 },

	{ .ptr = (void*)f355_reduce_45 },

	{ .ptr = (void*)f356_reduce_46 },

	{ .ptr = (void*)f357_reduce_47 },

	{ .ptr = (void*)f358_reduce_48 },

	{ .ptr = (void*)f359_reduce_49 },

	{ .ptr = (void*)f360_reduce_50 },

	{ .ptr = (void*)f361_reduce_51 },

	{ .ptr = (void*)f362_reduce_52 },

	{ .ptr = (void*)f363_reduce_53 },

	{ .ptr = (void*)f365_reduce_54 },

	{ .ptr = (void*)f366_reduce_55 },

	{ .ptr = (void*)f367_reduce_56 },

	{ .ptr = (void*)f369_reduce_57 },

	{ .ptr = (void*)f370_reduce_58 },

	{ .ptr = (void*)f371_reduce_59 },

	{ .ptr = (void*)f372_reduce_60 },

	{ .ptr = (void*)f373_reduce_61 },

	{ .ptr = (void*)f374_reduce_62 },

	{ .ptr = (void*)f375_reduce_63 },

	{ .ptr = (void*)f376_reduce_64 },

	{ .ptr = (void*)f377_reduce_65 },

	{ .ptr = (void*)f378_reduce_66 },

	{ .ptr = (void*)f379_reduce_67 },

	{ .ptr = (void*)f380_reduce_68 },

	{ .ptr = (void*)f381_reduce_69 },

	{ .ptr = (void*)f382_reduce_70 },

	{ .ptr = (void*)f383_reduce_71 },

	{ .ptr = (void*)f384_reduce_72 },

	{ .ptr = (void*)f385_reduce_73 },

	{ .ptr = (void*)f386_reduce_74 },

	{ .ptr = (void*)f387_reduce_75 },

	{ .ptr = (void*)f388_reduce_76 },

	{ .ptr = (void*)f389_reduce_77 },

	{ .ptr = (void*)f390_reduce_78 },

	{ .ptr = (void*)f391_reduce_79 },

	{ .ptr = (void*)f392_reduce_80 },

	{ .ptr = (void*)f393_reduce_81 },

	{ .ptr = (void*)f394_reduce_82 },

	{ .ptr = (void*)f395_reduce_83 },

	{ .ptr = (void*)f396_reduce_84 },

	{ .ptr = (void*)f397_reduce_85 },

	{ .ptr = (void*)f398_reduce_86 },

	{ .ptr = (void*)f400_reduce_87 },

	{ .ptr = (void*)f401_reduce_88 },

	{ .ptr = (void*)f402_reduce_89 },

	{ .ptr = (void*)f403_reduce_90 },

	{ .ptr = (void*)f404_reduce_91 },

	{ .ptr = (void*)f405_reduce_92 },

	{ .ptr = (void*)f406_reduce_93 },

	{ .ptr = (void*)f407_reduce_94 },

	{ .ptr = (void*)f408_reduce_95 },

	{ .ptr = (void*)f409_reduce_96 },

	{ .ptr = (void*)f410_reduce_97 },

	{ .ptr = (void*)f411_reduce_98 },

	{ .ptr = (void*)f412_reduce_99 },

	{ .ptr = (void*)f413_reduce_100 },

	{ .ptr = (void*)f414_reduce_101 },

	{ .ptr = (void*)f415_reduce_102 },

	{ .ptr = (void*)f416_reduce_103 },

	{ .ptr = (void*)f417_reduce_104 },

	{ .ptr = (void*)f418_reduce_105 },

	{ .ptr = (void*)f419_reduce_106 },

	{ .ptr = (void*)f420_reduce_107 },

	{ .ptr = (void*)f421_reduce_108 },

	{ .ptr = (void*)f422_reduce_109 },

	{ .ptr = (void*)f423_reduce_110 },

	{ .ptr = (void*)f424_reduce_111 },

	{ .ptr = (void*)f425_reduce_112 },

	{ .ptr = (void*)f426_reduce_113 },

	{ .ptr = (void*)f427_reduce_114 },

	{ .ptr = (void*)f428_reduce_115 },

	{ .ptr = (void*)f429_reduce_116 },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f431_reduce_122 },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f432_reduce_126 },

	{ .ptr = (void*)f433_reduce_127 },

	{ .ptr = (void*)f434_reduce_128 },

	{ .ptr = (void*)f435_reduce_129 },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f436_reduce_135 },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f437_reduce_138 },

};
	void f307_CopyMinor(i8 /* dest */, i8 /* src */);

// yy_reduce workspace at ws+3232 length ws+94
void f308_yy_reduce(i2* p7209 /* yyact */, i1 p7210 /* yylookahead */, i2 p7211 /* yyruleno */) {
	*(i2*)(intptr_t)(ws+3232) = p7211; /*yyruleno */
	*(i1*)(intptr_t)(ws+3234) = p7210; /*yylookahead */

	i8 v7212 = (i8)(intptr_t)((i1*)f3___main_s05e8);
	i8 v7213 = (i8)(intptr_t)(ws+3232);
	i2 v7214 = *(i2*)(intptr_t)v7213;
	i1 v7215 = v7214;
	i8 v7216 = v7215;
	i8 v7217 = v7212+v7216;
	i1 v7218 = *(i1*)(intptr_t)v7217;
	i8 v7219 = (i8)(intptr_t)(ws+3238);
	*(i1*)(intptr_t)v7219 = v7218;

	i8 v7220 = (i8)(intptr_t)(ws+1568);
	i8 v7221 = *(i8*)(intptr_t)v7220;
	i8 v7222 = (i8)(intptr_t)(ws+3176);
	if (v7221==v7222) goto c02_05ec; else goto c02_05ed;

c02_05ec:;

	i8 v7223 = (i8)(intptr_t)(f305_yy_stack_overflow);

	((void(*)(void))(intptr_t)v7223)();

c02_05ed:;

c02_05e9:;

	i8 v7224 = (i8)(intptr_t)(ws+3248);
	i8 v7225 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v7225 = v7224;

	i8 v7226 = (i8)(intptr_t)(ws+3238);
	i1 v7227 = *(i1*)(intptr_t)v7226;
	i8 v7228 = (i8)(intptr_t)(ws+3320);
	*(i1*)(intptr_t)v7228 = v7227;

c02_05f0:;

	i8 v7229 = (i8)(intptr_t)(ws+3320);
	i1 v7230 = *(i1*)(intptr_t)v7229;
	i1 v7231 = (i1)+0;
	if (v7230==v7231) goto c02_05f3; else goto c02_05f2;

c02_05f2:;

	i8 v7232 = (i8)(intptr_t)(ws+1568);
	i8 v7233 = *(i8*)(intptr_t)v7232;
	i8 v7234 = v7233+(+8);
	i8 v7235 = (i8)(intptr_t)(ws+3312);
	i8 v7236 = *(i8*)(intptr_t)v7235;
	i8 v7237 = (i8)(intptr_t)(f307_CopyMinor);

	((void(*)(i8 /* dest */, i8 /* src */))(intptr_t)v7237)(v7236, v7234);

	i8 v7238 = (i8)(intptr_t)(ws+1568);
	i8 v7239 = *(i8*)(intptr_t)v7238;
	i8 v7240 = v7239+(-16);
	i8 v7241 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v7241 = v7240;

	i8 v7242 = (i8)(intptr_t)(ws+3312);
	i8 v7243 = *(i8*)(intptr_t)v7242;
	i8 v7244 = v7243+(+8);
	i8 v7245 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v7245 = v7244;

	i8 v7246 = (i8)(intptr_t)(ws+3320);
	i1 v7247 = *(i1*)(intptr_t)v7246;
	i1 v7248 = v7247+(-1);
	i8 v7249 = (i8)(intptr_t)(ws+3320);
	*(i1*)(intptr_t)v7249 = v7248;

	goto c02_05f0;

c02_05f3:;
































































































































	i8 v10199 = (i8)(intptr_t)((i1*)f308_yy_reduce_s074d);
	i8 v10200 = (i8)(intptr_t)(ws+3232);
	i2 v10201 = *(i2*)(intptr_t)v10200;
	i1 v10202 = v10201;
	i8 v10203 = v10202;
	i1 v10204 = (i1)+3;
	i8 v10205 = ((i8)v10203)<<v10204;
	i8 v10206 = v10199+v10205;
	i8 v10207 = *(i8*)(intptr_t)v10206;

	((void(*)(void))(intptr_t)v10207)();

	i8 v10208 = (i8)(intptr_t)(ws+3240);
	i8 v10209 = (i8)(intptr_t)(ws+1568);
	i8 v10210 = *(i8*)(intptr_t)v10209;
	i8 v10211 = v10210+(+24);
	i8 v10212 = (i8)(intptr_t)(f307_CopyMinor);

	((void(*)(i8 /* dest */, i8 /* src */))(intptr_t)v10212)(v10211, v10208);

	i8 v10213 = (i8)(intptr_t)((i1*)f3___main_s05e7);
	i8 v10214 = (i8)(intptr_t)(ws+3232);
	i2 v10215 = *(i2*)(intptr_t)v10214;
	i1 v10216 = v10215;
	i8 v10217 = v10216;
	i8 v10218 = v10213+v10217;
	i1 v10219 = *(i1*)(intptr_t)v10218;
	i8 v10220 = (i8)(intptr_t)(ws+3321);
	*(i1*)(intptr_t)v10220 = v10219;

	i8 v10221 = (i8)(intptr_t)(ws+1568);
	i8 v10222 = *(i8*)(intptr_t)v10221;
	i2 v10223 = *(i2*)(intptr_t)v10222;
	i8 v10224 = (i8)(intptr_t)(ws+3322);
	*(i2*)(intptr_t)v10224 = v10223;

	i8 v10225 = (i8)(intptr_t)((i1*)f3___main_s05cf);
	i8 v10226 = (i8)(intptr_t)(ws+3322);
	i2 v10227 = *(i2*)(intptr_t)v10226;
	i1 v10228 = v10227;
	i8 v10229 = v10228;
	i1 v10230 = (i1)+1;
	i8 v10231 = ((i8)v10229)<<v10230;
	i8 v10232 = v10225+v10231;
	i2 v10233 = *(i2*)(intptr_t)v10232;
	i8 v10234 = (i8)(intptr_t)(ws+3236);
	*(i2*)(intptr_t)v10234 = v10233;

	i2 v10235 = (i2)+112;
	i8 v10236 = (i8)(intptr_t)(ws+3322);
	i2 v10237 = *(i2*)(intptr_t)v10236;
	if (v10235<v10237) goto c02_0752; else goto c02_0751;

c02_0751:;

	i8 v10238 = (i8)(intptr_t)((i1*)f3___main_s05ce);
	i8 v10239 = (i8)(intptr_t)(ws+3322);
	i2 v10240 = *(i2*)(intptr_t)v10239;
	i1 v10241 = v10240;
	i8 v10242 = v10241;
	i1 v10243 = (i1)+1;
	i8 v10244 = ((i8)v10242)<<v10243;
	i8 v10245 = v10238+v10244;
	i2 v10246 = *(i2*)(intptr_t)v10245;
	i8 v10247 = (i8)(intptr_t)(ws+3321);
	i1 v10248 = *(i1*)(intptr_t)v10247;
	i2 v10249 = v10248;
	i2 v10250 = v10246+v10249;
	i8 v10251 = (i8)(intptr_t)(ws+3324);
	*(i2*)(intptr_t)v10251 = v10250;

	i8 v10252 = (i8)(intptr_t)(ws+3324);
	i2 v10253 = *(i2*)(intptr_t)v10252;
	i2 v10254 = (i2)+0;
	if (v10253<v10254) goto c02_075b; else goto c02_075d;

c02_075d:;

	i8 v10255 = (i8)(intptr_t)(ws+3324);
	i2 v10256 = *(i2*)(intptr_t)v10255;
	i2 v10257 = (i2)+1271;
	if (v10256<v10257) goto c02_075c; else goto c02_075b;

c02_075c:;

	i8 v10258 = (i8)(intptr_t)((i1*)f3___main_s05cc);
	i8 v10259 = (i8)(intptr_t)(ws+3324);
	i2 v10260 = *(i2*)(intptr_t)v10259;
	i8 v10261 = v10260;
	i8 v10262 = v10258+v10261;
	i1 v10263 = *(i1*)(intptr_t)v10262;
	i8 v10264 = (i8)(intptr_t)(ws+3321);
	i1 v10265 = *(i1*)(intptr_t)v10264;
	if (v10263==v10265) goto c02_075a; else goto c02_075b;

c02_075a:;

	i8 v10266 = (i8)(intptr_t)((i1*)f3___main_s05cb);
	i8 v10267 = (i8)(intptr_t)(ws+3324);
	i2 v10268 = *(i2*)(intptr_t)v10267;
	i8 v10269 = v10268;
	i1 v10270 = (i1)+1;
	i8 v10271 = ((i8)v10269)<<v10270;
	i8 v10272 = v10266+v10271;
	i2 v10273 = *(i2*)(intptr_t)v10272;
	i8 v10274 = (i8)(intptr_t)(ws+3236);
	*(i2*)(intptr_t)v10274 = v10273;

c02_075b:;

c02_0753:;

c02_0752:;

c02_074e:;

	i8 v10275 = (i8)(intptr_t)(ws+1568);
	i8 v10276 = *(i8*)(intptr_t)v10275;
	i8 v10277 = v10276+(+16);
	i8 v10278 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v10278 = v10277;

	i8 v10279 = (i8)(intptr_t)(ws+3236);
	i2 v10280 = *(i2*)(intptr_t)v10279;
	i8 v10281 = (i8)(intptr_t)(ws+1568);
	i8 v10282 = *(i8*)(intptr_t)v10281;
	*(i2*)(intptr_t)v10282 = v10280;

	i8 v10283 = (i8)(intptr_t)(ws+3321);
	i1 v10284 = *(i1*)(intptr_t)v10283;
	i8 v10285 = (i8)(intptr_t)(ws+1568);
	i8 v10286 = *(i8*)(intptr_t)v10285;
	i8 v10287 = v10286+(+2);
	*(i1*)(intptr_t)v10287 = v10284;

endsub:;
	*p7209 = *(i2*)(intptr_t)(ws+3236);
}
	void f304_yy_pop_all_parser_stack(void);

// yy_parse_failed workspace at ws+3232 length ws+0
void f439_yy_parse_failed(void) {

	i8 v10288 = (i8)(intptr_t)(f304_yy_pop_all_parser_stack);

	((void(*)(void))(intptr_t)v10288)();

endsub:;
}
	void f74_StartError(void);
const i1 c02_s0197[] = { 0x75,0x6e,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// yy_syntax_error workspace at ws+3232 length ws+16
void f440_yy_syntax_error(i8 p10289 /* yyminor */, i1 p10290 /* yymajor */) {
	*(i1*)(intptr_t)(ws+3232) = p10290; /*yymajor */
	*(i8*)(intptr_t)(ws+3240) = p10289; /*yyminor */

	i8 v10291 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v10291)();

	i8 v10292 = (i8)(intptr_t)c02_s0197;
	i8 v10293 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10293)(v10292);

	i8 v10294 = (i8)(intptr_t)((i1*)f3___main_s05d0);
	i8 v10295 = (i8)(intptr_t)(ws+3232);
	i1 v10296 = *(i1*)(intptr_t)v10295;
	i8 v10297 = v10296;
	i1 v10298 = (i1)+3;
	i8 v10299 = ((i8)v10297)<<v10298;
	i8 v10300 = v10294+v10299;
	i8 v10301 = *(i8*)(intptr_t)v10300;
	i8 v10302 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10302)(v10301);

	i8 v10303 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v10303)();

endsub:;
}

// yy_accept workspace at ws+3232 length ws+0
void f441_yy_accept(void) {

endsub:;
}

// ParserInit workspace at ws+3208 length ws+0
void f442_ParserInit(void) {

	i1 v10304 = (i1)-1;
	i8 v10305 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v10305 = v10304;

	i8 v10306 = (i8)(intptr_t)(ws+1576);
	i8 v10307 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v10307 = v10306;

	i2 v10308 = (i2)+0;
	i8 v10309 = (i8)(intptr_t)(ws+1576);
	*(i2*)(intptr_t)v10309 = v10308;

	i1 v10310 = (i1)+0;
	i8 v10311 = (i8)(intptr_t)(ws+1578);
	*(i1*)(intptr_t)v10311 = v10310;

endsub:;
}
	void f303_yy_pop_parser_stack(void);

// ParserDeinit workspace at ws+3208 length ws+0
void f443_ParserDeinit(void) {

c02_0760:;

	i8 v10312 = (i8)(intptr_t)(ws+1568);
	i8 v10313 = *(i8*)(intptr_t)v10312;
	i8 v10314 = (i8)(intptr_t)(ws+1576);
	if (v10313==v10314) goto c02_0763; else goto c02_0762;

c02_0762:;

	i8 v10315 = (i8)(intptr_t)(f303_yy_pop_parser_stack);

	((void(*)(void))(intptr_t)v10315)();

	goto c02_0760;

c02_0763:;

endsub:;
}
	void f308_yy_reduce(i2* /* yyact */, i1 /* yylookahead */, i2 /* yyruleno */);
	void f305_yy_stack_overflow(void);
	void f307_CopyMinor(i8 /* dest */, i8 /* src */);
	void f441_yy_accept(void);
	void f440_yy_syntax_error(i8 /* yyminor */, i1 /* yymajor */);
	void f301_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f439_yy_parse_failed(void);

// ParserFeedToken workspace at ws+3208 length ws+20
void f444_ParserFeedToken(i8 p10316 /* yyminor */, i1 p10317 /* yymajor */) {
	*(i1*)(intptr_t)(ws+3208) = p10317; /*yymajor */
	*(i8*)(intptr_t)(ws+3216) = p10316; /*yyminor */

	i8 v10318 = (i8)(intptr_t)(ws+1568);
	i8 v10319 = *(i8*)(intptr_t)v10318;
	i2 v10320 = *(i2*)(intptr_t)v10319;
	i8 v10321 = (i8)(intptr_t)(ws+3224);
	*(i2*)(intptr_t)v10321 = v10320;

c02_0764:;

	i2 v10322 = (i2)+220;
	i8 v10323 = (i8)(intptr_t)(ws+3224);
	i2 v10324 = *(i2*)(intptr_t)v10323;
	if (v10322<v10324) goto c02_076a; else goto c02_0769;

c02_0769:;

	i8 v10325 = (i8)(intptr_t)((i1*)f3___main_s05cd);
	i8 v10326 = (i8)(intptr_t)(ws+3224);
	i2 v10327 = *(i2*)(intptr_t)v10326;
	i1 v10328 = v10327;
	i8 v10329 = v10328;
	i1 v10330 = (i1)+1;
	i8 v10331 = ((i8)v10329)<<v10330;
	i8 v10332 = v10325+v10331;
	i2 v10333 = *(i2*)(intptr_t)v10332;
	i8 v10334 = (i8)(intptr_t)(ws+3208);
	i1 v10335 = *(i1*)(intptr_t)v10334;
	i2 v10336 = v10335;
	i2 v10337 = v10333+v10336;
	i8 v10338 = (i8)(intptr_t)(ws+3226);
	*(i2*)(intptr_t)v10338 = v10337;

	i8 v10339 = (i8)(intptr_t)((i1*)f3___main_s05cc);
	i8 v10340 = (i8)(intptr_t)(ws+3226);
	i2 v10341 = *(i2*)(intptr_t)v10340;
	i8 v10342 = v10341;
	i8 v10343 = v10339+v10342;
	i1 v10344 = *(i1*)(intptr_t)v10343;
	i8 v10345 = (i8)(intptr_t)(ws+3208);
	i1 v10346 = *(i1*)(intptr_t)v10345;
	if (v10344==v10346) goto c02_076f; else goto c02_076e;

c02_076e:;

	i8 v10347 = (i8)(intptr_t)((i1*)f3___main_s05cf);
	i8 v10348 = (i8)(intptr_t)(ws+3224);
	i2 v10349 = *(i2*)(intptr_t)v10348;
	i1 v10350 = v10349;
	i8 v10351 = v10350;
	i1 v10352 = (i1)+1;
	i8 v10353 = ((i8)v10351)<<v10352;
	i8 v10354 = v10347+v10353;
	i2 v10355 = *(i2*)(intptr_t)v10354;
	i8 v10356 = (i8)(intptr_t)(ws+3224);
	*(i2*)(intptr_t)v10356 = v10355;

	goto c02_076b;

c02_076f:;

	i8 v10357 = (i8)(intptr_t)((i1*)f3___main_s05cb);
	i8 v10358 = (i8)(intptr_t)(ws+3226);
	i2 v10359 = *(i2*)(intptr_t)v10358;
	i8 v10360 = v10359;
	i1 v10361 = (i1)+1;
	i8 v10362 = ((i8)v10360)<<v10361;
	i8 v10363 = v10357+v10362;
	i2 v10364 = *(i2*)(intptr_t)v10363;
	i8 v10365 = (i8)(intptr_t)(ws+3224);
	*(i2*)(intptr_t)v10365 = v10364;

c02_076b:;

c02_076a:;

c02_0766:;

	i8 v10366 = (i8)(intptr_t)(ws+3224);
	i2 v10367 = *(i2*)(intptr_t)v10366;
	i2 v10368 = (i2)+452;
	if (v10367<v10368) goto c02_0774; else goto c02_0773;

c02_0773:;

	i8 v10369 = (i8)(intptr_t)(ws+3224);
	i2 v10370 = *(i2*)(intptr_t)v10369;
	i2 v10371 = v10370+(-452);
	i8 v10372 = (i8)(intptr_t)(ws+3208);
	i1 v10373 = *(i1*)(intptr_t)v10372;
	i8 v10374 = (i8)(intptr_t)(f308_yy_reduce);
	i2 v10375;

	((void(*)(i2* /* yyact */, i1 /* yylookahead */, i2 /* yyruleno */))(intptr_t)v10374)(&v10375, v10373, v10371);
	i8 v10376 = (i8)(intptr_t)(ws+3224);
	*(i2*)(intptr_t)v10376 = v10375;

	goto c02_0770;

c02_0774:;

	i2 v10377 = (i2)+448;
	i8 v10378 = (i8)(intptr_t)(ws+3224);
	i2 v10379 = *(i2*)(intptr_t)v10378;
	if (v10377<v10379) goto c02_0778; else goto c02_0777;

c02_0777:;

	i8 v10380 = (i8)(intptr_t)(ws+1568);
	i8 v10381 = *(i8*)(intptr_t)v10380;
	i8 v10382 = (i8)(intptr_t)(ws+3176);
	if (v10381==v10382) goto c02_077c; else goto c02_077d;

c02_077c:;

	i8 v10383 = (i8)(intptr_t)(f305_yy_stack_overflow);

	((void(*)(void))(intptr_t)v10383)();

	goto endsub;

c02_077d:;

c02_0779:;

	i8 v10384 = (i8)(intptr_t)(ws+1568);
	i8 v10385 = *(i8*)(intptr_t)v10384;
	i8 v10386 = v10385+(+16);
	i8 v10387 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v10387 = v10386;

	i2 v10388 = (i2)+220;
	i8 v10389 = (i8)(intptr_t)(ws+3224);
	i2 v10390 = *(i2*)(intptr_t)v10389;
	if (v10388<v10390) goto c02_0781; else goto c02_0782;

c02_0781:;

	i8 v10391 = (i8)(intptr_t)(ws+3224);
	i2 v10392 = *(i2*)(intptr_t)v10391;
	i2 v10393 = v10392+(+142);
	i8 v10394 = (i8)(intptr_t)(ws+3224);
	*(i2*)(intptr_t)v10394 = v10393;

c02_0782:;

c02_077e:;

	i8 v10395 = (i8)(intptr_t)(ws+3224);
	i2 v10396 = *(i2*)(intptr_t)v10395;
	i8 v10397 = (i8)(intptr_t)(ws+1568);
	i8 v10398 = *(i8*)(intptr_t)v10397;
	*(i2*)(intptr_t)v10398 = v10396;

	i8 v10399 = (i8)(intptr_t)(ws+3208);
	i1 v10400 = *(i1*)(intptr_t)v10399;
	i8 v10401 = (i8)(intptr_t)(ws+1568);
	i8 v10402 = *(i8*)(intptr_t)v10401;
	i8 v10403 = v10402+(+2);
	*(i1*)(intptr_t)v10403 = v10400;

	i8 v10404 = (i8)(intptr_t)(ws+3216);
	i8 v10405 = *(i8*)(intptr_t)v10404;
	i8 v10406 = (i8)(intptr_t)(ws+1568);
	i8 v10407 = *(i8*)(intptr_t)v10406;
	i8 v10408 = v10407+(+8);
	i8 v10409 = (i8)(intptr_t)(f307_CopyMinor);

	((void(*)(i8 /* dest */, i8 /* src */))(intptr_t)v10409)(v10408, v10405);

	i8 v10410 = (i8)(intptr_t)(ws+3192);
	i1 v10411 = *(i1*)(intptr_t)v10410;
	i1 v10412 = (i1)+0;
	if ((s1)v10411<(s1)v10412) goto c02_0787; else goto c02_0786;

c02_0786:;

	i8 v10413 = (i8)(intptr_t)(ws+3192);
	i1 v10414 = *(i1*)(intptr_t)v10413;
	i1 v10415 = v10414+(-1);
	i8 v10416 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v10416 = v10415;

c02_0787:;

c02_0783:;

	goto c02_0765;

c02_0778:;

	i8 v10417 = (i8)(intptr_t)(ws+3224);
	i2 v10418 = *(i2*)(intptr_t)v10417;
	i2 v10419 = (i2)+450;
	if (v10418==v10419) goto c02_078a; else goto c02_078b;

c02_078a:;

	i8 v10420 = (i8)(intptr_t)(ws+1568);
	i8 v10421 = *(i8*)(intptr_t)v10420;
	i8 v10422 = v10421+(-16);
	i8 v10423 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v10423 = v10422;

	i8 v10424 = (i8)(intptr_t)(f441_yy_accept);

	((void(*)(void))(intptr_t)v10424)();

	goto c02_0765;

c02_078b:;

	i1 v10425 = (i1)+0;
	i8 v10426 = (i8)(intptr_t)(ws+3192);
	i1 v10427 = *(i1*)(intptr_t)v10426;
	if ((s1)v10425<(s1)v10427) goto c02_0790; else goto c02_078f;

c02_078f:;

	i8 v10428 = (i8)(intptr_t)(ws+3208);
	i1 v10429 = *(i1*)(intptr_t)v10428;
	i8 v10430 = (i8)(intptr_t)(ws+3216);
	i8 v10431 = *(i8*)(intptr_t)v10430;
	i8 v10432 = (i8)(intptr_t)(f440_yy_syntax_error);

	((void(*)(i8 /* yyminor */, i1 /* yymajor */))(intptr_t)v10432)(v10431, v10429);

c02_0790:;

c02_078c:;

	i1 v10433 = (i1)+3;
	i8 v10434 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v10434 = v10433;

	i8 v10435 = (i8)(intptr_t)(ws+3208);
	i1 v10436 = *(i1*)(intptr_t)v10435;
	i8 v10437 = (i8)(intptr_t)(ws+3216);
	i8 v10438 = *(i8*)(intptr_t)v10437;
	i8 v10439 = (i8)(intptr_t)(f301_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10439)(v10438, v10436);

	i8 v10440 = (i8)(intptr_t)(ws+3208);
	i1 v10441 = *(i1*)(intptr_t)v10440;
	i1 v10442 = (i1)+0;
	if (v10441==v10442) goto c02_0794; else goto c02_0795;

c02_0794:;

	i8 v10443 = (i8)(intptr_t)(f439_yy_parse_failed);

	((void(*)(void))(intptr_t)v10443)();

	i1 v10444 = (i1)-1;
	i8 v10445 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v10445 = v10444;

c02_0795:;

c02_0791:;

	goto c02_0765;

c02_0770:;

	i8 v10446 = (i8)(intptr_t)(ws+1568);
	i8 v10447 = *(i8*)(intptr_t)v10446;
	i8 v10448 = (i8)(intptr_t)(ws+1576);
	if (v10447==v10448) goto c02_0799; else goto c02_079a;

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
const i1 c02_s0198[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f12_print(i8 /* ptr */);

// PrintFreeMemory workspace at ws+3208 length ws+0
void f445_PrintFreeMemory(void) {

	i8 v10449 = (i8)(intptr_t)(f38_GetFreeMemory);
	i8 v10450;

	((void(*)(i8* /* i */))(intptr_t)v10449)(&v10450);
	i1 v10451 = (i1)+10;
	i8 v10452 = ((i8)v10450)>>v10451;
	i2 v10453 = v10452;
	i8 v10454 = (i8)(intptr_t)(f17_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v10454)(v10453);

	i8 v10455 = (i8)(intptr_t)c02_s0198;
	i8 v10456 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10456)(v10455);

endsub:;
}
const i1 c02_s0199[] = { 0x73,0x79,0x6e,0x74,0x61,0x78,0x20,0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x63,0x6f,0x77,0x63,0x6f,0x6d,0x20,0x5b,0x2d,0x49,0x70,0x61,0x74,0x68,0x5d,0x20,0x3c,0x69,0x6e,0x66,0x69,0x6c,0x65,0x3e,0x20,0x3c,0x6f,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x0a,0 };
	void f12_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// SyntaxError workspace at ws+3216 length ws+0
void f446_SyntaxError(void) {

	i8 v10457 = (i8)(intptr_t)c02_s0199;
	i8 v10458 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10458)(v10457);

	i8 v10459 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v10459)();

endsub:;
}
	void f24_ArgvInit(void);
	void f25_ArgvNext(i8* /* arg */);
	void f77_LexerAddIncludePath(i8 /* path */);
	void f446_SyntaxError(void);
	void f446_SyntaxError(void);
	void f446_SyntaxError(void);

// ParseArguments workspace at ws+3208 length ws+8
void f447_ParseArguments(void) {

	i8 v10460 = (i8)(intptr_t)(f24_ArgvInit);

	((void(*)(void))(intptr_t)v10460)();

c02_079b:;

	i8 v10461 = (i8)(intptr_t)(f25_ArgvNext);
	i8 v10462;

	((void(*)(i8* /* arg */))(intptr_t)v10461)(&v10462);
	i8 v10463 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v10463 = v10462;

	i8 v10464 = (i8)(intptr_t)(ws+3208);
	i8 v10465 = *(i8*)(intptr_t)v10464;
	i8 v10466 = (i8)+0;
	if (v10465==v10466) goto c02_07a0; else goto c02_07a1;

c02_07a0:;

	goto c02_079c;

c02_07a1:;

c02_079d:;

	i8 v10467 = (i8)(intptr_t)(ws+3208);
	i8 v10468 = *(i8*)(intptr_t)v10467;
	i1 v10469 = *(i1*)(intptr_t)v10468;
	i1 v10470 = (i1)+45;
	if (v10469==v10470) goto c02_07a5; else goto c02_07a6;

c02_07a5:;

	i8 v10471 = (i8)(intptr_t)(ws+3208);
	i8 v10472 = *(i8*)(intptr_t)v10471;
	i8 v10473 = v10472+(+1);
	i8 v10474 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v10474 = v10473;

	i8 v10475 = (i8)(intptr_t)(ws+3208);
	i8 v10476 = *(i8*)(intptr_t)v10475;
	i1 v10477 = *(i1*)(intptr_t)v10476;
	i1 v10478 = (i1)+73;
	if (v10477==v10478) goto c02_07aa; else goto c02_07ab;

c02_07aa:;

	i8 v10479 = (i8)(intptr_t)(ws+3208);
	i8 v10480 = *(i8*)(intptr_t)v10479;
	i8 v10481 = v10480+(+1);
	i8 v10482 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v10482 = v10481;

	i8 v10483 = (i8)(intptr_t)(ws+3208);
	i8 v10484 = *(i8*)(intptr_t)v10483;
	i8 v10485 = (i8)(intptr_t)(f77_LexerAddIncludePath);

	((void(*)(i8 /* path */))(intptr_t)v10485)(v10484);

	goto c02_07a7;

c02_07ab:;

	i8 v10486 = (i8)(intptr_t)(f446_SyntaxError);

	((void(*)(void))(intptr_t)v10486)();

c02_07a7:;

	goto c02_07a2;

c02_07a6:;

	i8 v10487 = (i8)(intptr_t)(ws+24);
	i8 v10488 = *(i8*)(intptr_t)v10487;
	i8 v10489 = (i8)+0;
	if (v10488==v10489) goto c02_07af; else goto c02_07b0;

c02_07af:;

	i8 v10490 = (i8)(intptr_t)(ws+3208);
	i8 v10491 = *(i8*)(intptr_t)v10490;
	i8 v10492 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v10492 = v10491;

	goto c02_07ac;

c02_07b0:;

	i8 v10493 = (i8)(intptr_t)(ws+32);
	i8 v10494 = *(i8*)(intptr_t)v10493;
	i8 v10495 = (i8)+0;
	if (v10494==v10495) goto c02_07b3; else goto c02_07b4;

c02_07b3:;

	i8 v10496 = (i8)(intptr_t)(ws+3208);
	i8 v10497 = *(i8*)(intptr_t)v10496;
	i8 v10498 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v10498 = v10497;

	goto c02_07ac;

c02_07b4:;

	i8 v10499 = (i8)(intptr_t)(f446_SyntaxError);

	((void(*)(void))(intptr_t)v10499)();

c02_07ac:;

c02_07a2:;

	goto c02_079b;

c02_079c:;

	i8 v10500 = (i8)(intptr_t)(ws+24);
	i8 v10501 = *(i8*)(intptr_t)v10500;
	i8 v10502 = (i8)+0;
	if (v10501==v10502) goto c02_07ba; else goto c02_07bc;

c02_07bc:;

	i8 v10503 = (i8)(intptr_t)(ws+32);
	i8 v10504 = *(i8*)(intptr_t)v10503;
	i8 v10505 = (i8)+0;
	if (v10504==v10505) goto c02_07ba; else goto c02_07bb;

c02_07ba:;

	i8 v10506 = (i8)(intptr_t)(f446_SyntaxError);

	((void(*)(void))(intptr_t)v10506)();

c02_07bb:;

c02_07b5:;

endsub:;
}
const i1 c02_s019a[] = { 0x43,0x4f,0x57,0x46,0x45,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f445_PrintFreeMemory(void);
	void f447_ParseArguments(void);
const i1 c02_s019b[] = { 0 };
	void f77_LexerAddIncludePath(i8 /* path */);
	void f81_LexerIncludeFile(i8 /* path */);
	void f267_CreateMainSubroutine(void);
	void f241_ArchInitTypes(void);
	void f197_EmitterOpenfile(i8 /* filename */);
	void f199_EmitterDeclareSubroutine(i8 /* subr */);
	void f158_MidStartfile(i8* /* m */);
	void f258_Generate(i8 /* statement */);
	void f129_MidStartsub(i8* /* m */, i8 /* subr */);
	void f258_Generate(i8 /* statement */);
	void f442_ParserInit(void);
	void f82_LexerReadToken(i1* /* token */);
	void f72_InternalStrDup(i8* /* news */, i8 /* s */);
	void f72_InternalStrDup(i8* /* news */, i8 /* s */);
	void f444_ParserFeedToken(i8 /* yyminor */, i1 /* yymajor */);
	void f443_ParserDeinit(void);
	void f141_MidEndsub(i8* /* m */, i8 /* subr */);
	void f258_Generate(i8 /* statement */);
	void f268_ReportWorkspaces(i8 /* subr */);
	void f155_MidEndfile(i8* /* m */);
	void f258_Generate(i8 /* statement */);
	void f198_EmitterClosefile(void);
const i1 c02_s019c[] = { 0x64,0x6f,0x6e,0x65,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f445_PrintFreeMemory(void);

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


































































































	i1 v5416 = (i1)+0;
	i8 v5417 = (i8)(intptr_t)(ws+1536);
	*(i1*)(intptr_t)v5417 = v5416;




































































	i8 v10507 = (i8)(intptr_t)c02_s019a;
	i8 v10508 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10508)(v10507);

	i8 v10509 = (i8)(intptr_t)(f445_PrintFreeMemory);

	((void(*)(void))(intptr_t)v10509)();

	i8 v10510 = (i8)(intptr_t)(f447_ParseArguments);

	((void(*)(void))(intptr_t)v10510)();

	i8 v10511 = (i8)(intptr_t)c02_s019b;
	i8 v10512 = (i8)(intptr_t)(f77_LexerAddIncludePath);

	((void(*)(i8 /* path */))(intptr_t)v10512)(v10511);

	i8 v10513 = (i8)(intptr_t)(ws+24);
	i8 v10514 = *(i8*)(intptr_t)v10513;
	i8 v10515 = (i8)(intptr_t)(f81_LexerIncludeFile);

	((void(*)(i8 /* path */))(intptr_t)v10515)(v10514);

	i8 v10516 = (i8)(intptr_t)(f267_CreateMainSubroutine);

	((void(*)(void))(intptr_t)v10516)();

	i8 v10517 = (i8)(intptr_t)(f241_ArchInitTypes);

	((void(*)(void))(intptr_t)v10517)();

	i8 v10518 = (i8)(intptr_t)(ws+32);
	i8 v10519 = *(i8*)(intptr_t)v10518;
	i8 v10520 = (i8)(intptr_t)(f197_EmitterOpenfile);

	((void(*)(i8 /* filename */))(intptr_t)v10520)(v10519);

	i8 v10521 = (i8)(intptr_t)(ws+40);
	i8 v10522 = *(i8*)(intptr_t)v10521;
	i8 v10523 = (i8)(intptr_t)(f199_EmitterDeclareSubroutine);

	((void(*)(i8 /* subr */))(intptr_t)v10523)(v10522);

	i8 v10524 = (i8)(intptr_t)(f158_MidStartfile);
	i8 v10525;

	((void(*)(i8* /* m */))(intptr_t)v10524)(&v10525);
	i8 v10526 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10526)(v10525);

	i8 v10527 = (i8)(intptr_t)(ws+40);
	i8 v10528 = *(i8*)(intptr_t)v10527;
	i8 v10529 = (i8)(intptr_t)(f129_MidStartsub);
	i8 v10530;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v10529)(&v10530, v10528);
	i8 v10531 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10531)(v10530);

	i8 v10532 = (i8)(intptr_t)(f442_ParserInit);

	((void(*)(void))(intptr_t)v10532)();

c02_07bd:;

	i8 v10533 = (i8)(intptr_t)(f82_LexerReadToken);
	i1 v10534;

	((void(*)(i1* /* token */))(intptr_t)v10533)(&v10534);
	i8 v10535 = (i8)(intptr_t)(ws+3193);
	*(i1*)(intptr_t)v10535 = v10534;

	i8 v10536 = (i8)(intptr_t)(ws+3193);
	i1 v10537 = *(i1*)(intptr_t)v10536;

	if (v10537 != +34) goto c02_07c0;

	i8 v10538 = (i8)(intptr_t)(ws+396);
	i4 v10539 = *(i4*)(intptr_t)v10538;
	i8 v10540 = (i8)(intptr_t)(ws+3200);
	*(i4*)(intptr_t)v10540 = v10539;

	goto c02_07bf;

c02_07c0:;

	if (v10537 != +33) goto c02_07c1;

	i8 v10541 = (i8)(intptr_t)(ws+265);
	i8 v10542 = (i8)(intptr_t)(f72_InternalStrDup);
	i8 v10543;

	((void(*)(i8* /* news */, i8 /* s */))(intptr_t)v10542)(&v10543, v10541);
	i8 v10544 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v10544 = v10543;

	goto c02_07bf;

c02_07c1:;

	if (v10537 != +41) goto c02_07c2;

	i8 v10545 = (i8)(intptr_t)(ws+265);
	i8 v10546 = (i8)(intptr_t)(f72_InternalStrDup);
	i8 v10547;

	((void(*)(i8* /* news */, i8 /* s */))(intptr_t)v10546)(&v10547, v10545);
	i8 v10548 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v10548 = v10547;

	goto c02_07bf;

c02_07c2:;

	i4 v10549 = (i4)+0;
	i8 v10550 = (i8)(intptr_t)(ws+3200);
	*(i4*)(intptr_t)v10550 = v10549;

c02_07bf:;


	i8 v10551 = (i8)(intptr_t)(ws+3193);
	i1 v10552 = *(i1*)(intptr_t)v10551;
	i8 v10553 = (i8)(intptr_t)(ws+3200);
	i8 v10554 = (i8)(intptr_t)(f444_ParserFeedToken);

	((void(*)(i8 /* yyminor */, i1 /* yymajor */))(intptr_t)v10554)(v10553, v10552);

	i8 v10555 = (i8)(intptr_t)(ws+3193);
	i1 v10556 = *(i1*)(intptr_t)v10555;
	i1 v10557 = (i1)+0;
	if (v10556==v10557) goto c02_07c6; else goto c02_07c7;

c02_07c6:;

	goto c02_07be;

c02_07c7:;

c02_07c3:;

	goto c02_07bd;

c02_07be:;

	i8 v10558 = (i8)(intptr_t)(f443_ParserDeinit);

	((void(*)(void))(intptr_t)v10558)();

	i8 v10559 = (i8)(intptr_t)(ws+40);
	i8 v10560 = *(i8*)(intptr_t)v10559;
	i8 v10561 = (i8)(intptr_t)(f141_MidEndsub);
	i8 v10562;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v10561)(&v10562, v10560);
	i8 v10563 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10563)(v10562);

	i8 v10564 = (i8)(intptr_t)(ws+40);
	i8 v10565 = *(i8*)(intptr_t)v10564;
	i8 v10566 = (i8)(intptr_t)(f268_ReportWorkspaces);

	((void(*)(i8 /* subr */))(intptr_t)v10566)(v10565);

	i8 v10567 = (i8)(intptr_t)(f155_MidEndfile);
	i8 v10568;

	((void(*)(i8* /* m */))(intptr_t)v10567)(&v10568);
	i8 v10569 = (i8)(intptr_t)(f258_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10569)(v10568);

	i8 v10570 = (i8)(intptr_t)(f198_EmitterClosefile);

	((void(*)(void))(intptr_t)v10570)();

	i8 v10571 = (i8)(intptr_t)c02_s019c;
	i8 v10572 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10572)(v10571);

	i8 v10573 = (i8)(intptr_t)(f445_PrintFreeMemory);

	((void(*)(void))(intptr_t)v10573)();

endsub:;
}
void cmain(void) {
	f3___main();
}
