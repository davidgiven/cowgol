#include "cowgol.h"
static i8 workspace[0x0161];
static i1* ws = (i1*)workspace;

// AlignUp workspace at ws+848 length ws+16
void f4(i8* p1 /* out */, i8 p2 /* in */) {
	*(i8*)(intptr_t)(ws+848) = p2; /*in */

	i8 v3 = (i8)(intptr_t)(ws+848);
	i8 v4 = *(i8*)(intptr_t)v3;
	i8 v5 = v4+(+7);
	i8 v6 = v5&(-8);
	i8 v7 = (i8)(intptr_t)(ws+856);
	*(i8*)(intptr_t)v7 = v6;

endsub:;
	*p1 = *(i8*)(intptr_t)(ws+856);
}

// ExitWithError workspace at ws+2752 length ws+0
void f6(void) {

	
exit(1); 


endsub:;
}

// MemSet workspace at ws+856 length ws+24
void f7(i8 p8 /* len */, i1 p9 /* byte */, i8 p10 /* buf */) {
	*(i8*)(intptr_t)(ws+856) = p10; /*buf */
	*(i1*)(intptr_t)(ws+864) = p9; /*byte */
	*(i8*)(intptr_t)(ws+872) = p8; /*len */

	
memset((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+856) 
,  
*(i1*)(intptr_t)(ws+864) 
,  
*(i8*)(intptr_t)(ws+872) 
); 


endsub:;
}

// print_char workspace at ws+2784 length ws+1
void f8(i1 p11 /* c */) {
	*(i1*)(intptr_t)(ws+2784) = p11; /*c */

	
putchar( 
*(i1*)(intptr_t)(ws+2784) 
); 


endsub:;
}

// print workspace at ws+2768 length ws+9
void f11(i8 p20 /* ptr */) {
	*(i8*)(intptr_t)(ws+2768) = p20; /*ptr */

c02_0001:;

	i8 v21 = (i8)(intptr_t)(ws+2768);
	i8 v22 = *(i8*)(intptr_t)v21;
	i1 v23 = *(i1*)(intptr_t)v22;
	i8 v24 = (i8)(intptr_t)(ws+2776);
	*(i1*)(intptr_t)v24 = v23;

	i8 v25 = (i8)(intptr_t)(ws+2776);
	i1 v26 = *(i1*)(intptr_t)v25;
	i1 v27 = (i1)+0;
	if (v26==v27) goto c02_0006; else goto c02_0007;

c02_0006:;

	goto endsub;

	goto c02_0003;

c02_0007:;

c02_0003:;

	i8 v28 = (i8)(intptr_t)(ws+2776);
	i1 v29 = *(i1*)(intptr_t)v28;
	f8(v29);

	i8 v30 = (i8)(intptr_t)(ws+2768);
	i8 v31 = *(i8*)(intptr_t)v30;
	i8 v32 = v31+(+1);
	i8 v33 = (i8)(intptr_t)(ws+2768);
	*(i8*)(intptr_t)v33 = v32;

	goto c02_0001;

c02_0002:;

endsub:;
}

// print_nl workspace at ws+768 length ws+0
void f12(void) {

	i1 v34 = (i1)+10;
	f8(v34);

endsub:;
}

// UIToA workspace at ws+2768 length ws+49
void f13(i8* p35 /* ptr */, i8 p36 /* buffer */, i1 p37 /* base */, i4 p38 /* value */) {
	*(i4*)(intptr_t)(ws+2768) = p38; /*value */
	*(i1*)(intptr_t)(ws+2772) = p37; /*base */
	*(i8*)(intptr_t)(ws+2776) = p36; /*buffer */

	i8 v39 = (i8)(intptr_t)(ws+2776);
	i8 v40 = *(i8*)(intptr_t)v39;
	i8 v41 = (i8)(intptr_t)(ws+2784);
	*(i8*)(intptr_t)v41 = v40;

c02_0008:;

	i8 v42 = (i8)(intptr_t)(ws+2768);
	i4 v43 = *(i4*)(intptr_t)v42;
	i8 v44 = (i8)(intptr_t)(ws+2772);
	i1 v45 = *(i1*)(intptr_t)v44;
	i4 v46 = v45;
	i4 v47 = v43%v46;
	i8 v48 = (i8)(intptr_t)(ws+2792);
	*(i4*)(intptr_t)v48 = v47;

	i8 v49 = (i8)(intptr_t)(ws+2768);
	i4 v50 = *(i4*)(intptr_t)v49;
	i8 v51 = (i8)(intptr_t)(ws+2772);
	i1 v52 = *(i1*)(intptr_t)v51;
	i4 v53 = v52;
	i4 v54 = v50/v53;
	i8 v55 = (i8)(intptr_t)(ws+2768);
	*(i4*)(intptr_t)v55 = v54;

	i8 v56 = (i8)(intptr_t)(ws+2792);
	i4 v57 = *(i4*)(intptr_t)v56;
	i4 v58 = (i4)+10;
	if (v57<v58) goto c02_000d; else goto c02_000e;

c02_000d:;

	i8 v59 = (i8)(intptr_t)(ws+2792);
	i4 v60 = *(i4*)(intptr_t)v59;
	i4 v61 = v60+(+48);
	i8 v62 = (i8)(intptr_t)(ws+2792);
	*(i4*)(intptr_t)v62 = v61;

	goto c02_000a;

c02_000e:;

	i8 v63 = (i8)(intptr_t)(ws+2792);
	i4 v64 = *(i4*)(intptr_t)v63;
	i4 v65 = v64+(+87);
	i8 v66 = (i8)(intptr_t)(ws+2792);
	*(i4*)(intptr_t)v66 = v65;

c02_000a:;

	i8 v67 = (i8)(intptr_t)(ws+2792);
	i4 v68 = *(i4*)(intptr_t)v67;
	i1 v69 = v68;
	i8 v70 = (i8)(intptr_t)(ws+2784);
	i8 v71 = *(i8*)(intptr_t)v70;
	*(i1*)(intptr_t)v71 = v69;

	i8 v72 = (i8)(intptr_t)(ws+2784);
	i8 v73 = *(i8*)(intptr_t)v72;
	i8 v74 = v73+(+1);
	i8 v75 = (i8)(intptr_t)(ws+2784);
	*(i8*)(intptr_t)v75 = v74;

	i8 v76 = (i8)(intptr_t)(ws+2768);
	i4 v77 = *(i4*)(intptr_t)v76;
	i4 v78 = (i4)+0;
	if (v77==v78) goto c02_0012; else goto c02_0013;

c02_0012:;

	goto c02_0009;

	goto c02_000f;

c02_0013:;

c02_000f:;

	goto c02_0008;

c02_0009:;

	i8 v79 = (i8)(intptr_t)(ws+2776);
	i8 v80 = *(i8*)(intptr_t)v79;
	i8 v81 = (i8)(intptr_t)(ws+2800);
	*(i8*)(intptr_t)v81 = v80;

	i8 v82 = (i8)(intptr_t)(ws+2784);
	i8 v83 = *(i8*)(intptr_t)v82;
	i8 v84 = v83+(-1);
	i8 v85 = (i8)(intptr_t)(ws+2808);
	*(i8*)(intptr_t)v85 = v84;

c02_0016:;

	i8 v86 = (i8)(intptr_t)(ws+2800);
	i8 v87 = *(i8*)(intptr_t)v86;
	i8 v88 = (i8)(intptr_t)(ws+2808);
	i8 v89 = *(i8*)(intptr_t)v88;
	if (v87<v89) goto c02_0018; else goto c02_0019;

c02_0018:;

	i8 v90 = (i8)(intptr_t)(ws+2800);
	i8 v91 = *(i8*)(intptr_t)v90;
	i1 v92 = *(i1*)(intptr_t)v91;
	i8 v93 = (i8)(intptr_t)(ws+2816);
	*(i1*)(intptr_t)v93 = v92;

	i8 v94 = (i8)(intptr_t)(ws+2808);
	i8 v95 = *(i8*)(intptr_t)v94;
	i1 v96 = *(i1*)(intptr_t)v95;
	i8 v97 = (i8)(intptr_t)(ws+2800);
	i8 v98 = *(i8*)(intptr_t)v97;
	*(i1*)(intptr_t)v98 = v96;

	i8 v99 = (i8)(intptr_t)(ws+2816);
	i1 v100 = *(i1*)(intptr_t)v99;
	i8 v101 = (i8)(intptr_t)(ws+2808);
	i8 v102 = *(i8*)(intptr_t)v101;
	*(i1*)(intptr_t)v102 = v100;

	i8 v103 = (i8)(intptr_t)(ws+2800);
	i8 v104 = *(i8*)(intptr_t)v103;
	i8 v105 = v104+(+1);
	i8 v106 = (i8)(intptr_t)(ws+2800);
	*(i8*)(intptr_t)v106 = v105;

	i8 v107 = (i8)(intptr_t)(ws+2808);
	i8 v108 = *(i8*)(intptr_t)v107;
	i8 v109 = v108+(-1);
	i8 v110 = (i8)(intptr_t)(ws+2808);
	*(i8*)(intptr_t)v110 = v109;

	goto c02_0016;

c02_0019:;

	i1 v111 = (i1)+0;
	i8 v112 = (i8)(intptr_t)(ws+2784);
	i8 v113 = *(i8*)(intptr_t)v112;
	*(i1*)(intptr_t)v113 = v111;

endsub:;
	*p35 = *(i8*)(intptr_t)(ws+2784);
}

// print_i32 workspace at ws+2744 length ws+24
void f15(i4 p140 /* value */) {
	*(i4*)(intptr_t)(ws+2744) = p140; /*value */

	i8 v141 = (i8)(intptr_t)(ws+2744);
	i4 v142 = *(i4*)(intptr_t)v141;
	i1 v143 = (i1)+10;
	i8 v144 = (i8)(intptr_t)(ws+2748);
	i8 v145;
	f13(&v145, v144, v143, v142);
	i8 v146 = (i8)(intptr_t)(ws+2760);
	*(i8*)(intptr_t)v146 = v145;

	i8 v147 = (i8)(intptr_t)(ws+2748);
	f11(v147);

endsub:;
}

// print_i16 workspace at ws+2736 length ws+2
void f16(i2 p148 /* value */) {
	*(i2*)(intptr_t)(ws+2736) = p148; /*value */

	i8 v149 = (i8)(intptr_t)(ws+2736);
	i2 v150 = *(i2*)(intptr_t)v149;
	i4 v151 = v150;
	f15(v151);

endsub:;
}

// print_i8 workspace at ws+2736 length ws+1
void f17(i1 p152 /* value */) {
	*(i1*)(intptr_t)(ws+2736) = p152; /*value */

	i8 v153 = (i8)(intptr_t)(ws+2736);
	i1 v154 = *(i1*)(intptr_t)v153;
	i4 v155 = v154;
	f15(v155);

endsub:;
}

// print_hex_i8 workspace at ws+776 length ws+3
void f18(i1 p156 /* value */) {
	*(i1*)(intptr_t)(ws+776) = p156; /*value */

	i1 v157 = (i1)+2;
	i8 v158 = (i8)(intptr_t)(ws+777);
	*(i1*)(intptr_t)v158 = v157;

c02_001f:;

	i8 v159 = (i8)(intptr_t)(ws+776);
	i1 v160 = *(i1*)(intptr_t)v159;
	i1 v161 = (i1)+4;
	i1 v162 = ((i1)v160)>>v161;
	i8 v163 = (i8)(intptr_t)(ws+778);
	*(i1*)(intptr_t)v163 = v162;

	i8 v164 = (i8)(intptr_t)(ws+778);
	i1 v165 = *(i1*)(intptr_t)v164;
	i1 v166 = (i1)+10;
	if (v165<v166) goto c02_0024; else goto c02_0025;

c02_0024:;

	i8 v167 = (i8)(intptr_t)(ws+778);
	i1 v168 = *(i1*)(intptr_t)v167;
	i1 v169 = v168+(+48);
	i8 v170 = (i8)(intptr_t)(ws+778);
	*(i1*)(intptr_t)v170 = v169;

	goto c02_0021;

c02_0025:;

	i8 v171 = (i8)(intptr_t)(ws+778);
	i1 v172 = *(i1*)(intptr_t)v171;
	i1 v173 = v172+(+87);
	i8 v174 = (i8)(intptr_t)(ws+778);
	*(i1*)(intptr_t)v174 = v173;

c02_0021:;

	i8 v175 = (i8)(intptr_t)(ws+778);
	i1 v176 = *(i1*)(intptr_t)v175;
	f8(v176);

	i8 v177 = (i8)(intptr_t)(ws+776);
	i1 v178 = *(i1*)(intptr_t)v177;
	i1 v179 = (i1)+4;
	i1 v180 = ((i1)v178)<<v179;
	i8 v181 = (i8)(intptr_t)(ws+776);
	*(i1*)(intptr_t)v181 = v180;

	i8 v182 = (i8)(intptr_t)(ws+777);
	i1 v183 = *(i1*)(intptr_t)v182;
	i1 v184 = v183+(-1);
	i8 v185 = (i8)(intptr_t)(ws+777);
	*(i1*)(intptr_t)v185 = v184;

	i8 v186 = (i8)(intptr_t)(ws+777);
	i1 v187 = *(i1*)(intptr_t)v186;
	i1 v188 = (i1)+0;
	if (v187==v188) goto c02_0029; else goto c02_002a;

c02_0029:;

	goto c02_0020;

	goto c02_0026;

c02_002a:;

c02_0026:;

	goto c02_001f;

c02_0020:;

endsub:;
}

// print_hex_i32 workspace at ws+768 length ws+4
void f20(i4 p198 /* value */) {
	*(i4*)(intptr_t)(ws+768) = p198; /*value */

	i8 v199 = (i8)(intptr_t)(ws+768);
	i4 v200 = *(i4*)(intptr_t)v199;
	i1 v201 = (i1)+24;
	i4 v202 = ((i4)v200)>>v201;
	i1 v203 = v202;
	f18(v203);

	i8 v204 = (i8)(intptr_t)(ws+768);
	i4 v205 = *(i4*)(intptr_t)v204;
	i1 v206 = (i1)+16;
	i4 v207 = ((i4)v205)>>v206;
	i1 v208 = v207;
	f18(v208);

	i8 v209 = (i8)(intptr_t)(ws+768);
	i4 v210 = *(i4*)(intptr_t)v209;
	i1 v211 = (i1)+8;
	i4 v212 = ((i4)v210)>>v211;
	i1 v213 = v212;
	f18(v213);

	i8 v214 = (i8)(intptr_t)(ws+768);
	i4 v215 = *(i4*)(intptr_t)v214;
	i1 v216 = v215;
	f18(v216);

endsub:;
}

// ArgvInit workspace at ws+640 length ws+0
void f23(void) {

	
*(i8*)(intptr_t)(ws+16) 
 = (i8)(intptr_t)global_argv; 


	i8 v328 = (i8)(intptr_t)(ws+16);
	i8 v329 = *(i8*)(intptr_t)v328;
	i8 v330 = v329+(+8);
	i8 v331 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v331 = v330;

endsub:;
}

// ArgvNext workspace at ws+640 length ws+8
void f24(i8* p332 /* arg */) {

	i8 v333 = (i8)(intptr_t)(ws+16);
	i8 v334 = *(i8*)(intptr_t)v333;
	i8 v335 = (i8)+0;
	if (v334==v335) goto c02_0052; else goto c02_0053;

c02_0052:;

	i8 v336 = (i8)+0;
	i8 v337 = (i8)(intptr_t)(ws+640);
	*(i8*)(intptr_t)v337 = v336;

	goto endsub;

	goto c02_004f;

c02_0053:;

c02_004f:;

	i8 v338 = (i8)(intptr_t)(ws+16);
	i8 v339 = *(i8*)(intptr_t)v338;
	i8 v340 = *(i8*)(intptr_t)v339;
	i8 v341 = (i8)(intptr_t)(ws+640);
	*(i8*)(intptr_t)v341 = v340;

	i8 v342 = (i8)(intptr_t)(ws+640);
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
	*p332 = *(i8*)(intptr_t)(ws+640);
}

// StrCmp workspace at ws+744 length ws+17
void f25(i1* p351 /* res */, i8 p352 /* s2 */, i8 p353 /* s1 */) {
	*(i8*)(intptr_t)(ws+744) = p353; /*s1 */
	*(i8*)(intptr_t)(ws+752) = p352; /*s2 */

c02_0059:;

	i8 v354 = (i8)(intptr_t)(ws+744);
	i8 v355 = *(i8*)(intptr_t)v354;
	i1 v356 = *(i1*)(intptr_t)v355;
	i8 v357 = (i8)(intptr_t)(ws+752);
	i8 v358 = *(i8*)(intptr_t)v357;
	i1 v359 = *(i1*)(intptr_t)v358;
	i1 v360 = v356-v359;
	i8 v361 = (i8)(intptr_t)(ws+760);
	*(i1*)(intptr_t)v361 = v360;

	i8 v362 = (i8)(intptr_t)(ws+760);
	i1 v363 = *(i1*)(intptr_t)v362;
	i1 v364 = (i1)+0;
	if (v363==v364) goto c02_0062; else goto c02_0060;

c02_0062:;

	i8 v365 = (i8)(intptr_t)(ws+744);
	i8 v366 = *(i8*)(intptr_t)v365;
	i1 v367 = *(i1*)(intptr_t)v366;
	i1 v368 = (i1)+0;
	if (v367==v368) goto c02_0060; else goto c02_0061;

c02_0060:;

	goto c02_005a;

	goto c02_005b;

c02_0061:;

c02_005b:;

	i8 v369 = (i8)(intptr_t)(ws+744);
	i8 v370 = *(i8*)(intptr_t)v369;
	i8 v371 = v370+(+1);
	i8 v372 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v372 = v371;

	i8 v373 = (i8)(intptr_t)(ws+752);
	i8 v374 = *(i8*)(intptr_t)v373;
	i8 v375 = v374+(+1);
	i8 v376 = (i8)(intptr_t)(ws+752);
	*(i8*)(intptr_t)v376 = v375;

	goto c02_0059;

c02_005a:;

endsub:;
	*p351 = *(i1*)(intptr_t)(ws+760);
}

// ToLower workspace at ws+664 length ws+2
void f26(i1* p377 /* cc */, i1 p378 /* c */) {
	*(i1*)(intptr_t)(ws+664) = p378; /*c */

	i8 v379 = (i8)(intptr_t)(ws+664);
	i1 v380 = *(i1*)(intptr_t)v379;
	i1 v381 = (i1)+65;
	if (v380<v381) goto c02_0069; else goto c02_006a;

c02_006a:;

	i1 v382 = (i1)+90;
	i8 v383 = (i8)(intptr_t)(ws+664);
	i1 v384 = *(i1*)(intptr_t)v383;
	if (v382<v384) goto c02_0069; else goto c02_0068;

c02_0068:;

	i8 v385 = (i8)(intptr_t)(ws+664);
	i1 v386 = *(i1*)(intptr_t)v385;
	i1 v387 = v386|(+32);
	i8 v388 = (i8)(intptr_t)(ws+665);
	*(i1*)(intptr_t)v388 = v387;

	goto c02_0063;

c02_0069:;

	i8 v389 = (i8)(intptr_t)(ws+664);
	i1 v390 = *(i1*)(intptr_t)v389;
	i8 v391 = (i8)(intptr_t)(ws+665);
	*(i1*)(intptr_t)v391 = v390;

c02_0063:;

endsub:;
	*p377 = *(i1*)(intptr_t)(ws+665);
}

// StrICmp workspace at ws+640 length ws+17
void f27(i1* p392 /* res */, i8 p393 /* s2 */, i8 p394 /* s1 */) {
	*(i8*)(intptr_t)(ws+640) = p394; /*s1 */
	*(i8*)(intptr_t)(ws+648) = p393; /*s2 */

c02_006b:;

	i8 v395 = (i8)(intptr_t)(ws+640);
	i8 v396 = *(i8*)(intptr_t)v395;
	i1 v397 = *(i1*)(intptr_t)v396;
	i1 v398;
	f26(&v398, v397);
	i8 v399 = (i8)(intptr_t)(ws+648);
	i8 v400 = *(i8*)(intptr_t)v399;
	i1 v401 = *(i1*)(intptr_t)v400;
	i1 v402;
	f26(&v402, v401);
	i1 v403 = v398-v402;
	i8 v404 = (i8)(intptr_t)(ws+656);
	*(i1*)(intptr_t)v404 = v403;

	i8 v405 = (i8)(intptr_t)(ws+656);
	i1 v406 = *(i1*)(intptr_t)v405;
	i1 v407 = (i1)+0;
	if (v406==v407) goto c02_0074; else goto c02_0072;

c02_0074:;

	i8 v408 = (i8)(intptr_t)(ws+640);
	i8 v409 = *(i8*)(intptr_t)v408;
	i1 v410 = *(i1*)(intptr_t)v409;
	i1 v411 = (i1)+0;
	if (v410==v411) goto c02_0072; else goto c02_0073;

c02_0072:;

	goto c02_006c;

	goto c02_006d;

c02_0073:;

c02_006d:;

	i8 v412 = (i8)(intptr_t)(ws+640);
	i8 v413 = *(i8*)(intptr_t)v412;
	i8 v414 = v413+(+1);
	i8 v415 = (i8)(intptr_t)(ws+640);
	*(i8*)(intptr_t)v415 = v414;

	i8 v416 = (i8)(intptr_t)(ws+648);
	i8 v417 = *(i8*)(intptr_t)v416;
	i8 v418 = v417+(+1);
	i8 v419 = (i8)(intptr_t)(ws+648);
	*(i8*)(intptr_t)v419 = v418;

	goto c02_006b;

c02_006c:;

endsub:;
	*p392 = *(i1*)(intptr_t)(ws+656);
}

