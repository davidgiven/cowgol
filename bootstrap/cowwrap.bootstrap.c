#include "cowgol.h"
static i8 workspace[0x00ae];
static i1* ws = (i1*)workspace;

// AlignUp workspace at ws+1352 length ws+16
void f4(i8* p1 /* out */, i8 p2 /* in */) {
	*(i8*)(intptr_t)(ws+1352) = p2; /*in */

	i8 v3 = (i8)(intptr_t)(ws+1352);
	i8 v4 = *(i8*)(intptr_t)v3;
	i8 v5 = v4+(+7);
	i8 v6 = v5&(-8);
	i8 v7 = (i8)(intptr_t)(ws+1360);
	*(i8*)(intptr_t)v7 = v6;

endsub:;
	*p1 = *(i8*)(intptr_t)(ws+1360);
}

// ExitWithError workspace at ws+1352 length ws+0
void f6(void) {

	
exit(1); 


endsub:;
}

// MemSet workspace at ws+1368 length ws+24
void f7(i8 p8 /* len */, i1 p9 /* byte */, i8 p10 /* buf */) {
	*(i8*)(intptr_t)(ws+1368) = p10; /*buf */
	*(i1*)(intptr_t)(ws+1376) = p9; /*byte */
	*(i8*)(intptr_t)(ws+1384) = p8; /*len */

	
memset((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+1368) 
,  
*(i1*)(intptr_t)(ws+1376) 
,  
*(i8*)(intptr_t)(ws+1384) 
); 


endsub:;
}

// print_char workspace at ws+1368 length ws+1
void f8(i1 p11 /* c */) {
	*(i1*)(intptr_t)(ws+1368) = p11; /*c */

	
putchar( 
*(i1*)(intptr_t)(ws+1368) 
); 


endsub:;
}

// print workspace at ws+1352 length ws+9
void f11(i8 p20 /* ptr */) {
	*(i8*)(intptr_t)(ws+1352) = p20; /*ptr */

c02_0001:;

	i8 v21 = (i8)(intptr_t)(ws+1352);
	i8 v22 = *(i8*)(intptr_t)v21;
	i1 v23 = *(i1*)(intptr_t)v22;
	i8 v24 = (i8)(intptr_t)(ws+1360);
	*(i1*)(intptr_t)v24 = v23;

	i8 v25 = (i8)(intptr_t)(ws+1360);
	i1 v26 = *(i1*)(intptr_t)v25;
	i1 v27 = (i1)+0;
	if (v26==v27) goto c02_0006; else goto c02_0007;

c02_0006:;

	goto endsub;

	goto c02_0003;

c02_0007:;

c02_0003:;

	i8 v28 = (i8)(intptr_t)(ws+1360);
	i1 v29 = *(i1*)(intptr_t)v28;
	f8(v29);

	i8 v30 = (i8)(intptr_t)(ws+1352);
	i8 v31 = *(i8*)(intptr_t)v30;
	i8 v32 = v31+(+1);
	i8 v33 = (i8)(intptr_t)(ws+1352);
	*(i8*)(intptr_t)v33 = v32;

	goto c02_0001;

c02_0002:;

endsub:;
}

// print_nl workspace at ws+1248 length ws+0
void f12(void) {

	i1 v34 = (i1)+10;
	f8(v34);

endsub:;
}

// UIToA workspace at ws+1272 length ws+49
void f13(i8* p35 /* ptr */, i8 p36 /* buffer */, i1 p37 /* base */, i4 p38 /* value */) {
	*(i4*)(intptr_t)(ws+1272) = p38; /*value */
	*(i1*)(intptr_t)(ws+1276) = p37; /*base */
	*(i8*)(intptr_t)(ws+1280) = p36; /*buffer */

	i8 v39 = (i8)(intptr_t)(ws+1280);
	i8 v40 = *(i8*)(intptr_t)v39;
	i8 v41 = (i8)(intptr_t)(ws+1288);
	*(i8*)(intptr_t)v41 = v40;

c02_0008:;

	i8 v42 = (i8)(intptr_t)(ws+1272);
	i4 v43 = *(i4*)(intptr_t)v42;
	i8 v44 = (i8)(intptr_t)(ws+1276);
	i1 v45 = *(i1*)(intptr_t)v44;
	i4 v46 = v45;
	i4 v47 = v43%v46;
	i8 v48 = (i8)(intptr_t)(ws+1296);
	*(i4*)(intptr_t)v48 = v47;

	i8 v49 = (i8)(intptr_t)(ws+1272);
	i4 v50 = *(i4*)(intptr_t)v49;
	i8 v51 = (i8)(intptr_t)(ws+1276);
	i1 v52 = *(i1*)(intptr_t)v51;
	i4 v53 = v52;
	i4 v54 = v50/v53;
	i8 v55 = (i8)(intptr_t)(ws+1272);
	*(i4*)(intptr_t)v55 = v54;

	i8 v56 = (i8)(intptr_t)(ws+1296);
	i4 v57 = *(i4*)(intptr_t)v56;
	i4 v58 = (i4)+10;
	if (v57<v58) goto c02_000d; else goto c02_000e;

c02_000d:;

	i8 v59 = (i8)(intptr_t)(ws+1296);
	i4 v60 = *(i4*)(intptr_t)v59;
	i4 v61 = v60+(+48);
	i8 v62 = (i8)(intptr_t)(ws+1296);
	*(i4*)(intptr_t)v62 = v61;

	goto c02_000a;

c02_000e:;

	i8 v63 = (i8)(intptr_t)(ws+1296);
	i4 v64 = *(i4*)(intptr_t)v63;
	i4 v65 = v64+(+87);
	i8 v66 = (i8)(intptr_t)(ws+1296);
	*(i4*)(intptr_t)v66 = v65;

c02_000a:;

	i8 v67 = (i8)(intptr_t)(ws+1296);
	i4 v68 = *(i4*)(intptr_t)v67;
	i1 v69 = v68;
	i8 v70 = (i8)(intptr_t)(ws+1288);
	i8 v71 = *(i8*)(intptr_t)v70;
	*(i1*)(intptr_t)v71 = v69;

	i8 v72 = (i8)(intptr_t)(ws+1288);
	i8 v73 = *(i8*)(intptr_t)v72;
	i8 v74 = v73+(+1);
	i8 v75 = (i8)(intptr_t)(ws+1288);
	*(i8*)(intptr_t)v75 = v74;

	i8 v76 = (i8)(intptr_t)(ws+1272);
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

	i8 v79 = (i8)(intptr_t)(ws+1280);
	i8 v80 = *(i8*)(intptr_t)v79;
	i8 v81 = (i8)(intptr_t)(ws+1304);
	*(i8*)(intptr_t)v81 = v80;

	i8 v82 = (i8)(intptr_t)(ws+1288);
	i8 v83 = *(i8*)(intptr_t)v82;
	i8 v84 = v83+(-1);
	i8 v85 = (i8)(intptr_t)(ws+1312);
	*(i8*)(intptr_t)v85 = v84;

c02_0016:;

	i8 v86 = (i8)(intptr_t)(ws+1304);
	i8 v87 = *(i8*)(intptr_t)v86;
	i8 v88 = (i8)(intptr_t)(ws+1312);
	i8 v89 = *(i8*)(intptr_t)v88;
	if (v87<v89) goto c02_0018; else goto c02_0019;

c02_0018:;

	i8 v90 = (i8)(intptr_t)(ws+1304);
	i8 v91 = *(i8*)(intptr_t)v90;
	i1 v92 = *(i1*)(intptr_t)v91;
	i8 v93 = (i8)(intptr_t)(ws+1320);
	*(i1*)(intptr_t)v93 = v92;

	i8 v94 = (i8)(intptr_t)(ws+1312);
	i8 v95 = *(i8*)(intptr_t)v94;
	i1 v96 = *(i1*)(intptr_t)v95;
	i8 v97 = (i8)(intptr_t)(ws+1304);
	i8 v98 = *(i8*)(intptr_t)v97;
	*(i1*)(intptr_t)v98 = v96;

	i8 v99 = (i8)(intptr_t)(ws+1320);
	i1 v100 = *(i1*)(intptr_t)v99;
	i8 v101 = (i8)(intptr_t)(ws+1312);
	i8 v102 = *(i8*)(intptr_t)v101;
	*(i1*)(intptr_t)v102 = v100;

	i8 v103 = (i8)(intptr_t)(ws+1304);
	i8 v104 = *(i8*)(intptr_t)v103;
	i8 v105 = v104+(+1);
	i8 v106 = (i8)(intptr_t)(ws+1304);
	*(i8*)(intptr_t)v106 = v105;

	i8 v107 = (i8)(intptr_t)(ws+1312);
	i8 v108 = *(i8*)(intptr_t)v107;
	i8 v109 = v108+(-1);
	i8 v110 = (i8)(intptr_t)(ws+1312);
	*(i8*)(intptr_t)v110 = v109;

	goto c02_0016;

c02_0019:;

	i1 v111 = (i1)+0;
	i8 v112 = (i8)(intptr_t)(ws+1288);
	i8 v113 = *(i8*)(intptr_t)v112;
	*(i1*)(intptr_t)v113 = v111;

endsub:;
	*p35 = *(i8*)(intptr_t)(ws+1288);
}

// print_i32 workspace at ws+1160 length ws+24
void f15(i4 p140 /* value */) {
	*(i4*)(intptr_t)(ws+1160) = p140; /*value */

	i8 v141 = (i8)(intptr_t)(ws+1160);
	i4 v142 = *(i4*)(intptr_t)v141;
	i1 v143 = (i1)+10;
	i8 v144 = (i8)(intptr_t)(ws+1164);
	i8 v145;
	f13(&v145, v144, v143, v142);
	i8 v146 = (i8)(intptr_t)(ws+1176);
	*(i8*)(intptr_t)v146 = v145;

	i8 v147 = (i8)(intptr_t)(ws+1164);
	f11(v147);

endsub:;
}

// print_i16 workspace at ws+1152 length ws+2
void f16(i2 p148 /* value */) {
	*(i2*)(intptr_t)(ws+1152) = p148; /*value */

	i8 v149 = (i8)(intptr_t)(ws+1152);
	i2 v150 = *(i2*)(intptr_t)v149;
	i4 v151 = v150;
	f15(v151);

endsub:;
}

// AToI workspace at ws+1232 length ws+27
void f21(i4* p217 /* result */, i8* p218 /* ptr */, i8 p219 /* buffer */) {
	*(i8*)(intptr_t)(ws+1232) = p219; /*buffer */

	i1 v220 = (i1)+0;
	i8 v221 = (i8)(intptr_t)(ws+1256);
	*(i1*)(intptr_t)v221 = v220;

	i1 v222 = (i1)+10;
	i8 v223 = (i8)(intptr_t)(ws+1257);
	*(i1*)(intptr_t)v223 = v222;

	i8 v224 = (i8)(intptr_t)(ws+1232);
	i8 v225 = *(i8*)(intptr_t)v224;
	i8 v226 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v226 = v225;

	i4 v227 = (i4)+0;
	i8 v228 = (i8)(intptr_t)(ws+1240);
	*(i4*)(intptr_t)v228 = v227;

	i8 v229 = (i8)(intptr_t)(ws+1248);
	i8 v230 = *(i8*)(intptr_t)v229;
	i1 v231 = *(i1*)(intptr_t)v230;
	i8 v232 = (i8)(intptr_t)(ws+1258);
	*(i1*)(intptr_t)v232 = v231;

	i8 v233 = (i8)(intptr_t)(ws+1258);
	i1 v234 = *(i1*)(intptr_t)v233;
	i1 v235 = (i1)+45;
	if (v234==v235) goto c02_002e; else goto c02_002f;

c02_002e:;

	i1 v236 = (i1)+1;
	i8 v237 = (i8)(intptr_t)(ws+1256);
	*(i1*)(intptr_t)v237 = v236;

	i8 v238 = (i8)(intptr_t)(ws+1248);
	i8 v239 = *(i8*)(intptr_t)v238;
	i8 v240 = v239+(+1);
	i8 v241 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v241 = v240;

	i8 v242 = (i8)(intptr_t)(ws+1248);
	i8 v243 = *(i8*)(intptr_t)v242;
	i1 v244 = *(i1*)(intptr_t)v243;
	i8 v245 = (i8)(intptr_t)(ws+1258);
	*(i1*)(intptr_t)v245 = v244;

	goto c02_002b;

c02_002f:;

c02_002b:;

	i8 v246 = (i8)(intptr_t)(ws+1258);
	i1 v247 = *(i1*)(intptr_t)v246;
	i1 v248 = (i1)+48;
	if (v247==v248) goto c02_0033; else goto c02_0034;

c02_0033:;

	i8 v249 = (i8)(intptr_t)(ws+1248);
	i8 v250 = *(i8*)(intptr_t)v249;
	i8 v251 = v250+(+1);
	i1 v252 = *(i1*)(intptr_t)v251;

	if (v252 != +120) goto c02_0036;

	i1 v253 = (i1)+16;
	i8 v254 = (i8)(intptr_t)(ws+1257);
	*(i1*)(intptr_t)v254 = v253;

	goto c02_0035;

c02_0036:;

	if (v252 != +111) goto c02_0037;

	i1 v255 = (i1)+8;
	i8 v256 = (i8)(intptr_t)(ws+1257);
	*(i1*)(intptr_t)v256 = v255;

	goto c02_0035;

c02_0037:;

	if (v252 != +98) goto c02_0038;

	i1 v257 = (i1)+2;
	i8 v258 = (i8)(intptr_t)(ws+1257);
	*(i1*)(intptr_t)v258 = v257;

	goto c02_0035;

c02_0038:;

	if (v252 != +100) goto c02_0039;

	i1 v259 = (i1)+10;
	i8 v260 = (i8)(intptr_t)(ws+1257);
	*(i1*)(intptr_t)v260 = v259;

	goto c02_0035;

c02_0039:;

	i8 v261 = (i8)(intptr_t)(ws+1248);
	i8 v262 = *(i8*)(intptr_t)v261;
	i8 v263 = v262+(-2);
	i8 v264 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v264 = v263;

c02_0035:;


	i8 v265 = (i8)(intptr_t)(ws+1248);
	i8 v266 = *(i8*)(intptr_t)v265;
	i8 v267 = v266+(+2);
	i8 v268 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v268 = v267;

	i8 v269 = (i8)(intptr_t)(ws+1248);
	i8 v270 = *(i8*)(intptr_t)v269;
	i1 v271 = *(i1*)(intptr_t)v270;
	i8 v272 = (i8)(intptr_t)(ws+1258);
	*(i1*)(intptr_t)v272 = v271;

	goto c02_0030;

c02_0034:;

c02_0030:;

c02_003a:;

	i8 v273 = (i8)(intptr_t)(ws+1258);
	i1 v274 = *(i1*)(intptr_t)v273;
	i1 v275 = (i1)+97;
	if (v274<v275) goto c02_0040; else goto c02_003f;

c02_003f:;

	i8 v276 = (i8)(intptr_t)(ws+1258);
	i1 v277 = *(i1*)(intptr_t)v276;
	i1 v278 = v277+(-87);
	i8 v279 = (i8)(intptr_t)(ws+1258);
	*(i1*)(intptr_t)v279 = v278;

	goto c02_003c;

c02_0040:;

	i8 v280 = (i8)(intptr_t)(ws+1258);
	i1 v281 = *(i1*)(intptr_t)v280;
	i1 v282 = (i1)+65;
	if (v281<v282) goto c02_0044; else goto c02_0043;

c02_0043:;

	i8 v283 = (i8)(intptr_t)(ws+1258);
	i1 v284 = *(i1*)(intptr_t)v283;
	i1 v285 = v284+(-55);
	i8 v286 = (i8)(intptr_t)(ws+1258);
	*(i1*)(intptr_t)v286 = v285;

	goto c02_003c;

c02_0044:;

	i8 v287 = (i8)(intptr_t)(ws+1258);
	i1 v288 = *(i1*)(intptr_t)v287;
	i1 v289 = v288+(-48);
	i8 v290 = (i8)(intptr_t)(ws+1258);
	*(i1*)(intptr_t)v290 = v289;

c02_003c:;

	i8 v291 = (i8)(intptr_t)(ws+1258);
	i1 v292 = *(i1*)(intptr_t)v291;
	i8 v293 = (i8)(intptr_t)(ws+1257);
	i1 v294 = *(i1*)(intptr_t)v293;
	if (v292<v294) goto c02_0049; else goto c02_0048;

c02_0048:;

	goto c02_003b;

	goto c02_0045;

c02_0049:;

c02_0045:;

	i8 v295 = (i8)(intptr_t)(ws+1240);
	i4 v296 = *(i4*)(intptr_t)v295;
	i8 v297 = (i8)(intptr_t)(ws+1257);
	i1 v298 = *(i1*)(intptr_t)v297;
	i4 v299 = v298;
	i4 v300 = v296*v299;
	i8 v301 = (i8)(intptr_t)(ws+1258);
	i1 v302 = *(i1*)(intptr_t)v301;
	i4 v303 = v302;
	i4 v304 = v300+v303;
	i8 v305 = (i8)(intptr_t)(ws+1240);
	*(i4*)(intptr_t)v305 = v304;

	i8 v306 = (i8)(intptr_t)(ws+1248);
	i8 v307 = *(i8*)(intptr_t)v306;
	i8 v308 = v307+(+1);
	i8 v309 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v309 = v308;

	i8 v310 = (i8)(intptr_t)(ws+1248);
	i8 v311 = *(i8*)(intptr_t)v310;
	i1 v312 = *(i1*)(intptr_t)v311;
	i8 v313 = (i8)(intptr_t)(ws+1258);
	*(i1*)(intptr_t)v313 = v312;

	goto c02_003a;

c02_003b:;

	i8 v314 = (i8)(intptr_t)(ws+1256);
	i1 v315 = *(i1*)(intptr_t)v314;
	i1 v316 = (i1)+0;
	if (v315==v316) goto c02_004e; else goto c02_004d;

c02_004d:;

	i8 v317 = (i8)(intptr_t)(ws+1240);
	i4 v318 = *(i4*)(intptr_t)v317;
	i4 v319 = -v318;
	i8 v320 = (i8)(intptr_t)(ws+1240);
	*(i4*)(intptr_t)v320 = v319;

	goto c02_004a;

c02_004e:;

c02_004a:;

endsub:;
	*p218 = *(i8*)(intptr_t)(ws+1248);
	*p217 = *(i4*)(intptr_t)(ws+1240);
}

// ArgvInit workspace at ws+1152 length ws+0
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

// ArgvNext workspace at ws+1152 length ws+8
void f24(i8* p332 /* arg */) {

	i8 v333 = (i8)(intptr_t)(ws+16);
	i8 v334 = *(i8*)(intptr_t)v333;
	i8 v335 = (i8)+0;
	if (v334==v335) goto c02_0052; else goto c02_0053;

c02_0052:;

	i8 v336 = (i8)+0;
	i8 v337 = (i8)(intptr_t)(ws+1152);
	*(i8*)(intptr_t)v337 = v336;

	goto endsub;

	goto c02_004f;

c02_0053:;

c02_004f:;

	i8 v338 = (i8)(intptr_t)(ws+16);
	i8 v339 = *(i8*)(intptr_t)v338;
	i8 v340 = *(i8*)(intptr_t)v339;
	i8 v341 = (i8)(intptr_t)(ws+1152);
	*(i8*)(intptr_t)v341 = v340;

	i8 v342 = (i8)(intptr_t)(ws+1152);
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
	*p332 = *(i8*)(intptr_t)(ws+1152);
}

// StrCmp workspace at ws+1232 length ws+17
void f25(i1* p351 /* res */, i8 p352 /* s2 */, i8 p353 /* s1 */) {
	*(i8*)(intptr_t)(ws+1232) = p353; /*s1 */
	*(i8*)(intptr_t)(ws+1240) = p352; /*s2 */

c02_0059:;

	i8 v354 = (i8)(intptr_t)(ws+1232);
	i8 v355 = *(i8*)(intptr_t)v354;
	i1 v356 = *(i1*)(intptr_t)v355;
	i8 v357 = (i8)(intptr_t)(ws+1240);
	i8 v358 = *(i8*)(intptr_t)v357;
	i1 v359 = *(i1*)(intptr_t)v358;
	i1 v360 = v356-v359;
	i8 v361 = (i8)(intptr_t)(ws+1248);
	*(i1*)(intptr_t)v361 = v360;

	i8 v362 = (i8)(intptr_t)(ws+1248);
	i1 v363 = *(i1*)(intptr_t)v362;
	i1 v364 = (i1)+0;
	if (v363==v364) goto c02_0062; else goto c02_0060;

c02_0062:;

	i8 v365 = (i8)(intptr_t)(ws+1232);
	i8 v366 = *(i8*)(intptr_t)v365;
	i1 v367 = *(i1*)(intptr_t)v366;
	i1 v368 = (i1)+0;
	if (v367==v368) goto c02_0060; else goto c02_0061;

c02_0060:;

	goto c02_005a;

	goto c02_005b;

c02_0061:;

c02_005b:;

	i8 v369 = (i8)(intptr_t)(ws+1232);
	i8 v370 = *(i8*)(intptr_t)v369;
	i8 v371 = v370+(+1);
	i8 v372 = (i8)(intptr_t)(ws+1232);
	*(i8*)(intptr_t)v372 = v371;

	i8 v373 = (i8)(intptr_t)(ws+1240);
	i8 v374 = *(i8*)(intptr_t)v373;
	i8 v375 = v374+(+1);
	i8 v376 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v376 = v375;

	goto c02_0059;

c02_005a:;

endsub:;
	*p351 = *(i1*)(intptr_t)(ws+1248);
}

// StrLen workspace at ws+1256 length ws+25
void f28(i8* p420 /* size */, i8 p421 /* s */) {
	*(i8*)(intptr_t)(ws+1256) = p421; /*s */

	i8 v422 = (i8)(intptr_t)(ws+1256);
	i8 v423 = *(i8*)(intptr_t)v422;
	i8 v424 = (i8)(intptr_t)(ws+1272);
	*(i8*)(intptr_t)v424 = v423;

c02_0075:;

	i8 v425 = (i8)(intptr_t)(ws+1272);
	i8 v426 = *(i8*)(intptr_t)v425;
	i1 v427 = *(i1*)(intptr_t)v426;
	i8 v428 = (i8)(intptr_t)(ws+1280);
	*(i1*)(intptr_t)v428 = v427;

	i8 v429 = (i8)(intptr_t)(ws+1280);
	i1 v430 = *(i1*)(intptr_t)v429;
	i1 v431 = (i1)+0;
	if (v430==v431) goto c02_007a; else goto c02_007b;

c02_007a:;

	goto c02_0076;

	goto c02_0077;

c02_007b:;

c02_0077:;

	i8 v432 = (i8)(intptr_t)(ws+1272);
	i8 v433 = *(i8*)(intptr_t)v432;
	i8 v434 = v433+(+1);
	i8 v435 = (i8)(intptr_t)(ws+1272);
	*(i8*)(intptr_t)v435 = v434;

	goto c02_0075;

c02_0076:;

	i8 v436 = (i8)(intptr_t)(ws+1272);
	i8 v437 = *(i8*)(intptr_t)v436;
	i8 v438 = (i8)(intptr_t)(ws+1256);
	i8 v439 = *(i8*)(intptr_t)v438;
	i8 v440 = v437-v439;
	i8 v441 = (i8)(intptr_t)(ws+1264);
	*(i8*)(intptr_t)v441 = v440;

endsub:;
	*p420 = *(i8*)(intptr_t)(ws+1264);
}

// MemCopy workspace at ws+1256 length ws+24
void f30(i8 p463 /* dest */, i8 p464 /* size */, i8 p465 /* src */) {
	*(i8*)(intptr_t)(ws+1256) = p465; /*src */
	*(i8*)(intptr_t)(ws+1264) = p464; /*size */
	*(i8*)(intptr_t)(ws+1272) = p463; /*dest */

c02_0085:;

	i8 v466 = (i8)(intptr_t)(ws+1264);
	i8 v467 = *(i8*)(intptr_t)v466;
	i8 v468 = (i8)+0;
	if (v467==v468) goto c02_0088; else goto c02_0087;

c02_0087:;

	i8 v469 = (i8)(intptr_t)(ws+1256);
	i8 v470 = *(i8*)(intptr_t)v469;
	i1 v471 = *(i1*)(intptr_t)v470;
	i8 v472 = (i8)(intptr_t)(ws+1272);
	i8 v473 = *(i8*)(intptr_t)v472;
	*(i1*)(intptr_t)v473 = v471;

	i8 v474 = (i8)(intptr_t)(ws+1272);
	i8 v475 = *(i8*)(intptr_t)v474;
	i8 v476 = v475+(+1);
	i8 v477 = (i8)(intptr_t)(ws+1272);
	*(i8*)(intptr_t)v477 = v476;

	i8 v478 = (i8)(intptr_t)(ws+1256);
	i8 v479 = *(i8*)(intptr_t)v478;
	i8 v480 = v479+(+1);
	i8 v481 = (i8)(intptr_t)(ws+1256);
	*(i8*)(intptr_t)v481 = v480;

	i8 v482 = (i8)(intptr_t)(ws+1264);
	i8 v483 = *(i8*)(intptr_t)v482;
	i8 v484 = v483+(-1);
	i8 v485 = (i8)(intptr_t)(ws+1264);
	*(i8*)(intptr_t)v485 = v484;

	goto c02_0085;

c02_0088:;

endsub:;
}
const i1 c02_s0008[] = { 0x4f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0x0a,0 };

// Alloc workspace at ws+1296 length ws+56
void f33(i8* p581 /* block */, i8 p582 /* length */) {
	*(i8*)(intptr_t)(ws+1296) = p582; /*length */

	i8 v583 = (i8)(intptr_t)(ws+1296);
	i8 v584 = *(i8*)(intptr_t)v583;
	i8 v585 = v584+(+8);
	i8 v586;
	f4(&v586, v585);
	i8 v587 = (i8)(intptr_t)(ws+1312);
	*(i8*)(intptr_t)v587 = v586;

	i8 v588 = (i8)+0;
	i8 v589 = (i8)(intptr_t)(ws+1320);
	*(i8*)(intptr_t)v589 = v588;

	i8 v590 = (i8)(intptr_t)(ws+24);
	i8 v591 = *(i8*)(intptr_t)v590;
	i8 v592 = (i8)(intptr_t)(ws+1328);
	*(i8*)(intptr_t)v592 = v591;

c02_009f:;

	i8 v593 = (i8)(intptr_t)(ws+1328);
	i8 v594 = *(i8*)(intptr_t)v593;
	i8 v595 = (i8)+0;
	if (v594==v595) goto c02_00a4; else goto c02_00a5;

c02_00a4:;

	i8 v596 = (i8)+0;
	i8 v597 = (i8)(intptr_t)(ws+1328);
	*(i8*)(intptr_t)v597 = v596;

	i8 v598 = (i8)(intptr_t)c02_s0008;
	f11(v598);

	f6();

	goto c02_00a0;

	goto c02_00a1;

c02_00a5:;

c02_00a1:;

	i8 v599 = (i8)(intptr_t)(ws+1328);
	i8 v600 = *(i8*)(intptr_t)v599;
	i8 v601 = v600+(+8);
	i8 v602 = *(i8*)(intptr_t)v601;
	i8 v603 = (i8)(intptr_t)(ws+1336);
	*(i8*)(intptr_t)v603 = v602;

	i8 v604 = (i8)(intptr_t)(ws+1336);
	i8 v605 = *(i8*)(intptr_t)v604;
	i8 v606 = (i8)(intptr_t)(ws+1312);
	i8 v607 = *(i8*)(intptr_t)v606;
	if (v605==v607) goto c02_00a9; else goto c02_00aa;

c02_00a9:;

	i8 v608 = (i8)(intptr_t)(ws+1320);
	i8 v609 = *(i8*)(intptr_t)v608;
	i8 v610 = (i8)+0;
	if (v609==v610) goto c02_00af; else goto c02_00ae;

c02_00ae:;

	i8 v611 = (i8)(intptr_t)(ws+1328);
	i8 v612 = *(i8*)(intptr_t)v611;
	i8 v613 = *(i8*)(intptr_t)v612;
	i8 v614 = (i8)(intptr_t)(ws+1320);
	i8 v615 = *(i8*)(intptr_t)v614;
	*(i8*)(intptr_t)v615 = v613;

	goto c02_00ab;

c02_00af:;

	i8 v616 = (i8)(intptr_t)(ws+1328);
	i8 v617 = *(i8*)(intptr_t)v616;
	i8 v618 = *(i8*)(intptr_t)v617;
	i8 v619 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v619 = v618;

c02_00ab:;

	goto c02_00a0;

	goto c02_00a6;

c02_00aa:;

	i8 v620 = (i8)(intptr_t)(ws+1312);
	i8 v621 = *(i8*)(intptr_t)v620;
	i8 v622 = (i8)(intptr_t)(ws+1336);
	i8 v623 = *(i8*)(intptr_t)v622;
	i8 v624 = v623+(-16);
	if (v621<v624) goto c02_00b2; else goto c02_00b3;

c02_00b2:;

	i8 v625 = (i8)(intptr_t)(ws+1336);
	i8 v626 = *(i8*)(intptr_t)v625;
	i8 v627 = (i8)(intptr_t)(ws+1312);
	i8 v628 = *(i8*)(intptr_t)v627;
	i8 v629 = v626-v628;
	i8 v630 = (i8)(intptr_t)(ws+1328);
	i8 v631 = *(i8*)(intptr_t)v630;
	i8 v632 = v631+(+8);
	*(i8*)(intptr_t)v632 = v629;

	i8 v633 = (i8)(intptr_t)(ws+1328);
	i8 v634 = *(i8*)(intptr_t)v633;
	i8 v635 = (i8)(intptr_t)(ws+1328);
	i8 v636 = *(i8*)(intptr_t)v635;
	i8 v637 = v636+(+8);
	i8 v638 = *(i8*)(intptr_t)v637;
	i8 v639 = v634+v638;
	i8 v640 = (i8)(intptr_t)(ws+1328);
	*(i8*)(intptr_t)v640 = v639;

	goto c02_00a0;

	goto c02_00a6;

c02_00b3:;

c02_00a6:;

	i8 v641 = (i8)(intptr_t)(ws+1328);
	i8 v642 = *(i8*)(intptr_t)v641;
	i8 v643 = (i8)(intptr_t)(ws+1320);
	*(i8*)(intptr_t)v643 = v642;

	i8 v644 = (i8)(intptr_t)(ws+1328);
	i8 v645 = *(i8*)(intptr_t)v644;
	i8 v646 = *(i8*)(intptr_t)v645;
	i8 v647 = (i8)(intptr_t)(ws+1328);
	*(i8*)(intptr_t)v647 = v646;

	goto c02_009f;

c02_00a0:;

	i8 v648 = (i8)(intptr_t)(ws+1328);
	i8 v649 = *(i8*)(intptr_t)v648;
	i8 v650 = (i8)(intptr_t)(ws+1344);
	*(i8*)(intptr_t)v650 = v649;

	i8 v651 = (i8)(intptr_t)(ws+1312);
	i8 v652 = *(i8*)(intptr_t)v651;
	i8 v653 = (i8)(intptr_t)(ws+1344);
	i8 v654 = *(i8*)(intptr_t)v653;
	*(i8*)(intptr_t)v654 = v652;

	i8 v655 = (i8)(intptr_t)(ws+1344);
	i8 v656 = *(i8*)(intptr_t)v655;
	i8 v657 = v656+(+8);
	i8 v658 = (i8)(intptr_t)(ws+1304);
	*(i8*)(intptr_t)v658 = v657;

	i8 v659 = (i8)(intptr_t)(ws+1304);
	i8 v660 = *(i8*)(intptr_t)v659;
	i1 v661 = (i1)+0;
	i8 v662 = (i8)(intptr_t)(ws+1296);
	i8 v663 = *(i8*)(intptr_t)v662;
	f7(v663, v661, v660);

endsub:;
	*p581 = *(i8*)(intptr_t)(ws+1304);
}