// StrLen workspace at ws+768 length ws+25
void f28(i8* p420 /* size */, i8 p421 /* s */) {
	*(i8*)(intptr_t)(ws+768) = p421; /*s */

	i8 v422 = (i8)(intptr_t)(ws+768);
	i8 v423 = *(i8*)(intptr_t)v422;
	i8 v424 = (i8)(intptr_t)(ws+784);
	*(i8*)(intptr_t)v424 = v423;

c02_0075:;

	i8 v425 = (i8)(intptr_t)(ws+784);
	i8 v426 = *(i8*)(intptr_t)v425;
	i1 v427 = *(i1*)(intptr_t)v426;
	i8 v428 = (i8)(intptr_t)(ws+792);
	*(i1*)(intptr_t)v428 = v427;

	i8 v429 = (i8)(intptr_t)(ws+792);
	i1 v430 = *(i1*)(intptr_t)v429;
	i1 v431 = (i1)+0;
	if (v430==v431) goto c02_007a; else goto c02_007b;

c02_007a:;

	goto c02_0076;

	goto c02_0077;

c02_007b:;

c02_0077:;

	i8 v432 = (i8)(intptr_t)(ws+784);
	i8 v433 = *(i8*)(intptr_t)v432;
	i8 v434 = v433+(+1);
	i8 v435 = (i8)(intptr_t)(ws+784);
	*(i8*)(intptr_t)v435 = v434;

	goto c02_0075;

c02_0076:;

	i8 v436 = (i8)(intptr_t)(ws+784);
	i8 v437 = *(i8*)(intptr_t)v436;
	i8 v438 = (i8)(intptr_t)(ws+768);
	i8 v439 = *(i8*)(intptr_t)v438;
	i8 v440 = v437-v439;
	i8 v441 = (i8)(intptr_t)(ws+776);
	*(i8*)(intptr_t)v441 = v440;

endsub:;
	*p420 = *(i8*)(intptr_t)(ws+776);
}

// MemCopy workspace at ws+768 length ws+24
void f30(i8 p463 /* dest */, i8 p464 /* size */, i8 p465 /* src */) {
	*(i8*)(intptr_t)(ws+768) = p465; /*src */
	*(i8*)(intptr_t)(ws+776) = p464; /*size */
	*(i8*)(intptr_t)(ws+784) = p463; /*dest */

c02_0085:;

	i8 v466 = (i8)(intptr_t)(ws+776);
	i8 v467 = *(i8*)(intptr_t)v466;
	i8 v468 = (i8)+0;
	if (v467==v468) goto c02_0088; else goto c02_0087;

c02_0087:;

	i8 v469 = (i8)(intptr_t)(ws+768);
	i8 v470 = *(i8*)(intptr_t)v469;
	i1 v471 = *(i1*)(intptr_t)v470;
	i8 v472 = (i8)(intptr_t)(ws+784);
	i8 v473 = *(i8*)(intptr_t)v472;
	*(i1*)(intptr_t)v473 = v471;

	i8 v474 = (i8)(intptr_t)(ws+784);
	i8 v475 = *(i8*)(intptr_t)v474;
	i8 v476 = v475+(+1);
	i8 v477 = (i8)(intptr_t)(ws+784);
	*(i8*)(intptr_t)v477 = v476;

	i8 v478 = (i8)(intptr_t)(ws+768);
	i8 v479 = *(i8*)(intptr_t)v478;
	i8 v480 = v479+(+1);
	i8 v481 = (i8)(intptr_t)(ws+768);
	*(i8*)(intptr_t)v481 = v480;

	i8 v482 = (i8)(intptr_t)(ws+776);
	i8 v483 = *(i8*)(intptr_t)v482;
	i8 v484 = v483+(-1);
	i8 v485 = (i8)(intptr_t)(ws+776);
	*(i8*)(intptr_t)v485 = v484;

	goto c02_0085;

c02_0088:;

endsub:;
}
const i1 c02_s0008[] = { 0x4f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0x0a,0 };

// Alloc workspace at ws+792 length ws+56
void f33(i8* p581 /* block */, i8 p582 /* length */) {
	*(i8*)(intptr_t)(ws+792) = p582; /*length */

	i8 v583 = (i8)(intptr_t)(ws+792);
	i8 v584 = *(i8*)(intptr_t)v583;
	i8 v585 = v584+(+8);
	i8 v586;
	f4(&v586, v585);
	i8 v587 = (i8)(intptr_t)(ws+808);
	*(i8*)(intptr_t)v587 = v586;

	i8 v588 = (i8)+0;
	i8 v589 = (i8)(intptr_t)(ws+816);
	*(i8*)(intptr_t)v589 = v588;

	i8 v590 = (i8)(intptr_t)(ws+24);
	i8 v591 = *(i8*)(intptr_t)v590;
	i8 v592 = (i8)(intptr_t)(ws+824);
	*(i8*)(intptr_t)v592 = v591;

c02_009f:;

	i8 v593 = (i8)(intptr_t)(ws+824);
	i8 v594 = *(i8*)(intptr_t)v593;
	i8 v595 = (i8)+0;
	if (v594==v595) goto c02_00a4; else goto c02_00a5;

c02_00a4:;

	i8 v596 = (i8)+0;
	i8 v597 = (i8)(intptr_t)(ws+824);
	*(i8*)(intptr_t)v597 = v596;

	i8 v598 = (i8)(intptr_t)c02_s0008;
	f11(v598);

	f6();

	goto c02_00a0;

	goto c02_00a1;

c02_00a5:;

c02_00a1:;

	i8 v599 = (i8)(intptr_t)(ws+824);
	i8 v600 = *(i8*)(intptr_t)v599;
	i8 v601 = v600+(+8);
	i8 v602 = *(i8*)(intptr_t)v601;
	i8 v603 = (i8)(intptr_t)(ws+832);
	*(i8*)(intptr_t)v603 = v602;

	i8 v604 = (i8)(intptr_t)(ws+832);
	i8 v605 = *(i8*)(intptr_t)v604;
	i8 v606 = (i8)(intptr_t)(ws+808);
	i8 v607 = *(i8*)(intptr_t)v606;
	if (v605==v607) goto c02_00a9; else goto c02_00aa;

c02_00a9:;

	i8 v608 = (i8)(intptr_t)(ws+816);
	i8 v609 = *(i8*)(intptr_t)v608;
	i8 v610 = (i8)+0;
	if (v609==v610) goto c02_00af; else goto c02_00ae;

c02_00ae:;

	i8 v611 = (i8)(intptr_t)(ws+824);
	i8 v612 = *(i8*)(intptr_t)v611;
	i8 v613 = *(i8*)(intptr_t)v612;
	i8 v614 = (i8)(intptr_t)(ws+816);
	i8 v615 = *(i8*)(intptr_t)v614;
	*(i8*)(intptr_t)v615 = v613;

	goto c02_00ab;

c02_00af:;

	i8 v616 = (i8)(intptr_t)(ws+824);
	i8 v617 = *(i8*)(intptr_t)v616;
	i8 v618 = *(i8*)(intptr_t)v617;
	i8 v619 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v619 = v618;

c02_00ab:;

	goto c02_00a0;

	goto c02_00a6;

c02_00aa:;

	i8 v620 = (i8)(intptr_t)(ws+808);
	i8 v621 = *(i8*)(intptr_t)v620;
	i8 v622 = (i8)(intptr_t)(ws+832);
	i8 v623 = *(i8*)(intptr_t)v622;
	i8 v624 = v623+(-16);
	if (v621<v624) goto c02_00b2; else goto c02_00b3;

c02_00b2:;

	i8 v625 = (i8)(intptr_t)(ws+832);
	i8 v626 = *(i8*)(intptr_t)v625;
	i8 v627 = (i8)(intptr_t)(ws+808);
	i8 v628 = *(i8*)(intptr_t)v627;
	i8 v629 = v626-v628;
	i8 v630 = (i8)(intptr_t)(ws+824);
	i8 v631 = *(i8*)(intptr_t)v630;
	i8 v632 = v631+(+8);
	*(i8*)(intptr_t)v632 = v629;

	i8 v633 = (i8)(intptr_t)(ws+824);
	i8 v634 = *(i8*)(intptr_t)v633;
	i8 v635 = (i8)(intptr_t)(ws+824);
	i8 v636 = *(i8*)(intptr_t)v635;
	i8 v637 = v636+(+8);
	i8 v638 = *(i8*)(intptr_t)v637;
	i8 v639 = v634+v638;
	i8 v640 = (i8)(intptr_t)(ws+824);
	*(i8*)(intptr_t)v640 = v639;

	goto c02_00a0;

	goto c02_00a6;

c02_00b3:;

c02_00a6:;

	i8 v641 = (i8)(intptr_t)(ws+824);
	i8 v642 = *(i8*)(intptr_t)v641;
	i8 v643 = (i8)(intptr_t)(ws+816);
	*(i8*)(intptr_t)v643 = v642;

	i8 v644 = (i8)(intptr_t)(ws+824);
	i8 v645 = *(i8*)(intptr_t)v644;
	i8 v646 = *(i8*)(intptr_t)v645;
	i8 v647 = (i8)(intptr_t)(ws+824);
	*(i8*)(intptr_t)v647 = v646;

	goto c02_009f;

c02_00a0:;

	i8 v648 = (i8)(intptr_t)(ws+824);
	i8 v649 = *(i8*)(intptr_t)v648;
	i8 v650 = (i8)(intptr_t)(ws+840);
	*(i8*)(intptr_t)v650 = v649;

	i8 v651 = (i8)(intptr_t)(ws+808);
	i8 v652 = *(i8*)(intptr_t)v651;
	i8 v653 = (i8)(intptr_t)(ws+840);
	i8 v654 = *(i8*)(intptr_t)v653;
	*(i8*)(intptr_t)v654 = v652;

	i8 v655 = (i8)(intptr_t)(ws+840);
	i8 v656 = *(i8*)(intptr_t)v655;
	i8 v657 = v656+(+8);
	i8 v658 = (i8)(intptr_t)(ws+800);
	*(i8*)(intptr_t)v658 = v657;

	i8 v659 = (i8)(intptr_t)(ws+800);
	i8 v660 = *(i8*)(intptr_t)v659;
	i1 v661 = (i1)+0;
	i8 v662 = (i8)(intptr_t)(ws+792);
	i8 v663 = *(i8*)(intptr_t)v662;
	f7(v663, v661, v660);

endsub:;
	*p581 = *(i8*)(intptr_t)(ws+800);
}

// GetFreeMemory workspace at ws+640 length ws+16
void f36(i8* p802 /* bytes */) {

	i8 v803 = (i8)+0;
	i8 v804 = (i8)(intptr_t)(ws+640);
	*(i8*)(intptr_t)v804 = v803;

	i8 v805 = (i8)(intptr_t)(ws+24);
	i8 v806 = *(i8*)(intptr_t)v805;
	i8 v807 = (i8)(intptr_t)(ws+648);
	*(i8*)(intptr_t)v807 = v806;

c02_00d6:;

	i8 v808 = (i8)(intptr_t)(ws+648);
	i8 v809 = *(i8*)(intptr_t)v808;
	i8 v810 = (i8)+0;
	if (v809==v810) goto c02_00d9; else goto c02_00d8;

c02_00d8:;

	i8 v811 = (i8)(intptr_t)(ws+640);
	i8 v812 = *(i8*)(intptr_t)v811;
	i8 v813 = (i8)(intptr_t)(ws+648);
	i8 v814 = *(i8*)(intptr_t)v813;
	i8 v815 = v814+(+8);
	i8 v816 = *(i8*)(intptr_t)v815;
	i8 v817 = v812+v816;
	i8 v818 = (i8)(intptr_t)(ws+640);
	*(i8*)(intptr_t)v818 = v817;

	i8 v819 = (i8)(intptr_t)(ws+648);
	i8 v820 = *(i8*)(intptr_t)v819;
	i8 v821 = *(i8*)(intptr_t)v820;
	i8 v822 = (i8)(intptr_t)(ws+648);
	*(i8*)(intptr_t)v822 = v821;

	goto c02_00d6;

c02_00d9:;

endsub:;
	*p802 = *(i8*)(intptr_t)(ws+640);
}

// StrDup workspace at ws+744 length ws+24
void f37(i8* p823 /* news */, i8 p824 /* s */) {
	*(i8*)(intptr_t)(ws+744) = p824; /*s */

	i8 v825 = (i8)(intptr_t)(ws+744);
	i8 v826 = *(i8*)(intptr_t)v825;
	i8 v827;
	f28(&v827, v826);
	i8 v828 = v827+(+1);
	i8 v829 = (i8)(intptr_t)(ws+760);
	*(i8*)(intptr_t)v829 = v828;

	i8 v830 = (i8)(intptr_t)(ws+760);
	i8 v831 = *(i8*)(intptr_t)v830;
	i8 v832;
	f33(&v832, v831);
	i8 v833 = (i8)(intptr_t)(ws+752);
	*(i8*)(intptr_t)v833 = v832;

	i8 v834 = (i8)(intptr_t)(ws+744);
	i8 v835 = *(i8*)(intptr_t)v834;
	i8 v836 = (i8)(intptr_t)(ws+760);
	i8 v837 = *(i8*)(intptr_t)v836;
	i8 v838 = (i8)(intptr_t)(ws+752);
	i8 v839 = *(i8*)(intptr_t)v838;
	f30(v839, v837, v835);

endsub:;
	*p823 = *(i8*)(intptr_t)(ws+752);
}

// fcb_i_blockin workspace at ws+824 length ws+28
void f38(i8 p840 /* fcb */) {
	*(i8*)(intptr_t)(ws+824) = p840; /*fcb */

	i8 v841 = (i8)(intptr_t)(ws+824);
	i8 v842 = *(i8*)(intptr_t)v841;
	i8 v843 = v842+(+12);
	i1 v844 = (i1)+0;
	i8 v845 = (i8)+512;
	f7(v845, v844, v843);

	i8 v846 = (i8)(intptr_t)(ws+824);
	i8 v847 = *(i8*)(intptr_t)v846;
	i4 v848 = *(i4*)(intptr_t)v847;
	i8 v849 = (i8)(intptr_t)(ws+832);
	*(i4*)(intptr_t)v849 = v848;

	i8 v850 = (i8)(intptr_t)(ws+824);
	i8 v851 = *(i8*)(intptr_t)v850;
	i8 v852 = v851+(+12);
	i8 v853 = (i8)(intptr_t)(ws+840);
	*(i8*)(intptr_t)v853 = v852;

	i8 v854 = (i8)(intptr_t)(ws+824);
	i8 v855 = *(i8*)(intptr_t)v854;
	i8 v856 = v855+(+8);
	i4 v857 = *(i4*)(intptr_t)v856;
	i1 v858 = (i1)+9;
	i4 v859 = ((i4)v857)<<v858;
	i8 v860 = (i8)(intptr_t)(ws+848);
	*(i4*)(intptr_t)v860 = v859;

	
pread( 
*(i4*)(intptr_t)(ws+832) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+840) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+848) 
); 


	i1 v861 = (i1)+0;
	i8 v862 = (i8)(intptr_t)(ws+824);
	i8 v863 = *(i8*)(intptr_t)v862;
	i8 v864 = v863+(+6);
	*(i1*)(intptr_t)v864 = v861;

endsub:;
}

// fcb_i_blockout workspace at ws+824 length ws+28
void f39(i8 p865 /* fcb */) {
	*(i8*)(intptr_t)(ws+824) = p865; /*fcb */

	i8 v866 = (i8)(intptr_t)(ws+824);
	i8 v867 = *(i8*)(intptr_t)v866;
	i8 v868 = v867+(+6);
	i1 v869 = *(i1*)(intptr_t)v868;
	i1 v870 = (i1)+0;
	if (v869==v870) goto c02_00de; else goto c02_00dd;

c02_00dd:;

	i8 v871 = (i8)(intptr_t)(ws+824);
	i8 v872 = *(i8*)(intptr_t)v871;
	i4 v873 = *(i4*)(intptr_t)v872;
	i8 v874 = (i8)(intptr_t)(ws+832);
	*(i4*)(intptr_t)v874 = v873;

	i8 v875 = (i8)(intptr_t)(ws+824);
	i8 v876 = *(i8*)(intptr_t)v875;
	i8 v877 = v876+(+12);
	i8 v878 = (i8)(intptr_t)(ws+840);
	*(i8*)(intptr_t)v878 = v877;

	i8 v879 = (i8)(intptr_t)(ws+824);
	i8 v880 = *(i8*)(intptr_t)v879;
	i8 v881 = v880+(+8);
	i4 v882 = *(i4*)(intptr_t)v881;
	i1 v883 = (i1)+9;
	i4 v884 = ((i4)v882)<<v883;
	i8 v885 = (i8)(intptr_t)(ws+848);
	*(i4*)(intptr_t)v885 = v884;

	
pwrite( 
*(i4*)(intptr_t)(ws+832) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+840) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+848) 
); 


	i1 v886 = (i1)+0;
	i8 v887 = (i8)(intptr_t)(ws+824);
	i8 v888 = *(i8*)(intptr_t)v887;
	i8 v889 = v888+(+6);
	*(i1*)(intptr_t)v889 = v886;

	goto c02_00da;

c02_00de:;

c02_00da:;

endsub:;
}

// fcb_i_changeblock workspace at ws+808 length ws+12
void f40(i4 p890 /* newblock */, i8 p891 /* fcb */) {
	*(i8*)(intptr_t)(ws+808) = p891; /*fcb */
	*(i4*)(intptr_t)(ws+816) = p890; /*newblock */

	i8 v892 = (i8)(intptr_t)(ws+816);
	i4 v893 = *(i4*)(intptr_t)v892;
	i8 v894 = (i8)(intptr_t)(ws+808);
	i8 v895 = *(i8*)(intptr_t)v894;
	i8 v896 = v895+(+8);
	i4 v897 = *(i4*)(intptr_t)v896;
	if (v893==v897) goto c02_00e3; else goto c02_00e2;

c02_00e2:;

	i8 v898 = (i8)(intptr_t)(ws+808);
	i8 v899 = *(i8*)(intptr_t)v898;
	f39(v899);

	i8 v900 = (i8)(intptr_t)(ws+816);
	i4 v901 = *(i4*)(intptr_t)v900;
	i8 v902 = (i8)(intptr_t)(ws+808);
	i8 v903 = *(i8*)(intptr_t)v902;
	i8 v904 = v903+(+8);
	*(i4*)(intptr_t)v904 = v901;

	i8 v905 = (i8)(intptr_t)(ws+808);
	i8 v906 = *(i8*)(intptr_t)v905;
	f38(v906);

	goto c02_00df;

c02_00e3:;

c02_00df:;

endsub:;
}

// fcb_i_open workspace at ws+752 length ws+28
void f41(i1* p907 /* errno */, i4 p908 /* flags */, i8 p909 /* filename */, i8 p910 /* fcb */) {
	*(i8*)(intptr_t)(ws+752) = p910; /*fcb */
	*(i8*)(intptr_t)(ws+760) = p909; /*filename */
	*(i4*)(intptr_t)(ws+768) = p908; /*flags */

	i8 v911 = (i8)(intptr_t)(ws+752);
	i8 v912 = *(i8*)(intptr_t)v911;
	i1 v913 = (i1)+0;
	i8 v914 = (i8)+524;
	f7(v914, v913, v912);

	i2 v915 = (i2)+511;
	i8 v916 = (i8)(intptr_t)(ws+752);
	i8 v917 = *(i8*)(intptr_t)v916;
	i8 v918 = v917+(+4);
	*(i2*)(intptr_t)v918 = v915;

	i4 v919 = (i4)-1;
	i8 v920 = (i8)(intptr_t)(ws+752);
	i8 v921 = *(i8*)(intptr_t)v920;
	i8 v922 = v921+(+8);
	*(i4*)(intptr_t)v922 = v919;

	
errno = 0; 


	
*(i4*)(intptr_t)(ws+776) 
 = open((char*)(intptr_t) 
*(i8*)(intptr_t)(ws+760) 
,  
*(i4*)(intptr_t)(ws+768) 
,  
(+438)
); 


	i8 v923 = (i8)(intptr_t)(ws+776);
	i4 v924 = *(i4*)(intptr_t)v923;
	i8 v925 = (i8)(intptr_t)(ws+752);
	i8 v926 = *(i8*)(intptr_t)v925;
	*(i4*)(intptr_t)v926 = v924;

	i8 v927 = (i8)(intptr_t)(ws+776);
	i4 v928 = *(i4*)(intptr_t)v927;
	i4 v929 = (i4)+0;
	if ((s4)v928<(s4)v929) goto c02_00e7; else goto c02_00e8;

c02_00e7:;

	
*(i1*)(intptr_t)(ws+772) 
 = errno; 


	goto c02_00e4;

c02_00e8:;

	i1 v930 = (i1)+0;
	i8 v931 = (i8)(intptr_t)(ws+772);
	*(i1*)(intptr_t)v931 = v930;

c02_00e4:;

endsub:;
	*p907 = *(i1*)(intptr_t)(ws+772);
}