// AddFreeBlock workspace at ws+1288 length ws+32
void f34(i8 p664 /* length */, i8 p665 /* start */) {
	*(i8*)(intptr_t)(ws+1288) = p665; /*start */
	*(i8*)(intptr_t)(ws+1296) = p664; /*length */

	i8 v666 = (i8)(intptr_t)(ws+1288);
	i8 v667 = *(i8*)(intptr_t)v666;
	i8 v668 = (i8)(intptr_t)(ws+1304);
	*(i8*)(intptr_t)v668 = v667;

	i8 v669 = (i8)(intptr_t)(ws+1296);
	i8 v670 = *(i8*)(intptr_t)v669;
	i8 v671 = (i8)(intptr_t)(ws+1304);
	i8 v672 = *(i8*)(intptr_t)v671;
	i8 v673 = v672+(+8);
	*(i8*)(intptr_t)v673 = v670;

	i8 v674 = (i8)(intptr_t)(ws+24);
	i8 v675 = *(i8*)(intptr_t)v674;
	i8 v676 = (i8)(intptr_t)(ws+1312);
	*(i8*)(intptr_t)v676 = v675;

	i8 v677 = (i8)(intptr_t)(ws+1304);
	i8 v678 = *(i8*)(intptr_t)v677;
	i8 v679 = (i8)(intptr_t)(ws+1312);
	i8 v680 = *(i8*)(intptr_t)v679;
	if (v678<v680) goto c02_00b7; else goto c02_00b8;

c02_00b7:;

	i8 v681 = (i8)(intptr_t)(ws+1304);
	i8 v682 = *(i8*)(intptr_t)v681;
	i8 v683 = (i8)(intptr_t)(ws+1304);
	i8 v684 = *(i8*)(intptr_t)v683;
	i8 v685 = v684+(+8);
	i8 v686 = *(i8*)(intptr_t)v685;
	i8 v687 = v682+v686;
	i8 v688 = (i8)(intptr_t)(ws+1312);
	i8 v689 = *(i8*)(intptr_t)v688;
	if (v687==v689) goto c02_00bc; else goto c02_00bd;

c02_00bc:;

	i8 v690 = (i8)(intptr_t)(ws+1296);
	i8 v691 = *(i8*)(intptr_t)v690;
	i8 v692 = (i8)(intptr_t)(ws+1312);
	i8 v693 = *(i8*)(intptr_t)v692;
	i8 v694 = v693+(+8);
	i8 v695 = *(i8*)(intptr_t)v694;
	i8 v696 = v691+v695;
	i8 v697 = (i8)(intptr_t)(ws+1304);
	i8 v698 = *(i8*)(intptr_t)v697;
	i8 v699 = v698+(+8);
	*(i8*)(intptr_t)v699 = v696;

	i8 v700 = (i8)(intptr_t)(ws+1312);
	i8 v701 = *(i8*)(intptr_t)v700;
	i8 v702 = *(i8*)(intptr_t)v701;
	i8 v703 = (i8)(intptr_t)(ws+1304);
	i8 v704 = *(i8*)(intptr_t)v703;
	*(i8*)(intptr_t)v704 = v702;

	goto c02_00b9;

c02_00bd:;

	i8 v705 = (i8)(intptr_t)(ws+1312);
	i8 v706 = *(i8*)(intptr_t)v705;
	i8 v707 = (i8)(intptr_t)(ws+1304);
	i8 v708 = *(i8*)(intptr_t)v707;
	*(i8*)(intptr_t)v708 = v706;

c02_00b9:;

	i8 v709 = (i8)(intptr_t)(ws+1304);
	i8 v710 = *(i8*)(intptr_t)v709;
	i8 v711 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v711 = v710;

	goto c02_00b4;

c02_00b8:;

c02_00be:;

	i8 v712 = (i8)(intptr_t)(ws+1312);
	i8 v713 = *(i8*)(intptr_t)v712;
	i8 v714 = *(i8*)(intptr_t)v713;
	i8 v715 = (i8)+0;
	if (v714==v715) goto c02_00c3; else goto c02_00c4;

c02_00c3:;

	i8 v716 = (i8)(intptr_t)(ws+1304);
	i8 v717 = *(i8*)(intptr_t)v716;
	i8 v718 = (i8)(intptr_t)(ws+1312);
	i8 v719 = *(i8*)(intptr_t)v718;
	*(i8*)(intptr_t)v719 = v717;

	i8 v720 = (i8)+0;
	i8 v721 = (i8)(intptr_t)(ws+1304);
	i8 v722 = *(i8*)(intptr_t)v721;
	*(i8*)(intptr_t)v722 = v720;

	goto c02_00bf;

	goto c02_00c0;

c02_00c4:;

c02_00c0:;

	i8 v723 = (i8)(intptr_t)(ws+1304);
	i8 v724 = *(i8*)(intptr_t)v723;
	i8 v725 = (i8)(intptr_t)(ws+1312);
	i8 v726 = *(i8*)(intptr_t)v725;
	i8 v727 = *(i8*)(intptr_t)v726;
	if (v724<v727) goto c02_00c8; else goto c02_00c9;

c02_00c8:;

	i8 v728 = (i8)(intptr_t)(ws+1304);
	i8 v729 = *(i8*)(intptr_t)v728;
	i8 v730 = (i8)(intptr_t)(ws+1296);
	i8 v731 = *(i8*)(intptr_t)v730;
	i8 v732 = v729+v731;
	i8 v733 = (i8)(intptr_t)(ws+1312);
	i8 v734 = *(i8*)(intptr_t)v733;
	i8 v735 = *(i8*)(intptr_t)v734;
	if (v732==v735) goto c02_00cd; else goto c02_00ce;

c02_00cd:;

	i8 v736 = (i8)(intptr_t)(ws+1296);
	i8 v737 = *(i8*)(intptr_t)v736;
	i8 v738 = (i8)(intptr_t)(ws+1312);
	i8 v739 = *(i8*)(intptr_t)v738;
	i8 v740 = *(i8*)(intptr_t)v739;
	i8 v741 = v740+(+8);
	i8 v742 = *(i8*)(intptr_t)v741;
	i8 v743 = v737+v742;
	i8 v744 = (i8)(intptr_t)(ws+1304);
	i8 v745 = *(i8*)(intptr_t)v744;
	i8 v746 = v745+(+8);
	*(i8*)(intptr_t)v746 = v743;

	i8 v747 = (i8)(intptr_t)(ws+1312);
	i8 v748 = *(i8*)(intptr_t)v747;
	i8 v749 = *(i8*)(intptr_t)v748;
	i8 v750 = *(i8*)(intptr_t)v749;
	i8 v751 = (i8)(intptr_t)(ws+1304);
	i8 v752 = *(i8*)(intptr_t)v751;
	*(i8*)(intptr_t)v752 = v750;

	goto c02_00ca;

c02_00ce:;

	i8 v753 = (i8)(intptr_t)(ws+1312);
	i8 v754 = *(i8*)(intptr_t)v753;
	i8 v755 = *(i8*)(intptr_t)v754;
	i8 v756 = (i8)(intptr_t)(ws+1304);
	i8 v757 = *(i8*)(intptr_t)v756;
	*(i8*)(intptr_t)v757 = v755;

c02_00ca:;

	i8 v758 = (i8)(intptr_t)(ws+1304);
	i8 v759 = *(i8*)(intptr_t)v758;
	i8 v760 = (i8)(intptr_t)(ws+1312);
	i8 v761 = *(i8*)(intptr_t)v760;
	*(i8*)(intptr_t)v761 = v759;

	goto c02_00bf;

	goto c02_00c5;

c02_00c9:;

c02_00c5:;

	i8 v762 = (i8)(intptr_t)(ws+1312);
	i8 v763 = *(i8*)(intptr_t)v762;
	i8 v764 = *(i8*)(intptr_t)v763;
	i8 v765 = (i8)(intptr_t)(ws+1312);
	*(i8*)(intptr_t)v765 = v764;

	goto c02_00be;

c02_00bf:;

	i8 v766 = (i8)(intptr_t)(ws+1312);
	i8 v767 = *(i8*)(intptr_t)v766;
	i8 v768 = (i8)(intptr_t)(ws+1312);
	i8 v769 = *(i8*)(intptr_t)v768;
	i8 v770 = v769+(+8);
	i8 v771 = *(i8*)(intptr_t)v770;
	i8 v772 = v767+v771;
	i8 v773 = (i8)(intptr_t)(ws+1304);
	i8 v774 = *(i8*)(intptr_t)v773;
	if (v772==v774) goto c02_00d2; else goto c02_00d3;

c02_00d2:;

	i8 v775 = (i8)(intptr_t)(ws+1312);
	i8 v776 = *(i8*)(intptr_t)v775;
	i8 v777 = v776+(+8);
	i8 v778 = *(i8*)(intptr_t)v777;
	i8 v779 = (i8)(intptr_t)(ws+1304);
	i8 v780 = *(i8*)(intptr_t)v779;
	i8 v781 = v780+(+8);
	i8 v782 = *(i8*)(intptr_t)v781;
	i8 v783 = v778+v782;
	i8 v784 = (i8)(intptr_t)(ws+1312);
	i8 v785 = *(i8*)(intptr_t)v784;
	i8 v786 = v785+(+8);
	*(i8*)(intptr_t)v786 = v783;

	i8 v787 = (i8)(intptr_t)(ws+1304);
	i8 v788 = *(i8*)(intptr_t)v787;
	i8 v789 = *(i8*)(intptr_t)v788;
	i8 v790 = (i8)(intptr_t)(ws+1312);
	i8 v791 = *(i8*)(intptr_t)v790;
	*(i8*)(intptr_t)v791 = v789;

	goto c02_00cf;

c02_00d3:;

c02_00cf:;

c02_00b4:;

endsub:;
}

// Free workspace at ws+1272 length ws+16
void f35(i8 p792 /* start */) {
	*(i8*)(intptr_t)(ws+1272) = p792; /*start */

	i8 v793 = (i8)(intptr_t)(ws+1272);
	i8 v794 = *(i8*)(intptr_t)v793;
	i8 v795 = v794+(-8);
	i8 v796 = (i8)(intptr_t)(ws+1280);
	*(i8*)(intptr_t)v796 = v795;

	i8 v797 = (i8)(intptr_t)(ws+1280);
	i8 v798 = *(i8*)(intptr_t)v797;
	i8 v799 = (i8)(intptr_t)(ws+1280);
	i8 v800 = *(i8*)(intptr_t)v799;
	i8 v801 = *(i8*)(intptr_t)v800;
	f34(v801, v798);

endsub:;
}

// GetFreeMemory workspace at ws+1152 length ws+16
void f36(i8* p802 /* bytes */) {

	i8 v803 = (i8)+0;
	i8 v804 = (i8)(intptr_t)(ws+1152);
	*(i8*)(intptr_t)v804 = v803;

	i8 v805 = (i8)(intptr_t)(ws+24);
	i8 v806 = *(i8*)(intptr_t)v805;
	i8 v807 = (i8)(intptr_t)(ws+1160);
	*(i8*)(intptr_t)v807 = v806;

c02_00d6:;

	i8 v808 = (i8)(intptr_t)(ws+1160);
	i8 v809 = *(i8*)(intptr_t)v808;
	i8 v810 = (i8)+0;
	if (v809==v810) goto c02_00d9; else goto c02_00d8;

c02_00d8:;

	i8 v811 = (i8)(intptr_t)(ws+1152);
	i8 v812 = *(i8*)(intptr_t)v811;
	i8 v813 = (i8)(intptr_t)(ws+1160);
	i8 v814 = *(i8*)(intptr_t)v813;
	i8 v815 = v814+(+8);
	i8 v816 = *(i8*)(intptr_t)v815;
	i8 v817 = v812+v816;
	i8 v818 = (i8)(intptr_t)(ws+1152);
	*(i8*)(intptr_t)v818 = v817;

	i8 v819 = (i8)(intptr_t)(ws+1160);
	i8 v820 = *(i8*)(intptr_t)v819;
	i8 v821 = *(i8*)(intptr_t)v820;
	i8 v822 = (i8)(intptr_t)(ws+1160);
	*(i8*)(intptr_t)v822 = v821;

	goto c02_00d6;

c02_00d9:;

endsub:;
	*p802 = *(i8*)(intptr_t)(ws+1152);
}