// FCBOpenIn workspace at ws+728 length ws+17
void f42(i1* p932 /* errno */, i8 p933 /* filename */, i8 p934 /* fcb */) {
	*(i8*)(intptr_t)(ws+728) = p934; /*fcb */
	*(i8*)(intptr_t)(ws+736) = p933; /*filename */

	i8 v935 = (i8)(intptr_t)(ws+728);
	i8 v936 = *(i8*)(intptr_t)v935;
	i8 v937 = (i8)(intptr_t)(ws+736);
	i8 v938 = *(i8*)(intptr_t)v937;
	i4 v939 = (i4)+0;
	i1 v940;
	f41(&v940, v939, v938, v936);
	i8 v941 = (i8)(intptr_t)(ws+744);
	*(i1*)(intptr_t)v941 = v940;

endsub:;
	*p932 = *(i1*)(intptr_t)(ws+744);
}

// FCBOpenOut workspace at ws+648 length ws+17
void f44(i1* p952 /* errno */, i8 p953 /* filename */, i8 p954 /* fcb */) {
	*(i8*)(intptr_t)(ws+648) = p954; /*fcb */
	*(i8*)(intptr_t)(ws+656) = p953; /*filename */

	i8 v955 = (i8)(intptr_t)(ws+648);
	i8 v956 = *(i8*)(intptr_t)v955;
	i8 v957 = (i8)(intptr_t)(ws+656);
	i8 v958 = *(i8*)(intptr_t)v957;
	i4 v959 = (i4)+578;
	i1 v960;
	f41(&v960, v959, v958, v956);
	i8 v961 = (i8)(intptr_t)(ws+664);
	*(i1*)(intptr_t)v961 = v960;

endsub:;
	*p952 = *(i1*)(intptr_t)(ws+664);
}

// FCBClose workspace at ws+640 length ws+16
void f45(i1* p962 /* errno */, i8 p963 /* fcb */) {
	*(i8*)(intptr_t)(ws+640) = p963; /*fcb */

	i8 v964 = (i8)(intptr_t)(ws+640);
	i8 v965 = *(i8*)(intptr_t)v964;
	f39(v965);

	i8 v966 = (i8)(intptr_t)(ws+640);
	i8 v967 = *(i8*)(intptr_t)v966;
	i4 v968 = *(i4*)(intptr_t)v967;
	i8 v969 = (i8)(intptr_t)(ws+652);
	*(i4*)(intptr_t)v969 = v968;

	
errno = 0; 


	
close( 
*(i4*)(intptr_t)(ws+652) 
); 


	
*(i1*)(intptr_t)(ws+648) 
 = errno; 


endsub:;
	*p962 = *(i1*)(intptr_t)(ws+648);
}

// FCBSeek workspace at ws+728 length ws+18
void f46(i4 p970 /* pos */, i8 p971 /* fcb */) {
	*(i8*)(intptr_t)(ws+728) = p971; /*fcb */
	*(i4*)(intptr_t)(ws+736) = p970; /*pos */

	i8 v972 = (i8)(intptr_t)(ws+736);
	i4 v973 = *(i4*)(intptr_t)v972;
	i4 v974 = v973+(-1);
	i8 v975 = (i8)(intptr_t)(ws+736);
	*(i4*)(intptr_t)v975 = v974;

	i8 v976 = (i8)(intptr_t)(ws+736);
	i4 v977 = *(i4*)(intptr_t)v976;
	i1 v978 = (i1)+9;
	i4 v979 = ((i4)v977)>>v978;
	i8 v980 = (i8)(intptr_t)(ws+740);
	*(i4*)(intptr_t)v980 = v979;

	i8 v981 = (i8)(intptr_t)(ws+736);
	i4 v982 = *(i4*)(intptr_t)v981;
	i2 v983 = v982;
	i2 v984 = v983&(+511);
	i8 v985 = (i8)(intptr_t)(ws+744);
	*(i2*)(intptr_t)v985 = v984;

	i8 v986 = (i8)(intptr_t)(ws+728);
	i8 v987 = *(i8*)(intptr_t)v986;
	i8 v988 = (i8)(intptr_t)(ws+740);
	i4 v989 = *(i4*)(intptr_t)v988;
	f40(v989, v987);

	i8 v990 = (i8)(intptr_t)(ws+744);
	i2 v991 = *(i2*)(intptr_t)v990;
	i8 v992 = (i8)(intptr_t)(ws+728);
	i8 v993 = *(i8*)(intptr_t)v992;
	i8 v994 = v993+(+4);
	*(i2*)(intptr_t)v994 = v991;

endsub:;
}

// FCBPos workspace at ws+768 length ws+12
void f47(i4* p995 /* pos */, i8 p996 /* fcb */) {
	*(i8*)(intptr_t)(ws+768) = p996; /*fcb */

	i8 v997 = (i8)(intptr_t)(ws+768);
	i8 v998 = *(i8*)(intptr_t)v997;
	i8 v999 = v998+(+8);
	i4 v1000 = *(i4*)(intptr_t)v999;
	i1 v1001 = (i1)+9;
	i4 v1002 = ((i4)v1000)<<v1001;
	i8 v1003 = (i8)(intptr_t)(ws+768);
	i8 v1004 = *(i8*)(intptr_t)v1003;
	i8 v1005 = v1004+(+4);
	i2 v1006 = *(i2*)(intptr_t)v1005;
	i4 v1007 = v1006;
	i4 v1008 = v1002|v1007;
	i4 v1009 = v1008+(+1);
	i8 v1010 = (i8)(intptr_t)(ws+776);
	*(i4*)(intptr_t)v1010 = v1009;

endsub:;
	*p995 = *(i4*)(intptr_t)(ws+776);
}

// FCBExt workspace at ws+664 length ws+16
void f48(i4* p1011 /* len */, i8 p1012 /* fcb */) {
	*(i8*)(intptr_t)(ws+664) = p1012; /*fcb */

	i8 v1013 = (i8)(intptr_t)(ws+664);
	i8 v1014 = *(i8*)(intptr_t)v1013;
	f39(v1014);

	i8 v1015 = (i8)(intptr_t)(ws+664);
	i8 v1016 = *(i8*)(intptr_t)v1015;
	i4 v1017 = *(i4*)(intptr_t)v1016;
	i8 v1018 = (i8)(intptr_t)(ws+676);
	*(i4*)(intptr_t)v1018 = v1017;

	
*(i4*)(intptr_t)(ws+672) 
 = lseek( 
*(i4*)(intptr_t)(ws+676) 
, 0, SEEK_END); 


	i8 v1019 = (i8)(intptr_t)(ws+672);
	i4 v1020 = *(i4*)(intptr_t)v1019;
	i4 v1021 = v1020+(+511);
	i4 v1022 = v1021&(-512);
	i8 v1023 = (i8)(intptr_t)(ws+672);
	*(i4*)(intptr_t)v1023 = v1022;

endsub:;
	*p1011 = *(i4*)(intptr_t)(ws+672);
}

// fcb_i_nextchar workspace at ws+800 length ws+8
void f49(i8 p1024 /* fcb */) {
	*(i8*)(intptr_t)(ws+800) = p1024; /*fcb */

	i8 v1025 = (i8)(intptr_t)(ws+800);
	i8 v1026 = *(i8*)(intptr_t)v1025;
	i8 v1027 = v1026+(+4);
	i2 v1028 = *(i2*)(intptr_t)v1027;
	i2 v1029 = v1028+(+1);
	i8 v1030 = (i8)(intptr_t)(ws+800);
	i8 v1031 = *(i8*)(intptr_t)v1030;
	i8 v1032 = v1031+(+4);
	*(i2*)(intptr_t)v1032 = v1029;

	i8 v1033 = (i8)(intptr_t)(ws+800);
	i8 v1034 = *(i8*)(intptr_t)v1033;
	i8 v1035 = v1034+(+4);
	i2 v1036 = *(i2*)(intptr_t)v1035;
	i2 v1037 = (i2)+512;
	if (v1036==v1037) goto c02_00ec; else goto c02_00ed;

c02_00ec:;

	i8 v1038 = (i8)(intptr_t)(ws+800);
	i8 v1039 = *(i8*)(intptr_t)v1038;
	i8 v1040 = (i8)(intptr_t)(ws+800);
	i8 v1041 = *(i8*)(intptr_t)v1040;
	i8 v1042 = v1041+(+8);
	i4 v1043 = *(i4*)(intptr_t)v1042;
	i4 v1044 = v1043+(+1);
	f40(v1044, v1039);

	i2 v1045 = (i2)+0;
	i8 v1046 = (i8)(intptr_t)(ws+800);
	i8 v1047 = *(i8*)(intptr_t)v1046;
	i8 v1048 = v1047+(+4);
	*(i2*)(intptr_t)v1048 = v1045;

	goto c02_00e9;

c02_00ed:;

c02_00e9:;

endsub:;
}

// FCBGetChar workspace at ws+784 length ws+9
void f50(i1* p1049 /* c */, i8 p1050 /* fcb */) {
	*(i8*)(intptr_t)(ws+784) = p1050; /*fcb */

	i8 v1051 = (i8)(intptr_t)(ws+784);
	i8 v1052 = *(i8*)(intptr_t)v1051;
	f49(v1052);

	i8 v1053 = (i8)(intptr_t)(ws+784);
	i8 v1054 = *(i8*)(intptr_t)v1053;
	i8 v1055 = v1054+(+12);
	i8 v1056 = (i8)(intptr_t)(ws+784);
	i8 v1057 = *(i8*)(intptr_t)v1056;
	i8 v1058 = v1057+(+4);
	i2 v1059 = *(i2*)(intptr_t)v1058;
	i8 v1060 = v1059;
	i1 v1061 = (i1)+0;
	i8 v1062 = ((i8)v1060)<<v1061;
	i8 v1063 = v1055+v1062;
	i1 v1064 = *(i1*)(intptr_t)v1063;
	i8 v1065 = (i8)(intptr_t)(ws+792);
	*(i1*)(intptr_t)v1065 = v1064;

endsub:;
	*p1049 = *(i1*)(intptr_t)(ws+792);
}

// FCBPutChar workspace at ws+768 length ws+9
void f51(i1 p1066 /* c */, i8 p1067 /* fcb */) {
	*(i8*)(intptr_t)(ws+768) = p1067; /*fcb */
	*(i1*)(intptr_t)(ws+776) = p1066; /*c */

	i8 v1068 = (i8)(intptr_t)(ws+768);
	i8 v1069 = *(i8*)(intptr_t)v1068;
	f49(v1069);

	i8 v1070 = (i8)(intptr_t)(ws+776);
	i1 v1071 = *(i1*)(intptr_t)v1070;
	i8 v1072 = (i8)(intptr_t)(ws+768);
	i8 v1073 = *(i8*)(intptr_t)v1072;
	i8 v1074 = v1073+(+12);
	i8 v1075 = (i8)(intptr_t)(ws+768);
	i8 v1076 = *(i8*)(intptr_t)v1075;
	i8 v1077 = v1076+(+4);
	i2 v1078 = *(i2*)(intptr_t)v1077;
	i8 v1079 = v1078;
	i1 v1080 = (i1)+0;
	i8 v1081 = ((i8)v1079)<<v1080;
	i8 v1082 = v1074+v1081;
	*(i1*)(intptr_t)v1082 = v1071;

	i1 v1083 = (i1)+1;
	i8 v1084 = (i8)(intptr_t)(ws+768);
	i8 v1085 = *(i8*)(intptr_t)v1084;
	i8 v1086 = v1085+(+6);
	*(i1*)(intptr_t)v1086 = v1083;

endsub:;
}
const i1 c02_s0009[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0 };

// StartError workspace at ws+768 length ws+0
void f55(void) {

	i8 v1148 = (i8)(intptr_t)c02_s0009;
	f11(v1148);

endsub:;
}

// EndError workspace at ws+768 length ws+0
void f56(void) {

	f12();

	f6();

endsub:;
}

// SimpleError workspace at ws+728 length ws+8
void f57(i8 p1149 /* s */) {
	*(i8*)(intptr_t)(ws+728) = p1149; /*s */

	f55();

	i8 v1150 = (i8)(intptr_t)(ws+728);
	i8 v1151 = *(i8*)(intptr_t)v1150;
	f11(v1151);

	f56();

endsub:;
}
const i1 c02_s000a[] = { 0x75,0x6e,0x61,0x62,0x6c,0x65,0x20,0x74,0x6f,0x20,0x6f,0x70,0x65,0x6e,0x20,0x27,0 };
const i1 c02_s000b[] = { 0x27,0 };

// CannotOpen workspace at ws+728 length ws+8
void f58(i8 p1152 /* filename */) {
	*(i8*)(intptr_t)(ws+728) = p1152; /*filename */

	f55();

	i8 v1153 = (i8)(intptr_t)c02_s000a;
	f11(v1153);

	i8 v1154 = (i8)(intptr_t)(ws+728);
	i8 v1155 = *(i8*)(intptr_t)v1154;
	f11(v1155);

	i8 v1156 = (i8)(intptr_t)c02_s000b;
	f11(v1156);

	f56();

endsub:;
}

// EmitByte workspace at ws+760 length ws+1
void f59(i1 p1157 /* c */) {
	*(i1*)(intptr_t)(ws+760) = p1157; /*c */

	i8 v1158 = (i8)(intptr_t)(ws+52);
	i8 v1159 = (i8)(intptr_t)(ws+760);
	i1 v1160 = *(i1*)(intptr_t)v1159;
	f51(v1160, v1158);

endsub:;
}

// E workspace at ws+744 length ws+9
void f60(i8 p1161 /* text */) {
	*(i8*)(intptr_t)(ws+744) = p1161; /*text */

c02_0101:;

	i8 v1162 = (i8)(intptr_t)(ws+744);
	i8 v1163 = *(i8*)(intptr_t)v1162;
	i1 v1164 = *(i1*)(intptr_t)v1163;
	i8 v1165 = (i8)(intptr_t)(ws+752);
	*(i1*)(intptr_t)v1165 = v1164;

	i8 v1166 = (i8)(intptr_t)(ws+744);
	i8 v1167 = *(i8*)(intptr_t)v1166;
	i8 v1168 = v1167+(+1);
	i8 v1169 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v1169 = v1168;

	i8 v1170 = (i8)(intptr_t)(ws+752);
	i1 v1171 = *(i1*)(intptr_t)v1170;
	i1 v1172 = (i1)+0;
	if (v1171==v1172) goto c02_0106; else goto c02_0107;

c02_0106:;

	goto c02_0102;

	goto c02_0103;

c02_0107:;

c02_0103:;

	i8 v1173 = (i8)(intptr_t)(ws+752);
	i1 v1174 = *(i1*)(intptr_t)v1173;
	f59(v1174);

	goto c02_0101;

c02_0102:;

endsub:;
}

// E_u32 workspace at ws+720 length ws+33
void f61(i4 p1175 /* value */) {
	*(i4*)(intptr_t)(ws+720) = p1175; /*value */

	i8 v1176 = (i8)(intptr_t)(ws+724);
	i8 v1177 = (i8)(intptr_t)(ws+736);
	*(i8*)(intptr_t)v1177 = v1176;

	i8 v1178 = (i8)(intptr_t)(ws+720);
	i4 v1179 = *(i4*)(intptr_t)v1178;
	i1 v1180 = (i1)+10;
	i8 v1181 = (i8)(intptr_t)(ws+736);
	i8 v1182 = *(i8*)(intptr_t)v1181;
	i8 v1183;
	f13(&v1183, v1182, v1180, v1179);
	i8 v1184 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v1184 = v1183;

c02_0108:;

	i8 v1185 = (i8)(intptr_t)(ws+736);
	i8 v1186 = *(i8*)(intptr_t)v1185;
	i1 v1187 = *(i1*)(intptr_t)v1186;
	i8 v1188 = (i8)(intptr_t)(ws+752);
	*(i1*)(intptr_t)v1188 = v1187;

	i8 v1189 = (i8)(intptr_t)(ws+752);
	i1 v1190 = *(i1*)(intptr_t)v1189;
	i1 v1191 = (i1)+0;
	if (v1190==v1191) goto c02_010d; else goto c02_010e;

c02_010d:;

	goto c02_0109;

	goto c02_010a;

c02_010e:;

c02_010a:;

	i8 v1192 = (i8)(intptr_t)(ws+752);
	i1 v1193 = *(i1*)(intptr_t)v1192;
	f59(v1193);

	i8 v1194 = (i8)(intptr_t)(ws+736);
	i8 v1195 = *(i8*)(intptr_t)v1194;
	i8 v1196 = v1195+(+1);
	i8 v1197 = (i8)(intptr_t)(ws+736);
	*(i8*)(intptr_t)v1197 = v1196;

	goto c02_0108;

c02_0109:;

endsub:;
}

// E_u16 workspace at ws+712 length ws+2
void f62(i2 p1198 /* value */) {
	*(i2*)(intptr_t)(ws+712) = p1198; /*value */

	i8 v1199 = (i8)(intptr_t)(ws+712);
	i2 v1200 = *(i2*)(intptr_t)v1199;
	i4 v1201 = v1200;
	f61(v1201);

endsub:;
}

// E_h workspace at ws+712 length ws+25
void f64(i1 p1206 /* width */, i4 p1207 /* value */) {
	*(i4*)(intptr_t)(ws+712) = p1207; /*value */
	*(i1*)(intptr_t)(ws+716) = p1206; /*width */

	i8 v1208 = (i8)(intptr_t)(ws+712);
	i4 v1209 = *(i4*)(intptr_t)v1208;
	i1 v1210 = (i1)+16;
	i8 v1211 = (i8)(intptr_t)(ws+717);
	i8 v1212;
	f13(&v1212, v1211, v1210, v1209);
	i8 v1213 = (i8)(intptr_t)(ws+728);
	*(i8*)(intptr_t)v1213 = v1212;

	i8 v1214 = (i8)(intptr_t)(ws+716);
	i1 v1215 = *(i1*)(intptr_t)v1214;
	i8 v1216 = (i8)(intptr_t)(ws+728);
	i8 v1217 = *(i8*)(intptr_t)v1216;
	i8 v1218 = (i8)(intptr_t)(ws+717);
	i8 v1219 = v1217-v1218;
	i1 v1220 = v1219;
	i1 v1221 = v1215-v1220;
	i8 v1222 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v1222 = v1221;

c02_0111:;

	i8 v1223 = (i8)(intptr_t)(ws+736);
	i1 v1224 = *(i1*)(intptr_t)v1223;
	i1 v1225 = (i1)+0;
	if (v1224==v1225) goto c02_0114; else goto c02_0113;

c02_0113:;

	i1 v1226 = (i1)+48;
	f59(v1226);

	i8 v1227 = (i8)(intptr_t)(ws+736);
	i1 v1228 = *(i1*)(intptr_t)v1227;
	i1 v1229 = v1228+(-1);
	i8 v1230 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v1230 = v1229;

	goto c02_0111;

c02_0114:;

	i8 v1231 = (i8)(intptr_t)(ws+717);
	f60(v1231);

endsub:;
}

// E_h8 workspace at ws+704 length ws+1
void f65(i1 p1232 /* value */) {
	*(i1*)(intptr_t)(ws+704) = p1232; /*value */

	i8 v1233 = (i8)(intptr_t)(ws+704);
	i1 v1234 = *(i1*)(intptr_t)v1233;
	i4 v1235 = v1234;
	i1 v1236 = (i1)+2;
	f64(v1236, v1235);

endsub:;
}

// E_h16 workspace at ws+648 length ws+2
void f66(i2 p1237 /* value */) {
	*(i2*)(intptr_t)(ws+648) = p1237; /*value */

	i8 v1238 = (i8)(intptr_t)(ws+648);
	i2 v1239 = *(i2*)(intptr_t)v1238;
	i4 v1240 = v1239;
	i1 v1241 = (i1)+4;
	f64(v1241, v1240);

endsub:;
}
const i1 c02_s000c[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };

// EmitterOpenfile workspace at ws+640 length ws+8
void f67(i8 p1242 /* filename */) {
	*(i8*)(intptr_t)(ws+640) = p1242; /*filename */

	i8 v1243 = (i8)(intptr_t)(ws+52);
	i8 v1244 = (i8)(intptr_t)(ws+640);
	i8 v1245 = *(i8*)(intptr_t)v1244;
	i1 v1246;
	f44(&v1246, v1245, v1243);
	i1 v1247 = (i1)+0;
	if (v1246==v1247) goto c02_0119; else goto c02_0118;

c02_0118:;

	i8 v1248 = (i8)(intptr_t)c02_s000c;
	f57(v1248);

	goto c02_0115;

c02_0119:;

c02_0115:;

endsub:;
}
const i1 c02_s000d[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };

// EmitterClosefile workspace at ws+640 length ws+0
void f68(void) {

	i8 v1249 = (i8)(intptr_t)(ws+52);
	i1 v1250;
	f45(&v1250, v1249);
	i1 v1251 = (i1)+0;
	if (v1250==v1251) goto c02_011e; else goto c02_011d;

c02_011d:;

	i8 v1252 = (i8)(intptr_t)c02_s000d;
	f57(v1252);

	goto c02_011a;

c02_011e:;

c02_011a:;

endsub:;
}

// ArchAlignUp workspace at ws+2736 length ws+8
void f69(i2* p1253 /* newvalue */, i1 p1254 /* alignment */, i2 p1255 /* value */) {
	*(i2*)(intptr_t)(ws+2736) = p1255; /*value */
	*(i1*)(intptr_t)(ws+2738) = p1254; /*alignment */

	i8 v1256 = (i8)(intptr_t)(ws+2738);
	i1 v1257 = *(i1*)(intptr_t)v1256;
	i1 v1258 = v1257+(-1);
	i2 v1259 = v1258;
	i8 v1260 = (i8)(intptr_t)(ws+2742);
	*(i2*)(intptr_t)v1260 = v1259;

	i8 v1261 = (i8)(intptr_t)(ws+2736);
	i2 v1262 = *(i2*)(intptr_t)v1261;
	i8 v1263 = (i8)(intptr_t)(ws+2742);
	i2 v1264 = *(i2*)(intptr_t)v1263;
	i2 v1265 = v1262+v1264;
	i8 v1266 = (i8)(intptr_t)(ws+2742);
	i2 v1267 = *(i2*)(intptr_t)v1266;
	i2 v1268 = ~v1267;
	i2 v1269 = v1265&v1268;
	i8 v1270 = (i8)(intptr_t)(ws+2740);
	*(i2*)(intptr_t)v1270 = v1269;

endsub:;
	*p1253 = *(i2*)(intptr_t)(ws+2740);
}
const i1 c02_s000e[] = { 0x66,0 };

// ArchEmitSubRef workspace at ws+704 length ws+2
void f71(i2 p1272 /* subid */) {
	*(i2*)(intptr_t)(ws+704) = p1272; /*subid */

	i8 v1273 = (i8)(intptr_t)c02_s000e;
	f60(v1273);

	i8 v1274 = (i8)(intptr_t)(ws+704);
	i2 v1275 = *(i2*)(intptr_t)v1274;
	f62(v1275);

endsub:;
}
const i1 c02_s000f[] = { 0x77,0x73,0x2b,0 };

// ArchEmitWSRef workspace at ws+704 length ws+4
void f72(i2 p1276 /* address */, i1 p1277 /* wid */) {
	*(i1*)(intptr_t)(ws+704) = p1277; /*wid */
	*(i2*)(intptr_t)(ws+706) = p1276; /*address */

	i8 v1278 = (i8)(intptr_t)c02_s000f;
	f60(v1278);

	i8 v1279 = (i8)(intptr_t)(ws+706);
	i2 v1280 = *(i2*)(intptr_t)v1279;
	f62(v1280);

endsub:;
}
const i1 c02_s0010[] = { 0x23,0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,0x20,0x22,0x63,0x6f,0x77,0x67,0x6f,0x6c,0x2e,0x68,0x22,0x0a,0 };
const i1 c02_s0011[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x38,0x20,0x77,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x5b,0x30,0x78,0 };
const i1 c02_s0012[] = { 0x5d,0x3b,0x0a,0 };
const i1 c02_s0013[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x31,0x2a,0x20,0x77,0x73,0x20,0x3d,0x20,0x28,0x69,0x31,0x2a,0x29,0x77,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x3b,0x0a,0 };

// ArchEmitHeader workspace at ws+640 length ws+8
void f73(i8 p1281 /* coo */) {
	*(i8*)(intptr_t)(ws+640) = p1281; /*coo */

	i8 v1282 = (i8)(intptr_t)c02_s0010;
	f60(v1282);

	i8 v1283 = (i8)(intptr_t)c02_s0011;
	f60(v1283);

	i8 v1284 = (i8)(intptr_t)(ws+576);
	i2 v1285 = *(i2*)(intptr_t)v1284;
	i2 v1286 = v1285+(+7);
	i1 v1287 = (i1)+3;
	i2 v1288 = ((i2)v1286)>>v1287;
	f66(v1288);

	i8 v1289 = (i8)(intptr_t)c02_s0012;
	f60(v1289);

	i8 v1290 = (i8)(intptr_t)c02_s0013;
	f60(v1290);

endsub:;
}
const i1 c02_s0014[] = { 0x76,0x6f,0x69,0x64,0x20,0x63,0x6d,0x61,0x69,0x6e,0x28,0x76,0x6f,0x69,0x64,0x29,0x20,0x7b,0x0a,0 };
const i1 c02_s0015[] = { 0x28,0x29,0x3b,0x0a,0 };
const i1 c02_s0016[] = { 0x7d,0x0a,0 };

// ArchEmitFooter workspace at ws+640 length ws+20
void f74(i8 p1291 /* coo */) {
	*(i8*)(intptr_t)(ws+640) = p1291; /*coo */

	i8 v1292 = (i8)(intptr_t)c02_s0014;
	f60(v1292);

c02_0121:;

	i8 v1293 = (i8)(intptr_t)(ws+640);
	i8 v1294 = *(i8*)(intptr_t)v1293;
	i8 v1295 = (i8)+0;
	if (v1294==v1295) goto c02_0124; else goto c02_0123;

c02_0123:;

	i8 v1296 = (i8)(intptr_t)(ws+640);
	i8 v1297 = *(i8*)(intptr_t)v1296;
	i8 v1298 = v1297+(+536);
	i8 v1299 = *(i8*)(intptr_t)v1298;
	i8 v1300 = (i8)(intptr_t)(ws+648);
	*(i8*)(intptr_t)v1300 = v1299;

	i8 v1301 = (i8)(intptr_t)(ws+648);
	i8 v1302 = *(i8*)(intptr_t)v1301;
	i8 v1303 = (i8)+0;
	if (v1302==v1303) goto c02_0129; else goto c02_0128;

c02_0128:;

	i1 v1304 = (i1)+9;
	f59(v1304);

	i8 v1305 = (i8)(intptr_t)(ws+648);
	i8 v1306 = *(i8*)(intptr_t)v1305;
	i8 v1307 = v1306+(+186);
	i2 v1308 = *(i2*)(intptr_t)v1307;
	f71(v1308);

	i8 v1309 = (i8)(intptr_t)c02_s0015;
	f60(v1309);

	goto c02_0125;

c02_0129:;

c02_0125:;

	i8 v1310 = (i8)(intptr_t)(ws+640);
	i8 v1311 = *(i8*)(intptr_t)v1310;
	i8 v1312 = v1311+(+664);
	i8 v1313 = *(i8*)(intptr_t)v1312;
	i8 v1314 = (i8)(intptr_t)(ws+640);
	*(i8*)(intptr_t)v1314 = v1313;

	goto c02_0121;

c02_0124:;

	i8 v1315 = (i8)(intptr_t)c02_s0016;
	f60(v1315);

	i8 v1316 = (i8)(intptr_t)(ws+52);
	i4 v1317;
	f48(&v1317, v1316);
	i8 v1318 = (i8)(intptr_t)(ws+52);
	i4 v1319;
	f47(&v1319, v1318);
	i4 v1320 = v1317-v1319;
	i8 v1321 = (i8)(intptr_t)(ws+656);
	*(i4*)(intptr_t)v1321 = v1320;

c02_012c:;

	i8 v1322 = (i8)(intptr_t)(ws+656);
	i4 v1323 = *(i4*)(intptr_t)v1322;
	i4 v1324 = (i4)+0;
	if (v1323==v1324) goto c02_012f; else goto c02_012e;

c02_012e:;

	i1 v1325 = (i1)+32;
	f59(v1325);

	i8 v1326 = (i8)(intptr_t)(ws+656);
	i4 v1327 = *(i4*)(intptr_t)v1326;
	i4 v1328 = v1327+(-1);
	i8 v1329 = (i8)(intptr_t)(ws+656);
	*(i4*)(intptr_t)v1329 = v1328;

	goto c02_012c;

c02_012f:;

endsub:;
}

// getchar workspace at ws+768 length ws+9
void f75(i1* p1334 /* c */, i8 p1335 /* fcb */) {
	*(i8*)(intptr_t)(ws+768) = p1335; /*fcb */

	i8 v1336 = (i8)(intptr_t)(ws+585);
	i1 v1337 = *(i1*)(intptr_t)v1336;
	i1 v1338 = (i1)+0;
	if (v1337==v1338) goto c02_0133; else goto c02_0134;

c02_0133:;

	i8 v1339 = (i8)(intptr_t)(ws+768);
	i8 v1340 = *(i8*)(intptr_t)v1339;
	i1 v1341;
	f50(&v1341, v1340);
	i8 v1342 = (i8)(intptr_t)(ws+776);
	*(i1*)(intptr_t)v1342 = v1341;

	goto c02_0130;

c02_0134:;

	i8 v1343 = (i8)(intptr_t)(ws+585);
	i1 v1344 = *(i1*)(intptr_t)v1343;
	i8 v1345 = (i8)(intptr_t)(ws+776);
	*(i1*)(intptr_t)v1345 = v1344;

	i1 v1346 = (i1)+0;
	i8 v1347 = (i8)(intptr_t)(ws+585);
	*(i1*)(intptr_t)v1347 = v1346;

c02_0130:;

endsub:;
	*p1334 = *(i1*)(intptr_t)(ws+776);
}
const i1 c02_s0017[] = { 0x69,0x6e,0x76,0x61,0x6c,0x69,0x64,0x20,0x68,0x65,0x78,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x69,0x6e,0x20,0x63,0x6f,0x6f,0x66,0x69,0x6c,0x65,0x20,0x61,0x74,0x20,0x6f,0x66,0x66,0x73,0x65,0x74,0x20,0x30,0x78,0 };

// read_hex workspace at ws+744 length ws+17
void f77(i4* p1352 /* val */, i1 p1353 /* len */, i8 p1354 /* fcb */) {
	*(i8*)(intptr_t)(ws+744) = p1354; /*fcb */
	*(i1*)(intptr_t)(ws+752) = p1353; /*len */

	i4 v1355 = (i4)+0;
	i8 v1356 = (i8)(intptr_t)(ws+756);
	*(i4*)(intptr_t)v1356 = v1355;

c02_0135:;

	i8 v1357 = (i8)(intptr_t)(ws+744);
	i8 v1358 = *(i8*)(intptr_t)v1357;
	i1 v1359;
	f75(&v1359, v1358);
	i8 v1360 = (i8)(intptr_t)(ws+760);
	*(i1*)(intptr_t)v1360 = v1359;

	i8 v1361 = (i8)(intptr_t)(ws+760);
	i1 v1362 = *(i1*)(intptr_t)v1361;
	i1 v1363 = (i1)+48;
	if (v1362<v1363) goto c02_013d; else goto c02_013e;

c02_013e:;

	i1 v1364 = (i1)+57;
	i8 v1365 = (i8)(intptr_t)(ws+760);
	i1 v1366 = *(i1*)(intptr_t)v1365;
	if (v1364<v1366) goto c02_013d; else goto c02_013c;

c02_013c:;

	i8 v1367 = (i8)(intptr_t)(ws+760);
	i1 v1368 = *(i1*)(intptr_t)v1367;
	i1 v1369 = v1368+(-48);
	i8 v1370 = (i8)(intptr_t)(ws+760);
	*(i1*)(intptr_t)v1370 = v1369;

	goto c02_0137;

c02_013d:;

	i8 v1371 = (i8)(intptr_t)(ws+760);
	i1 v1372 = *(i1*)(intptr_t)v1371;
	i1 v1373 = v1372&(-33);
	i8 v1374 = (i8)(intptr_t)(ws+760);
	*(i1*)(intptr_t)v1374 = v1373;

	i8 v1375 = (i8)(intptr_t)(ws+760);
	i1 v1376 = *(i1*)(intptr_t)v1375;
	i1 v1377 = (i1)+65;
	if (v1376<v1377) goto c02_0145; else goto c02_0146;

c02_0146:;

	i1 v1378 = (i1)+70;
	i8 v1379 = (i8)(intptr_t)(ws+760);
	i1 v1380 = *(i1*)(intptr_t)v1379;
	if (v1378<v1380) goto c02_0145; else goto c02_0144;

c02_0144:;

	i8 v1381 = (i8)(intptr_t)(ws+760);
	i1 v1382 = *(i1*)(intptr_t)v1381;
	i1 v1383 = v1382+(-55);
	i8 v1384 = (i8)(intptr_t)(ws+760);
	*(i1*)(intptr_t)v1384 = v1383;

	goto c02_013f;

c02_0145:;

	f55();

	i8 v1385 = (i8)(intptr_t)c02_s0017;
	f11(v1385);

	i8 v1386 = (i8)(intptr_t)(ws+744);
	i8 v1387 = *(i8*)(intptr_t)v1386;
	i4 v1388;
	f47(&v1388, v1387);
	i4 v1389 = v1388+(-1);
	f20(v1389);

	f56();

c02_013f:;

c02_0137:;

	i8 v1390 = (i8)(intptr_t)(ws+756);
	i4 v1391 = *(i4*)(intptr_t)v1390;
	i1 v1392 = (i1)+4;
	i4 v1393 = ((i4)v1391)<<v1392;
	i8 v1394 = (i8)(intptr_t)(ws+760);
	i1 v1395 = *(i1*)(intptr_t)v1394;
	i4 v1396 = v1395;
	i4 v1397 = v1393+v1396;
	i8 v1398 = (i8)(intptr_t)(ws+756);
	*(i4*)(intptr_t)v1398 = v1397;

	i8 v1399 = (i8)(intptr_t)(ws+752);
	i1 v1400 = *(i1*)(intptr_t)v1399;
	i1 v1401 = v1400+(-1);
	i8 v1402 = (i8)(intptr_t)(ws+752);
	*(i1*)(intptr_t)v1402 = v1401;

	i8 v1403 = (i8)(intptr_t)(ws+752);
	i1 v1404 = *(i1*)(intptr_t)v1403;
	i1 v1405 = (i1)+0;
	if (v1404==v1405) goto c02_014a; else goto c02_014b;

c02_014a:;

	goto c02_0136;

	goto c02_0147;

c02_014b:;

c02_0147:;

	goto c02_0135;

c02_0136:;

endsub:;
	*p1352 = *(i4*)(intptr_t)(ws+756);
}

// read_hex2 workspace at ws+728 length ws+9
void f78(i1* p1406 /* val */, i8 p1407 /* fcb */) {
	*(i8*)(intptr_t)(ws+728) = p1407; /*fcb */

	i8 v1408 = (i8)(intptr_t)(ws+728);
	i8 v1409 = *(i8*)(intptr_t)v1408;
	i1 v1410 = (i1)+2;
	i4 v1411;
	f77(&v1411, v1410, v1409);
	i1 v1412 = v1411;
	i8 v1413 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v1413 = v1412;

endsub:;
	*p1406 = *(i1*)(intptr_t)(ws+736);
}

// read_hex4 workspace at ws+728 length ws+10
void f79(i2* p1414 /* val */, i8 p1415 /* fcb */) {
	*(i8*)(intptr_t)(ws+728) = p1415; /*fcb */

	i8 v1416 = (i8)(intptr_t)(ws+728);
	i8 v1417 = *(i8*)(intptr_t)v1416;
	i1 v1418 = (i1)+4;
	i4 v1419;
	f77(&v1419, v1418, v1417);
	i2 v1420 = v1419;
	i8 v1421 = (i8)(intptr_t)(ws+736);
	*(i2*)(intptr_t)v1421 = v1420;

endsub:;
	*p1414 = *(i2*)(intptr_t)(ws+736);
}

// read_string workspace at ws+728 length ws+32
void f80(i8* p1422 /* ptr */, i1 p1423 /* len */, i8 p1424 /* fcb */) {
	*(i8*)(intptr_t)(ws+728) = p1424; /*fcb */
	*(i1*)(intptr_t)(ws+736) = p1423; /*len */

	i8 v1425 = (i8)(intptr_t)(ws+736);
	i1 v1426 = *(i1*)(intptr_t)v1425;
	i1 v1427 = v1426+(+1);
	i8 v1428 = v1427;
	i8 v1429;
	f33(&v1429, v1428);
	i8 v1430 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v1430 = v1429;

	i8 v1431 = (i8)(intptr_t)(ws+744);
	i8 v1432 = *(i8*)(intptr_t)v1431;
	i8 v1433 = (i8)(intptr_t)(ws+752);
	*(i8*)(intptr_t)v1433 = v1432;

c02_014c:;

	i8 v1434 = (i8)(intptr_t)(ws+736);
	i1 v1435 = *(i1*)(intptr_t)v1434;
	i1 v1436 = (i1)+0;
	if (v1435==v1436) goto c02_0151; else goto c02_0152;

c02_0151:;

	goto c02_014d;

	goto c02_014e;

c02_0152:;

c02_014e:;

	i8 v1437 = (i8)(intptr_t)(ws+728);
	i8 v1438 = *(i8*)(intptr_t)v1437;
	i1 v1439;
	f75(&v1439, v1438);
	i8 v1440 = (i8)(intptr_t)(ws+752);
	i8 v1441 = *(i8*)(intptr_t)v1440;
	*(i1*)(intptr_t)v1441 = v1439;

	i8 v1442 = (i8)(intptr_t)(ws+752);
	i8 v1443 = *(i8*)(intptr_t)v1442;
	i8 v1444 = v1443+(+1);
	i8 v1445 = (i8)(intptr_t)(ws+752);
	*(i8*)(intptr_t)v1445 = v1444;

	i8 v1446 = (i8)(intptr_t)(ws+736);
	i1 v1447 = *(i1*)(intptr_t)v1446;
	i1 v1448 = v1447+(-1);
	i8 v1449 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v1449 = v1448;

	goto c02_014c;

c02_014d:;

endsub:;
	*p1422 = *(i8*)(intptr_t)(ws+744);
}

// AddRef workspace at ws+728 length ws+32
void f81(i8 p1450 /* calls */, i8 p1451 /* subr */) {
	*(i8*)(intptr_t)(ws+728) = p1451; /*subr */
	*(i8*)(intptr_t)(ws+736) = p1450; /*calls */

	i8 v1452 = (i8)(intptr_t)(ws+728);
	i8 v1453 = *(i8*)(intptr_t)v1452;
	i8 v1454 = v1453+(+184);
	i2 v1455 = *(i2*)(intptr_t)v1454;
	i8 v1456 = (i8)(intptr_t)(ws+744);
	*(i2*)(intptr_t)v1456 = v1455;

	i8 v1457 = (i8)(intptr_t)(ws+744);
	i2 v1458 = *(i2*)(intptr_t)v1457;
	i2 v1459 = v1458+(+1);
	i8 v1460 = (i8)(intptr_t)(ws+728);
	i8 v1461 = *(i8*)(intptr_t)v1460;
	i8 v1462 = v1461+(+184);
	*(i2*)(intptr_t)v1462 = v1459;

	i8 v1463 = (i8)(intptr_t)(ws+728);
	i8 v1464 = *(i8*)(intptr_t)v1463;
	i8 v1465 = v1464+(+16);
	i8 v1466 = (i8)(intptr_t)(ws+752);
	*(i8*)(intptr_t)v1466 = v1465;

c02_0155:;

	i8 v1467 = (i8)(intptr_t)(ws+744);
	i2 v1468 = *(i2*)(intptr_t)v1467;
	i2 v1469 = (i2)+16;
	if (v1468<v1469) goto c02_0158; else goto c02_0157;

c02_0157:;

	i8 v1470 = (i8)(intptr_t)(ws+752);
	i8 v1471 = *(i8*)(intptr_t)v1470;
	i8 v1472 = *(i8*)(intptr_t)v1471;
	i8 v1473 = (i8)+0;
	if (v1472==v1473) goto c02_015c; else goto c02_015d;

c02_015c:;

	i8 v1474 = (i8)+136;
	i8 v1475;
	f33(&v1475, v1474);
	i8 v1476 = (i8)(intptr_t)(ws+752);
	i8 v1477 = *(i8*)(intptr_t)v1476;
	*(i8*)(intptr_t)v1477 = v1475;

	goto c02_0159;

c02_015d:;

c02_0159:;

	i8 v1478 = (i8)(intptr_t)(ws+752);
	i8 v1479 = *(i8*)(intptr_t)v1478;
	i8 v1480 = *(i8*)(intptr_t)v1479;
	i8 v1481 = (i8)(intptr_t)(ws+752);
	*(i8*)(intptr_t)v1481 = v1480;

	i8 v1482 = (i8)(intptr_t)(ws+744);
	i2 v1483 = *(i2*)(intptr_t)v1482;
	i2 v1484 = v1483+(-16);
	i8 v1485 = (i8)(intptr_t)(ws+744);
	*(i2*)(intptr_t)v1485 = v1484;

	goto c02_0155;

c02_0158:;

	i8 v1486 = (i8)(intptr_t)(ws+736);
	i8 v1487 = *(i8*)(intptr_t)v1486;
	i8 v1488 = (i8)(intptr_t)(ws+752);
	i8 v1489 = *(i8*)(intptr_t)v1488;
	i8 v1490 = v1489+(+8);
	i8 v1491 = (i8)(intptr_t)(ws+744);
	i2 v1492 = *(i2*)(intptr_t)v1491;
	i1 v1493 = v1492;
	i8 v1494 = v1493;
	i1 v1495 = (i1)+3;
	i8 v1496 = ((i8)v1494)<<v1495;
	i8 v1497 = v1490+v1496;
	*(i8*)(intptr_t)v1497 = v1487;

endsub:;
}