// StrDup workspace at ws+1232 length ws+24
void f37(i8* p823 /* news */, i8 p824 /* s */) {
	*(i8*)(intptr_t)(ws+1232) = p824; /*s */

	i8 v825 = (i8)(intptr_t)(ws+1232);
	i8 v826 = *(i8*)(intptr_t)v825;
	i8 v827;
	f28(&v827, v826);
	i8 v828 = v827+(+1);
	i8 v829 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v829 = v828;

	i8 v830 = (i8)(intptr_t)(ws+1248);
	i8 v831 = *(i8*)(intptr_t)v830;
	i8 v832;
	f33(&v832, v831);
	i8 v833 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v833 = v832;

	i8 v834 = (i8)(intptr_t)(ws+1232);
	i8 v835 = *(i8*)(intptr_t)v834;
	i8 v836 = (i8)(intptr_t)(ws+1248);
	i8 v837 = *(i8*)(intptr_t)v836;
	i8 v838 = (i8)(intptr_t)(ws+1240);
	i8 v839 = *(i8*)(intptr_t)v838;
	f30(v839, v837, v835);

endsub:;
	*p823 = *(i8*)(intptr_t)(ws+1240);
}

// fcb_i_blockin workspace at ws+1336 length ws+28
void f38(i8 p840 /* fcb */) {
	*(i8*)(intptr_t)(ws+1336) = p840; /*fcb */

	i8 v841 = (i8)(intptr_t)(ws+1336);
	i8 v842 = *(i8*)(intptr_t)v841;
	i8 v843 = v842+(+12);
	i1 v844 = (i1)+0;
	i8 v845 = (i8)+512;
	f7(v845, v844, v843);

	i8 v846 = (i8)(intptr_t)(ws+1336);
	i8 v847 = *(i8*)(intptr_t)v846;
	i4 v848 = *(i4*)(intptr_t)v847;
	i8 v849 = (i8)(intptr_t)(ws+1344);
	*(i4*)(intptr_t)v849 = v848;

	i8 v850 = (i8)(intptr_t)(ws+1336);
	i8 v851 = *(i8*)(intptr_t)v850;
	i8 v852 = v851+(+12);
	i8 v853 = (i8)(intptr_t)(ws+1352);
	*(i8*)(intptr_t)v853 = v852;

	i8 v854 = (i8)(intptr_t)(ws+1336);
	i8 v855 = *(i8*)(intptr_t)v854;
	i8 v856 = v855+(+8);
	i4 v857 = *(i4*)(intptr_t)v856;
	i1 v858 = (i1)+9;
	i4 v859 = ((i4)v857)<<v858;
	i8 v860 = (i8)(intptr_t)(ws+1360);
	*(i4*)(intptr_t)v860 = v859;

	
pread( 
*(i4*)(intptr_t)(ws+1344) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+1352) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+1360) 
); 


	i1 v861 = (i1)+0;
	i8 v862 = (i8)(intptr_t)(ws+1336);
	i8 v863 = *(i8*)(intptr_t)v862;
	i8 v864 = v863+(+6);
	*(i1*)(intptr_t)v864 = v861;

endsub:;
}

// fcb_i_blockout workspace at ws+1336 length ws+28
void f39(i8 p865 /* fcb */) {
	*(i8*)(intptr_t)(ws+1336) = p865; /*fcb */

	i8 v866 = (i8)(intptr_t)(ws+1336);
	i8 v867 = *(i8*)(intptr_t)v866;
	i8 v868 = v867+(+6);
	i1 v869 = *(i1*)(intptr_t)v868;
	i1 v870 = (i1)+0;
	if (v869==v870) goto c02_00de; else goto c02_00dd;

c02_00dd:;

	i8 v871 = (i8)(intptr_t)(ws+1336);
	i8 v872 = *(i8*)(intptr_t)v871;
	i4 v873 = *(i4*)(intptr_t)v872;
	i8 v874 = (i8)(intptr_t)(ws+1344);
	*(i4*)(intptr_t)v874 = v873;

	i8 v875 = (i8)(intptr_t)(ws+1336);
	i8 v876 = *(i8*)(intptr_t)v875;
	i8 v877 = v876+(+12);
	i8 v878 = (i8)(intptr_t)(ws+1352);
	*(i8*)(intptr_t)v878 = v877;

	i8 v879 = (i8)(intptr_t)(ws+1336);
	i8 v880 = *(i8*)(intptr_t)v879;
	i8 v881 = v880+(+8);
	i4 v882 = *(i4*)(intptr_t)v881;
	i1 v883 = (i1)+9;
	i4 v884 = ((i4)v882)<<v883;
	i8 v885 = (i8)(intptr_t)(ws+1360);
	*(i4*)(intptr_t)v885 = v884;

	
pwrite( 
*(i4*)(intptr_t)(ws+1344) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+1352) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+1360) 
); 


	i1 v886 = (i1)+0;
	i8 v887 = (i8)(intptr_t)(ws+1336);
	i8 v888 = *(i8*)(intptr_t)v887;
	i8 v889 = v888+(+6);
	*(i1*)(intptr_t)v889 = v886;

	goto c02_00da;

c02_00de:;

c02_00da:;

endsub:;
}

// fcb_i_changeblock workspace at ws+1320 length ws+12
void f40(i4 p890 /* newblock */, i8 p891 /* fcb */) {
	*(i8*)(intptr_t)(ws+1320) = p891; /*fcb */
	*(i4*)(intptr_t)(ws+1328) = p890; /*newblock */

	i8 v892 = (i8)(intptr_t)(ws+1328);
	i4 v893 = *(i4*)(intptr_t)v892;
	i8 v894 = (i8)(intptr_t)(ws+1320);
	i8 v895 = *(i8*)(intptr_t)v894;
	i8 v896 = v895+(+8);
	i4 v897 = *(i4*)(intptr_t)v896;
	if (v893==v897) goto c02_00e3; else goto c02_00e2;

c02_00e2:;

	i8 v898 = (i8)(intptr_t)(ws+1320);
	i8 v899 = *(i8*)(intptr_t)v898;
	f39(v899);

	i8 v900 = (i8)(intptr_t)(ws+1328);
	i4 v901 = *(i4*)(intptr_t)v900;
	i8 v902 = (i8)(intptr_t)(ws+1320);
	i8 v903 = *(i8*)(intptr_t)v902;
	i8 v904 = v903+(+8);
	*(i4*)(intptr_t)v904 = v901;

	i8 v905 = (i8)(intptr_t)(ws+1320);
	i8 v906 = *(i8*)(intptr_t)v905;
	f38(v906);

	goto c02_00df;

c02_00e3:;

c02_00df:;

endsub:;
}

// fcb_i_open workspace at ws+1184 length ws+28
void f41(i1* p907 /* errno */, i4 p908 /* flags */, i8 p909 /* filename */, i8 p910 /* fcb */) {
	*(i8*)(intptr_t)(ws+1184) = p910; /*fcb */
	*(i8*)(intptr_t)(ws+1192) = p909; /*filename */
	*(i4*)(intptr_t)(ws+1200) = p908; /*flags */

	i8 v911 = (i8)(intptr_t)(ws+1184);
	i8 v912 = *(i8*)(intptr_t)v911;
	i1 v913 = (i1)+0;
	i8 v914 = (i8)+524;
	f7(v914, v913, v912);

	i2 v915 = (i2)+511;
	i8 v916 = (i8)(intptr_t)(ws+1184);
	i8 v917 = *(i8*)(intptr_t)v916;
	i8 v918 = v917+(+4);
	*(i2*)(intptr_t)v918 = v915;

	i4 v919 = (i4)-1;
	i8 v920 = (i8)(intptr_t)(ws+1184);
	i8 v921 = *(i8*)(intptr_t)v920;
	i8 v922 = v921+(+8);
	*(i4*)(intptr_t)v922 = v919;

	
errno = 0; 


	
*(i4*)(intptr_t)(ws+1208) 
 = open((char*)(intptr_t) 
*(i8*)(intptr_t)(ws+1192) 
,  
*(i4*)(intptr_t)(ws+1200) 
,  
(+438)
); 


	i8 v923 = (i8)(intptr_t)(ws+1208);
	i4 v924 = *(i4*)(intptr_t)v923;
	i8 v925 = (i8)(intptr_t)(ws+1184);
	i8 v926 = *(i8*)(intptr_t)v925;
	*(i4*)(intptr_t)v926 = v924;

	i8 v927 = (i8)(intptr_t)(ws+1208);
	i4 v928 = *(i4*)(intptr_t)v927;
	i4 v929 = (i4)+0;
	if ((s4)v928<(s4)v929) goto c02_00e7; else goto c02_00e8;

c02_00e7:;

	
*(i1*)(intptr_t)(ws+1204) 
 = errno; 


	goto c02_00e4;

c02_00e8:;

	i1 v930 = (i1)+0;
	i8 v931 = (i8)(intptr_t)(ws+1204);
	*(i1*)(intptr_t)v931 = v930;

c02_00e4:;

endsub:;
	*p907 = *(i1*)(intptr_t)(ws+1204);
}

// FCBOpenIn workspace at ws+1152 length ws+17
void f42(i1* p932 /* errno */, i8 p933 /* filename */, i8 p934 /* fcb */) {
	*(i8*)(intptr_t)(ws+1152) = p934; /*fcb */
	*(i8*)(intptr_t)(ws+1160) = p933; /*filename */

	i8 v935 = (i8)(intptr_t)(ws+1152);
	i8 v936 = *(i8*)(intptr_t)v935;
	i8 v937 = (i8)(intptr_t)(ws+1160);
	i8 v938 = *(i8*)(intptr_t)v937;
	i4 v939 = (i4)+0;
	i1 v940;
	f41(&v940, v939, v938, v936);
	i8 v941 = (i8)(intptr_t)(ws+1168);
	*(i1*)(intptr_t)v941 = v940;

endsub:;
	*p932 = *(i1*)(intptr_t)(ws+1168);
}

// FCBOpenOut workspace at ws+1160 length ws+17
void f44(i1* p952 /* errno */, i8 p953 /* filename */, i8 p954 /* fcb */) {
	*(i8*)(intptr_t)(ws+1160) = p954; /*fcb */
	*(i8*)(intptr_t)(ws+1168) = p953; /*filename */

	i8 v955 = (i8)(intptr_t)(ws+1160);
	i8 v956 = *(i8*)(intptr_t)v955;
	i8 v957 = (i8)(intptr_t)(ws+1168);
	i8 v958 = *(i8*)(intptr_t)v957;
	i4 v959 = (i4)+578;
	i1 v960;
	f41(&v960, v959, v958, v956);
	i8 v961 = (i8)(intptr_t)(ws+1176);
	*(i1*)(intptr_t)v961 = v960;

endsub:;
	*p952 = *(i1*)(intptr_t)(ws+1176);
}

// FCBClose workspace at ws+1152 length ws+16
void f45(i1* p962 /* errno */, i8 p963 /* fcb */) {
	*(i8*)(intptr_t)(ws+1152) = p963; /*fcb */

	i8 v964 = (i8)(intptr_t)(ws+1152);
	i8 v965 = *(i8*)(intptr_t)v964;
	f39(v965);

	i8 v966 = (i8)(intptr_t)(ws+1152);
	i8 v967 = *(i8*)(intptr_t)v966;
	i4 v968 = *(i4*)(intptr_t)v967;
	i8 v969 = (i8)(intptr_t)(ws+1164);
	*(i4*)(intptr_t)v969 = v968;

	
errno = 0; 


	
close( 
*(i4*)(intptr_t)(ws+1164) 
); 


	
*(i1*)(intptr_t)(ws+1160) 
 = errno; 


endsub:;
	*p962 = *(i1*)(intptr_t)(ws+1160);
}

// fcb_i_nextchar workspace at ws+1312 length ws+8
void f49(i8 p1024 /* fcb */) {
	*(i8*)(intptr_t)(ws+1312) = p1024; /*fcb */

	i8 v1025 = (i8)(intptr_t)(ws+1312);
	i8 v1026 = *(i8*)(intptr_t)v1025;
	i8 v1027 = v1026+(+4);
	i2 v1028 = *(i2*)(intptr_t)v1027;
	i2 v1029 = v1028+(+1);
	i8 v1030 = (i8)(intptr_t)(ws+1312);
	i8 v1031 = *(i8*)(intptr_t)v1030;
	i8 v1032 = v1031+(+4);
	*(i2*)(intptr_t)v1032 = v1029;

	i8 v1033 = (i8)(intptr_t)(ws+1312);
	i8 v1034 = *(i8*)(intptr_t)v1033;
	i8 v1035 = v1034+(+4);
	i2 v1036 = *(i2*)(intptr_t)v1035;
	i2 v1037 = (i2)+512;
	if (v1036==v1037) goto c02_00ec; else goto c02_00ed;

c02_00ec:;

	i8 v1038 = (i8)(intptr_t)(ws+1312);
	i8 v1039 = *(i8*)(intptr_t)v1038;
	i8 v1040 = (i8)(intptr_t)(ws+1312);
	i8 v1041 = *(i8*)(intptr_t)v1040;
	i8 v1042 = v1041+(+8);
	i4 v1043 = *(i4*)(intptr_t)v1042;
	i4 v1044 = v1043+(+1);
	f40(v1044, v1039);

	i2 v1045 = (i2)+0;
	i8 v1046 = (i8)(intptr_t)(ws+1312);
	i8 v1047 = *(i8*)(intptr_t)v1046;
	i8 v1048 = v1047+(+4);
	*(i2*)(intptr_t)v1048 = v1045;

	goto c02_00e9;

c02_00ed:;

c02_00e9:;

endsub:;
}

// FCBGetChar workspace at ws+1240 length ws+9
void f50(i1* p1049 /* c */, i8 p1050 /* fcb */) {
	*(i8*)(intptr_t)(ws+1240) = p1050; /*fcb */

	i8 v1051 = (i8)(intptr_t)(ws+1240);
	i8 v1052 = *(i8*)(intptr_t)v1051;
	f49(v1052);

	i8 v1053 = (i8)(intptr_t)(ws+1240);
	i8 v1054 = *(i8*)(intptr_t)v1053;
	i8 v1055 = v1054+(+12);
	i8 v1056 = (i8)(intptr_t)(ws+1240);
	i8 v1057 = *(i8*)(intptr_t)v1056;
	i8 v1058 = v1057+(+4);
	i2 v1059 = *(i2*)(intptr_t)v1058;
	i8 v1060 = v1059;
	i8 v1061 = v1055+v1060;
	i1 v1062 = *(i1*)(intptr_t)v1061;
	i8 v1063 = (i8)(intptr_t)(ws+1248);
	*(i1*)(intptr_t)v1063 = v1062;

endsub:;
	*p1049 = *(i1*)(intptr_t)(ws+1248);
}