// FindSub workspace at ws+760 length ws+32
void f82(i8* p1498 /* ptr */, i2 p1499 /* id */, i8 p1500 /* coo */) {
	*(i8*)(intptr_t)(ws+760) = p1500; /*coo */
	*(i2*)(intptr_t)(ws+768) = p1499; /*id */

	i8 v1501 = (i8)(intptr_t)(ws+760);
	i8 v1502 = *(i8*)(intptr_t)v1501;
	i8 v1503 = v1502+(+528);
	i8 v1504 = (i8)(intptr_t)(ws+784);
	*(i8*)(intptr_t)v1504 = v1503;

c02_0160:;

	i8 v1505 = (i8)(intptr_t)(ws+768);
	i2 v1506 = *(i2*)(intptr_t)v1505;
	i2 v1507 = (i2)+16;
	if (v1506<v1507) goto c02_0163; else goto c02_0162;

c02_0162:;

	i8 v1508 = (i8)(intptr_t)(ws+784);
	i8 v1509 = *(i8*)(intptr_t)v1508;
	i8 v1510 = *(i8*)(intptr_t)v1509;
	i8 v1511 = (i8)+0;
	if (v1510==v1511) goto c02_0167; else goto c02_0168;

c02_0167:;

	i8 v1512 = (i8)+136;
	i8 v1513;
	f33(&v1513, v1512);
	i8 v1514 = (i8)(intptr_t)(ws+784);
	i8 v1515 = *(i8*)(intptr_t)v1514;
	*(i8*)(intptr_t)v1515 = v1513;

	goto c02_0164;

c02_0168:;

c02_0164:;

	i8 v1516 = (i8)(intptr_t)(ws+784);
	i8 v1517 = *(i8*)(intptr_t)v1516;
	i8 v1518 = *(i8*)(intptr_t)v1517;
	i8 v1519 = (i8)(intptr_t)(ws+784);
	*(i8*)(intptr_t)v1519 = v1518;

	i8 v1520 = (i8)(intptr_t)(ws+768);
	i2 v1521 = *(i2*)(intptr_t)v1520;
	i2 v1522 = v1521+(-16);
	i8 v1523 = (i8)(intptr_t)(ws+768);
	*(i2*)(intptr_t)v1523 = v1522;

	goto c02_0160;

c02_0163:;

	i8 v1524 = (i8)(intptr_t)(ws+784);
	i8 v1525 = *(i8*)(intptr_t)v1524;
	i8 v1526 = v1525+(+8);
	i8 v1527 = (i8)(intptr_t)(ws+768);
	i2 v1528 = *(i2*)(intptr_t)v1527;
	i1 v1529 = v1528;
	i8 v1530 = v1529;
	i1 v1531 = (i1)+3;
	i8 v1532 = ((i8)v1530)<<v1531;
	i8 v1533 = v1526+v1532;
	i8 v1534 = (i8)(intptr_t)(ws+776);
	*(i8*)(intptr_t)v1534 = v1533;

endsub:;
	*p1498 = *(i8*)(intptr_t)(ws+776);
}

// FindOrCreateSub workspace at ws+728 length ws+32
void f83(i8* p1535 /* subroutine */, i2 p1536 /* id */, i8 p1537 /* coo */) {
	*(i8*)(intptr_t)(ws+728) = p1537; /*coo */
	*(i2*)(intptr_t)(ws+736) = p1536; /*id */

	i8 v1538 = (i8)(intptr_t)(ws+728);
	i8 v1539 = *(i8*)(intptr_t)v1538;
	i8 v1540 = (i8)(intptr_t)(ws+736);
	i2 v1541 = *(i2*)(intptr_t)v1540;
	i8 v1542;
	f82(&v1542, v1541, v1539);
	i8 v1543 = (i8)(intptr_t)(ws+752);
	*(i8*)(intptr_t)v1543 = v1542;

	i8 v1544 = (i8)(intptr_t)(ws+752);
	i8 v1545 = *(i8*)(intptr_t)v1544;
	i8 v1546 = *(i8*)(intptr_t)v1545;
	i8 v1547 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v1547 = v1546;

	i8 v1548 = (i8)(intptr_t)(ws+744);
	i8 v1549 = *(i8*)(intptr_t)v1548;
	i8 v1550 = (i8)+0;
	if (v1549==v1550) goto c02_016c; else goto c02_016d;

c02_016c:;

	i8 v1551 = (i8)+189;
	i8 v1552;
	f33(&v1552, v1551);
	i8 v1553 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v1553 = v1552;

	i8 v1554 = (i8)(intptr_t)(ws+728);
	i8 v1555 = *(i8*)(intptr_t)v1554;
	i8 v1556 = (i8)(intptr_t)(ws+744);
	i8 v1557 = *(i8*)(intptr_t)v1556;
	*(i8*)(intptr_t)v1557 = v1555;

	i8 v1558 = (i8)(intptr_t)(ws+40);
	i8 v1559 = *(i8*)(intptr_t)v1558;
	i8 v1560 = (i8)(intptr_t)(ws+744);
	i8 v1561 = *(i8*)(intptr_t)v1560;
	i8 v1562 = v1561+(+8);
	*(i8*)(intptr_t)v1562 = v1559;

	i8 v1563 = (i8)(intptr_t)(ws+744);
	i8 v1564 = *(i8*)(intptr_t)v1563;
	i8 v1565 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v1565 = v1564;

	i8 v1566 = (i8)(intptr_t)(ws+48);
	i2 v1567 = *(i2*)(intptr_t)v1566;
	i8 v1568 = (i8)(intptr_t)(ws+744);
	i8 v1569 = *(i8*)(intptr_t)v1568;
	i8 v1570 = v1569+(+186);
	*(i2*)(intptr_t)v1570 = v1567;

	i8 v1571 = (i8)(intptr_t)(ws+744);
	i8 v1572 = *(i8*)(intptr_t)v1571;
	i8 v1573 = (i8)(intptr_t)(ws+752);
	i8 v1574 = *(i8*)(intptr_t)v1573;
	*(i8*)(intptr_t)v1574 = v1572;

	i8 v1575 = (i8)(intptr_t)(ws+48);
	i2 v1576 = *(i2*)(intptr_t)v1575;
	i2 v1577 = v1576+(+1);
	i8 v1578 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v1578 = v1577;

	goto c02_0169;

c02_016d:;

c02_0169:;

endsub:;
	*p1535 = *(i8*)(intptr_t)(ws+744);
}

// Deref workspace at ws+2736 length ws+24
void f84(i8* p1579 /* subout */, i8 p1580 /* subin */) {
	*(i8*)(intptr_t)(ws+2736) = p1580; /*subin */

	i8 v1581 = (i8)(intptr_t)(ws+2736);
	i8 v1582 = *(i8*)(intptr_t)v1581;
	i8 v1583 = (i8)(intptr_t)(ws+2744);
	*(i8*)(intptr_t)v1583 = v1582;

	i8 v1584 = (i8)(intptr_t)(ws+2736);
	i8 v1585 = *(i8*)(intptr_t)v1584;
	i8 v1586 = (i8)+0;
	if (v1585==v1586) goto c02_0172; else goto c02_0171;

c02_0171:;

	i8 v1587 = (i8)(intptr_t)(ws+2736);
	i8 v1588 = *(i8*)(intptr_t)v1587;
	i8 v1589 = v1588+(+160);
	i8 v1590 = *(i8*)(intptr_t)v1589;
	i8 v1591 = (i8)(intptr_t)(ws+2752);
	*(i8*)(intptr_t)v1591 = v1590;

	i8 v1592 = (i8)(intptr_t)(ws+2752);
	i8 v1593 = *(i8*)(intptr_t)v1592;
	i8 v1594 = (i8)+0;
	if (v1593==v1594) goto c02_0177; else goto c02_0176;

c02_0176:;

	i8 v1595 = (i8)(intptr_t)(ws+2752);
	i8 v1596 = *(i8*)(intptr_t)v1595;
	i8 v1597 = v1596+(+16);
	i8 v1598 = *(i8*)(intptr_t)v1597;
	i8 v1599 = (i8)(intptr_t)(ws+2744);
	*(i8*)(intptr_t)v1599 = v1598;

	goto c02_0173;

c02_0177:;

c02_0173:;

	goto c02_016e;

c02_0172:;

c02_016e:;

endsub:;
	*p1579 = *(i8*)(intptr_t)(ws+2744);
}

// FindOrCreateExternal workspace at ws+728 length ws+16
void f85(i8* p1600 /* external */, i8 p1601 /* name */) {
	*(i8*)(intptr_t)(ws+728) = p1601; /*name */

	i8 v1602 = (i8)(intptr_t)(ws+32);
	i8 v1603 = *(i8*)(intptr_t)v1602;
	i8 v1604 = (i8)(intptr_t)(ws+736);
	*(i8*)(intptr_t)v1604 = v1603;

c02_017a:;

	i8 v1605 = (i8)(intptr_t)(ws+736);
	i8 v1606 = *(i8*)(intptr_t)v1605;
	i8 v1607 = (i8)+0;
	if (v1606==v1607) goto c02_017d; else goto c02_017c;

c02_017c:;

	i8 v1608 = (i8)(intptr_t)(ws+736);
	i8 v1609 = *(i8*)(intptr_t)v1608;
	i8 v1610 = v1609+(+8);
	i8 v1611 = *(i8*)(intptr_t)v1610;
	i8 v1612 = (i8)(intptr_t)(ws+728);
	i8 v1613 = *(i8*)(intptr_t)v1612;
	i1 v1614;
	f25(&v1614, v1613, v1611);
	i1 v1615 = (i1)+0;
	if (v1614==v1615) goto c02_0181; else goto c02_0182;

c02_0181:;

	goto endsub;

	goto c02_017e;

c02_0182:;

c02_017e:;

	i8 v1616 = (i8)(intptr_t)(ws+736);
	i8 v1617 = *(i8*)(intptr_t)v1616;
	i8 v1618 = *(i8*)(intptr_t)v1617;
	i8 v1619 = (i8)(intptr_t)(ws+736);
	*(i8*)(intptr_t)v1619 = v1618;

	goto c02_017a;

c02_017d:;

	i8 v1620 = (i8)+24;
	i8 v1621;
	f33(&v1621, v1620);
	i8 v1622 = (i8)(intptr_t)(ws+736);
	*(i8*)(intptr_t)v1622 = v1621;

	i8 v1623 = (i8)(intptr_t)(ws+32);
	i8 v1624 = *(i8*)(intptr_t)v1623;
	i8 v1625 = (i8)(intptr_t)(ws+736);
	i8 v1626 = *(i8*)(intptr_t)v1625;
	*(i8*)(intptr_t)v1626 = v1624;

	i8 v1627 = (i8)(intptr_t)(ws+728);
	i8 v1628 = *(i8*)(intptr_t)v1627;
	i8 v1629;
	f37(&v1629, v1628);
	i8 v1630 = (i8)(intptr_t)(ws+736);
	i8 v1631 = *(i8*)(intptr_t)v1630;
	i8 v1632 = v1631+(+8);
	*(i8*)(intptr_t)v1632 = v1629;

	i8 v1633 = (i8)(intptr_t)(ws+736);
	i8 v1634 = *(i8*)(intptr_t)v1633;
	i8 v1635 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v1635 = v1634;

endsub:;
	*p1600 = *(i8*)(intptr_t)(ws+736);
}
const i1 c02_s0018[] = { 0x6d,0x75,0x6c,0x74,0x69,0x70,0x6c,0x65,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x20,0x64,0x65,0x63,0x6c,0x61,0x72,0x61,0x74,0x69,0x6f,0x6e,0x73,0 };
const i1 c02_s0019[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x75,0x6e,0x73,0x75,0x70,0x70,0x6f,0x72,0x74,0x65,0x64,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x27,0 };
const i1 c02_s001a[] = { 0x27,0x20,0x69,0x6e,0x20,0x63,0x6f,0x6f,0x66,0x69,0x6c,0x65,0x0a,0 };

// OpenAndLoadCoo workspace at ws+664 length ws+64
void f86(i8* p1636 /* coo */, i8 p1637 /* filename */) {
	*(i8*)(intptr_t)(ws+664) = p1637; /*filename */

	i8 v1638 = (i8)+674;
	i8 v1639;
	f33(&v1639, v1638);
	i8 v1640 = (i8)(intptr_t)(ws+672);
	*(i8*)(intptr_t)v1640 = v1639;

	i8 v1641 = (i8)(intptr_t)(ws+48);
	i2 v1642 = *(i2*)(intptr_t)v1641;
	i8 v1643 = (i8)(intptr_t)(ws+672);
	i8 v1644 = *(i8*)(intptr_t)v1643;
	i8 v1645 = v1644+(+672);
	*(i2*)(intptr_t)v1645 = v1642;

	i8 v1646 = (i8)(intptr_t)(ws+48);
	i2 v1647 = *(i2*)(intptr_t)v1646;
	i2 v1648 = v1647+(+1);
	i8 v1649 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v1649 = v1648;

	i8 v1650 = (i8)(intptr_t)(ws+672);
	i8 v1651 = *(i8*)(intptr_t)v1650;
	i8 v1652 = (i8)(intptr_t)(ws+664);
	i8 v1653 = *(i8*)(intptr_t)v1652;
	i1 v1654;
	f42(&v1654, v1653, v1651);
	i1 v1655 = (i1)+0;
	if (v1654==v1655) goto c02_0187; else goto c02_0186;

c02_0186:;

	i8 v1656 = (i8)(intptr_t)(ws+664);
	i8 v1657 = *(i8*)(intptr_t)v1656;
	f58(v1657);

	goto c02_0183;

c02_0187:;

c02_0183:;

c02_0188:;

	i8 v1658 = (i8)(intptr_t)(ws+672);
	i8 v1659 = *(i8*)(intptr_t)v1658;
	i1 v1660;
	f75(&v1660, v1659);
	i8 v1661 = (i8)(intptr_t)(ws+682);
	*(i1*)(intptr_t)v1661 = v1660;

	i8 v1662 = (i8)(intptr_t)(ws+672);
	i8 v1663 = *(i8*)(intptr_t)v1662;
	i2 v1664;
	f79(&v1664, v1663);
	i8 v1665 = (i8)(intptr_t)(ws+684);
	*(i2*)(intptr_t)v1665 = v1664;

	i8 v1666 = (i8)(intptr_t)(ws+672);
	i8 v1667 = *(i8*)(intptr_t)v1666;
	i4 v1668;
	f47(&v1668, v1667);
	i8 v1669 = (i8)(intptr_t)(ws+688);
	*(i4*)(intptr_t)v1669 = v1668;

	i8 v1670 = (i8)(intptr_t)(ws+682);
	i1 v1671 = *(i1*)(intptr_t)v1670;
	i1 v1672 = (i1)+69;
	if (v1671==v1672) goto c02_018d; else goto c02_018e;

c02_018d:;

	goto c02_0189;

	goto c02_018a;

c02_018e:;

	i8 v1673 = (i8)(intptr_t)(ws+682);
	i1 v1674 = *(i1*)(intptr_t)v1673;
	i1 v1675 = (i1)+83;
	if (v1674==v1675) goto c02_0191; else goto c02_0192;

c02_0191:;

	i8 v1676 = (i8)(intptr_t)(ws+672);
	i8 v1677 = *(i8*)(intptr_t)v1676;
	i2 v1678;
	f79(&v1678, v1677);
	i8 v1679 = (i8)(intptr_t)(ws+680);
	*(i2*)(intptr_t)v1679 = v1678;

	i8 v1680 = (i8)(intptr_t)(ws+672);
	i8 v1681 = *(i8*)(intptr_t)v1680;
	i8 v1682 = (i8)(intptr_t)(ws+680);
	i2 v1683 = *(i2*)(intptr_t)v1682;
	i8 v1684;
	f83(&v1684, v1683, v1681);
	i8 v1685 = (i8)(intptr_t)(ws+696);
	*(i8*)(intptr_t)v1685 = v1684;

	i8 v1686 = (i8)(intptr_t)(ws+696);
	i8 v1687 = *(i8*)(intptr_t)v1686;
	i8 v1688 = v1687+(+188);
	i1 v1689 = *(i1*)(intptr_t)v1688;
	i1 v1690 = v1689|(+2);
	i8 v1691 = (i8)(intptr_t)(ws+696);
	i8 v1692 = *(i8*)(intptr_t)v1691;
	i8 v1693 = v1692+(+188);
	*(i1*)(intptr_t)v1693 = v1690;

	goto c02_018a;

c02_0192:;

	i8 v1694 = (i8)(intptr_t)(ws+682);
	i1 v1695 = *(i1*)(intptr_t)v1694;
	i1 v1696 = (i1)+82;
	if (v1695==v1696) goto c02_0195; else goto c02_0196;

c02_0195:;

	i8 v1697 = (i8)(intptr_t)(ws+672);
	i8 v1698 = *(i8*)(intptr_t)v1697;
	i2 v1699;
	f79(&v1699, v1698);
	i8 v1700 = (i8)(intptr_t)(ws+704);
	*(i2*)(intptr_t)v1700 = v1699;

	i8 v1701 = (i8)(intptr_t)(ws+672);
	i8 v1702 = *(i8*)(intptr_t)v1701;
	i2 v1703;
	f79(&v1703, v1702);
	i8 v1704 = (i8)(intptr_t)(ws+706);
	*(i2*)(intptr_t)v1704 = v1703;

	i8 v1705 = (i8)(intptr_t)(ws+672);
	i8 v1706 = *(i8*)(intptr_t)v1705;
	i8 v1707 = (i8)(intptr_t)(ws+704);
	i2 v1708 = *(i2*)(intptr_t)v1707;
	i8 v1709;
	f83(&v1709, v1708, v1706);
	i8 v1710 = (i8)(intptr_t)(ws+672);
	i8 v1711 = *(i8*)(intptr_t)v1710;
	i8 v1712 = (i8)(intptr_t)(ws+706);
	i2 v1713 = *(i2*)(intptr_t)v1712;
	i8 v1714;
	f83(&v1714, v1713, v1711);
	f81(v1714, v1709);

	goto c02_018a;

c02_0196:;

	i8 v1715 = (i8)(intptr_t)(ws+682);
	i1 v1716 = *(i1*)(intptr_t)v1715;
	i1 v1717 = (i1)+87;
	if (v1716==v1717) goto c02_0199; else goto c02_019a;

c02_0199:;

	i8 v1718 = (i8)(intptr_t)(ws+672);
	i8 v1719 = *(i8*)(intptr_t)v1718;
	i2 v1720;
	f79(&v1720, v1719);
	i8 v1721 = (i8)(intptr_t)(ws+680);
	*(i2*)(intptr_t)v1721 = v1720;

	i8 v1722 = (i8)(intptr_t)(ws+672);
	i8 v1723 = *(i8*)(intptr_t)v1722;
	i8 v1724 = (i8)(intptr_t)(ws+680);
	i2 v1725 = *(i2*)(intptr_t)v1724;
	i8 v1726;
	f83(&v1726, v1725, v1723);
	i8 v1727 = (i8)(intptr_t)(ws+696);
	*(i8*)(intptr_t)v1727 = v1726;

	i8 v1728 = (i8)(intptr_t)(ws+672);
	i8 v1729 = *(i8*)(intptr_t)v1728;
	i1 v1730;
	f78(&v1730, v1729);
	i8 v1731 = (i8)(intptr_t)(ws+708);
	*(i1*)(intptr_t)v1731 = v1730;

	i8 v1732 = (i8)(intptr_t)(ws+672);
	i8 v1733 = *(i8*)(intptr_t)v1732;
	i2 v1734;
	f79(&v1734, v1733);
	i8 v1735 = (i8)(intptr_t)(ws+696);
	i8 v1736 = *(i8*)(intptr_t)v1735;
	i8 v1737 = v1736+(+168);
	i8 v1738 = (i8)(intptr_t)(ws+708);
	i1 v1739 = *(i1*)(intptr_t)v1738;
	i8 v1740 = v1739;
	i1 v1741 = (i1)+1;
	i8 v1742 = ((i8)v1740)<<v1741;
	i8 v1743 = v1737+v1742;
	*(i2*)(intptr_t)v1743 = v1734;

	goto c02_018a;

c02_019a:;

	i8 v1744 = (i8)(intptr_t)(ws+682);
	i1 v1745 = *(i1*)(intptr_t)v1744;
	i1 v1746 = (i1)+78;
	if (v1745==v1746) goto c02_019d; else goto c02_019e;

c02_019d:;

	i8 v1747 = (i8)(intptr_t)(ws+672);
	i8 v1748 = *(i8*)(intptr_t)v1747;
	i2 v1749;
	f79(&v1749, v1748);
	i8 v1750 = (i8)(intptr_t)(ws+680);
	*(i2*)(intptr_t)v1750 = v1749;

	i8 v1751 = (i8)(intptr_t)(ws+672);
	i8 v1752 = *(i8*)(intptr_t)v1751;
	i8 v1753 = (i8)(intptr_t)(ws+680);
	i2 v1754 = *(i2*)(intptr_t)v1753;
	i8 v1755;
	f83(&v1755, v1754, v1752);
	i8 v1756 = (i8)(intptr_t)(ws+696);
	*(i8*)(intptr_t)v1756 = v1755;

	i8 v1757 = (i8)(intptr_t)(ws+672);
	i8 v1758 = *(i8*)(intptr_t)v1757;
	i8 v1759 = (i8)(intptr_t)(ws+684);
	i2 v1760 = *(i2*)(intptr_t)v1759;
	i1 v1761 = v1760;
	i1 v1762 = v1761+(-4);
	i8 v1763;
	f80(&v1763, v1762, v1758);
	i8 v1764 = (i8)(intptr_t)(ws+696);
	i8 v1765 = *(i8*)(intptr_t)v1764;
	i8 v1766 = v1765+(+152);
	*(i8*)(intptr_t)v1766 = v1763;

	goto c02_018a;

c02_019e:;

	i8 v1767 = (i8)(intptr_t)(ws+682);
	i1 v1768 = *(i1*)(intptr_t)v1767;
	i1 v1769 = (i1)+88;
	if (v1768==v1769) goto c02_01a1; else goto c02_01a2;

c02_01a1:;

	i8 v1770 = (i8)(intptr_t)(ws+672);
	i8 v1771 = *(i8*)(intptr_t)v1770;
	i2 v1772;
	f79(&v1772, v1771);
	i8 v1773 = (i8)(intptr_t)(ws+680);
	*(i2*)(intptr_t)v1773 = v1772;

	i8 v1774 = (i8)(intptr_t)(ws+672);
	i8 v1775 = *(i8*)(intptr_t)v1774;
	i8 v1776 = (i8)(intptr_t)(ws+680);
	i2 v1777 = *(i2*)(intptr_t)v1776;
	i8 v1778;
	f83(&v1778, v1777, v1775);
	i8 v1779 = (i8)(intptr_t)(ws+696);
	*(i8*)(intptr_t)v1779 = v1778;

	i8 v1780 = (i8)(intptr_t)(ws+672);
	i8 v1781 = *(i8*)(intptr_t)v1780;
	i8 v1782 = (i8)(intptr_t)(ws+684);
	i2 v1783 = *(i2*)(intptr_t)v1782;
	i1 v1784 = v1783;
	i1 v1785 = v1784+(-4);
	i8 v1786;
	f80(&v1786, v1785, v1781);
	i8 v1787 = (i8)(intptr_t)(ws+712);
	*(i8*)(intptr_t)v1787 = v1786;

	i8 v1788 = (i8)(intptr_t)(ws+712);
	i8 v1789 = *(i8*)(intptr_t)v1788;
	i8 v1790;
	f85(&v1790, v1789);
	i8 v1791 = (i8)(intptr_t)(ws+720);
	*(i8*)(intptr_t)v1791 = v1790;

	i8 v1792 = (i8)(intptr_t)(ws+696);
	i8 v1793 = *(i8*)(intptr_t)v1792;
	i8 v1794 = v1793+(+160);
	i8 v1795 = *(i8*)(intptr_t)v1794;
	i8 v1796 = (i8)+0;
	if (v1795==v1796) goto c02_01a7; else goto c02_01a6;

c02_01a6:;

	i8 v1797 = (i8)(intptr_t)c02_s0018;
	f57(v1797);

	goto c02_01a3;

c02_01a7:;

c02_01a3:;

	i8 v1798 = (i8)(intptr_t)(ws+720);
	i8 v1799 = *(i8*)(intptr_t)v1798;
	i8 v1800 = (i8)(intptr_t)(ws+696);
	i8 v1801 = *(i8*)(intptr_t)v1800;
	i8 v1802 = v1801+(+160);
	*(i8*)(intptr_t)v1802 = v1799;

	goto c02_018a;

c02_01a2:;

	i8 v1803 = (i8)(intptr_t)c02_s0019;
	f11(v1803);

	i8 v1804 = (i8)(intptr_t)(ws+682);
	i1 v1805 = *(i1*)(intptr_t)v1804;
	f8(v1805);

	i8 v1806 = (i8)(intptr_t)c02_s001a;
	f11(v1806);

	f6();

c02_018a:;

	i8 v1807 = (i8)(intptr_t)(ws+672);
	i8 v1808 = *(i8*)(intptr_t)v1807;
	i8 v1809 = (i8)(intptr_t)(ws+688);
	i4 v1810 = *(i4*)(intptr_t)v1809;
	i8 v1811 = (i8)(intptr_t)(ws+684);
	i2 v1812 = *(i2*)(intptr_t)v1811;
	i4 v1813 = v1812;
	i4 v1814 = v1810+v1813;
	f46(v1814, v1808);

	goto c02_0188;

c02_0189:;

endsub:;
	*p1636 = *(i8*)(intptr_t)(ws+672);
}
const i1 c02_s001b[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0x63,0x6f,0x6f,0x66,0x69,0x6c,0x65,0x3a,0x20,0 };