// FCBPutChar workspace at ws+1296 length ws+9
void f51(i1 p1064 /* c */, i8 p1065 /* fcb */) {
	*(i8*)(intptr_t)(ws+1296) = p1065; /*fcb */
	*(i1*)(intptr_t)(ws+1304) = p1064; /*c */

	i8 v1066 = (i8)(intptr_t)(ws+1296);
	i8 v1067 = *(i8*)(intptr_t)v1066;
	f49(v1067);

	i8 v1068 = (i8)(intptr_t)(ws+1304);
	i1 v1069 = *(i1*)(intptr_t)v1068;
	i8 v1070 = (i8)(intptr_t)(ws+1296);
	i8 v1071 = *(i8*)(intptr_t)v1070;
	i8 v1072 = v1071+(+12);
	i8 v1073 = (i8)(intptr_t)(ws+1296);
	i8 v1074 = *(i8*)(intptr_t)v1073;
	i8 v1075 = v1074+(+4);
	i2 v1076 = *(i2*)(intptr_t)v1075;
	i8 v1077 = v1076;
	i8 v1078 = v1072+v1077;
	*(i1*)(intptr_t)v1078 = v1069;

	i1 v1079 = (i1)+1;
	i8 v1080 = (i8)(intptr_t)(ws+1296);
	i8 v1081 = *(i8*)(intptr_t)v1080;
	i8 v1082 = v1081+(+6);
	*(i1*)(intptr_t)v1082 = v1079;

endsub:;
}