// MalformedError workspace at ws+712 length ws+8
void f88(i8 p1816 /* s */) {
	*(i8*)(intptr_t)(ws+712) = p1816; /*s */

	i8 v1817 = (i8)(intptr_t)c02_s001b;
	f11(v1817);

	i8 v1818 = (i8)(intptr_t)(ws+712);
	i8 v1819 = *(i8*)(intptr_t)v1818;
	f11(v1819);

	f12();

	f6();

endsub:;
}
const i1 c02_s001c[] = { 0x75,0x6e,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0x65,0x6e,0x64,0x20,0x6f,0x66,0x20,0x63,0x68,0x75,0x6e,0x6b,0 };

// UnexpectedEndOfChunk workspace at ws+712 length ws+0
void f89(void) {

	i8 v1820 = (i8)(intptr_t)c02_s001c;
	f88(v1820);

endsub:;
}
const i1 c02_s001d[] = { 0x63,0x68,0x75,0x6e,0x6b,0x20,0x73,0x69,0x7a,0x65,0x20,0x69,0x6e,0x63,0x6f,0x6e,0x73,0x69,0x73,0x74,0x65,0x6e,0x74,0 };

// GetC workspace at ws+704 length ws+0
void f90(void) {

	i8 v1821 = (i8)(intptr_t)(ws+674);
	i2 v1822 = *(i2*)(intptr_t)v1821;
	i2 v1823 = (i2)+0;
	if (v1822==v1823) goto c02_01ab; else goto c02_01ac;

c02_01ab:;

	i8 v1824 = (i8)(intptr_t)c02_s001d;
	f88(v1824);

	goto c02_01a8;

c02_01ac:;

c02_01a8:;

	i8 v1825 = (i8)(intptr_t)(ws+674);
	i2 v1826 = *(i2*)(intptr_t)v1825;
	i2 v1827 = v1826+(-1);
	i8 v1828 = (i8)(intptr_t)(ws+674);
	*(i2*)(intptr_t)v1828 = v1827;

	i8 v1829 = (i8)(intptr_t)(ws+648);
	i8 v1830 = *(i8*)(intptr_t)v1829;
	i1 v1831;
	f75(&v1831, v1830);
	i8 v1832 = (i8)(intptr_t)(ws+672);
	*(i1*)(intptr_t)v1832 = v1831;

endsub:;
}

// ReadH2 workspace at ws+704 length ws+1
void f92(i1* p1839 /* result */) {

	i8 v1840 = (i8)(intptr_t)(ws+674);
	i2 v1841 = *(i2*)(intptr_t)v1840;
	i2 v1842 = (i2)+2;
	if (v1841<v1842) goto c02_01b0; else goto c02_01b1;

c02_01b0:;

	f89();

	goto c02_01ad;

c02_01b1:;

c02_01ad:;

	i8 v1843 = (i8)(intptr_t)(ws+674);
	i2 v1844 = *(i2*)(intptr_t)v1843;
	i2 v1845 = v1844+(-2);
	i8 v1846 = (i8)(intptr_t)(ws+674);
	*(i2*)(intptr_t)v1846 = v1845;

	i8 v1847 = (i8)(intptr_t)(ws+648);
	i8 v1848 = *(i8*)(intptr_t)v1847;
	i1 v1849;
	f78(&v1849, v1848);
	i8 v1850 = (i8)(intptr_t)(ws+704);
	*(i1*)(intptr_t)v1850 = v1849;

endsub:;
	*p1839 = *(i1*)(intptr_t)(ws+704);
}

// ReadH4 workspace at ws+704 length ws+2
void f93(i2* p1851 /* result */) {

	i8 v1852 = (i8)(intptr_t)(ws+674);
	i2 v1853 = *(i2*)(intptr_t)v1852;
	i2 v1854 = (i2)+4;
	if (v1853<v1854) goto c02_01b5; else goto c02_01b6;

c02_01b5:;

	f89();

	goto c02_01b2;

c02_01b6:;

c02_01b2:;

	i8 v1855 = (i8)(intptr_t)(ws+674);
	i2 v1856 = *(i2*)(intptr_t)v1855;
	i2 v1857 = v1856+(-4);
	i8 v1858 = (i8)(intptr_t)(ws+674);
	*(i2*)(intptr_t)v1858 = v1857;

	i8 v1859 = (i8)(intptr_t)(ws+648);
	i8 v1860 = *(i8*)(intptr_t)v1859;
	i2 v1861;
	f79(&v1861, v1860);
	i8 v1862 = (i8)(intptr_t)(ws+704);
	*(i2*)(intptr_t)v1862 = v1861;

endsub:;
	*p1851 = *(i2*)(intptr_t)(ws+704);
}

// CopySourceChunk workspace at ws+680 length ws+20
void f94(void) {

c02_01b9:;

	i8 v1863 = (i8)(intptr_t)(ws+674);
	i2 v1864 = *(i2*)(intptr_t)v1863;
	i2 v1865 = (i2)+0;
	if (v1864==v1865) goto c02_01bc; else goto c02_01bb;

c02_01bb:;

	f90();

	i8 v1866 = (i8)(intptr_t)(ws+672);
	i1 v1867 = *(i1*)(intptr_t)v1866;

	if (v1867 != +3) goto c02_01be;

	i1 v1868 = (i1)+99;
	f59(v1868);

	i8 v1869 = (i8)(intptr_t)(ws+648);
	i8 v1870 = *(i8*)(intptr_t)v1869;
	i8 v1871 = v1870+(+672);
	i2 v1872 = *(i2*)(intptr_t)v1871;
	i1 v1873 = v1872;
	f65(v1873);

	i1 v1874 = (i1)+95;
	f59(v1874);

	goto c02_01bd;

c02_01be:;

	if (v1867 != +4) goto c02_01bf;

	i8 v1875 = (i8)(intptr_t)(ws+664);
	i8 v1876 = *(i8*)(intptr_t)v1875;
	i8 v1877 = v1876+(+186);
	i2 v1878 = *(i2*)(intptr_t)v1877;
	f71(v1878);

	goto c02_01bd;

c02_01bf:;

	if (v1867 != +1) goto c02_01c0;

	i2 v1879;
	f93(&v1879);
	i8 v1880 = (i8)(intptr_t)(ws+680);
	*(i2*)(intptr_t)v1880 = v1879;

	i8 v1881 = (i8)(intptr_t)(ws+648);
	i8 v1882 = *(i8*)(intptr_t)v1881;
	i8 v1883 = (i8)(intptr_t)(ws+680);
	i2 v1884 = *(i2*)(intptr_t)v1883;
	i8 v1885;
	f83(&v1885, v1884, v1882);
	i8 v1886 = (i8)(intptr_t)(ws+688);
	*(i8*)(intptr_t)v1886 = v1885;

	i8 v1887 = (i8)(intptr_t)(ws+688);
	i8 v1888 = *(i8*)(intptr_t)v1887;
	i8 v1889;
	f84(&v1889, v1888);
	i8 v1890 = (i8)(intptr_t)(ws+688);
	*(i8*)(intptr_t)v1890 = v1889;

	i8 v1891 = (i8)(intptr_t)(ws+688);
	i8 v1892 = *(i8*)(intptr_t)v1891;
	i8 v1893 = v1892+(+186);
	i2 v1894 = *(i2*)(intptr_t)v1893;
	f71(v1894);

	goto c02_01bd;

c02_01c0:;

	if (v1867 != +2) goto c02_01c1;

	i2 v1895;
	f93(&v1895);
	i8 v1896 = (i8)(intptr_t)(ws+680);
	*(i2*)(intptr_t)v1896 = v1895;

	i1 v1897;
	f92(&v1897);
	i8 v1898 = (i8)(intptr_t)(ws+696);
	*(i1*)(intptr_t)v1898 = v1897;

	i2 v1899;
	f93(&v1899);
	i8 v1900 = (i8)(intptr_t)(ws+698);
	*(i2*)(intptr_t)v1900 = v1899;

	i8 v1901 = (i8)(intptr_t)(ws+648);
	i8 v1902 = *(i8*)(intptr_t)v1901;
	i8 v1903 = (i8)(intptr_t)(ws+680);
	i2 v1904 = *(i2*)(intptr_t)v1903;
	i8 v1905;
	f83(&v1905, v1904, v1902);
	i8 v1906 = (i8)(intptr_t)(ws+688);
	*(i8*)(intptr_t)v1906 = v1905;

	i8 v1907 = (i8)(intptr_t)(ws+688);
	i8 v1908 = *(i8*)(intptr_t)v1907;
	i8 v1909;
	f84(&v1909, v1908);
	i8 v1910 = (i8)(intptr_t)(ws+688);
	*(i8*)(intptr_t)v1910 = v1909;

	i8 v1911 = (i8)(intptr_t)(ws+696);
	i1 v1912 = *(i1*)(intptr_t)v1911;
	i8 v1913 = (i8)(intptr_t)(ws+688);
	i8 v1914 = *(i8*)(intptr_t)v1913;
	i8 v1915 = v1914+(+176);
	i8 v1916 = (i8)(intptr_t)(ws+696);
	i1 v1917 = *(i1*)(intptr_t)v1916;
	i8 v1918 = v1917;
	i1 v1919 = (i1)+1;
	i8 v1920 = ((i8)v1918)<<v1919;
	i8 v1921 = v1915+v1920;
	i2 v1922 = *(i2*)(intptr_t)v1921;
	i8 v1923 = (i8)(intptr_t)(ws+698);
	i2 v1924 = *(i2*)(intptr_t)v1923;
	i2 v1925 = v1922+v1924;
	f72(v1925, v1912);

	goto c02_01bd;

c02_01c1:;

	if (v1867 != +5) goto c02_01c2;

	i2 v1926;
	f93(&v1926);
	i8 v1927 = (i8)(intptr_t)(ws+680);
	*(i2*)(intptr_t)v1927 = v1926;

	i1 v1928;
	f92(&v1928);
	i8 v1929 = (i8)(intptr_t)(ws+696);
	*(i1*)(intptr_t)v1929 = v1928;

	i8 v1930 = (i8)(intptr_t)(ws+648);
	i8 v1931 = *(i8*)(intptr_t)v1930;
	i8 v1932 = (i8)(intptr_t)(ws+680);
	i2 v1933 = *(i2*)(intptr_t)v1932;
	i8 v1934;
	f83(&v1934, v1933, v1931);
	i8 v1935 = (i8)(intptr_t)(ws+688);
	*(i8*)(intptr_t)v1935 = v1934;

	i8 v1936 = (i8)(intptr_t)(ws+688);
	i8 v1937 = *(i8*)(intptr_t)v1936;
	i8 v1938;
	f84(&v1938, v1937);
	i8 v1939 = (i8)(intptr_t)(ws+688);
	*(i8*)(intptr_t)v1939 = v1938;

	i8 v1940 = (i8)(intptr_t)(ws+696);
	i1 v1941 = *(i1*)(intptr_t)v1940;
	i8 v1942 = (i8)(intptr_t)(ws+688);
	i8 v1943 = *(i8*)(intptr_t)v1942;
	i8 v1944 = v1943+(+168);
	i8 v1945 = (i8)(intptr_t)(ws+696);
	i1 v1946 = *(i1*)(intptr_t)v1945;
	i8 v1947 = v1946;
	i1 v1948 = (i1)+1;
	i8 v1949 = ((i8)v1947)<<v1948;
	i8 v1950 = v1944+v1949;
	i2 v1951 = *(i2*)(intptr_t)v1950;
	f72(v1951, v1941);

	goto c02_01bd;

c02_01c2:;

	i8 v1952 = (i8)(intptr_t)(ws+672);
	i1 v1953 = *(i1*)(intptr_t)v1952;
	f59(v1953);

c02_01bd:;


	goto c02_01b9;

c02_01bc:;

endsub:;
}

// WriteSubroutinesToOutputFile workspace at ws+648 length ws+32
void f87(i8 p1815 /* coo */) {
	*(i8*)(intptr_t)(ws+648) = p1815; /*coo */








	i8 v1954 = (i8)(intptr_t)(ws+648);
	i8 v1955 = *(i8*)(intptr_t)v1954;
	i4 v1956 = (i4)+0;
	f46(v1956, v1955);

c02_01c3:;

	i2 v1957 = (i2)+255;
	i8 v1958 = (i8)(intptr_t)(ws+674);
	*(i2*)(intptr_t)v1958 = v1957;

	f90();

	i2 v1959;
	f93(&v1959);
	i8 v1960 = (i8)(intptr_t)(ws+674);
	*(i2*)(intptr_t)v1960 = v1959;

	i8 v1961 = (i8)(intptr_t)(ws+648);
	i8 v1962 = *(i8*)(intptr_t)v1961;
	i4 v1963;
	f47(&v1963, v1962);
	i8 v1964 = (i8)(intptr_t)(ws+674);
	i2 v1965 = *(i2*)(intptr_t)v1964;
	i4 v1966 = v1965;
	i4 v1967 = v1963+v1966;
	i8 v1968 = (i8)(intptr_t)(ws+676);
	*(i4*)(intptr_t)v1968 = v1967;

	i8 v1969 = (i8)(intptr_t)(ws+672);
	i1 v1970 = *(i1*)(intptr_t)v1969;
	i1 v1971 = (i1)+69;
	if (v1970==v1971) goto c02_01c8; else goto c02_01c9;

c02_01c8:;

	goto c02_01c4;

	goto c02_01c5;

c02_01c9:;

	i8 v1972 = (i8)(intptr_t)(ws+672);
	i1 v1973 = *(i1*)(intptr_t)v1972;
	i1 v1974 = (i1)+83;
	if (v1973==v1974) goto c02_01cc; else goto c02_01cd;

c02_01cc:;

	i2 v1975;
	f93(&v1975);
	i8 v1976 = (i8)(intptr_t)(ws+656);
	*(i2*)(intptr_t)v1976 = v1975;

	i8 v1977 = (i8)(intptr_t)(ws+648);
	i8 v1978 = *(i8*)(intptr_t)v1977;
	i8 v1979 = (i8)(intptr_t)(ws+656);
	i2 v1980 = *(i2*)(intptr_t)v1979;
	i8 v1981;
	f83(&v1981, v1980, v1978);
	i8 v1982 = (i8)(intptr_t)(ws+664);
	*(i8*)(intptr_t)v1982 = v1981;

	i8 v1983 = (i8)(intptr_t)(ws+664);
	i8 v1984 = *(i8*)(intptr_t)v1983;
	i8 v1985;
	f84(&v1985, v1984);
	i8 v1986 = (i8)(intptr_t)(ws+664);
	*(i8*)(intptr_t)v1986 = v1985;

	i8 v1987 = (i8)(intptr_t)(ws+664);
	i8 v1988 = *(i8*)(intptr_t)v1987;
	i8 v1989 = v1988+(+188);
	i1 v1990 = *(i1*)(intptr_t)v1989;
	i1 v1991 = v1990&(+1);
	i1 v1992 = (i1)+0;
	if (v1991==v1992) goto c02_01d2; else goto c02_01d1;

c02_01d1:;

	f94();

	goto c02_01ce;

c02_01d2:;

c02_01ce:;

	goto c02_01c5;

c02_01cd:;

c02_01c5:;

	i8 v1993 = (i8)(intptr_t)(ws+648);
	i8 v1994 = *(i8*)(intptr_t)v1993;
	i8 v1995 = (i8)(intptr_t)(ws+676);
	i4 v1996 = *(i4*)(intptr_t)v1995;
	f46(v1996, v1994);

	goto c02_01c3;

c02_01c4:;

endsub:;
}

// WriteAllSubroutinesToOutputFile workspace at ws+640 length ws+8
void f95(i8 p1997 /* coos */) {
	*(i8*)(intptr_t)(ws+640) = p1997; /*coos */

c02_01d5:;

	i8 v1998 = (i8)(intptr_t)(ws+640);
	i8 v1999 = *(i8*)(intptr_t)v1998;
	i8 v2000 = (i8)+0;
	if (v1999==v2000) goto c02_01d8; else goto c02_01d7;

c02_01d7:;

	i8 v2001 = (i8)(intptr_t)(ws+640);
	i8 v2002 = *(i8*)(intptr_t)v2001;
	f87(v2002);

	i8 v2003 = (i8)(intptr_t)(ws+640);
	i8 v2004 = *(i8*)(intptr_t)v2003;
	i8 v2005 = v2004+(+664);
	i8 v2006 = *(i8*)(intptr_t)v2005;
	i8 v2007 = (i8)(intptr_t)(ws+640);
	*(i8*)(intptr_t)v2007 = v2006;

	goto c02_01d5;

c02_01d8:;

endsub:;
}
const i1 c02_s001e[] = { 0x63,0x6f,0x6e,0x66,0x6c,0x69,0x63,0x74,0x69,0x6e,0x67,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x73,0 };
const i1 c02_s001f[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x20,0x27,0 };
const i1 c02_s0020[] = { 0x27,0x20,0x75,0x6e,0x72,0x65,0x73,0x6f,0x6c,0x76,0x65,0x64,0x0a,0 };
const i1 c02_s0021[] = { 0x61,0x62,0x6f,0x72,0x74,0x69,0x6e,0x67,0 };

// ResolveExternals workspace at ws+640 length ws+24
void f96(void) {

	i1 v2008 = (i1)+0;
	i8 v2009 = (i8)(intptr_t)(ws+648);
	*(i1*)(intptr_t)v2009 = v2008;

	i8 v2010 = (i8)(intptr_t)(ws+40);
	i8 v2011 = *(i8*)(intptr_t)v2010;
	i8 v2012 = (i8)(intptr_t)(ws+656);
	*(i8*)(intptr_t)v2012 = v2011;

c02_01db:;

	i8 v2013 = (i8)(intptr_t)(ws+656);
	i8 v2014 = *(i8*)(intptr_t)v2013;
	i8 v2015 = (i8)+0;
	if (v2014==v2015) goto c02_01de; else goto c02_01dd;

c02_01dd:;

	i8 v2016 = (i8)(intptr_t)(ws+656);
	i8 v2017 = *(i8*)(intptr_t)v2016;
	i8 v2018 = v2017+(+188);
	i1 v2019 = *(i1*)(intptr_t)v2018;
	i1 v2020 = v2019&(+2);
	i1 v2021 = (i1)+0;
	if (v2020==v2021) goto c02_01e3; else goto c02_01e2;

c02_01e2:;

	i8 v2022 = (i8)(intptr_t)(ws+656);
	i8 v2023 = *(i8*)(intptr_t)v2022;
	i8 v2024 = v2023+(+160);
	i8 v2025 = *(i8*)(intptr_t)v2024;
	i8 v2026 = (i8)(intptr_t)(ws+640);
	*(i8*)(intptr_t)v2026 = v2025;

	i8 v2027 = (i8)(intptr_t)(ws+640);
	i8 v2028 = *(i8*)(intptr_t)v2027;
	i8 v2029 = (i8)+0;
	if (v2028==v2029) goto c02_01e8; else goto c02_01e7;

c02_01e7:;

	i8 v2030 = (i8)(intptr_t)(ws+640);
	i8 v2031 = *(i8*)(intptr_t)v2030;
	i8 v2032 = v2031+(+16);
	i8 v2033 = *(i8*)(intptr_t)v2032;
	i8 v2034 = (i8)+0;
	if (v2033==v2034) goto c02_01ef; else goto c02_01f0;

c02_01f0:;

	i8 v2035 = (i8)(intptr_t)(ws+640);
	i8 v2036 = *(i8*)(intptr_t)v2035;
	i8 v2037 = v2036+(+16);
	i8 v2038 = *(i8*)(intptr_t)v2037;
	i8 v2039 = (i8)(intptr_t)(ws+656);
	i8 v2040 = *(i8*)(intptr_t)v2039;
	if (v2038==v2040) goto c02_01ef; else goto c02_01ee;

c02_01ee:;

	i8 v2041 = (i8)(intptr_t)c02_s001e;
	f57(v2041);

	goto c02_01e9;

c02_01ef:;

c02_01e9:;

	i8 v2042 = (i8)(intptr_t)(ws+656);
	i8 v2043 = *(i8*)(intptr_t)v2042;
	i8 v2044 = (i8)(intptr_t)(ws+640);
	i8 v2045 = *(i8*)(intptr_t)v2044;
	i8 v2046 = v2045+(+16);
	*(i8*)(intptr_t)v2046 = v2043;

	goto c02_01e4;

c02_01e8:;

c02_01e4:;

	goto c02_01df;

c02_01e3:;

c02_01df:;

	i8 v2047 = (i8)(intptr_t)(ws+656);
	i8 v2048 = *(i8*)(intptr_t)v2047;
	i8 v2049 = v2048+(+8);
	i8 v2050 = *(i8*)(intptr_t)v2049;
	i8 v2051 = (i8)(intptr_t)(ws+656);
	*(i8*)(intptr_t)v2051 = v2050;

	goto c02_01db;

c02_01de:;

	i8 v2052 = (i8)(intptr_t)(ws+40);
	i8 v2053 = *(i8*)(intptr_t)v2052;
	i8 v2054 = (i8)(intptr_t)(ws+656);
	*(i8*)(intptr_t)v2054 = v2053;

c02_01f3:;

	i8 v2055 = (i8)(intptr_t)(ws+656);
	i8 v2056 = *(i8*)(intptr_t)v2055;
	i8 v2057 = (i8)+0;
	if (v2056==v2057) goto c02_01f6; else goto c02_01f5;

c02_01f5:;

	i8 v2058 = (i8)(intptr_t)(ws+656);
	i8 v2059 = *(i8*)(intptr_t)v2058;
	i8 v2060 = v2059+(+160);
	i8 v2061 = *(i8*)(intptr_t)v2060;
	i8 v2062 = (i8)(intptr_t)(ws+640);
	*(i8*)(intptr_t)v2062 = v2061;

	i8 v2063 = (i8)(intptr_t)(ws+640);
	i8 v2064 = *(i8*)(intptr_t)v2063;
	i8 v2065 = (i8)+0;
	if (v2064==v2065) goto c02_01fd; else goto c02_01fe;

c02_01fe:;

	i8 v2066 = (i8)(intptr_t)(ws+640);
	i8 v2067 = *(i8*)(intptr_t)v2066;
	i8 v2068 = v2067+(+16);
	i8 v2069 = *(i8*)(intptr_t)v2068;
	i8 v2070 = (i8)+0;
	if (v2069==v2070) goto c02_01fc; else goto c02_01fd;

c02_01fc:;

	i8 v2071 = (i8)(intptr_t)c02_s001f;
	f11(v2071);

	i8 v2072 = (i8)(intptr_t)(ws+640);
	i8 v2073 = *(i8*)(intptr_t)v2072;
	i8 v2074 = v2073+(+8);
	i8 v2075 = *(i8*)(intptr_t)v2074;
	f11(v2075);

	i8 v2076 = (i8)(intptr_t)c02_s0020;
	f11(v2076);

	i1 v2077 = (i1)+1;
	i8 v2078 = (i8)(intptr_t)(ws+648);
	*(i1*)(intptr_t)v2078 = v2077;

	goto c02_01f7;

c02_01fd:;

c02_01f7:;

	i8 v2079 = (i8)(intptr_t)(ws+656);
	i8 v2080 = *(i8*)(intptr_t)v2079;
	i8 v2081 = v2080+(+8);
	i8 v2082 = *(i8*)(intptr_t)v2081;
	i8 v2083 = (i8)(intptr_t)(ws+656);
	*(i8*)(intptr_t)v2083 = v2082;

	goto c02_01f3;

c02_01f6:;

	i8 v2084 = (i8)(intptr_t)(ws+648);
	i1 v2085 = *(i1*)(intptr_t)v2084;
	i1 v2086 = (i1)+0;
	if (v2085==v2086) goto c02_0203; else goto c02_0202;

c02_0202:;

	i8 v2087 = (i8)(intptr_t)c02_s0021;
	f57(v2087);

	goto c02_01ff;

c02_0203:;

c02_01ff:;

endsub:;
}
const i1 c02_s0022[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x64,0x65,0x70,0x65,0x6e,0x64,0x65,0x6e,0x63,0x79,0x20,0x67,0x72,0x61,0x70,0x68,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0x0a,0 };

// push workspace at ws+2736 length ws+9
void f98(i8 p2108 /* subr */) {
	*(i8*)(intptr_t)(ws+2736) = p2108; /*subr */

	i8 v2109 = (i8)(intptr_t)(ws+2688);
	i1 v2110 = *(i1*)(intptr_t)v2109;
	i8 v2111 = (i8)(intptr_t)(ws+2744);
	*(i1*)(intptr_t)v2111 = v2110;

c02_020c:;

	i8 v2112 = (i8)(intptr_t)(ws+2744);
	i1 v2113 = *(i1*)(intptr_t)v2112;
	i1 v2114 = (i1)+0;
	if (v2113==v2114) goto c02_020f; else goto c02_020e;

c02_020e:;

	i8 v2115 = (i8)(intptr_t)(ws+2744);
	i1 v2116 = *(i1*)(intptr_t)v2115;
	i1 v2117 = v2116+(-1);
	i8 v2118 = (i8)(intptr_t)(ws+2744);
	*(i1*)(intptr_t)v2118 = v2117;

	i8 v2119 = (i8)(intptr_t)(ws+648);
	i8 v2120 = (i8)(intptr_t)(ws+2744);
	i1 v2121 = *(i1*)(intptr_t)v2120;
	i8 v2122 = v2121;
	i1 v2123 = (i1)+3;
	i8 v2124 = ((i8)v2122)<<v2123;
	i8 v2125 = v2119+v2124;
	i8 v2126 = *(i8*)(intptr_t)v2125;
	i8 v2127 = (i8)(intptr_t)(ws+2736);
	i8 v2128 = *(i8*)(intptr_t)v2127;
	if (v2126==v2128) goto c02_0213; else goto c02_0214;

c02_0213:;

	goto endsub;

	goto c02_0210;

c02_0214:;

c02_0210:;

	goto c02_020c;

c02_020f:;

	i8 v2129 = (i8)(intptr_t)(ws+2688);
	i1 v2130 = *(i1*)(intptr_t)v2129;
	i1 v2131 = (i1)+255;
	if (v2130==v2131) goto c02_0218; else goto c02_0219;

c02_0218:;

	i8 v2132 = (i8)(intptr_t)c02_s0022;
	f11(v2132);

	f6();

	goto c02_0215;

c02_0219:;

c02_0215:;

	i8 v2133 = (i8)(intptr_t)(ws+2736);
	i8 v2134 = *(i8*)(intptr_t)v2133;
	i8 v2135 = (i8)(intptr_t)(ws+648);
	i8 v2136 = (i8)(intptr_t)(ws+2688);
	i1 v2137 = *(i1*)(intptr_t)v2136;
	i8 v2138 = v2137;
	i1 v2139 = (i1)+3;
	i8 v2140 = ((i8)v2138)<<v2139;
	i8 v2141 = v2135+v2140;
	*(i8*)(intptr_t)v2141 = v2134;

	i8 v2142 = (i8)(intptr_t)(ws+2688);
	i1 v2143 = *(i1*)(intptr_t)v2142;
	i1 v2144 = v2143+(+1);
	i8 v2145 = (i8)(intptr_t)(ws+2688);
	*(i1*)(intptr_t)v2145 = v2144;

endsub:;
}
const i1 c02_s0023[] = { 0x57,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x20,0x73,0x69,0x7a,0x65,0x73,0x3a,0x0a,0 };
const i1 c02_s0024[] = { 0x20,0x20,0x23,0 };
const i1 c02_s0025[] = { 0x3a,0x20,0 };
const i1 c02_s0026[] = { 0x20,0x62,0x79,0x74,0x65,0x73,0x0a,0 };