// FCBPutString workspace at ws+1272 length ws+17
void f52(i8 p1083 /* s */, i8 p1084 /* fcb */) {
	*(i8*)(intptr_t)(ws+1272) = p1084; /*fcb */
	*(i8*)(intptr_t)(ws+1280) = p1083; /*s */

c02_00ee:;

	i8 v1085 = (i8)(intptr_t)(ws+1280);
	i8 v1086 = *(i8*)(intptr_t)v1085;
	i1 v1087 = *(i1*)(intptr_t)v1086;
	i8 v1088 = (i8)(intptr_t)(ws+1288);
	*(i1*)(intptr_t)v1088 = v1087;

	i8 v1089 = (i8)(intptr_t)(ws+1288);
	i1 v1090 = *(i1*)(intptr_t)v1089;
	i1 v1091 = (i1)+0;
	if (v1090==v1091) goto c02_00f3; else goto c02_00f4;

c02_00f3:;

	goto c02_00ef;

	goto c02_00f0;

c02_00f4:;

c02_00f0:;

	i8 v1092 = (i8)(intptr_t)(ws+1272);
	i8 v1093 = *(i8*)(intptr_t)v1092;
	i8 v1094 = (i8)(intptr_t)(ws+1288);
	i1 v1095 = *(i1*)(intptr_t)v1094;
	f51(v1095, v1093);

	i8 v1096 = (i8)(intptr_t)(ws+1280);
	i8 v1097 = *(i8*)(intptr_t)v1096;
	i8 v1098 = v1097+(+1);
	i8 v1099 = (i8)(intptr_t)(ws+1280);
	*(i8*)(intptr_t)v1099 = v1098;

	goto c02_00ee;

c02_00ef:;

endsub:;
}
const i1 c02_s0009[] = { 0x43,0x4f,0x57,0x57,0x52,0x41,0x50,0x3a,0x20,0 };
const i1 c02_s000a[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
const i1 c02_s000b[] = { 0x63,0x6f,0x77,0x77,0x72,0x61,0x70,0x20,0x3c,0x69,0x6e,0x70,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x20,0x3c,0x6f,0x75,0x74,0x70,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x0a,0 };

// SyntaxError workspace at ws+1152 length ws+0
void f55(void) {

	i8 v1148 = (i8)(intptr_t)c02_s000b;
	f11(v1148);

	f6();

endsub:;
}
const i1 c02_s000c[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0 };

// FatalError workspace at ws+1240 length ws+8
void f56(i8 p1149 /* s */) {
	*(i8*)(intptr_t)(ws+1240) = p1149; /*s */

	i8 v1150 = (i8)(intptr_t)c02_s000c;
	f11(v1150);

	i8 v1151 = (i8)(intptr_t)(ws+1240);
	i8 v1152 = *(i8*)(intptr_t)v1151;
	f11(v1152);

	f12();

	f6();

endsub:;
}

// EmitByte workspace at ws+1280 length ws+16
void f57(i1 p1153 /* byte */) {
	*(i1*)(intptr_t)(ws+1280) = p1153; /*byte */

	i8 v1154 = (i8)(intptr_t)(ws+1096);
	i8 v1155 = *(i8*)(intptr_t)v1154;
	i8 v1156 = (i8)+0;
	if (v1155==v1156) goto c02_0105; else goto c02_0104;

c02_0104:;

	i8 v1157 = (i8)(intptr_t)(ws+1096);
	i8 v1158 = *(i8*)(intptr_t)v1157;
	i8 v1159 = v1158+(+16);
	i8 v1160 = *(i8*)(intptr_t)v1159;
	i8 v1161 = (i8)(intptr_t)(ws+1288);
	*(i8*)(intptr_t)v1161 = v1160;

	i8 v1162 = (i8)(intptr_t)(ws+1288);
	i8 v1163 = *(i8*)(intptr_t)v1162;
	i8 v1164 = v1163+(+255);
	i1 v1165 = *(i1*)(intptr_t)v1164;
	i1 v1166 = (i1)+255;
	if (v1165==v1166) goto c02_0109; else goto c02_010a;

c02_0109:;

	i8 v1167 = (i8)+264;
	i8 v1168;
	f33(&v1168, v1167);
	i8 v1169 = (i8)(intptr_t)(ws+1288);
	*(i8*)(intptr_t)v1169 = v1168;

	i8 v1170 = (i8)(intptr_t)(ws+1288);
	i8 v1171 = *(i8*)(intptr_t)v1170;
	i8 v1172 = (i8)(intptr_t)(ws+1096);
	i8 v1173 = *(i8*)(intptr_t)v1172;
	i8 v1174 = v1173+(+16);
	i8 v1175 = *(i8*)(intptr_t)v1174;
	i8 v1176 = v1175+(+256);
	*(i8*)(intptr_t)v1176 = v1171;

	i8 v1177 = (i8)(intptr_t)(ws+1288);
	i8 v1178 = *(i8*)(intptr_t)v1177;
	i8 v1179 = (i8)(intptr_t)(ws+1096);
	i8 v1180 = *(i8*)(intptr_t)v1179;
	i8 v1181 = v1180+(+16);
	*(i8*)(intptr_t)v1181 = v1178;

	goto c02_0106;

c02_010a:;

c02_0106:;

	i8 v1182 = (i8)(intptr_t)(ws+1280);
	i1 v1183 = *(i1*)(intptr_t)v1182;
	i8 v1184 = (i8)(intptr_t)(ws+1288);
	i8 v1185 = *(i8*)(intptr_t)v1184;
	i8 v1186 = (i8)(intptr_t)(ws+1288);
	i8 v1187 = *(i8*)(intptr_t)v1186;
	i8 v1188 = v1187+(+255);
	i1 v1189 = *(i1*)(intptr_t)v1188;
	i8 v1190 = v1189;
	i8 v1191 = v1185+v1190;
	*(i1*)(intptr_t)v1191 = v1183;

	i8 v1192 = (i8)(intptr_t)(ws+1288);
	i8 v1193 = *(i8*)(intptr_t)v1192;
	i8 v1194 = v1193+(+255);
	i1 v1195 = *(i1*)(intptr_t)v1194;
	i1 v1196 = v1195+(+1);
	i8 v1197 = (i8)(intptr_t)(ws+1288);
	i8 v1198 = *(i8*)(intptr_t)v1197;
	i8 v1199 = v1198+(+255);
	*(i1*)(intptr_t)v1199 = v1196;

	i8 v1200 = (i8)(intptr_t)(ws+1096);
	i8 v1201 = *(i8*)(intptr_t)v1200;
	i8 v1202 = v1201+(+24);
	i2 v1203 = *(i2*)(intptr_t)v1202;
	i2 v1204 = v1203+(+1);
	i8 v1205 = (i8)(intptr_t)(ws+1096);
	i8 v1206 = *(i8*)(intptr_t)v1205;
	i8 v1207 = v1206+(+24);
	*(i2*)(intptr_t)v1207 = v1204;

	goto c02_0101;

c02_0105:;

c02_0101:;

endsub:;
}

// E workspace at ws+1264 length ws+9
void f58(i8 p1208 /* text */) {
	*(i8*)(intptr_t)(ws+1264) = p1208; /*text */

c02_010b:;

	i8 v1209 = (i8)(intptr_t)(ws+1264);
	i8 v1210 = *(i8*)(intptr_t)v1209;
	i1 v1211 = *(i1*)(intptr_t)v1210;
	i8 v1212 = (i8)(intptr_t)(ws+1272);
	*(i1*)(intptr_t)v1212 = v1211;

	i8 v1213 = (i8)(intptr_t)(ws+1264);
	i8 v1214 = *(i8*)(intptr_t)v1213;
	i8 v1215 = v1214+(+1);
	i8 v1216 = (i8)(intptr_t)(ws+1264);
	*(i8*)(intptr_t)v1216 = v1215;

	i8 v1217 = (i8)(intptr_t)(ws+1272);
	i1 v1218 = *(i1*)(intptr_t)v1217;
	i1 v1219 = (i1)+0;
	if (v1218==v1219) goto c02_0110; else goto c02_0111;

c02_0110:;

	goto c02_010c;

	goto c02_010d;

c02_0111:;

c02_010d:;

	i8 v1220 = (i8)(intptr_t)(ws+1272);
	i1 v1221 = *(i1*)(intptr_t)v1220;
	f57(v1221);

	goto c02_010b;

c02_010c:;

endsub:;
}

// E_h workspace at ws+1232 length ws+25
void f62(i1 p1253 /* width */, i4 p1254 /* value */) {
	*(i4*)(intptr_t)(ws+1232) = p1254; /*value */
	*(i1*)(intptr_t)(ws+1236) = p1253; /*width */

	i8 v1255 = (i8)(intptr_t)(ws+1232);
	i4 v1256 = *(i4*)(intptr_t)v1255;
	i1 v1257 = (i1)+16;
	i8 v1258 = (i8)(intptr_t)(ws+1237);
	i8 v1259;
	f13(&v1259, v1258, v1257, v1256);
	i8 v1260 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v1260 = v1259;

	i8 v1261 = (i8)(intptr_t)(ws+1236);
	i1 v1262 = *(i1*)(intptr_t)v1261;
	i8 v1263 = (i8)(intptr_t)(ws+1248);
	i8 v1264 = *(i8*)(intptr_t)v1263;
	i8 v1265 = (i8)(intptr_t)(ws+1237);
	i8 v1266 = v1264-v1265;
	i1 v1267 = v1266;
	i1 v1268 = v1262-v1267;
	i8 v1269 = (i8)(intptr_t)(ws+1256);
	*(i1*)(intptr_t)v1269 = v1268;

c02_011b:;

	i8 v1270 = (i8)(intptr_t)(ws+1256);
	i1 v1271 = *(i1*)(intptr_t)v1270;
	i1 v1272 = (i1)+0;
	if (v1271==v1272) goto c02_011e; else goto c02_011d;

c02_011d:;

	i1 v1273 = (i1)+48;
	f57(v1273);

	i8 v1274 = (i8)(intptr_t)(ws+1256);
	i1 v1275 = *(i1*)(intptr_t)v1274;
	i1 v1276 = v1275+(-1);
	i8 v1277 = (i8)(intptr_t)(ws+1256);
	*(i1*)(intptr_t)v1277 = v1276;

	goto c02_011b;

c02_011e:;

	i8 v1278 = (i8)(intptr_t)(ws+1237);
	f58(v1278);

endsub:;
}

// E_h8 workspace at ws+1216 length ws+1
void f63(i1 p1279 /* value */) {
	*(i1*)(intptr_t)(ws+1216) = p1279; /*value */

	i8 v1280 = (i8)(intptr_t)(ws+1216);
	i1 v1281 = *(i1*)(intptr_t)v1280;
	i4 v1282 = v1281;
	i1 v1283 = (i1)+2;
	f62(v1283, v1282);

endsub:;
}

// E_h16 workspace at ws+1224 length ws+2
void f64(i2 p1284 /* value */) {
	*(i2*)(intptr_t)(ws+1224) = p1284; /*value */

	i8 v1285 = (i8)(intptr_t)(ws+1224);
	i2 v1286 = *(i2*)(intptr_t)v1285;
	i4 v1287 = v1286;
	i1 v1288 = (i1)+4;
	f62(v1288, v1287);

endsub:;
}

// EmitterPushChunk workspace at ws+1224 length ws+8
void f65(void) {

	i8 v1289 = (i8)+26;
	i8 v1290;
	f33(&v1290, v1289);
	i8 v1291 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v1291 = v1290;

	i8 v1292 = (i8)+264;
	i8 v1293;
	f33(&v1293, v1292);
	i8 v1294 = (i8)(intptr_t)(ws+1224);
	i8 v1295 = *(i8*)(intptr_t)v1294;
	i8 v1296 = v1295+(+16);
	*(i8*)(intptr_t)v1296 = v1293;

	i8 v1297 = (i8)(intptr_t)(ws+1224);
	i8 v1298 = *(i8*)(intptr_t)v1297;
	i8 v1299 = v1298+(+16);
	i8 v1300 = *(i8*)(intptr_t)v1299;
	i8 v1301 = (i8)(intptr_t)(ws+1224);
	i8 v1302 = *(i8*)(intptr_t)v1301;
	i8 v1303 = v1302+(+8);
	*(i8*)(intptr_t)v1303 = v1300;

	i8 v1304 = (i8)(intptr_t)(ws+1096);
	i8 v1305 = *(i8*)(intptr_t)v1304;
	i8 v1306 = (i8)(intptr_t)(ws+1224);
	i8 v1307 = *(i8*)(intptr_t)v1306;
	*(i8*)(intptr_t)v1307 = v1305;

	i8 v1308 = (i8)(intptr_t)(ws+1224);
	i8 v1309 = *(i8*)(intptr_t)v1308;
	i8 v1310 = (i8)(intptr_t)(ws+1096);
	*(i8*)(intptr_t)v1310 = v1309;

endsub:;
}
const i1 c02_s000d[] = { 0x30,0x30,0x30,0x30,0 };

// EmitterPopChunk workspace at ws+1224 length ws+48
void f66(i1 p1311 /* type */) {
	*(i1*)(intptr_t)(ws+1224) = p1311; /*type */

	i8 v1312 = (i8)(intptr_t)(ws+572);
	i8 v1313 = (i8)(intptr_t)(ws+1224);
	i1 v1314 = *(i1*)(intptr_t)v1313;
	f51(v1314, v1312);

	i8 v1315 = (i8)(intptr_t)(ws+1096);
	i8 v1316 = *(i8*)(intptr_t)v1315;
	i8 v1317 = v1316+(+24);
	i2 v1318 = *(i2*)(intptr_t)v1317;
	i4 v1319 = v1318;
	i1 v1320 = (i1)+16;
	i8 v1321 = (i8)(intptr_t)(ws+1225);
	i8 v1322;
	f13(&v1322, v1321, v1320, v1319);
	i8 v1323 = (i8)(intptr_t)(ws+1232);
	*(i8*)(intptr_t)v1323 = v1322;

	i8 v1324 = (i8)(intptr_t)(ws+572);
	i8 v1325 = (i8)(intptr_t)c02_s000d;
	i8 v1326 = (i8)(intptr_t)(ws+1232);
	i8 v1327 = *(i8*)(intptr_t)v1326;
	i8 v1328 = (i8)(intptr_t)(ws+1225);
	i8 v1329 = v1327-v1328;
	i8 v1330 = v1325+v1329;
	f52(v1330, v1324);

	i8 v1331 = (i8)(intptr_t)(ws+572);
	i8 v1332 = (i8)(intptr_t)(ws+1225);
	f52(v1332, v1331);

	i8 v1333 = (i8)(intptr_t)(ws+1096);
	i8 v1334 = *(i8*)(intptr_t)v1333;
	i8 v1335 = v1334+(+8);
	i8 v1336 = *(i8*)(intptr_t)v1335;
	i8 v1337 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v1337 = v1336;

c02_0121:;

	i8 v1338 = (i8)(intptr_t)(ws+1240);
	i8 v1339 = *(i8*)(intptr_t)v1338;
	i8 v1340 = (i8)+0;
	if (v1339==v1340) goto c02_0124; else goto c02_0123;

c02_0123:;

	i1 v1341 = (i1)+0;
	i8 v1342 = (i8)(intptr_t)(ws+1248);
	*(i1*)(intptr_t)v1342 = v1341;

c02_0127:;

	i8 v1343 = (i8)(intptr_t)(ws+1248);
	i1 v1344 = *(i1*)(intptr_t)v1343;
	i8 v1345 = (i8)(intptr_t)(ws+1240);
	i8 v1346 = *(i8*)(intptr_t)v1345;
	i8 v1347 = v1346+(+255);
	i1 v1348 = *(i1*)(intptr_t)v1347;
	if (v1344==v1348) goto c02_012a; else goto c02_0129;

c02_0129:;

	i8 v1349 = (i8)(intptr_t)(ws+572);
	i8 v1350 = (i8)(intptr_t)(ws+1240);
	i8 v1351 = *(i8*)(intptr_t)v1350;
	i8 v1352 = (i8)(intptr_t)(ws+1248);
	i1 v1353 = *(i1*)(intptr_t)v1352;
	i8 v1354 = v1353;
	i8 v1355 = v1351+v1354;
	i1 v1356 = *(i1*)(intptr_t)v1355;
	f51(v1356, v1349);

	i8 v1357 = (i8)(intptr_t)(ws+1248);
	i1 v1358 = *(i1*)(intptr_t)v1357;
	i1 v1359 = v1358+(+1);
	i8 v1360 = (i8)(intptr_t)(ws+1248);
	*(i1*)(intptr_t)v1360 = v1359;

	goto c02_0127;

c02_012a:;

	i8 v1361 = (i8)(intptr_t)(ws+1240);
	i8 v1362 = *(i8*)(intptr_t)v1361;
	i8 v1363 = v1362+(+256);
	i8 v1364 = *(i8*)(intptr_t)v1363;
	i8 v1365 = (i8)(intptr_t)(ws+1256);
	*(i8*)(intptr_t)v1365 = v1364;

	i8 v1366 = (i8)(intptr_t)(ws+1240);
	i8 v1367 = *(i8*)(intptr_t)v1366;
	f35(v1367);

	i8 v1368 = (i8)(intptr_t)(ws+1256);
	i8 v1369 = *(i8*)(intptr_t)v1368;
	i8 v1370 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v1370 = v1369;

	goto c02_0121;

c02_0124:;

	i8 v1371 = (i8)(intptr_t)(ws+1096);
	i8 v1372 = *(i8*)(intptr_t)v1371;
	i8 v1373 = *(i8*)(intptr_t)v1372;
	i8 v1374 = (i8)(intptr_t)(ws+1264);
	*(i8*)(intptr_t)v1374 = v1373;

	i8 v1375 = (i8)(intptr_t)(ws+1096);
	i8 v1376 = *(i8*)(intptr_t)v1375;
	f35(v1376);

	i8 v1377 = (i8)(intptr_t)(ws+1264);
	i8 v1378 = *(i8*)(intptr_t)v1377;
	i8 v1379 = (i8)(intptr_t)(ws+1096);
	*(i8*)(intptr_t)v1379 = v1378;

endsub:;
}
const i1 c02_s000e[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };

// EmitterOpenfile workspace at ws+1152 length ws+8
void f67(i8 p1380 /* filename */) {
	*(i8*)(intptr_t)(ws+1152) = p1380; /*filename */

	i8 v1381 = (i8)(intptr_t)(ws+572);
	i8 v1382 = (i8)(intptr_t)(ws+1152);
	i8 v1383 = *(i8*)(intptr_t)v1382;
	i1 v1384;
	f44(&v1384, v1383, v1381);
	i1 v1385 = (i1)+0;
	if (v1384==v1385) goto c02_012f; else goto c02_012e;

c02_012e:;

	i8 v1386 = (i8)(intptr_t)c02_s000e;
	f56(v1386);

	goto c02_012b;

c02_012f:;

c02_012b:;

endsub:;
}
const i1 c02_s000f[] = { 0x45,0x30,0x30,0x30,0x30,0 };
const i1 c02_s0010[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };

// EmitterClosefile workspace at ws+1152 length ws+0
void f68(void) {

	i8 v1387 = (i8)(intptr_t)(ws+572);
	i8 v1388 = (i8)(intptr_t)c02_s000f;
	f52(v1388, v1387);

	i8 v1389 = (i8)(intptr_t)(ws+572);
	i1 v1390;
	f45(&v1390, v1389);
	i1 v1391 = (i1)+0;
	if (v1390==v1391) goto c02_0134; else goto c02_0133;

c02_0133:;

	i8 v1392 = (i8)(intptr_t)c02_s0010;
	f56(v1392);

	goto c02_0130;

c02_0134:;

c02_0130:;

endsub:;
}

// EmitterDeclareSubroutine workspace at ws+1200 length ws+16
void f69(i8 p1393 /* name */, i2 p1394 /* id */) {
	*(i2*)(intptr_t)(ws+1200) = p1394; /*id */
	*(i8*)(intptr_t)(ws+1208) = p1393; /*name */

	f65();

	i8 v1395 = (i8)(intptr_t)(ws+1200);
	i2 v1396 = *(i2*)(intptr_t)v1395;
	f64(v1396);

	i8 v1397 = (i8)(intptr_t)(ws+1208);
	i8 v1398 = *(i8*)(intptr_t)v1397;
	f58(v1398);

	i1 v1399 = (i1)+78;
	f66(v1399);

endsub:;
}

// EmitterDeclareExternal workspace at ws+1208 length ws+16
void f70(i8 p1400 /* name */, i2 p1401 /* id */) {
	*(i2*)(intptr_t)(ws+1208) = p1401; /*id */
	*(i8*)(intptr_t)(ws+1216) = p1400; /*name */

	f65();

	i8 v1402 = (i8)(intptr_t)(ws+1208);
	i2 v1403 = *(i2*)(intptr_t)v1402;
	f64(v1403);

	i8 v1404 = (i8)(intptr_t)(ws+1216);
	i8 v1405 = *(i8*)(intptr_t)v1404;
	f58(v1405);

	i1 v1406 = (i1)+88;
	f66(v1406);

endsub:;
}

// EmitterReferenceSubroutine workspace at ws+1216 length ws+4
void f71(i2 p1407 /* used */, i2 p1408 /* user */) {
	*(i2*)(intptr_t)(ws+1216) = p1408; /*user */
	*(i2*)(intptr_t)(ws+1218) = p1407; /*used */

	i8 v1409 = (i8)(intptr_t)(ws+1216);
	i2 v1410 = *(i2*)(intptr_t)v1409;
	i8 v1411 = (i8)(intptr_t)(ws+1218);
	i2 v1412 = *(i2*)(intptr_t)v1411;
	if (v1410==v1412) goto c02_0139; else goto c02_0138;

c02_0138:;

	f65();

	i8 v1413 = (i8)(intptr_t)(ws+1216);
	i2 v1414 = *(i2*)(intptr_t)v1413;
	f64(v1414);

	i8 v1415 = (i8)(intptr_t)(ws+1218);
	i2 v1416 = *(i2*)(intptr_t)v1415;
	f64(v1416);

	i1 v1417 = (i1)+82;
	f66(v1417);

	goto c02_0135;

c02_0139:;

c02_0135:;

endsub:;
}

// EmitterDeclareWorkspace workspace at ws+1208 length ws+6
void f72(i2 p1418 /* workspace */, i1 p1419 /* wid */, i2 p1420 /* id */) {
	*(i2*)(intptr_t)(ws+1208) = p1420; /*id */
	*(i1*)(intptr_t)(ws+1210) = p1419; /*wid */
	*(i2*)(intptr_t)(ws+1212) = p1418; /*workspace */

	f65();

	i8 v1421 = (i8)(intptr_t)(ws+1208);
	i2 v1422 = *(i2*)(intptr_t)v1421;
	f64(v1422);

	i8 v1423 = (i8)(intptr_t)(ws+1210);
	i1 v1424 = *(i1*)(intptr_t)v1423;
	f63(v1424);

	i8 v1425 = (i8)(intptr_t)(ws+1212);
	i2 v1426 = *(i2*)(intptr_t)v1425;
	f64(v1426);

	i1 v1427 = (i1)+87;
	f66(v1427);

endsub:;
}

// GetSymbol workspace at ws+1216 length ws+16
void f73(i8* p1434 /* symbol */, i8 p1435 /* name */) {
	*(i8*)(intptr_t)(ws+1216) = p1435; /*name */

	i8 v1436 = (i8)(intptr_t)(ws+1128);
	i8 v1437 = *(i8*)(intptr_t)v1436;
	i8 v1438 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v1438 = v1437;

c02_013c:;

	i8 v1439 = (i8)(intptr_t)(ws+1224);
	i8 v1440 = *(i8*)(intptr_t)v1439;
	i8 v1441 = (i8)+0;
	if (v1440==v1441) goto c02_013f; else goto c02_013e;

c02_013e:;

	i8 v1442 = (i8)(intptr_t)(ws+1216);
	i8 v1443 = *(i8*)(intptr_t)v1442;
	i8 v1444 = (i8)(intptr_t)(ws+1224);
	i8 v1445 = *(i8*)(intptr_t)v1444;
	i8 v1446 = v1445+(+8);
	i8 v1447 = *(i8*)(intptr_t)v1446;
	i1 v1448;
	f25(&v1448, v1447, v1443);
	i1 v1449 = (i1)+0;
	if (v1448==v1449) goto c02_0143; else goto c02_0144;

c02_0143:;

	goto endsub;

	goto c02_0140;

c02_0144:;

c02_0140:;

	i8 v1450 = (i8)(intptr_t)(ws+1224);
	i8 v1451 = *(i8*)(intptr_t)v1450;
	i8 v1452 = *(i8*)(intptr_t)v1451;
	i8 v1453 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v1453 = v1452;

	goto c02_013c;

c02_013f:;

	i8 v1454 = (i8)+19;
	i8 v1455;
	f33(&v1455, v1454);
	i8 v1456 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v1456 = v1455;

	i8 v1457 = (i8)(intptr_t)(ws+1216);
	i8 v1458 = *(i8*)(intptr_t)v1457;
	i8 v1459;
	f37(&v1459, v1458);
	i8 v1460 = (i8)(intptr_t)(ws+1224);
	i8 v1461 = *(i8*)(intptr_t)v1460;
	i8 v1462 = v1461+(+8);
	*(i8*)(intptr_t)v1462 = v1459;

	i8 v1463 = (i8)(intptr_t)(ws+1136);
	i2 v1464 = *(i2*)(intptr_t)v1463;
	i8 v1465 = (i8)(intptr_t)(ws+1224);
	i8 v1466 = *(i8*)(intptr_t)v1465;
	i8 v1467 = v1466+(+16);
	*(i2*)(intptr_t)v1467 = v1464;

	i8 v1468 = (i8)(intptr_t)(ws+1136);
	i2 v1469 = *(i2*)(intptr_t)v1468;
	i2 v1470 = v1469+(+1);
	i8 v1471 = (i8)(intptr_t)(ws+1136);
	*(i2*)(intptr_t)v1471 = v1470;

	i8 v1472 = (i8)(intptr_t)(ws+1128);
	i8 v1473 = *(i8*)(intptr_t)v1472;
	i8 v1474 = (i8)(intptr_t)(ws+1224);
	i8 v1475 = *(i8*)(intptr_t)v1474;
	*(i8*)(intptr_t)v1475 = v1473;

	i8 v1476 = (i8)(intptr_t)(ws+1224);
	i8 v1477 = *(i8*)(intptr_t)v1476;
	i8 v1478 = (i8)(intptr_t)(ws+1128);
	*(i8*)(intptr_t)v1478 = v1477;

endsub:;
	*p1434 = *(i8*)(intptr_t)(ws+1224);
}
const i1 c02_s0011[] = { 0x40,0 };

// GetC workspace at ws+1240 length ws+0
void f75(void) {

	i8 v1485 = (i8)(intptr_t)(ws+48);
	i1 v1486;
	f50(&v1486, v1485);
	i8 v1487 = (i8)(intptr_t)(ws+1152);
	*(i1*)(intptr_t)v1487 = v1486;

endsub:;
}
const i1 c02_s0012[] = { 0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0x63,0x6f,0x77,0x77,0x72,0x61,0x70,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x69,0x76,0x65,0 };

// ExpectC workspace at ws+1216 length ws+1
void f76(i1 p1488 /* want */) {
	*(i1*)(intptr_t)(ws+1216) = p1488; /*want */

	i8 v1489 = (i8)(intptr_t)(ws+1152);
	i1 v1490 = *(i1*)(intptr_t)v1489;
	i8 v1491 = (i8)(intptr_t)(ws+1216);
	i1 v1492 = *(i1*)(intptr_t)v1491;
	if (v1490==v1492) goto c02_0149; else goto c02_0148;

c02_0148:;

	i8 v1493 = (i8)(intptr_t)c02_s0012;
	f56(v1493);

	goto c02_0145;

c02_0149:;

c02_0145:;

	f75();

endsub:;
}

// SkipToEndOfLine workspace at ws+1192 length ws+0
void f77(void) {

c02_014a:;

	i8 v1494 = (i8)(intptr_t)(ws+1152);
	i1 v1495 = *(i1*)(intptr_t)v1494;
	i1 v1496 = (i1)+0;
	if (v1495==v1496) goto c02_0153; else goto c02_0156;

c02_0156:;

	i8 v1497 = (i8)(intptr_t)(ws+1152);
	i1 v1498 = *(i1*)(intptr_t)v1497;
	i1 v1499 = (i1)+26;
	if (v1498==v1499) goto c02_0153; else goto c02_0155;

c02_0155:;

	i8 v1500 = (i8)(intptr_t)(ws+1152);
	i1 v1501 = *(i1*)(intptr_t)v1500;
	i1 v1502 = (i1)+10;
	if (v1501==v1502) goto c02_0153; else goto c02_0154;

c02_0153:;

	goto c02_014b;

	goto c02_014c;

c02_0154:;

c02_014c:;

	f75();

	goto c02_014a;

c02_014b:;

endsub:;
}

// SkipWhitespace workspace at ws+1240 length ws+0
void f78(void) {

c02_0157:;

	i8 v1503 = (i8)(intptr_t)(ws+1152);
	i1 v1504 = *(i1*)(intptr_t)v1503;
	i1 v1505 = (i1)+32;
	if (v1504==v1505) goto c02_015f; else goto c02_0160;

c02_0160:;

	i8 v1506 = (i8)(intptr_t)(ws+1152);
	i1 v1507 = *(i1*)(intptr_t)v1506;
	i1 v1508 = (i1)+9;
	if (v1507==v1508) goto c02_015f; else goto c02_015e;

c02_015e:;

	goto c02_0158;

	goto c02_0159;

c02_015f:;

c02_0159:;

	f75();

	goto c02_0157;

c02_0158:;

endsub:;
}
const i1 c02_s0013[] = { 0x77,0x6f,0x72,0x64,0x20,0x74,0x6f,0x6f,0x20,0x6c,0x6f,0x6e,0x67,0 };

// ReadWord workspace at ws+1232 length ws+8
void f79(void) {

	f78();

	i8 v1509 = (i8)(intptr_t)(ws+1156);
	i8 v1510 = (i8)(intptr_t)(ws+1232);
	*(i8*)(intptr_t)v1510 = v1509;

c02_0161:;

	i8 v1511 = (i8)(intptr_t)(ws+1152);
	i1 v1512 = *(i1*)(intptr_t)v1511;
	i1 v1513 = (i1)+48;
	if (v1512<v1513) goto c02_0179; else goto c02_017a;

c02_017a:;

	i1 v1514 = (i1)+57;
	i8 v1515 = (i8)(intptr_t)(ws+1152);
	i1 v1516 = *(i1*)(intptr_t)v1515;
	if (v1514<v1516) goto c02_0179; else goto c02_0175;

c02_0179:;

	i8 v1517 = (i8)(intptr_t)(ws+1152);
	i1 v1518 = *(i1*)(intptr_t)v1517;
	i1 v1519 = (i1)+97;
	if (v1518<v1519) goto c02_0178; else goto c02_017b;

c02_017b:;

	i1 v1520 = (i1)+122;
	i8 v1521 = (i8)(intptr_t)(ws+1152);
	i1 v1522 = *(i1*)(intptr_t)v1521;
	if (v1520<v1522) goto c02_0178; else goto c02_0175;

c02_0178:;

	i8 v1523 = (i8)(intptr_t)(ws+1152);
	i1 v1524 = *(i1*)(intptr_t)v1523;
	i1 v1525 = (i1)+65;
	if (v1524<v1525) goto c02_0177; else goto c02_017c;

c02_017c:;

	i1 v1526 = (i1)+90;
	i8 v1527 = (i8)(intptr_t)(ws+1152);
	i1 v1528 = *(i1*)(intptr_t)v1527;
	if (v1526<v1528) goto c02_0177; else goto c02_0175;

c02_0177:;

	i8 v1529 = (i8)(intptr_t)(ws+1152);
	i1 v1530 = *(i1*)(intptr_t)v1529;
	i1 v1531 = (i1)+95;
	if (v1530==v1531) goto c02_0175; else goto c02_0176;

c02_0176:;

	i8 v1532 = (i8)(intptr_t)(ws+1152);
	i1 v1533 = *(i1*)(intptr_t)v1532;
	i1 v1534 = (i1)+64;
	if (v1533==v1534) goto c02_0175; else goto c02_0174;

c02_0174:;

	goto c02_0162;

	goto c02_0163;

c02_0175:;

c02_0163:;

	i8 v1535 = (i8)(intptr_t)(ws+1152);
	i1 v1536 = *(i1*)(intptr_t)v1535;
	i8 v1537 = (i8)(intptr_t)(ws+1232);
	i8 v1538 = *(i8*)(intptr_t)v1537;
	*(i1*)(intptr_t)v1538 = v1536;

	i8 v1539 = (i8)(intptr_t)(ws+1232);
	i8 v1540 = *(i8*)(intptr_t)v1539;
	i8 v1541 = v1540+(+1);
	i8 v1542 = (i8)(intptr_t)(ws+1232);
	*(i8*)(intptr_t)v1542 = v1541;

	i8 v1543 = (i8)(intptr_t)(ws+1232);
	i8 v1544 = *(i8*)(intptr_t)v1543;
	i8 v1545 = (i8)(intptr_t)(ws+1188);
	if (v1544==v1545) goto c02_0180; else goto c02_0181;

c02_0180:;

	i8 v1546 = (i8)(intptr_t)c02_s0013;
	f56(v1546);

	goto c02_017d;

c02_0181:;

c02_017d:;

	f75();

	goto c02_0161;

c02_0162:;

	i1 v1547 = (i1)+0;
	i8 v1548 = (i8)(intptr_t)(ws+1232);
	i8 v1549 = *(i8*)(intptr_t)v1548;
	*(i1*)(intptr_t)v1549 = v1547;

endsub:;
}
const i1 c02_s0014[] = { 0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };

// ReadNumber workspace at ws+1216 length ws+16
void f80(i4* p1550 /* result */) {

	f79();

	i8 v1551 = (i8)(intptr_t)(ws+1156);
	i4 v1552;
	i8 v1553;
	f21(&v1552, &v1553, v1551);

	i8 v1554 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v1554 = v1553;

	i8 v1555 = (i8)(intptr_t)(ws+1216);
	*(i4*)(intptr_t)v1555 = v1552;

	i8 v1556 = (i8)(intptr_t)(ws+1224);
	i8 v1557 = *(i8*)(intptr_t)v1556;
	i8 v1558 = (i8)(intptr_t)(ws+1156);
	if (v1557==v1558) goto c02_0185; else goto c02_0186;

c02_0185:;

	i8 v1559 = (i8)(intptr_t)c02_s0014;
	f56(v1559);

	goto c02_0182;

c02_0186:;

c02_0182:;

endsub:;
	*p1550 = *(i4*)(intptr_t)(ws+1216);
}

// MarkSubroutinePublic workspace at ws+1200 length ws+8
void f81(i8 p1560 /* symbol */) {
	*(i8*)(intptr_t)(ws+1200) = p1560; /*symbol */

	i8 v1561 = (i8)(intptr_t)(ws+1200);
	i8 v1562 = *(i8*)(intptr_t)v1561;
	i8 v1563 = v1562+(+18);
	i1 v1564 = *(i1*)(intptr_t)v1563;
	i1 v1565 = v1564&(+2);
	i1 v1566 = (i1)+0;
	if (v1565==v1566) goto c02_018a; else goto c02_018b;

c02_018a:;

	i8 v1567 = (i8)(intptr_t)(ws+1200);
	i8 v1568 = *(i8*)(intptr_t)v1567;
	i8 v1569 = v1568+(+18);
	i1 v1570 = *(i1*)(intptr_t)v1569;
	i1 v1571 = v1570|(+2);
	i8 v1572 = (i8)(intptr_t)(ws+1200);
	i8 v1573 = *(i8*)(intptr_t)v1572;
	i8 v1574 = v1573+(+18);
	*(i1*)(intptr_t)v1574 = v1571;

	i8 v1575 = (i8)(intptr_t)(ws+1200);
	i8 v1576 = *(i8*)(intptr_t)v1575;
	i8 v1577 = v1576+(+16);
	i2 v1578 = *(i2*)(intptr_t)v1577;
	i8 v1579 = (i8)(intptr_t)(ws+1200);
	i8 v1580 = *(i8*)(intptr_t)v1579;
	i8 v1581 = v1580+(+8);
	i8 v1582 = *(i8*)(intptr_t)v1581;
	f70(v1582, v1578);

	goto c02_0187;

c02_018b:;

c02_0187:;

endsub:;
}

// CloseChunk workspace at ws+1200 length ws+0
void f83(void) {

	i8 v1585 = (i8)(intptr_t)(ws+1144);
	i8 v1586 = *(i8*)(intptr_t)v1585;
	i8 v1587 = (i8)+0;
	if (v1586==v1587) goto c02_0190; else goto c02_018f;

c02_018f:;

	i1 v1588 = (i1)+83;
	f66(v1588);

	i8 v1589 = (i8)+0;
	i8 v1590 = (i8)(intptr_t)(ws+1144);
	*(i8*)(intptr_t)v1590 = v1589;

	goto c02_018c;

c02_0190:;

c02_018c:;

endsub:;
}

// DeclareSubroutine workspace at ws+1192 length ws+1
void f84(i1 p1591 /* exported */) {
	*(i1*)(intptr_t)(ws+1192) = p1591; /*exported */

	f83();

	f75();

	f79();

	i8 v1592 = (i8)(intptr_t)(ws+1156);
	i8 v1593;
	f73(&v1593, v1592);
	i8 v1594 = (i8)(intptr_t)(ws+1144);
	*(i8*)(intptr_t)v1594 = v1593;

	i8 v1595 = (i8)(intptr_t)(ws+1144);
	i8 v1596 = *(i8*)(intptr_t)v1595;
	i8 v1597 = v1596+(+18);
	i1 v1598 = *(i1*)(intptr_t)v1597;
	i1 v1599 = v1598|(+1);
	i8 v1600 = (i8)(intptr_t)(ws+1144);
	i8 v1601 = *(i8*)(intptr_t)v1600;
	i8 v1602 = v1601+(+18);
	*(i1*)(intptr_t)v1602 = v1599;

	i8 v1603 = (i8)(intptr_t)(ws+1192);
	i1 v1604 = *(i1*)(intptr_t)v1603;
	i1 v1605 = (i1)+0;
	if (v1604==v1605) goto c02_0195; else goto c02_0194;

c02_0194:;

	i8 v1606 = (i8)(intptr_t)(ws+1144);
	i8 v1607 = *(i8*)(intptr_t)v1606;
	f81(v1607);

	goto c02_0191;

c02_0195:;

c02_0191:;

	i8 v1608 = (i8)(intptr_t)(ws+1144);
	i8 v1609 = *(i8*)(intptr_t)v1608;
	i8 v1610 = v1609+(+18);
	i1 v1611 = *(i1*)(intptr_t)v1610;
	i1 v1612 = v1611&(+4);
	i1 v1613 = (i1)+0;
	if (v1612==v1613) goto c02_0199; else goto c02_019a;

c02_0199:;

	i8 v1614 = (i8)(intptr_t)(ws+1144);
	i8 v1615 = *(i8*)(intptr_t)v1614;
	i8 v1616 = v1615+(+16);
	i2 v1617 = *(i2*)(intptr_t)v1616;
	i8 v1618 = (i8)(intptr_t)(ws+1144);
	i8 v1619 = *(i8*)(intptr_t)v1618;
	i8 v1620 = v1619+(+8);
	i8 v1621 = *(i8*)(intptr_t)v1620;
	f69(v1621, v1617);

	i8 v1622 = (i8)(intptr_t)(ws+1144);
	i8 v1623 = *(i8*)(intptr_t)v1622;
	i8 v1624 = v1623+(+18);
	i1 v1625 = *(i1*)(intptr_t)v1624;
	i1 v1626 = v1625|(+4);
	i8 v1627 = (i8)(intptr_t)(ws+1144);
	i8 v1628 = *(i8*)(intptr_t)v1627;
	i8 v1629 = v1628+(+18);
	*(i1*)(intptr_t)v1629 = v1626;

	goto c02_0196;

c02_019a:;

c02_0196:;

	f65();

	i8 v1630 = (i8)(intptr_t)(ws+1144);
	i8 v1631 = *(i8*)(intptr_t)v1630;
	i8 v1632 = v1631+(+16);
	i2 v1633 = *(i2*)(intptr_t)v1632;
	f64(v1633);

endsub:;
}

// SetSubroutineWorkspace workspace at ws+1192 length ws+12
void f85(void) {

	f75();

	f79();

	i8 v1634 = (i8)(intptr_t)(ws+1156);
	i8 v1635;
	f73(&v1635, v1634);
	i8 v1636 = (i8)(intptr_t)(ws+1192);
	*(i8*)(intptr_t)v1636 = v1635;

	f78();

	i4 v1637;
	f80(&v1637);
	i1 v1638 = (s1)(s4)v1637;
	i8 v1639 = (i8)(intptr_t)(ws+1200);
	*(i1*)(intptr_t)v1639 = v1638;

	f78();

	i4 v1640;
	f80(&v1640);
	i2 v1641 = (s2)(s4)v1640;
	i8 v1642 = (i8)(intptr_t)(ws+1202);
	*(i2*)(intptr_t)v1642 = v1641;

	i8 v1643 = (i8)(intptr_t)(ws+1192);
	i8 v1644 = *(i8*)(intptr_t)v1643;
	i8 v1645 = v1644+(+16);
	i2 v1646 = *(i2*)(intptr_t)v1645;
	i8 v1647 = (i8)(intptr_t)(ws+1200);
	i1 v1648 = *(i1*)(intptr_t)v1647;
	i8 v1649 = (i8)(intptr_t)(ws+1202);
	i2 v1650 = *(i2*)(intptr_t)v1649;
	f72(v1650, v1648, v1646);

endsub:;
}

// EmitWorkspaceRef workspace at ws+1200 length ws+12
void f86(void) {

	f75();

	f79();

	i8 v1651 = (i8)(intptr_t)(ws+1144);
	i8 v1652 = *(i8*)(intptr_t)v1651;
	i8 v1653 = (i8)(intptr_t)(ws+1200);
	*(i8*)(intptr_t)v1653 = v1652;

	i8 v1654 = (i8)(intptr_t)(ws+1156);
	i1 v1655 = *(i1*)(intptr_t)v1654;
	i1 v1656 = (i1)+0;
	if (v1655==v1656) goto c02_019f; else goto c02_019e;

c02_019e:;

	i8 v1657 = (i8)(intptr_t)(ws+1156);
	i8 v1658;
	f73(&v1658, v1657);
	i8 v1659 = (i8)(intptr_t)(ws+1200);
	*(i8*)(intptr_t)v1659 = v1658;

	i8 v1660 = (i8)(intptr_t)(ws+1144);
	i8 v1661 = *(i8*)(intptr_t)v1660;
	i8 v1662 = v1661+(+16);
	i2 v1663 = *(i2*)(intptr_t)v1662;
	i8 v1664 = (i8)(intptr_t)(ws+1200);
	i8 v1665 = *(i8*)(intptr_t)v1664;
	i8 v1666 = v1665+(+16);
	i2 v1667 = *(i2*)(intptr_t)v1666;
	f71(v1667, v1663);

	goto c02_019b;

c02_019f:;

c02_019b:;

	i1 v1668 = (i1)+46;
	f76(v1668);

	i4 v1669;
	f80(&v1669);
	i1 v1670 = (s1)(s4)v1669;
	i8 v1671 = (i8)(intptr_t)(ws+1208);
	*(i1*)(intptr_t)v1671 = v1670;

	i1 v1672 = (i1)+46;
	f76(v1672);

	i4 v1673;
	f80(&v1673);
	i2 v1674 = (s2)(s4)v1673;
	i8 v1675 = (i8)(intptr_t)(ws+1210);
	*(i2*)(intptr_t)v1675 = v1674;

	i1 v1676 = (i1)+2;
	f57(v1676);

	i8 v1677 = (i8)(intptr_t)(ws+1200);
	i8 v1678 = *(i8*)(intptr_t)v1677;
	i8 v1679 = v1678+(+16);
	i2 v1680 = *(i2*)(intptr_t)v1679;
	f64(v1680);

	i8 v1681 = (i8)(intptr_t)(ws+1208);
	i1 v1682 = *(i1*)(intptr_t)v1681;
	f63(v1682);

	i8 v1683 = (i8)(intptr_t)(ws+1210);
	i2 v1684 = *(i2*)(intptr_t)v1683;
	f64(v1684);

endsub:;
}
const i1 c02_s0015[] = { 0x73,0x6f,0x75,0x72,0x63,0x65,0x20,0x74,0x65,0x78,0x74,0x20,0x77,0x69,0x74,0x68,0x20,0x6e,0x6f,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x64,0x65,0x66,0x69,0x6e,0x65,0x64,0 };

// SourceLine workspace at ws+1192 length ws+8
void f87(void) {

	i8 v1685 = (i8)(intptr_t)(ws+1144);
	i8 v1686 = *(i8*)(intptr_t)v1685;
	i8 v1687 = (i8)+0;
	if (v1686==v1687) goto c02_01a3; else goto c02_01a4;

c02_01a3:;

	i8 v1688 = (i8)(intptr_t)c02_s0015;
	f56(v1688);

	goto c02_01a0;

c02_01a4:;

c02_01a0:;

c02_01a5:;

	i8 v1689 = (i8)(intptr_t)(ws+1152);
	i1 v1690 = *(i1*)(intptr_t)v1689;
	i1 v1691 = (i1)+0;
	if (v1690==v1691) goto c02_01ae; else goto c02_01b1;

c02_01b1:;

	i8 v1692 = (i8)(intptr_t)(ws+1152);
	i1 v1693 = *(i1*)(intptr_t)v1692;
	i1 v1694 = (i1)+10;
	if (v1693==v1694) goto c02_01ae; else goto c02_01b0;

c02_01b0:;

	i8 v1695 = (i8)(intptr_t)(ws+1152);
	i1 v1696 = *(i1*)(intptr_t)v1695;
	i1 v1697 = (i1)+26;
	if (v1696==v1697) goto c02_01ae; else goto c02_01af;

c02_01ae:;

	goto c02_01a6;

	goto c02_01a7;

c02_01af:;

c02_01a7:;

	i8 v1698 = (i8)(intptr_t)(ws+1152);
	i1 v1699 = *(i1*)(intptr_t)v1698;
	i1 v1700 = (i1)+13;
	if (v1699==v1700) goto c02_01b6; else goto c02_01b5;

c02_01b5:;

	i8 v1701 = (i8)(intptr_t)(ws+1152);
	i1 v1702 = *(i1*)(intptr_t)v1701;
	i1 v1703 = (i1)+96;
	if (v1702==v1703) goto c02_01ba; else goto c02_01bb;

c02_01ba:;

	f75();

	i8 v1704 = (i8)(intptr_t)(ws+1152);
	i1 v1705 = *(i1*)(intptr_t)v1704;

	if (v1705 != +96) goto c02_01bd;

	i1 v1706 = (i1)+4;
	f57(v1706);

	f75();

	goto c02_01bc;

c02_01bd:;

	if (v1705 != +94) goto c02_01be;

	i1 v1707 = (i1)+3;
	f57(v1707);

	f75();

	goto c02_01bc;

c02_01be:;

	if (v1705 != +36) goto c02_01bf;

	f86();

	goto c02_01bc;

c02_01bf:;

	f79();

	i8 v1708 = (i8)(intptr_t)(ws+1156);
	i8 v1709;
	f73(&v1709, v1708);
	i8 v1710 = (i8)(intptr_t)(ws+1192);
	*(i8*)(intptr_t)v1710 = v1709;

	i1 v1711 = (i1)+1;
	f57(v1711);

	i8 v1712 = (i8)(intptr_t)(ws+1192);
	i8 v1713 = *(i8*)(intptr_t)v1712;
	i8 v1714 = v1713+(+16);
	i2 v1715 = *(i2*)(intptr_t)v1714;
	f64(v1715);

	i8 v1716 = (i8)(intptr_t)(ws+1144);
	i8 v1717 = *(i8*)(intptr_t)v1716;
	i8 v1718 = v1717+(+16);
	i2 v1719 = *(i2*)(intptr_t)v1718;
	i8 v1720 = (i8)(intptr_t)(ws+1192);
	i8 v1721 = *(i8*)(intptr_t)v1720;
	i8 v1722 = v1721+(+16);
	i2 v1723 = *(i2*)(intptr_t)v1722;
	f71(v1723, v1719);

c02_01bc:;


	goto c02_01b7;

c02_01bb:;

	i8 v1724 = (i8)(intptr_t)(ws+1152);
	i1 v1725 = *(i1*)(intptr_t)v1724;
	f57(v1725);

	f75();

c02_01b7:;

	goto c02_01b2;

c02_01b6:;

c02_01b2:;

	goto c02_01a5;

c02_01a6:;

	i1 v1726 = (i1)+10;
	f57(v1726);

endsub:;
}
const i1 c02_s0016[] = { 0x62,0x61,0x64,0x20,0x63,0x6f,0x77,0x77,0x72,0x61,0x70,0x20,0x63,0x6f,0x6d,0x6d,0x61,0x6e,0x64,0 };

// ProcessFile workspace at ws+1152 length ws+36
void f74(void) {

	i8 v1479 = (i8)(intptr_t)c02_s0011;
	i8 v1480 = (i8)(intptr_t)(ws+1112);
	*(i8*)(intptr_t)v1480 = v1479;

	i1 v1481 = (i1)+5;
	i8 v1482 = (i8)(intptr_t)(ws+1122);
	*(i1*)(intptr_t)v1482 = v1481;

	i2 v1483 = (i2)+0;
	i8 v1484 = (i8)(intptr_t)(ws+1154);
	*(i2*)(intptr_t)v1484 = v1483;














	f75();

c02_01c0:;

	i8 v1727 = (i8)(intptr_t)(ws+1152);
	i1 v1728 = *(i1*)(intptr_t)v1727;
	i1 v1729 = (i1)+0;
	if (v1728==v1729) goto c02_01c7; else goto c02_01c9;

c02_01c9:;

	i8 v1730 = (i8)(intptr_t)(ws+1152);
	i1 v1731 = *(i1*)(intptr_t)v1730;
	i1 v1732 = (i1)+26;
	if (v1731==v1732) goto c02_01c7; else goto c02_01c8;

c02_01c7:;

	goto c02_01c1;

	goto c02_01c2;

c02_01c8:;

c02_01c2:;

	i8 v1733 = (i8)(intptr_t)(ws+1152);
	i1 v1734 = *(i1*)(intptr_t)v1733;

	if (v1734 != +38) goto c02_01cb;

	f75();

	i8 v1735 = (i8)(intptr_t)(ws+1152);
	i1 v1736 = *(i1*)(intptr_t)v1735;

	if (v1736 != +88) goto c02_01cd;

	i1 v1737 = (i1)+1;
	f84(v1737);

	goto c02_01cc;

c02_01cd:;

	if (v1736 != +83) goto c02_01ce;

	i1 v1738 = (i1)+0;
	f84(v1738);

	goto c02_01cc;

c02_01ce:;

	if (v1736 != +87) goto c02_01cf;

	f85();

	goto c02_01cc;

c02_01cf:;

	i8 v1739 = (i8)(intptr_t)c02_s0016;
	f56(v1739);

c02_01cc:;


	f77();

	goto c02_01ca;

c02_01cb:;

	if (v1734 != +35) goto c02_01d0;

	f77();

	goto c02_01ca;

c02_01d0:;

	f87();

c02_01ca:;


	f75();

	goto c02_01c0;

c02_01c1:;

	f83();

endsub:;
}
const i1 c02_s0017[] = { 0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x20,0x74,0x6f,0x20,0x75,0x6e,0x64,0x65,0x63,0x6c,0x61,0x72,0x65,0x64,0x20,0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
const i1 c02_s0018[] = { 0x27,0x0a,0 };
const i1 c02_s0019[] = { 0x66,0x61,0x69,0x6c,0x65,0x64,0 };

// CheckSymbols workspace at ws+1152 length ws+16
void f88(void) {

	i1 v1740 = (i1)+1;
	i8 v1741 = (i8)(intptr_t)(ws+1152);
	*(i1*)(intptr_t)v1741 = v1740;

	i8 v1742 = (i8)(intptr_t)(ws+1128);
	i8 v1743 = *(i8*)(intptr_t)v1742;
	i8 v1744 = (i8)(intptr_t)(ws+1160);
	*(i8*)(intptr_t)v1744 = v1743;

c02_01d3:;

	i8 v1745 = (i8)(intptr_t)(ws+1160);
	i8 v1746 = *(i8*)(intptr_t)v1745;
	i8 v1747 = (i8)+0;
	if (v1746==v1747) goto c02_01d6; else goto c02_01d5;

c02_01d5:;

	i8 v1748 = (i8)(intptr_t)(ws+1160);
	i8 v1749 = *(i8*)(intptr_t)v1748;
	i8 v1750 = v1749+(+18);
	i1 v1751 = *(i1*)(intptr_t)v1750;
	i1 v1752 = (i1)+0;
	if (v1751==v1752) goto c02_01da; else goto c02_01db;

c02_01da:;

	i8 v1753 = (i8)(intptr_t)c02_s0017;
	f11(v1753);

	i8 v1754 = (i8)(intptr_t)(ws+1160);
	i8 v1755 = *(i8*)(intptr_t)v1754;
	i8 v1756 = v1755+(+8);
	i8 v1757 = *(i8*)(intptr_t)v1756;
	f11(v1757);

	i8 v1758 = (i8)(intptr_t)c02_s0018;
	f11(v1758);

	i1 v1759 = (i1)+0;
	i8 v1760 = (i8)(intptr_t)(ws+1152);
	*(i1*)(intptr_t)v1760 = v1759;

	goto c02_01d7;

c02_01db:;

c02_01d7:;

	i8 v1761 = (i8)(intptr_t)(ws+1160);
	i8 v1762 = *(i8*)(intptr_t)v1761;
	i8 v1763 = *(i8*)(intptr_t)v1762;
	i8 v1764 = (i8)(intptr_t)(ws+1160);
	*(i8*)(intptr_t)v1764 = v1763;

	goto c02_01d3;

c02_01d6:;

	i8 v1765 = (i8)(intptr_t)(ws+1152);
	i1 v1766 = *(i1*)(intptr_t)v1765;
	i1 v1767 = (i1)+0;
	if (v1766==v1767) goto c02_01df; else goto c02_01e0;

c02_01df:;

	i8 v1768 = (i8)(intptr_t)c02_s0019;
	f56(v1768);

	goto c02_01dc;

c02_01e0:;

c02_01dc:;

endsub:;
}
const i1 c02_s001a[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x69,0x6e,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };

// __main workspace at ws+0 length ws+1152
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

























	i8 v1138 = (i8)+0;
	i8 v1139 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v1139 = v1138;

	i8 v1140 = (i8)+0;
	i8 v1141 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v1141 = v1140;

	i8 v1142 = (i8)(intptr_t)c02_s0009;
	f11(v1142);

	i8 v1143;
	f36(&v1143);
	i1 v1144 = (i1)+10;
	i8 v1145 = ((i8)v1143)>>v1144;
	i2 v1146 = v1145;
	f16(v1146);

	i8 v1147 = (i8)(intptr_t)c02_s000a;
	f11(v1147);



















	i8 v1428 = (i8)(intptr_t)(ws+1104);
	i8 v1429 = (i8)(intptr_t)(ws+1128);
	*(i8*)(intptr_t)v1429 = v1428;

	i2 v1430 = (i2)+1;
	i8 v1431 = (i8)(intptr_t)(ws+1136);
	*(i2*)(intptr_t)v1431 = v1430;

	i8 v1432 = (i8)+0;
	i8 v1433 = (i8)(intptr_t)(ws+1144);
	*(i8*)(intptr_t)v1433 = v1432;




	f23();

	i8 v1769;
	f24(&v1769);
	i8 v1770 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v1770 = v1769;

	i8 v1771;
	f24(&v1771);
	i8 v1772 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v1772 = v1771;

	i8 v1773 = (i8)(intptr_t)(ws+32);
	i8 v1774 = *(i8*)(intptr_t)v1773;
	i8 v1775 = (i8)+0;
	if (v1774==v1775) goto c02_01e8; else goto c02_01eb;

c02_01eb:;

	i8 v1776 = (i8)(intptr_t)(ws+40);
	i8 v1777 = *(i8*)(intptr_t)v1776;
	i8 v1778 = (i8)+0;
	if (v1777==v1778) goto c02_01e8; else goto c02_01ea;

c02_01ea:;

	i8 v1779;
	f24(&v1779);
	i8 v1780 = (i8)+0;
	if (v1779==v1780) goto c02_01e9; else goto c02_01e8;

c02_01e8:;

	f55();

	goto c02_01e1;

c02_01e9:;

c02_01e1:;

	i8 v1781 = (i8)(intptr_t)(ws+48);
	i8 v1782 = (i8)(intptr_t)(ws+32);
	i8 v1783 = *(i8*)(intptr_t)v1782;
	i1 v1784;
	f42(&v1784, v1783, v1781);
	i1 v1785 = (i1)+0;
	if (v1784==v1785) goto c02_01f0; else goto c02_01ef;

c02_01ef:;

	i8 v1786 = (i8)(intptr_t)c02_s001a;
	f56(v1786);

	goto c02_01ec;

c02_01f0:;

c02_01ec:;

	i8 v1787 = (i8)(intptr_t)(ws+40);
	i8 v1788 = *(i8*)(intptr_t)v1787;
	f67(v1788);

	f74();

	f88();

	f68();

endsub:;
}
void cmain(void) {
	f3();
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                          