// PlaceSubroutines workspace at ws+640 length ws+2092
void f97(i8 p2088 /* subroutine */) {
	*(i8*)(intptr_t)(ws+640) = p2088; /*subroutine */

	i1 v2089 = (i1)+0;
	i8 v2090 = (i8)(intptr_t)(ws+2688);
	*(i1*)(intptr_t)v2090 = v2089;

	i1 v2091 = (i1)+0;
	i8 v2092 = (i8)(intptr_t)(ws+2689);
	*(i1*)(intptr_t)v2092 = v2091;

c02_0206:;

	i8 v2093 = (i8)(intptr_t)(ws+2689);
	i1 v2094 = *(i1*)(intptr_t)v2093;
	i1 v2095 = (i1)+4;
	if (v2094==v2095) goto c02_0209; else goto c02_0208;

c02_0208:;

	i2 v2096 = (i2)+0;
	i8 v2097 = (i8)(intptr_t)(ws+576);
	i8 v2098 = (i8)(intptr_t)(ws+2689);
	i1 v2099 = *(i1*)(intptr_t)v2098;
	i8 v2100 = v2099;
	i1 v2101 = (i1)+1;
	i8 v2102 = ((i8)v2100)<<v2101;
	i8 v2103 = v2097+v2102;
	*(i2*)(intptr_t)v2103 = v2096;

	i8 v2104 = (i8)(intptr_t)(ws+2689);
	i1 v2105 = *(i1*)(intptr_t)v2104;
	i1 v2106 = v2105+(+1);
	i8 v2107 = (i8)(intptr_t)(ws+2689);
	*(i1*)(intptr_t)v2107 = v2106;

	goto c02_0206;

c02_0209:;


	i8 v2146 = (i8)(intptr_t)(ws+640);
	i8 v2147 = *(i8*)(intptr_t)v2146;
	f98(v2147);

c02_021c:;

	i8 v2148 = (i8)(intptr_t)(ws+2688);
	i1 v2149 = *(i1*)(intptr_t)v2148;
	i1 v2150 = (i1)+0;
	if (v2149==v2150) goto c02_021f; else goto c02_021e;

c02_021e:;

	i8 v2151 = (i8)(intptr_t)(ws+2688);
	i1 v2152 = *(i1*)(intptr_t)v2151;
	i1 v2153 = v2152+(-1);
	i8 v2154 = (i8)(intptr_t)(ws+2688);
	*(i1*)(intptr_t)v2154 = v2153;

	i8 v2155 = (i8)(intptr_t)(ws+648);
	i8 v2156 = (i8)(intptr_t)(ws+2688);
	i1 v2157 = *(i1*)(intptr_t)v2156;
	i8 v2158 = v2157;
	i1 v2159 = (i1)+3;
	i8 v2160 = ((i8)v2158)<<v2159;
	i8 v2161 = v2155+v2160;
	i8 v2162 = *(i8*)(intptr_t)v2161;
	i8 v2163 = (i8)(intptr_t)(ws+640);
	*(i8*)(intptr_t)v2163 = v2162;

	i8 v2164 = (i8)(intptr_t)(ws+640);
	i8 v2165 = *(i8*)(intptr_t)v2164;
	i8 v2166 = v2165+(+188);
	i1 v2167 = *(i1*)(intptr_t)v2166;
	i1 v2168 = v2167|(+1);
	i8 v2169 = (i8)(intptr_t)(ws+640);
	i8 v2170 = *(i8*)(intptr_t)v2169;
	i8 v2171 = v2170+(+188);
	*(i1*)(intptr_t)v2171 = v2168;

	i1 v2172 = (i1)+0;
	i8 v2173 = (i8)(intptr_t)(ws+2689);
	*(i1*)(intptr_t)v2173 = v2172;

c02_0222:;

	i8 v2174 = (i8)(intptr_t)(ws+2689);
	i1 v2175 = *(i1*)(intptr_t)v2174;
	i1 v2176 = (i1)+4;
	if (v2175==v2176) goto c02_0225; else goto c02_0224;

c02_0224:;

	i8 v2177 = (i8)(intptr_t)(ws+640);
	i8 v2178 = *(i8*)(intptr_t)v2177;
	i8 v2179 = v2178+(+176);
	i8 v2180 = (i8)(intptr_t)(ws+2689);
	i1 v2181 = *(i1*)(intptr_t)v2180;
	i8 v2182 = v2181;
	i1 v2183 = (i1)+1;
	i8 v2184 = ((i8)v2182)<<v2183;
	i8 v2185 = v2179+v2184;
	i2 v2186 = *(i2*)(intptr_t)v2185;
	i8 v2187 = (i8)(intptr_t)(ws+640);
	i8 v2188 = *(i8*)(intptr_t)v2187;
	i8 v2189 = v2188+(+168);
	i8 v2190 = (i8)(intptr_t)(ws+2689);
	i1 v2191 = *(i1*)(intptr_t)v2190;
	i8 v2192 = v2191;
	i1 v2193 = (i1)+1;
	i8 v2194 = ((i8)v2192)<<v2193;
	i8 v2195 = v2189+v2194;
	i2 v2196 = *(i2*)(intptr_t)v2195;
	i2 v2197 = v2186+v2196;
	i8 v2198 = (i8)(intptr_t)(ws+2698);
	*(i2*)(intptr_t)v2198 = v2197;

	i8 v2199 = (i8)(intptr_t)(ws+2698);
	i2 v2200 = *(i2*)(intptr_t)v2199;
	i1 v2201 = (i1)+8;
	i2 v2202;
	f69(&v2202, v2201, v2200);
	i8 v2203 = (i8)(intptr_t)(ws+2690);
	i8 v2204 = (i8)(intptr_t)(ws+2689);
	i1 v2205 = *(i1*)(intptr_t)v2204;
	i8 v2206 = v2205;
	i1 v2207 = (i1)+1;
	i8 v2208 = ((i8)v2206)<<v2207;
	i8 v2209 = v2203+v2208;
	*(i2*)(intptr_t)v2209 = v2202;

	i8 v2210 = (i8)(intptr_t)(ws+576);
	i8 v2211 = (i8)(intptr_t)(ws+2689);
	i1 v2212 = *(i1*)(intptr_t)v2211;
	i8 v2213 = v2212;
	i1 v2214 = (i1)+1;
	i8 v2215 = ((i8)v2213)<<v2214;
	i8 v2216 = v2210+v2215;
	i2 v2217 = *(i2*)(intptr_t)v2216;
	i8 v2218 = (i8)(intptr_t)(ws+2698);
	i2 v2219 = *(i2*)(intptr_t)v2218;
	if (v2217<v2219) goto c02_0229; else goto c02_022a;

c02_0229:;

	i8 v2220 = (i8)(intptr_t)(ws+2698);
	i2 v2221 = *(i2*)(intptr_t)v2220;
	i8 v2222 = (i8)(intptr_t)(ws+576);
	i8 v2223 = (i8)(intptr_t)(ws+2689);
	i1 v2224 = *(i1*)(intptr_t)v2223;
	i8 v2225 = v2224;
	i1 v2226 = (i1)+1;
	i8 v2227 = ((i8)v2225)<<v2226;
	i8 v2228 = v2222+v2227;
	*(i2*)(intptr_t)v2228 = v2221;

	goto c02_0226;

c02_022a:;

c02_0226:;

	i8 v2229 = (i8)(intptr_t)(ws+2689);
	i1 v2230 = *(i1*)(intptr_t)v2229;
	i1 v2231 = v2230+(+1);
	i8 v2232 = (i8)(intptr_t)(ws+2689);
	*(i1*)(intptr_t)v2232 = v2231;

	goto c02_0222;

c02_0225:;

	i8 v2233 = (i8)(intptr_t)(ws+640);
	i8 v2234 = *(i8*)(intptr_t)v2233;
	i8 v2235 = v2234+(+16);
	i8 v2236 = (i8)(intptr_t)(ws+2704);
	*(i8*)(intptr_t)v2236 = v2235;

c02_022d:;

	i8 v2237 = (i8)(intptr_t)(ws+2704);
	i8 v2238 = *(i8*)(intptr_t)v2237;
	i8 v2239 = (i8)+0;
	if (v2238==v2239) goto c02_0230; else goto c02_022f;

c02_022f:;

	i1 v2240 = (i1)+0;
	i8 v2241 = (i8)(intptr_t)(ws+2712);
	*(i1*)(intptr_t)v2241 = v2240;

c02_0233:;

	i8 v2242 = (i8)(intptr_t)(ws+2712);
	i1 v2243 = *(i1*)(intptr_t)v2242;
	i1 v2244 = (i1)+16;
	if (v2243==v2244) goto c02_0236; else goto c02_0235;

c02_0235:;

	i8 v2245 = (i8)(intptr_t)(ws+2704);
	i8 v2246 = *(i8*)(intptr_t)v2245;
	i8 v2247 = v2246+(+8);
	i8 v2248 = (i8)(intptr_t)(ws+2712);
	i1 v2249 = *(i1*)(intptr_t)v2248;
	i8 v2250 = v2249;
	i1 v2251 = (i1)+3;
	i8 v2252 = ((i8)v2250)<<v2251;
	i8 v2253 = v2247+v2252;
	i8 v2254 = *(i8*)(intptr_t)v2253;
	i8 v2255 = (i8)(intptr_t)(ws+2720);
	*(i8*)(intptr_t)v2255 = v2254;

	i8 v2256 = (i8)(intptr_t)(ws+2712);
	i1 v2257 = *(i1*)(intptr_t)v2256;
	i1 v2258 = v2257+(+1);
	i8 v2259 = (i8)(intptr_t)(ws+2712);
	*(i1*)(intptr_t)v2259 = v2258;

	i8 v2260 = (i8)(intptr_t)(ws+2720);
	i8 v2261 = *(i8*)(intptr_t)v2260;
	i8 v2262 = (i8)+0;
	if (v2261==v2262) goto c02_023a; else goto c02_023b;

c02_023a:;

	goto c02_0236;

	goto c02_0237;

c02_023b:;

c02_0237:;

	i8 v2263 = (i8)(intptr_t)(ws+2720);
	i8 v2264 = *(i8*)(intptr_t)v2263;
	i8 v2265;
	f84(&v2265, v2264);
	i8 v2266 = (i8)(intptr_t)(ws+2720);
	*(i8*)(intptr_t)v2266 = v2265;

	i1 v2267 = (i1)+0;
	i8 v2268 = (i8)(intptr_t)(ws+2689);
	*(i1*)(intptr_t)v2268 = v2267;

c02_023e:;

	i8 v2269 = (i8)(intptr_t)(ws+2689);
	i1 v2270 = *(i1*)(intptr_t)v2269;
	i1 v2271 = (i1)+4;
	if (v2270==v2271) goto c02_0241; else goto c02_0240;

c02_0240:;

	i8 v2272 = (i8)(intptr_t)(ws+2720);
	i8 v2273 = *(i8*)(intptr_t)v2272;
	i8 v2274 = v2273+(+176);
	i8 v2275 = (i8)(intptr_t)(ws+2689);
	i1 v2276 = *(i1*)(intptr_t)v2275;
	i8 v2277 = v2276;
	i1 v2278 = (i1)+1;
	i8 v2279 = ((i8)v2277)<<v2278;
	i8 v2280 = v2274+v2279;
	i2 v2281 = *(i2*)(intptr_t)v2280;
	i8 v2282 = (i8)(intptr_t)(ws+2728);
	*(i2*)(intptr_t)v2282 = v2281;

	i8 v2283 = (i8)(intptr_t)(ws+2690);
	i8 v2284 = (i8)(intptr_t)(ws+2689);
	i1 v2285 = *(i1*)(intptr_t)v2284;
	i8 v2286 = v2285;
	i1 v2287 = (i1)+1;
	i8 v2288 = ((i8)v2286)<<v2287;
	i8 v2289 = v2283+v2288;
	i2 v2290 = *(i2*)(intptr_t)v2289;
	i8 v2291 = (i8)(intptr_t)(ws+2730);
	*(i2*)(intptr_t)v2291 = v2290;

	i8 v2292 = (i8)(intptr_t)(ws+2728);
	i2 v2293 = *(i2*)(intptr_t)v2292;
	i8 v2294 = (i8)(intptr_t)(ws+2730);
	i2 v2295 = *(i2*)(intptr_t)v2294;
	if (v2293<v2295) goto c02_0245; else goto c02_0246;

c02_0245:;

	i8 v2296 = (i8)(intptr_t)(ws+2730);
	i2 v2297 = *(i2*)(intptr_t)v2296;
	i8 v2298 = (i8)(intptr_t)(ws+2720);
	i8 v2299 = *(i8*)(intptr_t)v2298;
	i8 v2300 = v2299+(+176);
	i8 v2301 = (i8)(intptr_t)(ws+2689);
	i1 v2302 = *(i1*)(intptr_t)v2301;
	i8 v2303 = v2302;
	i1 v2304 = (i1)+1;
	i8 v2305 = ((i8)v2303)<<v2304;
	i8 v2306 = v2300+v2305;
	*(i2*)(intptr_t)v2306 = v2297;

	i8 v2307 = (i8)(intptr_t)(ws+2720);
	i8 v2308 = *(i8*)(intptr_t)v2307;
	f98(v2308);

	goto c02_0242;

c02_0246:;

c02_0242:;

	i8 v2309 = (i8)(intptr_t)(ws+2720);
	i8 v2310 = *(i8*)(intptr_t)v2309;
	i8 v2311 = v2310+(+188);
	i1 v2312 = *(i1*)(intptr_t)v2311;
	i1 v2313 = v2312&(+1);
	i1 v2314 = (i1)+0;
	if (v2313==v2314) goto c02_024a; else goto c02_024b;

c02_024a:;

	i8 v2315 = (i8)(intptr_t)(ws+2720);
	i8 v2316 = *(i8*)(intptr_t)v2315;
	f98(v2316);

	i8 v2317 = (i8)(intptr_t)(ws+2720);
	i8 v2318 = *(i8*)(intptr_t)v2317;
	i8 v2319 = v2318+(+188);
	i1 v2320 = *(i1*)(intptr_t)v2319;
	i1 v2321 = v2320|(+1);
	i8 v2322 = (i8)(intptr_t)(ws+2720);
	i8 v2323 = *(i8*)(intptr_t)v2322;
	i8 v2324 = v2323+(+188);
	*(i1*)(intptr_t)v2324 = v2321;

	goto c02_0247;

c02_024b:;

c02_0247:;

	i8 v2325 = (i8)(intptr_t)(ws+2689);
	i1 v2326 = *(i1*)(intptr_t)v2325;
	i1 v2327 = v2326+(+1);
	i8 v2328 = (i8)(intptr_t)(ws+2689);
	*(i1*)(intptr_t)v2328 = v2327;

	goto c02_023e;

c02_0241:;

	goto c02_0233;

c02_0236:;

	i8 v2329 = (i8)(intptr_t)(ws+2704);
	i8 v2330 = *(i8*)(intptr_t)v2329;
	i8 v2331 = *(i8*)(intptr_t)v2330;
	i8 v2332 = (i8)(intptr_t)(ws+2704);
	*(i8*)(intptr_t)v2332 = v2331;

	goto c02_022d;

c02_0230:;

	goto c02_021c;

c02_021f:;

	i8 v2333 = (i8)(intptr_t)c02_s0023;
	f11(v2333);

	i1 v2334 = (i1)+0;
	i8 v2335 = (i8)(intptr_t)(ws+2689);
	*(i1*)(intptr_t)v2335 = v2334;

c02_024e:;

	i8 v2336 = (i8)(intptr_t)(ws+2689);
	i1 v2337 = *(i1*)(intptr_t)v2336;
	i1 v2338 = (i1)+4;
	if (v2337==v2338) goto c02_0251; else goto c02_0250;

c02_0250:;

	i8 v2339 = (i8)(intptr_t)c02_s0024;
	f11(v2339);

	i8 v2340 = (i8)(intptr_t)(ws+2689);
	i1 v2341 = *(i1*)(intptr_t)v2340;
	f17(v2341);

	i8 v2342 = (i8)(intptr_t)c02_s0025;
	f11(v2342);

	i8 v2343 = (i8)(intptr_t)(ws+576);
	i8 v2344 = (i8)(intptr_t)(ws+2689);
	i1 v2345 = *(i1*)(intptr_t)v2344;
	i8 v2346 = v2345;
	i1 v2347 = (i1)+1;
	i8 v2348 = ((i8)v2346)<<v2347;
	i8 v2349 = v2343+v2348;
	i2 v2350 = *(i2*)(intptr_t)v2349;
	f16(v2350);

	i8 v2351 = (i8)(intptr_t)c02_s0026;
	f11(v2351);

	i8 v2352 = (i8)(intptr_t)(ws+2689);
	i1 v2353 = *(i1*)(intptr_t)v2352;
	i1 v2354 = v2353+(+1);
	i8 v2355 = (i8)(intptr_t)(ws+2689);
	*(i1*)(intptr_t)v2355 = v2354;

	goto c02_024e;

c02_0251:;

endsub:;
}
const i1 c02_s0027[] = { 0x43,0x4f,0x57,0x4c,0x49,0x4e,0x4b,0x3a,0x20,0 };
const i1 c02_s0028[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
const i1 c02_s0029[] = { 0x53,0x79,0x6e,0x74,0x61,0x78,0x20,0x65,0x72,0x72,0x6f,0x72,0x0a,0 };

// SyntaxError workspace at ws+640 length ws+0
void f99(void) {

	i8 v2372 = (i8)(intptr_t)c02_s0029;
	f57(v2372);

endsub:;
}
const i1 c02_s002a[] = { 0x41,0x64,0x64,0x69,0x6e,0x67,0x20,0x69,0x6e,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x3a,0x20,0 };

// AddInputFile workspace at ws+640 length ws+24
void f100(i8 p2373 /* filename */) {
	*(i8*)(intptr_t)(ws+640) = p2373; /*filename */

	i8 v2374 = (i8)(intptr_t)c02_s002a;
	f11(v2374);

	i8 v2375 = (i8)(intptr_t)(ws+640);
	i8 v2376 = *(i8*)(intptr_t)v2375;
	f11(v2376);

	f12();

	i8 v2377 = (i8)(intptr_t)(ws+640);
	i8 v2378 = *(i8*)(intptr_t)v2377;
	i8 v2379;
	f86(&v2379, v2378);
	i8 v2380 = (i8)(intptr_t)(ws+648);
	*(i8*)(intptr_t)v2380 = v2379;

	i8 v2381 = (i8)(intptr_t)(ws+600);
	i8 v2382 = *(i8*)(intptr_t)v2381;
	i8 v2383 = (i8)+0;
	if (v2382==v2383) goto c02_0255; else goto c02_0256;

c02_0255:;

	i8 v2384 = (i8)(intptr_t)(ws+648);
	i8 v2385 = *(i8*)(intptr_t)v2384;
	i8 v2386 = (i8)(intptr_t)(ws+600);
	*(i8*)(intptr_t)v2386 = v2385;

	i8 v2387 = (i8)(intptr_t)(ws+648);
	i8 v2388 = *(i8*)(intptr_t)v2387;
	i8 v2389 = (i8)(intptr_t)(ws+592);
	*(i8*)(intptr_t)v2389 = v2388;

	goto c02_0252;

c02_0256:;

	i8 v2390 = (i8)(intptr_t)(ws+648);
	i8 v2391 = *(i8*)(intptr_t)v2390;
	i8 v2392 = (i8)(intptr_t)(ws+592);
	i8 v2393 = *(i8*)(intptr_t)v2392;
	i8 v2394 = v2393+(+664);
	*(i8*)(intptr_t)v2394 = v2391;

	i8 v2395 = (i8)(intptr_t)(ws+648);
	i8 v2396 = *(i8*)(intptr_t)v2395;
	i8 v2397 = (i8)(intptr_t)(ws+592);
	*(i8*)(intptr_t)v2397 = v2396;

c02_0252:;

	i8 v2398 = (i8)(intptr_t)(ws+648);
	i8 v2399 = *(i8*)(intptr_t)v2398;
	i2 v2400 = (i2)+0;
	i8 v2401;
	f82(&v2401, v2400, v2399);
	i8 v2402 = *(i8*)(intptr_t)v2401;
	i8 v2403 = (i8)(intptr_t)(ws+656);
	*(i8*)(intptr_t)v2403 = v2402;

	i8 v2404 = (i8)(intptr_t)(ws+656);
	i8 v2405 = *(i8*)(intptr_t)v2404;
	i8 v2406 = (i8)+0;
	if (v2405==v2406) goto c02_025b; else goto c02_025a;

c02_025a:;

	i8 v2407 = (i8)(intptr_t)(ws+616);
	i8 v2408 = *(i8*)(intptr_t)v2407;
	i8 v2409 = (i8)+0;
	if (v2408==v2409) goto c02_025f; else goto c02_0260;

c02_025f:;

	i8 v2410 = (i8)(intptr_t)(ws+656);
	i8 v2411 = *(i8*)(intptr_t)v2410;
	i8 v2412 = (i8)(intptr_t)(ws+616);
	*(i8*)(intptr_t)v2412 = v2411;

	goto c02_025c;

c02_0260:;

c02_025c:;

	goto c02_0257;

c02_025b:;

c02_0257:;

	i8 v2413 = (i8)(intptr_t)(ws+624);
	i8 v2414 = *(i8*)(intptr_t)v2413;
	i8 v2415 = (i8)+0;
	if (v2414==v2415) goto c02_0265; else goto c02_0264;

c02_0264:;

	i8 v2416 = (i8)(intptr_t)(ws+624);
	i8 v2417 = *(i8*)(intptr_t)v2416;
	i8 v2418 = (i8)(intptr_t)(ws+656);
	i8 v2419 = *(i8*)(intptr_t)v2418;
	f81(v2419, v2417);

	goto c02_0261;

c02_0265:;

c02_0261:;

	i8 v2420 = (i8)(intptr_t)(ws+656);
	i8 v2421 = *(i8*)(intptr_t)v2420;
	i8 v2422 = (i8)(intptr_t)(ws+624);
	*(i8*)(intptr_t)v2422 = v2421;

endsub:;
}
const i1 c02_s002b[] = { 0x2d,0x6f,0 };
const i1 c02_s002c[] = { 0x4e,0x6f,0x20,0x6d,0x61,0x69,0x6e,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x69,0x6e,0x20,0x61,0x6e,0x79,0x20,0x63,0x6f,0x6f,0x66,0x69,0x6c,0x65,0 };
const i1 c02_s002d[] = { 0x4e,0x6f,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x6e,0x61,0x6d,0x65,0x20,0x73,0x70,0x65,0x63,0x69,0x66,0x69,0x65,0x64,0 };
const i1 c02_s002e[] = { 0x41,0x6e,0x61,0x6c,0x79,0x73,0x69,0x6e,0x67,0x2e,0x2e,0x2e,0x0a,0 };
const i1 c02_s002f[] = { 0x57,0x72,0x69,0x74,0x69,0x6e,0x67,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x2e,0x2e,0x2e,0x0a,0 };
const i1 c02_s0030[] = { 0x64,0x6f,0x6e,0x65,0x3a,0x20,0 };
const i1 c02_s0031[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };

// __main workspace at ws+0 length ws+640
void f3(void) {

	
*(i8*)(intptr_t)(ws+0) 
= (i8)(intptr_t) __lomem; 


	
*(i8*)(intptr_t)(ws+8) 
= (i8)(intptr_t) __himem; 





























	i8 v486 = (i8)(intptr_t)(ws+0);
	i8 v487 = *(i8*)(intptr_t)v486;
	i8 v488 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v488 = v487;

	i8 v489 = (i8)+0;
	i8 v490 = (i8)(intptr_t)(ws+24);
	i8 v491 = *(i8*)(intptr_t)v490;
	*(i8*)(intptr_t)v491 = v489;

	i8 v492 = (i8)(intptr_t)(ws+8);
	i8 v493 = *(i8*)(intptr_t)v492;
	i8 v494 = (i8)(intptr_t)(ws+0);
	i8 v495 = *(i8*)(intptr_t)v494;
	i8 v496 = v493-v495;
	i8 v497 = (i8)(intptr_t)(ws+24);
	i8 v498 = *(i8*)(intptr_t)v497;
	i8 v499 = v498+(+8);
	*(i8*)(intptr_t)v499 = v496;

























	i8 v1142 = (i8)+0;
	i8 v1143 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v1143 = v1142;

	i8 v1144 = (i8)+0;
	i8 v1145 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v1145 = v1144;

	i2 v1146 = (i2)+1;
	i8 v1147 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v1147 = v1146;





















	i1 v1330 = (i1)+1;
	i8 v1331 = (i8)(intptr_t)(ws+584);
	*(i1*)(intptr_t)v1331 = v1330;

	i1 v1332 = (i1)+0;
	i8 v1333 = (i8)(intptr_t)(ws+585);
	*(i1*)(intptr_t)v1333 = v1332;

















	i8 v2356 = (i8)(intptr_t)c02_s0027;
	f11(v2356);

	i8 v2357;
	f36(&v2357);
	i1 v2358 = (i1)+10;
	i8 v2359 = ((i8)v2357)>>v2358;
	i2 v2360 = v2359;
	f16(v2360);

	i8 v2361 = (i8)(intptr_t)c02_s0028;
	f11(v2361);

	i8 v2362 = (i8)+0;
	i8 v2363 = (i8)(intptr_t)(ws+592);
	*(i8*)(intptr_t)v2363 = v2362;

	i8 v2364 = (i8)+0;
	i8 v2365 = (i8)(intptr_t)(ws+600);
	*(i8*)(intptr_t)v2365 = v2364;

	i8 v2366 = (i8)+0;
	i8 v2367 = (i8)(intptr_t)(ws+608);
	*(i8*)(intptr_t)v2367 = v2366;

	i8 v2368 = (i8)+0;
	i8 v2369 = (i8)(intptr_t)(ws+616);
	*(i8*)(intptr_t)v2369 = v2368;

	i8 v2370 = (i8)+0;
	i8 v2371 = (i8)(intptr_t)(ws+624);
	*(i8*)(intptr_t)v2371 = v2370;



	f23();

c02_0266:;

	i8 v2423;
	f24(&v2423);
	i8 v2424 = (i8)(intptr_t)(ws+632);
	*(i8*)(intptr_t)v2424 = v2423;

	i8 v2425 = (i8)(intptr_t)(ws+632);
	i8 v2426 = *(i8*)(intptr_t)v2425;
	i8 v2427 = (i8)+0;
	if (v2426==v2427) goto c02_026b; else goto c02_026c;

c02_026b:;

	goto c02_0267;

	goto c02_0268;

c02_026c:;

c02_0268:;

	i8 v2428 = (i8)(intptr_t)(ws+632);
	i8 v2429 = *(i8*)(intptr_t)v2428;
	i8 v2430 = (i8)(intptr_t)c02_s002b;
	i1 v2431;
	f27(&v2431, v2430, v2429);
	i1 v2432 = (i1)+0;
	if (v2431==v2432) goto c02_0270; else goto c02_0271;

c02_0270:;

	i8 v2433;
	f24(&v2433);
	i8 v2434 = (i8)(intptr_t)(ws+608);
	*(i8*)(intptr_t)v2434 = v2433;

	goto c02_026d;

c02_0271:;

	i8 v2435 = (i8)(intptr_t)(ws+632);
	i8 v2436 = *(i8*)(intptr_t)v2435;
	i1 v2437 = *(i1*)(intptr_t)v2436;
	i1 v2438 = (i1)+45;
	if (v2437==v2438) goto c02_0274; else goto c02_0275;

c02_0274:;

	f99();

	goto c02_026d;

c02_0275:;

	i8 v2439 = (i8)(intptr_t)(ws+632);
	i8 v2440 = *(i8*)(intptr_t)v2439;
	f100(v2440);

c02_026d:;

	goto c02_0266;

c02_0267:;

	i8 v2441 = (i8)(intptr_t)(ws+616);
	i8 v2442 = *(i8*)(intptr_t)v2441;
	i8 v2443 = (i8)+0;
	if (v2442==v2443) goto c02_0279; else goto c02_027a;

c02_0279:;

	i8 v2444 = (i8)(intptr_t)c02_s002c;
	f57(v2444);

	goto c02_0276;

c02_027a:;

c02_0276:;

	i8 v2445 = (i8)(intptr_t)(ws+608);
	i8 v2446 = *(i8*)(intptr_t)v2445;
	i8 v2447 = (i8)+0;
	if (v2446==v2447) goto c02_027e; else goto c02_027f;

c02_027e:;

	i8 v2448 = (i8)(intptr_t)c02_s002d;
	f57(v2448);

	goto c02_027b;

c02_027f:;

c02_027b:;

	i8 v2449 = (i8)(intptr_t)c02_s002e;
	f11(v2449);

	f96();

	i8 v2450 = (i8)(intptr_t)(ws+616);
	i8 v2451 = *(i8*)(intptr_t)v2450;
	f97(v2451);

	i8 v2452 = (i8)(intptr_t)(ws+608);
	i8 v2453 = *(i8*)(intptr_t)v2452;
	f67(v2453);

	i8 v2454 = (i8)(intptr_t)c02_s002f;
	f11(v2454);

	i8 v2455 = (i8)(intptr_t)(ws+600);
	i8 v2456 = *(i8*)(intptr_t)v2455;
	f73(v2456);

	i8 v2457 = (i8)(intptr_t)(ws+600);
	i8 v2458 = *(i8*)(intptr_t)v2457;
	f95(v2458);

	i8 v2459 = (i8)(intptr_t)(ws+600);
	i8 v2460 = *(i8*)(intptr_t)v2459;
	f74(v2460);

	f68();

	i8 v2461 = (i8)(intptr_t)c02_s0030;
	f11(v2461);

	i8 v2462;
	f36(&v2462);
	i1 v2463 = (i1)+10;
	i8 v2464 = ((i8)v2462)>>v2463;
	i2 v2465 = v2464;
	f16(v2465);

	i8 v2466 = (i8)(intptr_t)c02_s0031;
	f11(v2466);

endsub:;
}
void cmain(void) {
	f3();
}
                                                                                                                                                                                                                                                              