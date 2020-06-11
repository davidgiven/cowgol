#include "cowgol.h"
static i8 workspace[0x00a9];
static i1* ws = (i1*)workspace;

// ExitWithError workspace at ws+1240 length ws+0
void f6_ExitWithError(void) {

	
exit(1); 


endsub:;
}

// MemSet workspace at ws+1328 length ws+24
void f7_MemSet(i8 p8 /* len */, i1 p9 /* byte */, i8 p10 /* buf */) {
	*(i8*)(intptr_t)(ws+1328) = p10; /*buf */
	*(i1*)(intptr_t)(ws+1336) = p9; /*byte */
	*(i8*)(intptr_t)(ws+1344) = p8; /*len */

	
memset((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+1328) 
,  
*(i1*)(intptr_t)(ws+1336) 
,  
*(i8*)(intptr_t)(ws+1344) 
); 


endsub:;
}

// print_char workspace at ws+1256 length ws+1
void f8_print_char(i1 p11 /* c */) {
	*(i1*)(intptr_t)(ws+1256) = p11; /*c */

	
putchar( 
*(i1*)(intptr_t)(ws+1256) 
); 


endsub:;
}

// print workspace at ws+1240 length ws+9
void f11_print(i8 p20 /* ptr */) {
	*(i8*)(intptr_t)(ws+1240) = p20; /*ptr */

c02_0001:;

	i8 v21 = (i8)(intptr_t)(ws+1240);
	i8 v22 = *(i8*)(intptr_t)v21;
	i1 v23 = *(i1*)(intptr_t)v22;
	i8 v24 = (i8)(intptr_t)(ws+1248);
	*(i1*)(intptr_t)v24 = v23;

	i8 v25 = (i8)(intptr_t)(ws+1248);
	i1 v26 = *(i1*)(intptr_t)v25;
	i1 v27 = (i1)+0;
	if (v26==v27) goto c02_0006; else goto c02_0007;

c02_0006:;

	goto endsub;

c02_0007:;

c02_0003:;

	i8 v28 = (i8)(intptr_t)(ws+1248);
	i1 v29 = *(i1*)(intptr_t)v28;

void f8_print_char(i1 /* c */);
	f8_print_char(v29);

	i8 v30 = (i8)(intptr_t)(ws+1240);
	i8 v31 = *(i8*)(intptr_t)v30;
	i8 v32 = v31+(+1);
	i8 v33 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v33 = v32;

	goto c02_0001;

c02_0002:;

endsub:;
}

// print_nl workspace at ws+1240 length ws+0
void f12_print_nl(void) {

	i1 v34 = (i1)+10;

void f8_print_char(i1 /* c */);
	f8_print_char(v34);

endsub:;
}

// UIToA workspace at ws+1176 length ws+49
void f13_UIToA(i8* p35 /* ptr */, i8 p36 /* buffer */, i1 p37 /* base */, i4 p38 /* value */) {
	*(i4*)(intptr_t)(ws+1176) = p38; /*value */
	*(i1*)(intptr_t)(ws+1180) = p37; /*base */
	*(i8*)(intptr_t)(ws+1184) = p36; /*buffer */

	i8 v39 = (i8)(intptr_t)(ws+1184);
	i8 v40 = *(i8*)(intptr_t)v39;
	i8 v41 = (i8)(intptr_t)(ws+1192);
	*(i8*)(intptr_t)v41 = v40;

c02_0008:;

	i8 v42 = (i8)(intptr_t)(ws+1176);
	i4 v43 = *(i4*)(intptr_t)v42;
	i8 v44 = (i8)(intptr_t)(ws+1180);
	i1 v45 = *(i1*)(intptr_t)v44;
	i4 v46 = v45;
	i4 v47 = v43%v46;
	i8 v48 = (i8)(intptr_t)(ws+1200);
	*(i4*)(intptr_t)v48 = v47;

	i8 v49 = (i8)(intptr_t)(ws+1176);
	i4 v50 = *(i4*)(intptr_t)v49;
	i8 v51 = (i8)(intptr_t)(ws+1180);
	i1 v52 = *(i1*)(intptr_t)v51;
	i4 v53 = v52;
	i4 v54 = v50/v53;
	i8 v55 = (i8)(intptr_t)(ws+1176);
	*(i4*)(intptr_t)v55 = v54;

	i8 v56 = (i8)(intptr_t)(ws+1200);
	i4 v57 = *(i4*)(intptr_t)v56;
	i4 v58 = (i4)+10;
	if (v57<v58) goto c02_000d; else goto c02_000e;

c02_000d:;

	i8 v59 = (i8)(intptr_t)(ws+1200);
	i4 v60 = *(i4*)(intptr_t)v59;
	i4 v61 = v60+(+48);
	i8 v62 = (i8)(intptr_t)(ws+1200);
	*(i4*)(intptr_t)v62 = v61;

	goto c02_000a;

c02_000e:;

	i8 v63 = (i8)(intptr_t)(ws+1200);
	i4 v64 = *(i4*)(intptr_t)v63;
	i4 v65 = v64+(+87);
	i8 v66 = (i8)(intptr_t)(ws+1200);
	*(i4*)(intptr_t)v66 = v65;

c02_000a:;

	i8 v67 = (i8)(intptr_t)(ws+1200);
	i4 v68 = *(i4*)(intptr_t)v67;
	i1 v69 = v68;
	i8 v70 = (i8)(intptr_t)(ws+1192);
	i8 v71 = *(i8*)(intptr_t)v70;
	*(i1*)(intptr_t)v71 = v69;

	i8 v72 = (i8)(intptr_t)(ws+1192);
	i8 v73 = *(i8*)(intptr_t)v72;
	i8 v74 = v73+(+1);
	i8 v75 = (i8)(intptr_t)(ws+1192);
	*(i8*)(intptr_t)v75 = v74;

	i8 v76 = (i8)(intptr_t)(ws+1176);
	i4 v77 = *(i4*)(intptr_t)v76;
	i4 v78 = (i4)+0;
	if (v77==v78) goto c02_0012; else goto c02_0013;

c02_0012:;

	goto c02_0009;

c02_0013:;

c02_000f:;

	goto c02_0008;

c02_0009:;

	i8 v79 = (i8)(intptr_t)(ws+1184);
	i8 v80 = *(i8*)(intptr_t)v79;
	i8 v81 = (i8)(intptr_t)(ws+1208);
	*(i8*)(intptr_t)v81 = v80;

	i8 v82 = (i8)(intptr_t)(ws+1192);
	i8 v83 = *(i8*)(intptr_t)v82;
	i8 v84 = v83+(-1);
	i8 v85 = (i8)(intptr_t)(ws+1216);
	*(i8*)(intptr_t)v85 = v84;

c02_0016:;

	i8 v86 = (i8)(intptr_t)(ws+1208);
	i8 v87 = *(i8*)(intptr_t)v86;
	i8 v88 = (i8)(intptr_t)(ws+1216);
	i8 v89 = *(i8*)(intptr_t)v88;
	if (v87<v89) goto c02_0018; else goto c02_0019;

c02_0018:;

	i8 v90 = (i8)(intptr_t)(ws+1208);
	i8 v91 = *(i8*)(intptr_t)v90;
	i1 v92 = *(i1*)(intptr_t)v91;
	i8 v93 = (i8)(intptr_t)(ws+1224);
	*(i1*)(intptr_t)v93 = v92;

	i8 v94 = (i8)(intptr_t)(ws+1216);
	i8 v95 = *(i8*)(intptr_t)v94;
	i1 v96 = *(i1*)(intptr_t)v95;
	i8 v97 = (i8)(intptr_t)(ws+1208);
	i8 v98 = *(i8*)(intptr_t)v97;
	*(i1*)(intptr_t)v98 = v96;

	i8 v99 = (i8)(intptr_t)(ws+1224);
	i1 v100 = *(i1*)(intptr_t)v99;
	i8 v101 = (i8)(intptr_t)(ws+1216);
	i8 v102 = *(i8*)(intptr_t)v101;
	*(i1*)(intptr_t)v102 = v100;

	i8 v103 = (i8)(intptr_t)(ws+1208);
	i8 v104 = *(i8*)(intptr_t)v103;
	i8 v105 = v104+(+1);
	i8 v106 = (i8)(intptr_t)(ws+1208);
	*(i8*)(intptr_t)v106 = v105;

	i8 v107 = (i8)(intptr_t)(ws+1216);
	i8 v108 = *(i8*)(intptr_t)v107;
	i8 v109 = v108+(-1);
	i8 v110 = (i8)(intptr_t)(ws+1216);
	*(i8*)(intptr_t)v110 = v109;

	goto c02_0016;

c02_0019:;

	i1 v111 = (i1)+0;
	i8 v112 = (i8)(intptr_t)(ws+1192);
	i8 v113 = *(i8*)(intptr_t)v112;
	*(i1*)(intptr_t)v113 = v111;

endsub:;
	*p35 = *(i8*)(intptr_t)(ws+1192);
}

// print_i32 workspace at ws+1152 length ws+24
void f15_print_i32(i4 p140 /* value */) {
	*(i4*)(intptr_t)(ws+1152) = p140; /*value */

	i8 v141 = (i8)(intptr_t)(ws+1152);
	i4 v142 = *(i4*)(intptr_t)v141;
	i1 v143 = (i1)+10;
	i8 v144 = (i8)(intptr_t)(ws+1156);

void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	i8 v145;
	f13_UIToA(&v145, v144, v143, v142);
	i8 v146 = (i8)(intptr_t)(ws+1168);
	*(i8*)(intptr_t)v146 = v145;

	i8 v147 = (i8)(intptr_t)(ws+1156);

void f11_print(i8 /* ptr */);
	f11_print(v147);

endsub:;
}

// print_i16 workspace at ws+1144 length ws+2
void f16_print_i16(i2 p148 /* value */) {
	*(i2*)(intptr_t)(ws+1144) = p148; /*value */

	i8 v149 = (i8)(intptr_t)(ws+1144);
	i2 v150 = *(i2*)(intptr_t)v149;
	i4 v151 = v150;

void f15_print_i32(i4 /* value */);
	f15_print_i32(v151);

endsub:;
}

// AToI workspace at ws+1224 length ws+27
void f21_AToI(i4* p217 /* result */, i8* p218 /* ptr */, i8 p219 /* buffer */) {
	*(i8*)(intptr_t)(ws+1224) = p219; /*buffer */

	i1 v220 = (i1)+0;
	i8 v221 = (i8)(intptr_t)(ws+1248);
	*(i1*)(intptr_t)v221 = v220;

	i1 v222 = (i1)+10;
	i8 v223 = (i8)(intptr_t)(ws+1249);
	*(i1*)(intptr_t)v223 = v222;

	i8 v224 = (i8)(intptr_t)(ws+1224);
	i8 v225 = *(i8*)(intptr_t)v224;
	i8 v226 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v226 = v225;

	i4 v227 = (i4)+0;
	i8 v228 = (i8)(intptr_t)(ws+1232);
	*(i4*)(intptr_t)v228 = v227;

	i8 v229 = (i8)(intptr_t)(ws+1240);
	i8 v230 = *(i8*)(intptr_t)v229;
	i1 v231 = *(i1*)(intptr_t)v230;
	i8 v232 = (i8)(intptr_t)(ws+1250);
	*(i1*)(intptr_t)v232 = v231;

	i8 v233 = (i8)(intptr_t)(ws+1250);
	i1 v234 = *(i1*)(intptr_t)v233;
	i1 v235 = (i1)+45;
	if (v234==v235) goto c02_002e; else goto c02_002f;

c02_002e:;

	i1 v236 = (i1)+1;
	i8 v237 = (i8)(intptr_t)(ws+1248);
	*(i1*)(intptr_t)v237 = v236;

	i8 v238 = (i8)(intptr_t)(ws+1240);
	i8 v239 = *(i8*)(intptr_t)v238;
	i8 v240 = v239+(+1);
	i8 v241 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v241 = v240;

	i8 v242 = (i8)(intptr_t)(ws+1240);
	i8 v243 = *(i8*)(intptr_t)v242;
	i1 v244 = *(i1*)(intptr_t)v243;
	i8 v245 = (i8)(intptr_t)(ws+1250);
	*(i1*)(intptr_t)v245 = v244;

	goto c02_002b;

c02_002f:;

c02_002b:;

	i8 v246 = (i8)(intptr_t)(ws+1250);
	i1 v247 = *(i1*)(intptr_t)v246;
	i1 v248 = (i1)+48;
	if (v247==v248) goto c02_0033; else goto c02_0034;

c02_0033:;

	i8 v249 = (i8)(intptr_t)(ws+1240);
	i8 v250 = *(i8*)(intptr_t)v249;
	i8 v251 = v250+(+1);
	i1 v252 = *(i1*)(intptr_t)v251;

	if (v252 != +120) goto c02_0036;

	i1 v253 = (i1)+16;
	i8 v254 = (i8)(intptr_t)(ws+1249);
	*(i1*)(intptr_t)v254 = v253;

	goto c02_0035;

c02_0036:;

	if (v252 != +111) goto c02_0037;

	i1 v255 = (i1)+8;
	i8 v256 = (i8)(intptr_t)(ws+1249);
	*(i1*)(intptr_t)v256 = v255;

	goto c02_0035;

c02_0037:;

	if (v252 != +98) goto c02_0038;

	i1 v257 = (i1)+2;
	i8 v258 = (i8)(intptr_t)(ws+1249);
	*(i1*)(intptr_t)v258 = v257;

	goto c02_0035;

c02_0038:;

	if (v252 != +100) goto c02_0039;

	i1 v259 = (i1)+10;
	i8 v260 = (i8)(intptr_t)(ws+1249);
	*(i1*)(intptr_t)v260 = v259;

	goto c02_0035;

c02_0039:;

	i8 v261 = (i8)(intptr_t)(ws+1240);
	i8 v262 = *(i8*)(intptr_t)v261;
	i8 v263 = v262+(-2);
	i8 v264 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v264 = v263;

c02_0035:;


	i8 v265 = (i8)(intptr_t)(ws+1240);
	i8 v266 = *(i8*)(intptr_t)v265;
	i8 v267 = v266+(+2);
	i8 v268 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v268 = v267;

	i8 v269 = (i8)(intptr_t)(ws+1240);
	i8 v270 = *(i8*)(intptr_t)v269;
	i1 v271 = *(i1*)(intptr_t)v270;
	i8 v272 = (i8)(intptr_t)(ws+1250);
	*(i1*)(intptr_t)v272 = v271;

	goto c02_0030;

c02_0034:;

c02_0030:;

c02_003a:;

	i8 v273 = (i8)(intptr_t)(ws+1250);
	i1 v274 = *(i1*)(intptr_t)v273;
	i1 v275 = (i1)+97;
	if (v274<v275) goto c02_0040; else goto c02_003f;

c02_003f:;

	i8 v276 = (i8)(intptr_t)(ws+1250);
	i1 v277 = *(i1*)(intptr_t)v276;
	i1 v278 = v277+(-87);
	i8 v279 = (i8)(intptr_t)(ws+1250);
	*(i1*)(intptr_t)v279 = v278;

	goto c02_003c;

c02_0040:;

	i8 v280 = (i8)(intptr_t)(ws+1250);
	i1 v281 = *(i1*)(intptr_t)v280;
	i1 v282 = (i1)+65;
	if (v281<v282) goto c02_0044; else goto c02_0043;

c02_0043:;

	i8 v283 = (i8)(intptr_t)(ws+1250);
	i1 v284 = *(i1*)(intptr_t)v283;
	i1 v285 = v284+(-55);
	i8 v286 = (i8)(intptr_t)(ws+1250);
	*(i1*)(intptr_t)v286 = v285;

	goto c02_003c;

c02_0044:;

	i8 v287 = (i8)(intptr_t)(ws+1250);
	i1 v288 = *(i1*)(intptr_t)v287;
	i1 v289 = v288+(-48);
	i8 v290 = (i8)(intptr_t)(ws+1250);
	*(i1*)(intptr_t)v290 = v289;

c02_003c:;

	i8 v291 = (i8)(intptr_t)(ws+1250);
	i1 v292 = *(i1*)(intptr_t)v291;
	i8 v293 = (i8)(intptr_t)(ws+1249);
	i1 v294 = *(i1*)(intptr_t)v293;
	if (v292<v294) goto c02_0049; else goto c02_0048;

c02_0048:;

	goto c02_003b;

c02_0049:;

c02_0045:;

	i8 v295 = (i8)(intptr_t)(ws+1232);
	i4 v296 = *(i4*)(intptr_t)v295;
	i8 v297 = (i8)(intptr_t)(ws+1249);
	i1 v298 = *(i1*)(intptr_t)v297;
	i4 v299 = v298;
	i4 v300 = v296*v299;
	i8 v301 = (i8)(intptr_t)(ws+1250);
	i1 v302 = *(i1*)(intptr_t)v301;
	i4 v303 = v302;
	i4 v304 = v300+v303;
	i8 v305 = (i8)(intptr_t)(ws+1232);
	*(i4*)(intptr_t)v305 = v304;

	i8 v306 = (i8)(intptr_t)(ws+1240);
	i8 v307 = *(i8*)(intptr_t)v306;
	i8 v308 = v307+(+1);
	i8 v309 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v309 = v308;

	i8 v310 = (i8)(intptr_t)(ws+1240);
	i8 v311 = *(i8*)(intptr_t)v310;
	i1 v312 = *(i1*)(intptr_t)v311;
	i8 v313 = (i8)(intptr_t)(ws+1250);
	*(i1*)(intptr_t)v313 = v312;

	goto c02_003a;

c02_003b:;

	i8 v314 = (i8)(intptr_t)(ws+1248);
	i1 v315 = *(i1*)(intptr_t)v314;
	i1 v316 = (i1)+0;
	if (v315==v316) goto c02_004e; else goto c02_004d;

c02_004d:;

	i8 v317 = (i8)(intptr_t)(ws+1232);
	i4 v318 = *(i4*)(intptr_t)v317;
	i4 v319 = -v318;
	i8 v320 = (i8)(intptr_t)(ws+1232);
	*(i4*)(intptr_t)v320 = v319;

	goto c02_004a;

c02_004e:;

c02_004a:;

endsub:;
	*p218 = *(i8*)(intptr_t)(ws+1240);
	*p217 = *(i4*)(intptr_t)(ws+1232);
}

// ArgvInit workspace at ws+1144 length ws+0
void f23_ArgvInit(void) {

	
*(i8*)(intptr_t)(ws+16) 
 = (i8)(intptr_t)global_argv; 


	i8 v328 = (i8)(intptr_t)(ws+16);
	i8 v329 = *(i8*)(intptr_t)v328;
	i8 v330 = v329+(+8);
	i8 v331 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v331 = v330;

endsub:;
}

// ArgvNext workspace at ws+1144 length ws+8
void f24_ArgvNext(i8* p332 /* arg */) {

	i8 v333 = (i8)(intptr_t)(ws+16);
	i8 v334 = *(i8*)(intptr_t)v333;
	i8 v335 = (i8)+0;
	if (v334==v335) goto c02_0052; else goto c02_0053;

c02_0052:;

	i8 v336 = (i8)+0;
	i8 v337 = (i8)(intptr_t)(ws+1144);
	*(i8*)(intptr_t)v337 = v336;

	goto endsub;

c02_0053:;

c02_004f:;

	i8 v338 = (i8)(intptr_t)(ws+16);
	i8 v339 = *(i8*)(intptr_t)v338;
	i8 v340 = *(i8*)(intptr_t)v339;
	i8 v341 = (i8)(intptr_t)(ws+1144);
	*(i8*)(intptr_t)v341 = v340;

	i8 v342 = (i8)(intptr_t)(ws+1144);
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
	*p332 = *(i8*)(intptr_t)(ws+1144);
}

// StrCmp workspace at ws+1224 length ws+17
void f25_StrCmp(i1* p351 /* res */, i8 p352 /* s2 */, i8 p353 /* s1 */) {
	*(i8*)(intptr_t)(ws+1224) = p353; /*s1 */
	*(i8*)(intptr_t)(ws+1232) = p352; /*s2 */

c02_0059:;

	i8 v354 = (i8)(intptr_t)(ws+1224);
	i8 v355 = *(i8*)(intptr_t)v354;
	i1 v356 = *(i1*)(intptr_t)v355;
	i8 v357 = (i8)(intptr_t)(ws+1232);
	i8 v358 = *(i8*)(intptr_t)v357;
	i1 v359 = *(i1*)(intptr_t)v358;
	i1 v360 = v356-v359;
	i8 v361 = (i8)(intptr_t)(ws+1240);
	*(i1*)(intptr_t)v361 = v360;

	i8 v362 = (i8)(intptr_t)(ws+1240);
	i1 v363 = *(i1*)(intptr_t)v362;
	i1 v364 = (i1)+0;
	if (v363==v364) goto c02_0062; else goto c02_0060;

c02_0062:;

	i8 v365 = (i8)(intptr_t)(ws+1224);
	i8 v366 = *(i8*)(intptr_t)v365;
	i1 v367 = *(i1*)(intptr_t)v366;
	i1 v368 = (i1)+0;
	if (v367==v368) goto c02_0060; else goto c02_0061;

c02_0060:;

	goto c02_005a;

c02_0061:;

c02_005b:;

	i8 v369 = (i8)(intptr_t)(ws+1224);
	i8 v370 = *(i8*)(intptr_t)v369;
	i8 v371 = v370+(+1);
	i8 v372 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v372 = v371;

	i8 v373 = (i8)(intptr_t)(ws+1232);
	i8 v374 = *(i8*)(intptr_t)v373;
	i8 v375 = v374+(+1);
	i8 v376 = (i8)(intptr_t)(ws+1232);
	*(i8*)(intptr_t)v376 = v375;

	goto c02_0059;

c02_005a:;

endsub:;
	*p351 = *(i1*)(intptr_t)(ws+1240);
}

// Alloc workspace at ws+1248 length ws+16
void f31_Alloc(i8* p486 /* block */, i8 p487 /* length */) {
	*(i8*)(intptr_t)(ws+1248) = p487; /*length */

	
*(i8*)(intptr_t)(ws+1256) 
=(i8)calloc(1, (size_t) 
*(i8*)(intptr_t)(ws+1248) 
); 


endsub:;
	*p486 = *(i8*)(intptr_t)(ws+1256);
}

// Free workspace at ws+1256 length ws+8
void f32_Free(i8 p488 /* block */) {
	*(i8*)(intptr_t)(ws+1256) = p488; /*block */

	
free((void*) 
*(i8*)(intptr_t)(ws+1256) 
); 


endsub:;
}

// StrDup workspace at ws+1224 length ws+16
void f33_StrDup(i8* p489 /* sout */, i8 p490 /* s */) {
	*(i8*)(intptr_t)(ws+1224) = p490; /*s */

	
*(i8*)(intptr_t)(ws+1232) 
=(i8)strdup((const char*) 
*(i8*)(intptr_t)(ws+1224) 
); 


endsub:;
	*p489 = *(i8*)(intptr_t)(ws+1232);
}

// GetFreeMemory workspace at ws+1144 length ws+8
void f35_GetFreeMemory(i8* p491 /* i */) {

	i8 v492 = (i8)+0;
	i8 v493 = (i8)(intptr_t)(ws+1144);
	*(i8*)(intptr_t)v493 = v492;

endsub:;
	*p491 = *(i8*)(intptr_t)(ws+1144);
}

// fcb_i_blockin workspace at ws+1296 length ws+28
void f36_fcb_i_blockin(i8 p494 /* fcb */) {
	*(i8*)(intptr_t)(ws+1296) = p494; /*fcb */

	i8 v495 = (i8)(intptr_t)(ws+1296);
	i8 v496 = *(i8*)(intptr_t)v495;
	i8 v497 = v496+(+12);
	i1 v498 = (i1)+0;
	i8 v499 = (i8)+512;

void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	f7_MemSet(v499, v498, v497);

	i8 v500 = (i8)(intptr_t)(ws+1296);
	i8 v501 = *(i8*)(intptr_t)v500;
	i4 v502 = *(i4*)(intptr_t)v501;
	i8 v503 = (i8)(intptr_t)(ws+1304);
	*(i4*)(intptr_t)v503 = v502;

	i8 v504 = (i8)(intptr_t)(ws+1296);
	i8 v505 = *(i8*)(intptr_t)v504;
	i8 v506 = v505+(+12);
	i8 v507 = (i8)(intptr_t)(ws+1312);
	*(i8*)(intptr_t)v507 = v506;

	i8 v508 = (i8)(intptr_t)(ws+1296);
	i8 v509 = *(i8*)(intptr_t)v508;
	i8 v510 = v509+(+8);
	i4 v511 = *(i4*)(intptr_t)v510;
	i1 v512 = (i1)+9;
	i4 v513 = ((i4)v511)<<v512;
	i8 v514 = (i8)(intptr_t)(ws+1320);
	*(i4*)(intptr_t)v514 = v513;

	
pread( 
*(i4*)(intptr_t)(ws+1304) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+1312) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+1320) 
); 


	i1 v515 = (i1)+0;
	i8 v516 = (i8)(intptr_t)(ws+1296);
	i8 v517 = *(i8*)(intptr_t)v516;
	i8 v518 = v517+(+6);
	*(i1*)(intptr_t)v518 = v515;

endsub:;
}

// fcb_i_blockout workspace at ws+1296 length ws+28
void f37_fcb_i_blockout(i8 p519 /* fcb */) {
	*(i8*)(intptr_t)(ws+1296) = p519; /*fcb */

	i8 v520 = (i8)(intptr_t)(ws+1296);
	i8 v521 = *(i8*)(intptr_t)v520;
	i8 v522 = v521+(+6);
	i1 v523 = *(i1*)(intptr_t)v522;
	i1 v524 = (i1)+0;
	if (v523==v524) goto c02_008d; else goto c02_008c;

c02_008c:;

	i8 v525 = (i8)(intptr_t)(ws+1296);
	i8 v526 = *(i8*)(intptr_t)v525;
	i4 v527 = *(i4*)(intptr_t)v526;
	i8 v528 = (i8)(intptr_t)(ws+1304);
	*(i4*)(intptr_t)v528 = v527;

	i8 v529 = (i8)(intptr_t)(ws+1296);
	i8 v530 = *(i8*)(intptr_t)v529;
	i8 v531 = v530+(+12);
	i8 v532 = (i8)(intptr_t)(ws+1312);
	*(i8*)(intptr_t)v532 = v531;

	i8 v533 = (i8)(intptr_t)(ws+1296);
	i8 v534 = *(i8*)(intptr_t)v533;
	i8 v535 = v534+(+8);
	i4 v536 = *(i4*)(intptr_t)v535;
	i1 v537 = (i1)+9;
	i4 v538 = ((i4)v536)<<v537;
	i8 v539 = (i8)(intptr_t)(ws+1320);
	*(i4*)(intptr_t)v539 = v538;

	
pwrite( 
*(i4*)(intptr_t)(ws+1304) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+1312) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+1320) 
); 


	i1 v540 = (i1)+0;
	i8 v541 = (i8)(intptr_t)(ws+1296);
	i8 v542 = *(i8*)(intptr_t)v541;
	i8 v543 = v542+(+6);
	*(i1*)(intptr_t)v543 = v540;

	goto c02_0089;

c02_008d:;

c02_0089:;

endsub:;
}

// fcb_i_changeblock workspace at ws+1280 length ws+12
void f38_fcb_i_changeblock(i4 p544 /* newblock */, i8 p545 /* fcb */) {
	*(i8*)(intptr_t)(ws+1280) = p545; /*fcb */
	*(i4*)(intptr_t)(ws+1288) = p544; /*newblock */

	i8 v546 = (i8)(intptr_t)(ws+1288);
	i4 v547 = *(i4*)(intptr_t)v546;
	i8 v548 = (i8)(intptr_t)(ws+1280);
	i8 v549 = *(i8*)(intptr_t)v548;
	i8 v550 = v549+(+8);
	i4 v551 = *(i4*)(intptr_t)v550;
	if (v547==v551) goto c02_0092; else goto c02_0091;

c02_0091:;

	i8 v552 = (i8)(intptr_t)(ws+1280);
	i8 v553 = *(i8*)(intptr_t)v552;

void f37_fcb_i_blockout(i8 /* fcb */);
	f37_fcb_i_blockout(v553);

	i8 v554 = (i8)(intptr_t)(ws+1288);
	i4 v555 = *(i4*)(intptr_t)v554;
	i8 v556 = (i8)(intptr_t)(ws+1280);
	i8 v557 = *(i8*)(intptr_t)v556;
	i8 v558 = v557+(+8);
	*(i4*)(intptr_t)v558 = v555;

	i8 v559 = (i8)(intptr_t)(ws+1280);
	i8 v560 = *(i8*)(intptr_t)v559;

void f36_fcb_i_blockin(i8 /* fcb */);
	f36_fcb_i_blockin(v560);

	goto c02_008e;

c02_0092:;

c02_008e:;

endsub:;
}

// fcb_i_open workspace at ws+1176 length ws+28
void f39_fcb_i_open(i1* p561 /* errno */, i4 p562 /* flags */, i8 p563 /* filename */, i8 p564 /* fcb */) {
	*(i8*)(intptr_t)(ws+1176) = p564; /*fcb */
	*(i8*)(intptr_t)(ws+1184) = p563; /*filename */
	*(i4*)(intptr_t)(ws+1192) = p562; /*flags */

	i8 v565 = (i8)(intptr_t)(ws+1176);
	i8 v566 = *(i8*)(intptr_t)v565;
	i1 v567 = (i1)+0;
	i8 v568 = (i8)+524;

void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	f7_MemSet(v568, v567, v566);

	i2 v569 = (i2)+511;
	i8 v570 = (i8)(intptr_t)(ws+1176);
	i8 v571 = *(i8*)(intptr_t)v570;
	i8 v572 = v571+(+4);
	*(i2*)(intptr_t)v572 = v569;

	i4 v573 = (i4)-1;
	i8 v574 = (i8)(intptr_t)(ws+1176);
	i8 v575 = *(i8*)(intptr_t)v574;
	i8 v576 = v575+(+8);
	*(i4*)(intptr_t)v576 = v573;

	
errno = 0; 


	
*(i4*)(intptr_t)(ws+1200) 
 = open((char*)(intptr_t) 
*(i8*)(intptr_t)(ws+1184) 
,  
*(i4*)(intptr_t)(ws+1192) 
,  
(+438)
); 


	i8 v577 = (i8)(intptr_t)(ws+1200);
	i4 v578 = *(i4*)(intptr_t)v577;
	i8 v579 = (i8)(intptr_t)(ws+1176);
	i8 v580 = *(i8*)(intptr_t)v579;
	*(i4*)(intptr_t)v580 = v578;

	i8 v581 = (i8)(intptr_t)(ws+1200);
	i4 v582 = *(i4*)(intptr_t)v581;
	i4 v583 = (i4)+0;
	if ((s4)v582<(s4)v583) goto c02_0096; else goto c02_0097;

c02_0096:;

	
*(i1*)(intptr_t)(ws+1196) 
 = errno; 


	goto c02_0093;

c02_0097:;

	i1 v584 = (i1)+0;
	i8 v585 = (i8)(intptr_t)(ws+1196);
	*(i1*)(intptr_t)v585 = v584;

c02_0093:;

endsub:;
	*p561 = *(i1*)(intptr_t)(ws+1196);
}

// FCBOpenIn workspace at ws+1144 length ws+17
void f40_FCBOpenIn(i1* p586 /* errno */, i8 p587 /* filename */, i8 p588 /* fcb */) {
	*(i8*)(intptr_t)(ws+1144) = p588; /*fcb */
	*(i8*)(intptr_t)(ws+1152) = p587; /*filename */

	i8 v589 = (i8)(intptr_t)(ws+1144);
	i8 v590 = *(i8*)(intptr_t)v589;
	i8 v591 = (i8)(intptr_t)(ws+1152);
	i8 v592 = *(i8*)(intptr_t)v591;
	i4 v593 = (i4)+0;

void f39_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);
	i1 v594;
	f39_fcb_i_open(&v594, v593, v592, v590);
	i8 v595 = (i8)(intptr_t)(ws+1160);
	*(i1*)(intptr_t)v595 = v594;

endsub:;
	*p586 = *(i1*)(intptr_t)(ws+1160);
}

// FCBOpenOut workspace at ws+1152 length ws+17
void f42_FCBOpenOut(i1* p606 /* errno */, i8 p607 /* filename */, i8 p608 /* fcb */) {
	*(i8*)(intptr_t)(ws+1152) = p608; /*fcb */
	*(i8*)(intptr_t)(ws+1160) = p607; /*filename */

	i8 v609 = (i8)(intptr_t)(ws+1152);
	i8 v610 = *(i8*)(intptr_t)v609;
	i8 v611 = (i8)(intptr_t)(ws+1160);
	i8 v612 = *(i8*)(intptr_t)v611;
	i4 v613 = (i4)+578;

void f39_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);
	i1 v614;
	f39_fcb_i_open(&v614, v613, v612, v610);
	i8 v615 = (i8)(intptr_t)(ws+1168);
	*(i1*)(intptr_t)v615 = v614;

endsub:;
	*p606 = *(i1*)(intptr_t)(ws+1168);
}

// FCBClose workspace at ws+1144 length ws+16
void f43_FCBClose(i1* p616 /* errno */, i8 p617 /* fcb */) {
	*(i8*)(intptr_t)(ws+1144) = p617; /*fcb */

	i8 v618 = (i8)(intptr_t)(ws+1144);
	i8 v619 = *(i8*)(intptr_t)v618;

void f37_fcb_i_blockout(i8 /* fcb */);
	f37_fcb_i_blockout(v619);

	i8 v620 = (i8)(intptr_t)(ws+1144);
	i8 v621 = *(i8*)(intptr_t)v620;
	i4 v622 = *(i4*)(intptr_t)v621;
	i8 v623 = (i8)(intptr_t)(ws+1156);
	*(i4*)(intptr_t)v623 = v622;

	
errno = 0; 


	
close( 
*(i4*)(intptr_t)(ws+1156) 
); 


	
*(i1*)(intptr_t)(ws+1152) 
 = errno; 


endsub:;
	*p616 = *(i1*)(intptr_t)(ws+1152);
}

// fcb_i_nextchar workspace at ws+1272 length ws+8
void f47_fcb_i_nextchar(i8 p678 /* fcb */) {
	*(i8*)(intptr_t)(ws+1272) = p678; /*fcb */

	i8 v679 = (i8)(intptr_t)(ws+1272);
	i8 v680 = *(i8*)(intptr_t)v679;
	i8 v681 = v680+(+4);
	i2 v682 = *(i2*)(intptr_t)v681;
	i2 v683 = v682+(+1);
	i8 v684 = (i8)(intptr_t)(ws+1272);
	i8 v685 = *(i8*)(intptr_t)v684;
	i8 v686 = v685+(+4);
	*(i2*)(intptr_t)v686 = v683;

	i8 v687 = (i8)(intptr_t)(ws+1272);
	i8 v688 = *(i8*)(intptr_t)v687;
	i8 v689 = v688+(+4);
	i2 v690 = *(i2*)(intptr_t)v689;
	i2 v691 = (i2)+512;
	if (v690==v691) goto c02_009b; else goto c02_009c;

c02_009b:;

	i8 v692 = (i8)(intptr_t)(ws+1272);
	i8 v693 = *(i8*)(intptr_t)v692;
	i8 v694 = (i8)(intptr_t)(ws+1272);
	i8 v695 = *(i8*)(intptr_t)v694;
	i8 v696 = v695+(+8);
	i4 v697 = *(i4*)(intptr_t)v696;
	i4 v698 = v697+(+1);

void f38_fcb_i_changeblock(i4 /* newblock */, i8 /* fcb */);
	f38_fcb_i_changeblock(v698, v693);

	i2 v699 = (i2)+0;
	i8 v700 = (i8)(intptr_t)(ws+1272);
	i8 v701 = *(i8*)(intptr_t)v700;
	i8 v702 = v701+(+4);
	*(i2*)(intptr_t)v702 = v699;

	goto c02_0098;

c02_009c:;

c02_0098:;

endsub:;
}

// FCBGetChar workspace at ws+1232 length ws+9
void f48_FCBGetChar(i1* p703 /* c */, i8 p704 /* fcb */) {
	*(i8*)(intptr_t)(ws+1232) = p704; /*fcb */

	i8 v705 = (i8)(intptr_t)(ws+1232);
	i8 v706 = *(i8*)(intptr_t)v705;

void f47_fcb_i_nextchar(i8 /* fcb */);
	f47_fcb_i_nextchar(v706);

	i8 v707 = (i8)(intptr_t)(ws+1232);
	i8 v708 = *(i8*)(intptr_t)v707;
	i8 v709 = v708+(+12);
	i8 v710 = (i8)(intptr_t)(ws+1232);
	i8 v711 = *(i8*)(intptr_t)v710;
	i8 v712 = v711+(+4);
	i2 v713 = *(i2*)(intptr_t)v712;
	i8 v714 = v713;
	i8 v715 = v709+v714;
	i1 v716 = *(i1*)(intptr_t)v715;
	i8 v717 = (i8)(intptr_t)(ws+1240);
	*(i1*)(intptr_t)v717 = v716;

endsub:;
	*p703 = *(i1*)(intptr_t)(ws+1240);
}

// FCBPutChar workspace at ws+1256 length ws+9
void f49_FCBPutChar(i1 p718 /* c */, i8 p719 /* fcb */) {
	*(i8*)(intptr_t)(ws+1256) = p719; /*fcb */
	*(i1*)(intptr_t)(ws+1264) = p718; /*c */

	i8 v720 = (i8)(intptr_t)(ws+1256);
	i8 v721 = *(i8*)(intptr_t)v720;

void f47_fcb_i_nextchar(i8 /* fcb */);
	f47_fcb_i_nextchar(v721);

	i8 v722 = (i8)(intptr_t)(ws+1264);
	i1 v723 = *(i1*)(intptr_t)v722;
	i8 v724 = (i8)(intptr_t)(ws+1256);
	i8 v725 = *(i8*)(intptr_t)v724;
	i8 v726 = v725+(+12);
	i8 v727 = (i8)(intptr_t)(ws+1256);
	i8 v728 = *(i8*)(intptr_t)v727;
	i8 v729 = v728+(+4);
	i2 v730 = *(i2*)(intptr_t)v729;
	i8 v731 = v730;
	i8 v732 = v726+v731;
	*(i1*)(intptr_t)v732 = v723;

	i1 v733 = (i1)+1;
	i8 v734 = (i8)(intptr_t)(ws+1256);
	i8 v735 = *(i8*)(intptr_t)v734;
	i8 v736 = v735+(+6);
	*(i1*)(intptr_t)v736 = v733;

endsub:;
}
const i1 c02_s0000[] = { 0x43,0x4f,0x57,0x57,0x52,0x41,0x50,0x3a,0x20,0 };
const i1 c02_s0001[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
const i1 c02_s0002[] = { 0x63,0x6f,0x77,0x77,0x72,0x61,0x70,0x20,0x3c,0x69,0x6e,0x70,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x20,0x3c,0x6f,0x75,0x74,0x70,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x0a,0 };

// SyntaxError workspace at ws+1144 length ws+0
void f53_SyntaxError(void) {

	i8 v802 = (i8)(intptr_t)c02_s0002;

void f11_print(i8 /* ptr */);
	f11_print(v802);


void f6_ExitWithError(void);
	f6_ExitWithError();

endsub:;
}
const i1 c02_s0003[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0 };

// FatalError workspace at ws+1232 length ws+8
void f54_FatalError(i8 p803 /* s */) {
	*(i8*)(intptr_t)(ws+1232) = p803; /*s */

	i8 v804 = (i8)(intptr_t)c02_s0003;

void f11_print(i8 /* ptr */);
	f11_print(v804);

	i8 v805 = (i8)(intptr_t)(ws+1232);
	i8 v806 = *(i8*)(intptr_t)v805;

void f11_print(i8 /* ptr */);
	f11_print(v806);


void f12_print_nl(void);
	f12_print_nl();


void f6_ExitWithError(void);
	f6_ExitWithError();

endsub:;
}

// E_b8 workspace at ws+1232 length ws+16
void f55_E_b8(i1 p807 /* byte */) {
	*(i1*)(intptr_t)(ws+1232) = p807; /*byte */

	i8 v808 = (i8)(intptr_t)(ws+1088);
	i8 v809 = *(i8*)(intptr_t)v808;
	i8 v810 = (i8)+0;
	if (v809==v810) goto c02_00b4; else goto c02_00b3;

c02_00b3:;

	i8 v811 = (i8)(intptr_t)(ws+1088);
	i8 v812 = *(i8*)(intptr_t)v811;
	i8 v813 = v812+(+16);
	i8 v814 = *(i8*)(intptr_t)v813;
	i8 v815 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v815 = v814;

	i8 v816 = (i8)(intptr_t)(ws+1240);
	i8 v817 = *(i8*)(intptr_t)v816;
	i8 v818 = v817+(+255);
	i1 v819 = *(i1*)(intptr_t)v818;
	i1 v820 = (i1)+255;
	if (v819==v820) goto c02_00b8; else goto c02_00b9;

c02_00b8:;

	i8 v821 = (i8)+264;

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v822;
	f31_Alloc(&v822, v821);
	i8 v823 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v823 = v822;

	i8 v824 = (i8)(intptr_t)(ws+1240);
	i8 v825 = *(i8*)(intptr_t)v824;
	i8 v826 = (i8)(intptr_t)(ws+1088);
	i8 v827 = *(i8*)(intptr_t)v826;
	i8 v828 = v827+(+16);
	i8 v829 = *(i8*)(intptr_t)v828;
	i8 v830 = v829+(+256);
	*(i8*)(intptr_t)v830 = v825;

	i8 v831 = (i8)(intptr_t)(ws+1240);
	i8 v832 = *(i8*)(intptr_t)v831;
	i8 v833 = (i8)(intptr_t)(ws+1088);
	i8 v834 = *(i8*)(intptr_t)v833;
	i8 v835 = v834+(+16);
	*(i8*)(intptr_t)v835 = v832;

	goto c02_00b5;

c02_00b9:;

c02_00b5:;

	i8 v836 = (i8)(intptr_t)(ws+1232);
	i1 v837 = *(i1*)(intptr_t)v836;
	i8 v838 = (i8)(intptr_t)(ws+1240);
	i8 v839 = *(i8*)(intptr_t)v838;
	i8 v840 = (i8)(intptr_t)(ws+1240);
	i8 v841 = *(i8*)(intptr_t)v840;
	i8 v842 = v841+(+255);
	i1 v843 = *(i1*)(intptr_t)v842;
	i8 v844 = v843;
	i8 v845 = v839+v844;
	*(i1*)(intptr_t)v845 = v837;

	i8 v846 = (i8)(intptr_t)(ws+1240);
	i8 v847 = *(i8*)(intptr_t)v846;
	i8 v848 = v847+(+255);
	i1 v849 = *(i1*)(intptr_t)v848;
	i1 v850 = v849+(+1);
	i8 v851 = (i8)(intptr_t)(ws+1240);
	i8 v852 = *(i8*)(intptr_t)v851;
	i8 v853 = v852+(+255);
	*(i1*)(intptr_t)v853 = v850;

	i8 v854 = (i8)(intptr_t)(ws+1088);
	i8 v855 = *(i8*)(intptr_t)v854;
	i8 v856 = v855+(+24);
	i2 v857 = *(i2*)(intptr_t)v856;
	i2 v858 = v857+(+1);
	i8 v859 = (i8)(intptr_t)(ws+1088);
	i8 v860 = *(i8*)(intptr_t)v859;
	i8 v861 = v860+(+24);
	*(i2*)(intptr_t)v861 = v858;

	goto c02_00b0;

c02_00b4:;

c02_00b0:;

endsub:;
}

// E workspace at ws+1216 length ws+9
void f56_E(i8 p862 /* text */) {
	*(i8*)(intptr_t)(ws+1216) = p862; /*text */

c02_00ba:;

	i8 v863 = (i8)(intptr_t)(ws+1216);
	i8 v864 = *(i8*)(intptr_t)v863;
	i1 v865 = *(i1*)(intptr_t)v864;
	i8 v866 = (i8)(intptr_t)(ws+1224);
	*(i1*)(intptr_t)v866 = v865;

	i8 v867 = (i8)(intptr_t)(ws+1216);
	i8 v868 = *(i8*)(intptr_t)v867;
	i8 v869 = v868+(+1);
	i8 v870 = (i8)(intptr_t)(ws+1216);
	*(i8*)(intptr_t)v870 = v869;

	i8 v871 = (i8)(intptr_t)(ws+1224);
	i1 v872 = *(i1*)(intptr_t)v871;
	i1 v873 = (i1)+0;
	if (v872==v873) goto c02_00bf; else goto c02_00c0;

c02_00bf:;

	goto c02_00bb;

c02_00c0:;

c02_00bc:;

	i8 v874 = (i8)(intptr_t)(ws+1224);
	i1 v875 = *(i1*)(intptr_t)v874;

void f55_E_b8(i1 /* byte */);
	f55_E_b8(v875);

	goto c02_00ba;

c02_00bb:;

endsub:;
}

// E_b16 workspace at ws+1216 length ws+2
void f57_E_b16(i2 p876 /* word */) {
	*(i2*)(intptr_t)(ws+1216) = p876; /*word */

	i8 v877 = (i8)(intptr_t)(ws+1216);
	i2 v878 = *(i2*)(intptr_t)v877;
	i1 v879 = v878;

void f55_E_b8(i1 /* byte */);
	f55_E_b8(v879);

	i8 v880 = (i8)(intptr_t)(ws+1216);
	i2 v881 = *(i2*)(intptr_t)v880;
	i1 v882 = (i1)+8;
	i2 v883 = ((i2)v881)>>v882;
	i1 v884 = v883;

void f55_E_b8(i1 /* byte */);
	f55_E_b8(v884);

endsub:;
}

// EmitterPushChunk workspace at ws+1216 length ws+8
void f59_EmitterPushChunk(void) {

	i8 v894 = (i8)+26;

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v895;
	f31_Alloc(&v895, v894);
	i8 v896 = (i8)(intptr_t)(ws+1216);
	*(i8*)(intptr_t)v896 = v895;

	i8 v897 = (i8)+264;

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v898;
	f31_Alloc(&v898, v897);
	i8 v899 = (i8)(intptr_t)(ws+1216);
	i8 v900 = *(i8*)(intptr_t)v899;
	i8 v901 = v900+(+16);
	*(i8*)(intptr_t)v901 = v898;

	i8 v902 = (i8)(intptr_t)(ws+1216);
	i8 v903 = *(i8*)(intptr_t)v902;
	i8 v904 = v903+(+16);
	i8 v905 = *(i8*)(intptr_t)v904;
	i8 v906 = (i8)(intptr_t)(ws+1216);
	i8 v907 = *(i8*)(intptr_t)v906;
	i8 v908 = v907+(+8);
	*(i8*)(intptr_t)v908 = v905;

	i8 v909 = (i8)(intptr_t)(ws+1088);
	i8 v910 = *(i8*)(intptr_t)v909;
	i8 v911 = (i8)(intptr_t)(ws+1216);
	i8 v912 = *(i8*)(intptr_t)v911;
	*(i8*)(intptr_t)v912 = v910;

	i8 v913 = (i8)(intptr_t)(ws+1216);
	i8 v914 = *(i8*)(intptr_t)v913;
	i8 v915 = (i8)(intptr_t)(ws+1088);
	*(i8*)(intptr_t)v915 = v914;

endsub:;
}

// EmitterPopChunk workspace at ws+1216 length ws+40
void f60_EmitterPopChunk(i1 p916 /* type */) {
	*(i1*)(intptr_t)(ws+1216) = p916; /*type */

	i8 v917 = (i8)(intptr_t)(ws+564);
	i8 v918 = (i8)(intptr_t)(ws+1216);
	i1 v919 = *(i1*)(intptr_t)v918;

void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	f49_FCBPutChar(v919, v917);

	i8 v920 = (i8)(intptr_t)(ws+1088);
	i8 v921 = *(i8*)(intptr_t)v920;
	i8 v922 = v921+(+24);
	i2 v923 = *(i2*)(intptr_t)v922;
	i8 v924 = (i8)(intptr_t)(ws+1218);
	*(i2*)(intptr_t)v924 = v923;

	i8 v925 = (i8)(intptr_t)(ws+564);
	i8 v926 = (i8)(intptr_t)(ws+1218);
	i2 v927 = *(i2*)(intptr_t)v926;
	i1 v928 = v927;

void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	f49_FCBPutChar(v928, v925);

	i8 v929 = (i8)(intptr_t)(ws+564);
	i8 v930 = (i8)(intptr_t)(ws+1218);
	i2 v931 = *(i2*)(intptr_t)v930;
	i1 v932 = (i1)+8;
	i2 v933 = ((i2)v931)>>v932;
	i1 v934 = v933;

void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	f49_FCBPutChar(v934, v929);

	i8 v935 = (i8)(intptr_t)(ws+1088);
	i8 v936 = *(i8*)(intptr_t)v935;
	i8 v937 = v936+(+8);
	i8 v938 = *(i8*)(intptr_t)v937;
	i8 v939 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v939 = v938;

c02_00c3:;

	i8 v940 = (i8)(intptr_t)(ws+1224);
	i8 v941 = *(i8*)(intptr_t)v940;
	i8 v942 = (i8)+0;
	if (v941==v942) goto c02_00c6; else goto c02_00c5;

c02_00c5:;

	i1 v943 = (i1)+0;
	i8 v944 = (i8)(intptr_t)(ws+1232);
	*(i1*)(intptr_t)v944 = v943;

c02_00c9:;

	i8 v945 = (i8)(intptr_t)(ws+1232);
	i1 v946 = *(i1*)(intptr_t)v945;
	i8 v947 = (i8)(intptr_t)(ws+1224);
	i8 v948 = *(i8*)(intptr_t)v947;
	i8 v949 = v948+(+255);
	i1 v950 = *(i1*)(intptr_t)v949;
	if (v946==v950) goto c02_00cc; else goto c02_00cb;

c02_00cb:;

	i8 v951 = (i8)(intptr_t)(ws+564);
	i8 v952 = (i8)(intptr_t)(ws+1224);
	i8 v953 = *(i8*)(intptr_t)v952;
	i8 v954 = (i8)(intptr_t)(ws+1232);
	i1 v955 = *(i1*)(intptr_t)v954;
	i8 v956 = v955;
	i8 v957 = v953+v956;
	i1 v958 = *(i1*)(intptr_t)v957;

void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	f49_FCBPutChar(v958, v951);

	i8 v959 = (i8)(intptr_t)(ws+1232);
	i1 v960 = *(i1*)(intptr_t)v959;
	i1 v961 = v960+(+1);
	i8 v962 = (i8)(intptr_t)(ws+1232);
	*(i1*)(intptr_t)v962 = v961;

	goto c02_00c9;

c02_00cc:;

	i8 v963 = (i8)(intptr_t)(ws+1224);
	i8 v964 = *(i8*)(intptr_t)v963;
	i8 v965 = v964+(+256);
	i8 v966 = *(i8*)(intptr_t)v965;
	i8 v967 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v967 = v966;

	i8 v968 = (i8)(intptr_t)(ws+1224);
	i8 v969 = *(i8*)(intptr_t)v968;

void f32_Free(i8 /* block */);
	f32_Free(v969);

	i8 v970 = (i8)(intptr_t)(ws+1240);
	i8 v971 = *(i8*)(intptr_t)v970;
	i8 v972 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v972 = v971;

	goto c02_00c3;

c02_00c6:;

	i8 v973 = (i8)(intptr_t)(ws+1088);
	i8 v974 = *(i8*)(intptr_t)v973;
	i8 v975 = *(i8*)(intptr_t)v974;
	i8 v976 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v976 = v975;

	i8 v977 = (i8)(intptr_t)(ws+1088);
	i8 v978 = *(i8*)(intptr_t)v977;

void f32_Free(i8 /* block */);
	f32_Free(v978);

	i8 v979 = (i8)(intptr_t)(ws+1248);
	i8 v980 = *(i8*)(intptr_t)v979;
	i8 v981 = (i8)(intptr_t)(ws+1088);
	*(i8*)(intptr_t)v981 = v980;

endsub:;
}
const i1 c02_s0004[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };

// EmitterOpenfile workspace at ws+1144 length ws+8
void f61_EmitterOpenfile(i8 p982 /* filename */) {
	*(i8*)(intptr_t)(ws+1144) = p982; /*filename */

	i8 v983 = (i8)(intptr_t)(ws+564);
	i8 v984 = (i8)(intptr_t)(ws+1144);
	i8 v985 = *(i8*)(intptr_t)v984;

void f42_FCBOpenOut(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
	i1 v986;
	f42_FCBOpenOut(&v986, v985, v983);
	i1 v987 = (i1)+0;
	if (v986==v987) goto c02_00d1; else goto c02_00d0;

c02_00d0:;

	i8 v988 = (i8)(intptr_t)c02_s0004;

void f54_FatalError(i8 /* s */);
	f54_FatalError(v988);

	goto c02_00cd;

c02_00d1:;

c02_00cd:;

endsub:;
}
const i1 c02_s0005[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };

// EmitterClosefile workspace at ws+1144 length ws+0
void f62_EmitterClosefile(void) {

	i8 v989 = (i8)(intptr_t)(ws+564);
	i1 v990 = (i1)+69;

void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	f49_FCBPutChar(v990, v989);

	i8 v991 = (i8)(intptr_t)(ws+564);
	i1 v992 = (i1)+0;

void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	f49_FCBPutChar(v992, v991);

	i8 v993 = (i8)(intptr_t)(ws+564);
	i1 v994 = (i1)+0;

void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	f49_FCBPutChar(v994, v993);

	i8 v995 = (i8)(intptr_t)(ws+564);

void f43_FCBClose(i1* /* errno */, i8 /* fcb */);
	i1 v996;
	f43_FCBClose(&v996, v995);
	i1 v997 = (i1)+0;
	if (v996==v997) goto c02_00d6; else goto c02_00d5;

c02_00d5:;

	i8 v998 = (i8)(intptr_t)c02_s0005;

void f54_FatalError(i8 /* s */);
	f54_FatalError(v998);

	goto c02_00d2;

c02_00d6:;

c02_00d2:;

endsub:;
}

// EmitterDeclareSubroutine workspace at ws+1192 length ws+16
void f63_EmitterDeclareSubroutine(i8 p999 /* name */, i2 p1000 /* id */) {
	*(i2*)(intptr_t)(ws+1192) = p1000; /*id */
	*(i8*)(intptr_t)(ws+1200) = p999; /*name */


void f59_EmitterPushChunk(void);
	f59_EmitterPushChunk();

	i8 v1001 = (i8)(intptr_t)(ws+1192);
	i2 v1002 = *(i2*)(intptr_t)v1001;

void f57_E_b16(i2 /* word */);
	f57_E_b16(v1002);

	i8 v1003 = (i8)(intptr_t)(ws+1200);
	i8 v1004 = *(i8*)(intptr_t)v1003;

void f56_E(i8 /* text */);
	f56_E(v1004);

	i1 v1005 = (i1)+78;

void f60_EmitterPopChunk(i1 /* type */);
	f60_EmitterPopChunk(v1005);

endsub:;
}

// EmitterDeclareExternal workspace at ws+1200 length ws+16
void f64_EmitterDeclareExternal(i8 p1006 /* name */, i2 p1007 /* id */) {
	*(i2*)(intptr_t)(ws+1200) = p1007; /*id */
	*(i8*)(intptr_t)(ws+1208) = p1006; /*name */


void f59_EmitterPushChunk(void);
	f59_EmitterPushChunk();

	i8 v1008 = (i8)(intptr_t)(ws+1200);
	i2 v1009 = *(i2*)(intptr_t)v1008;

void f57_E_b16(i2 /* word */);
	f57_E_b16(v1009);

	i8 v1010 = (i8)(intptr_t)(ws+1208);
	i8 v1011 = *(i8*)(intptr_t)v1010;

void f56_E(i8 /* text */);
	f56_E(v1011);

	i1 v1012 = (i1)+88;

void f60_EmitterPopChunk(i1 /* type */);
	f60_EmitterPopChunk(v1012);

endsub:;
}

// EmitterReferenceSubroutine workspace at ws+1208 length ws+4
void f65_EmitterReferenceSubroutine(i2 p1013 /* used */, i2 p1014 /* user */) {
	*(i2*)(intptr_t)(ws+1208) = p1014; /*user */
	*(i2*)(intptr_t)(ws+1210) = p1013; /*used */

	i8 v1015 = (i8)(intptr_t)(ws+1208);
	i2 v1016 = *(i2*)(intptr_t)v1015;
	i8 v1017 = (i8)(intptr_t)(ws+1210);
	i2 v1018 = *(i2*)(intptr_t)v1017;
	if (v1016==v1018) goto c02_00db; else goto c02_00da;

c02_00da:;


void f59_EmitterPushChunk(void);
	f59_EmitterPushChunk();

	i8 v1019 = (i8)(intptr_t)(ws+1208);
	i2 v1020 = *(i2*)(intptr_t)v1019;

void f57_E_b16(i2 /* word */);
	f57_E_b16(v1020);

	i8 v1021 = (i8)(intptr_t)(ws+1210);
	i2 v1022 = *(i2*)(intptr_t)v1021;

void f57_E_b16(i2 /* word */);
	f57_E_b16(v1022);

	i1 v1023 = (i1)+82;

void f60_EmitterPopChunk(i1 /* type */);
	f60_EmitterPopChunk(v1023);

	goto c02_00d7;

c02_00db:;

c02_00d7:;

endsub:;
}

// EmitterDeclareWorkspace workspace at ws+1200 length ws+6
void f66_EmitterDeclareWorkspace(i2 p1024 /* workspace */, i1 p1025 /* wid */, i2 p1026 /* id */) {
	*(i2*)(intptr_t)(ws+1200) = p1026; /*id */
	*(i1*)(intptr_t)(ws+1202) = p1025; /*wid */
	*(i2*)(intptr_t)(ws+1204) = p1024; /*workspace */


void f59_EmitterPushChunk(void);
	f59_EmitterPushChunk();

	i8 v1027 = (i8)(intptr_t)(ws+1200);
	i2 v1028 = *(i2*)(intptr_t)v1027;

void f57_E_b16(i2 /* word */);
	f57_E_b16(v1028);

	i8 v1029 = (i8)(intptr_t)(ws+1202);
	i1 v1030 = *(i1*)(intptr_t)v1029;

void f55_E_b8(i1 /* byte */);
	f55_E_b8(v1030);

	i8 v1031 = (i8)(intptr_t)(ws+1204);
	i2 v1032 = *(i2*)(intptr_t)v1031;

void f57_E_b16(i2 /* word */);
	f57_E_b16(v1032);

	i1 v1033 = (i1)+87;

void f60_EmitterPopChunk(i1 /* type */);
	f60_EmitterPopChunk(v1033);

endsub:;
}

// GetSymbol workspace at ws+1208 length ws+16
void f67_GetSymbol(i8* p1040 /* symbol */, i8 p1041 /* name */) {
	*(i8*)(intptr_t)(ws+1208) = p1041; /*name */

	i8 v1042 = (i8)(intptr_t)(ws+1120);
	i8 v1043 = *(i8*)(intptr_t)v1042;
	i8 v1044 = (i8)(intptr_t)(ws+1216);
	*(i8*)(intptr_t)v1044 = v1043;

c02_00de:;

	i8 v1045 = (i8)(intptr_t)(ws+1216);
	i8 v1046 = *(i8*)(intptr_t)v1045;
	i8 v1047 = (i8)+0;
	if (v1046==v1047) goto c02_00e1; else goto c02_00e0;

c02_00e0:;

	i8 v1048 = (i8)(intptr_t)(ws+1208);
	i8 v1049 = *(i8*)(intptr_t)v1048;
	i8 v1050 = (i8)(intptr_t)(ws+1216);
	i8 v1051 = *(i8*)(intptr_t)v1050;
	i8 v1052 = v1051+(+8);
	i8 v1053 = *(i8*)(intptr_t)v1052;

void f25_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);
	i1 v1054;
	f25_StrCmp(&v1054, v1053, v1049);
	i1 v1055 = (i1)+0;
	if (v1054==v1055) goto c02_00e5; else goto c02_00e6;

c02_00e5:;

	goto endsub;

c02_00e6:;

c02_00e2:;

	i8 v1056 = (i8)(intptr_t)(ws+1216);
	i8 v1057 = *(i8*)(intptr_t)v1056;
	i8 v1058 = *(i8*)(intptr_t)v1057;
	i8 v1059 = (i8)(intptr_t)(ws+1216);
	*(i8*)(intptr_t)v1059 = v1058;

	goto c02_00de;

c02_00e1:;

	i8 v1060 = (i8)+19;

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v1061;
	f31_Alloc(&v1061, v1060);
	i8 v1062 = (i8)(intptr_t)(ws+1216);
	*(i8*)(intptr_t)v1062 = v1061;

	i8 v1063 = (i8)(intptr_t)(ws+1208);
	i8 v1064 = *(i8*)(intptr_t)v1063;

void f33_StrDup(i8* /* sout */, i8 /* s */);
	i8 v1065;
	f33_StrDup(&v1065, v1064);
	i8 v1066 = (i8)(intptr_t)(ws+1216);
	i8 v1067 = *(i8*)(intptr_t)v1066;
	i8 v1068 = v1067+(+8);
	*(i8*)(intptr_t)v1068 = v1065;

	i8 v1069 = (i8)(intptr_t)(ws+1128);
	i2 v1070 = *(i2*)(intptr_t)v1069;
	i8 v1071 = (i8)(intptr_t)(ws+1216);
	i8 v1072 = *(i8*)(intptr_t)v1071;
	i8 v1073 = v1072+(+16);
	*(i2*)(intptr_t)v1073 = v1070;

	i8 v1074 = (i8)(intptr_t)(ws+1128);
	i2 v1075 = *(i2*)(intptr_t)v1074;
	i2 v1076 = v1075+(+1);
	i8 v1077 = (i8)(intptr_t)(ws+1128);
	*(i2*)(intptr_t)v1077 = v1076;

	i8 v1078 = (i8)(intptr_t)(ws+1120);
	i8 v1079 = *(i8*)(intptr_t)v1078;
	i8 v1080 = (i8)(intptr_t)(ws+1216);
	i8 v1081 = *(i8*)(intptr_t)v1080;
	*(i8*)(intptr_t)v1081 = v1079;

	i8 v1082 = (i8)(intptr_t)(ws+1216);
	i8 v1083 = *(i8*)(intptr_t)v1082;
	i8 v1084 = (i8)(intptr_t)(ws+1120);
	*(i8*)(intptr_t)v1084 = v1083;

endsub:;
	*p1040 = *(i8*)(intptr_t)(ws+1216);
}
const i1 c02_s0006[] = { 0x40,0 };

// GetC workspace at ws+1232 length ws+0
void f69_GetC(void) {

	i8 v1091 = (i8)(intptr_t)(ws+40);

void f48_FCBGetChar(i1* /* c */, i8 /* fcb */);
	i1 v1092;
	f48_FCBGetChar(&v1092, v1091);
	i8 v1093 = (i8)(intptr_t)(ws+1144);
	*(i1*)(intptr_t)v1093 = v1092;

endsub:;
}
const i1 c02_s0007[] = { 0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0x63,0x6f,0x77,0x77,0x72,0x61,0x70,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x69,0x76,0x65,0 };

// ExpectC workspace at ws+1208 length ws+1
void f70_ExpectC(i1 p1094 /* want */) {
	*(i1*)(intptr_t)(ws+1208) = p1094; /*want */

	i8 v1095 = (i8)(intptr_t)(ws+1144);
	i1 v1096 = *(i1*)(intptr_t)v1095;
	i8 v1097 = (i8)(intptr_t)(ws+1208);
	i1 v1098 = *(i1*)(intptr_t)v1097;
	if (v1096==v1098) goto c02_00eb; else goto c02_00ea;

c02_00ea:;

	i8 v1099 = (i8)(intptr_t)c02_s0007;

void f54_FatalError(i8 /* s */);
	f54_FatalError(v1099);

	goto c02_00e7;

c02_00eb:;

c02_00e7:;


void f69_GetC(void);
	f69_GetC();

endsub:;
}

// SkipToEndOfLine workspace at ws+1184 length ws+0
void f71_SkipToEndOfLine(void) {

c02_00ec:;

	i8 v1100 = (i8)(intptr_t)(ws+1144);
	i1 v1101 = *(i1*)(intptr_t)v1100;
	i1 v1102 = (i1)+0;
	if (v1101==v1102) goto c02_00f5; else goto c02_00f8;

c02_00f8:;

	i8 v1103 = (i8)(intptr_t)(ws+1144);
	i1 v1104 = *(i1*)(intptr_t)v1103;
	i1 v1105 = (i1)+26;
	if (v1104==v1105) goto c02_00f5; else goto c02_00f7;

c02_00f7:;

	i8 v1106 = (i8)(intptr_t)(ws+1144);
	i1 v1107 = *(i1*)(intptr_t)v1106;
	i1 v1108 = (i1)+10;
	if (v1107==v1108) goto c02_00f5; else goto c02_00f6;

c02_00f5:;

	goto c02_00ed;

c02_00f6:;

c02_00ee:;


void f69_GetC(void);
	f69_GetC();

	goto c02_00ec;

c02_00ed:;

endsub:;
}

// SkipWhitespace workspace at ws+1232 length ws+0
void f72_SkipWhitespace(void) {

c02_00f9:;

	i8 v1109 = (i8)(intptr_t)(ws+1144);
	i1 v1110 = *(i1*)(intptr_t)v1109;
	i1 v1111 = (i1)+32;
	if (v1110==v1111) goto c02_0101; else goto c02_0102;

c02_0102:;

	i8 v1112 = (i8)(intptr_t)(ws+1144);
	i1 v1113 = *(i1*)(intptr_t)v1112;
	i1 v1114 = (i1)+9;
	if (v1113==v1114) goto c02_0101; else goto c02_0100;

c02_0100:;

	goto c02_00fa;

c02_0101:;

c02_00fb:;


void f69_GetC(void);
	f69_GetC();

	goto c02_00f9;

c02_00fa:;

endsub:;
}
const i1 c02_s0008[] = { 0x77,0x6f,0x72,0x64,0x20,0x74,0x6f,0x6f,0x20,0x6c,0x6f,0x6e,0x67,0 };

// ReadWord workspace at ws+1224 length ws+8
void f73_ReadWord(void) {


void f72_SkipWhitespace(void);
	f72_SkipWhitespace();

	i8 v1115 = (i8)(intptr_t)(ws+1148);
	i8 v1116 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v1116 = v1115;

c02_0103:;

	i8 v1117 = (i8)(intptr_t)(ws+1144);
	i1 v1118 = *(i1*)(intptr_t)v1117;
	i1 v1119 = (i1)+48;
	if (v1118<v1119) goto c02_011b; else goto c02_011c;

c02_011c:;

	i1 v1120 = (i1)+57;
	i8 v1121 = (i8)(intptr_t)(ws+1144);
	i1 v1122 = *(i1*)(intptr_t)v1121;
	if (v1120<v1122) goto c02_011b; else goto c02_0117;

c02_011b:;

	i8 v1123 = (i8)(intptr_t)(ws+1144);
	i1 v1124 = *(i1*)(intptr_t)v1123;
	i1 v1125 = (i1)+97;
	if (v1124<v1125) goto c02_011a; else goto c02_011d;

c02_011d:;

	i1 v1126 = (i1)+122;
	i8 v1127 = (i8)(intptr_t)(ws+1144);
	i1 v1128 = *(i1*)(intptr_t)v1127;
	if (v1126<v1128) goto c02_011a; else goto c02_0117;

c02_011a:;

	i8 v1129 = (i8)(intptr_t)(ws+1144);
	i1 v1130 = *(i1*)(intptr_t)v1129;
	i1 v1131 = (i1)+65;
	if (v1130<v1131) goto c02_0119; else goto c02_011e;

c02_011e:;

	i1 v1132 = (i1)+90;
	i8 v1133 = (i8)(intptr_t)(ws+1144);
	i1 v1134 = *(i1*)(intptr_t)v1133;
	if (v1132<v1134) goto c02_0119; else goto c02_0117;

c02_0119:;

	i8 v1135 = (i8)(intptr_t)(ws+1144);
	i1 v1136 = *(i1*)(intptr_t)v1135;
	i1 v1137 = (i1)+95;
	if (v1136==v1137) goto c02_0117; else goto c02_0118;

c02_0118:;

	i8 v1138 = (i8)(intptr_t)(ws+1144);
	i1 v1139 = *(i1*)(intptr_t)v1138;
	i1 v1140 = (i1)+64;
	if (v1139==v1140) goto c02_0117; else goto c02_0116;

c02_0116:;

	goto c02_0104;

c02_0117:;

c02_0105:;

	i8 v1141 = (i8)(intptr_t)(ws+1144);
	i1 v1142 = *(i1*)(intptr_t)v1141;
	i8 v1143 = (i8)(intptr_t)(ws+1224);
	i8 v1144 = *(i8*)(intptr_t)v1143;
	*(i1*)(intptr_t)v1144 = v1142;

	i8 v1145 = (i8)(intptr_t)(ws+1224);
	i8 v1146 = *(i8*)(intptr_t)v1145;
	i8 v1147 = v1146+(+1);
	i8 v1148 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v1148 = v1147;

	i8 v1149 = (i8)(intptr_t)(ws+1224);
	i8 v1150 = *(i8*)(intptr_t)v1149;
	i8 v1151 = (i8)(intptr_t)(ws+1180);
	if (v1150==v1151) goto c02_0122; else goto c02_0123;

c02_0122:;

	i8 v1152 = (i8)(intptr_t)c02_s0008;

void f54_FatalError(i8 /* s */);
	f54_FatalError(v1152);

	goto c02_011f;

c02_0123:;

c02_011f:;


void f69_GetC(void);
	f69_GetC();

	goto c02_0103;

c02_0104:;

	i1 v1153 = (i1)+0;
	i8 v1154 = (i8)(intptr_t)(ws+1224);
	i8 v1155 = *(i8*)(intptr_t)v1154;
	*(i1*)(intptr_t)v1155 = v1153;

endsub:;
}
const i1 c02_s0009[] = { 0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };

// ReadNumber workspace at ws+1208 length ws+16
void f74_ReadNumber(i4* p1156 /* result */) {


void f73_ReadWord(void);
	f73_ReadWord();

	i8 v1157 = (i8)(intptr_t)(ws+1148);

void f21_AToI(i4* /* result */, i8* /* ptr */, i8 /* buffer */);
	i4 v1158;
	i8 v1159;
	f21_AToI(&v1158, &v1159, v1157);

	i8 v1160 = (i8)(intptr_t)(ws+1216);
	*(i8*)(intptr_t)v1160 = v1159;

	i8 v1161 = (i8)(intptr_t)(ws+1208);
	*(i4*)(intptr_t)v1161 = v1158;

	i8 v1162 = (i8)(intptr_t)(ws+1216);
	i8 v1163 = *(i8*)(intptr_t)v1162;
	i8 v1164 = (i8)(intptr_t)(ws+1148);
	if (v1163==v1164) goto c02_0127; else goto c02_0128;

c02_0127:;

	i8 v1165 = (i8)(intptr_t)c02_s0009;

void f54_FatalError(i8 /* s */);
	f54_FatalError(v1165);

	goto c02_0124;

c02_0128:;

c02_0124:;

endsub:;
	*p1156 = *(i4*)(intptr_t)(ws+1208);
}

// MarkSubroutinePublic workspace at ws+1192 length ws+8
void f75_MarkSubroutinePublic(i8 p1166 /* symbol */) {
	*(i8*)(intptr_t)(ws+1192) = p1166; /*symbol */

	i8 v1167 = (i8)(intptr_t)(ws+1192);
	i8 v1168 = *(i8*)(intptr_t)v1167;
	i8 v1169 = v1168+(+18);
	i1 v1170 = *(i1*)(intptr_t)v1169;
	i1 v1171 = v1170&(+2);
	i1 v1172 = (i1)+0;
	if (v1171==v1172) goto c02_012c; else goto c02_012d;

c02_012c:;

	i8 v1173 = (i8)(intptr_t)(ws+1192);
	i8 v1174 = *(i8*)(intptr_t)v1173;
	i8 v1175 = v1174+(+18);
	i1 v1176 = *(i1*)(intptr_t)v1175;
	i1 v1177 = v1176|(+2);
	i8 v1178 = (i8)(intptr_t)(ws+1192);
	i8 v1179 = *(i8*)(intptr_t)v1178;
	i8 v1180 = v1179+(+18);
	*(i1*)(intptr_t)v1180 = v1177;

	i8 v1181 = (i8)(intptr_t)(ws+1192);
	i8 v1182 = *(i8*)(intptr_t)v1181;
	i8 v1183 = v1182+(+16);
	i2 v1184 = *(i2*)(intptr_t)v1183;
	i8 v1185 = (i8)(intptr_t)(ws+1192);
	i8 v1186 = *(i8*)(intptr_t)v1185;
	i8 v1187 = v1186+(+8);
	i8 v1188 = *(i8*)(intptr_t)v1187;

void f64_EmitterDeclareExternal(i8 /* name */, i2 /* id */);
	f64_EmitterDeclareExternal(v1188, v1184);

	goto c02_0129;

c02_012d:;

c02_0129:;

endsub:;
}

// CloseChunk workspace at ws+1192 length ws+0
void f77_CloseChunk(void) {

	i8 v1191 = (i8)(intptr_t)(ws+1136);
	i8 v1192 = *(i8*)(intptr_t)v1191;
	i8 v1193 = (i8)+0;
	if (v1192==v1193) goto c02_0132; else goto c02_0131;

c02_0131:;

	i1 v1194 = (i1)+83;

void f60_EmitterPopChunk(i1 /* type */);
	f60_EmitterPopChunk(v1194);

	i8 v1195 = (i8)+0;
	i8 v1196 = (i8)(intptr_t)(ws+1136);
	*(i8*)(intptr_t)v1196 = v1195;

	goto c02_012e;

c02_0132:;

c02_012e:;

endsub:;
}

// DeclareSubroutine workspace at ws+1184 length ws+1
void f78_DeclareSubroutine(i1 p1197 /* exported */) {
	*(i1*)(intptr_t)(ws+1184) = p1197; /*exported */


void f77_CloseChunk(void);
	f77_CloseChunk();


void f69_GetC(void);
	f69_GetC();


void f73_ReadWord(void);
	f73_ReadWord();

	i8 v1198 = (i8)(intptr_t)(ws+1148);

void f67_GetSymbol(i8* /* symbol */, i8 /* name */);
	i8 v1199;
	f67_GetSymbol(&v1199, v1198);
	i8 v1200 = (i8)(intptr_t)(ws+1136);
	*(i8*)(intptr_t)v1200 = v1199;

	i8 v1201 = (i8)(intptr_t)(ws+1136);
	i8 v1202 = *(i8*)(intptr_t)v1201;
	i8 v1203 = v1202+(+18);
	i1 v1204 = *(i1*)(intptr_t)v1203;
	i1 v1205 = v1204|(+1);
	i8 v1206 = (i8)(intptr_t)(ws+1136);
	i8 v1207 = *(i8*)(intptr_t)v1206;
	i8 v1208 = v1207+(+18);
	*(i1*)(intptr_t)v1208 = v1205;

	i8 v1209 = (i8)(intptr_t)(ws+1184);
	i1 v1210 = *(i1*)(intptr_t)v1209;
	i1 v1211 = (i1)+0;
	if (v1210==v1211) goto c02_0137; else goto c02_0136;

c02_0136:;

	i8 v1212 = (i8)(intptr_t)(ws+1136);
	i8 v1213 = *(i8*)(intptr_t)v1212;

void f75_MarkSubroutinePublic(i8 /* symbol */);
	f75_MarkSubroutinePublic(v1213);

	goto c02_0133;

c02_0137:;

c02_0133:;

	i8 v1214 = (i8)(intptr_t)(ws+1136);
	i8 v1215 = *(i8*)(intptr_t)v1214;
	i8 v1216 = v1215+(+18);
	i1 v1217 = *(i1*)(intptr_t)v1216;
	i1 v1218 = v1217&(+4);
	i1 v1219 = (i1)+0;
	if (v1218==v1219) goto c02_013b; else goto c02_013c;

c02_013b:;

	i8 v1220 = (i8)(intptr_t)(ws+1136);
	i8 v1221 = *(i8*)(intptr_t)v1220;
	i8 v1222 = v1221+(+16);
	i2 v1223 = *(i2*)(intptr_t)v1222;
	i8 v1224 = (i8)(intptr_t)(ws+1136);
	i8 v1225 = *(i8*)(intptr_t)v1224;
	i8 v1226 = v1225+(+8);
	i8 v1227 = *(i8*)(intptr_t)v1226;

void f63_EmitterDeclareSubroutine(i8 /* name */, i2 /* id */);
	f63_EmitterDeclareSubroutine(v1227, v1223);

	i8 v1228 = (i8)(intptr_t)(ws+1136);
	i8 v1229 = *(i8*)(intptr_t)v1228;
	i8 v1230 = v1229+(+18);
	i1 v1231 = *(i1*)(intptr_t)v1230;
	i1 v1232 = v1231|(+4);
	i8 v1233 = (i8)(intptr_t)(ws+1136);
	i8 v1234 = *(i8*)(intptr_t)v1233;
	i8 v1235 = v1234+(+18);
	*(i1*)(intptr_t)v1235 = v1232;

	goto c02_0138;

c02_013c:;

c02_0138:;


void f59_EmitterPushChunk(void);
	f59_EmitterPushChunk();

	i8 v1236 = (i8)(intptr_t)(ws+1136);
	i8 v1237 = *(i8*)(intptr_t)v1236;
	i8 v1238 = v1237+(+16);
	i2 v1239 = *(i2*)(intptr_t)v1238;

void f57_E_b16(i2 /* word */);
	f57_E_b16(v1239);

endsub:;
}

// SetSubroutineWorkspace workspace at ws+1184 length ws+12
void f79_SetSubroutineWorkspace(void) {


void f69_GetC(void);
	f69_GetC();


void f73_ReadWord(void);
	f73_ReadWord();

	i8 v1240 = (i8)(intptr_t)(ws+1148);

void f67_GetSymbol(i8* /* symbol */, i8 /* name */);
	i8 v1241;
	f67_GetSymbol(&v1241, v1240);
	i8 v1242 = (i8)(intptr_t)(ws+1184);
	*(i8*)(intptr_t)v1242 = v1241;


void f72_SkipWhitespace(void);
	f72_SkipWhitespace();


void f74_ReadNumber(i4* /* result */);
	i4 v1243;
	f74_ReadNumber(&v1243);
	i1 v1244 = (s1)(s4)v1243;
	i8 v1245 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v1245 = v1244;


void f72_SkipWhitespace(void);
	f72_SkipWhitespace();


void f74_ReadNumber(i4* /* result */);
	i4 v1246;
	f74_ReadNumber(&v1246);
	i2 v1247 = (s2)(s4)v1246;
	i8 v1248 = (i8)(intptr_t)(ws+1194);
	*(i2*)(intptr_t)v1248 = v1247;

	i8 v1249 = (i8)(intptr_t)(ws+1184);
	i8 v1250 = *(i8*)(intptr_t)v1249;
	i8 v1251 = v1250+(+16);
	i2 v1252 = *(i2*)(intptr_t)v1251;
	i8 v1253 = (i8)(intptr_t)(ws+1192);
	i1 v1254 = *(i1*)(intptr_t)v1253;
	i8 v1255 = (i8)(intptr_t)(ws+1194);
	i2 v1256 = *(i2*)(intptr_t)v1255;

void f66_EmitterDeclareWorkspace(i2 /* workspace */, i1 /* wid */, i2 /* id */);
	f66_EmitterDeclareWorkspace(v1256, v1254, v1252);

endsub:;
}

// EmitWorkspaceRef workspace at ws+1192 length ws+12
void f80_EmitWorkspaceRef(void) {


void f69_GetC(void);
	f69_GetC();


void f73_ReadWord(void);
	f73_ReadWord();

	i8 v1257 = (i8)(intptr_t)(ws+1136);
	i8 v1258 = *(i8*)(intptr_t)v1257;
	i8 v1259 = (i8)(intptr_t)(ws+1192);
	*(i8*)(intptr_t)v1259 = v1258;

	i8 v1260 = (i8)(intptr_t)(ws+1148);
	i1 v1261 = *(i1*)(intptr_t)v1260;
	i1 v1262 = (i1)+0;
	if (v1261==v1262) goto c02_0141; else goto c02_0140;

c02_0140:;

	i8 v1263 = (i8)(intptr_t)(ws+1148);

void f67_GetSymbol(i8* /* symbol */, i8 /* name */);
	i8 v1264;
	f67_GetSymbol(&v1264, v1263);
	i8 v1265 = (i8)(intptr_t)(ws+1192);
	*(i8*)(intptr_t)v1265 = v1264;

	i8 v1266 = (i8)(intptr_t)(ws+1136);
	i8 v1267 = *(i8*)(intptr_t)v1266;
	i8 v1268 = v1267+(+16);
	i2 v1269 = *(i2*)(intptr_t)v1268;
	i8 v1270 = (i8)(intptr_t)(ws+1192);
	i8 v1271 = *(i8*)(intptr_t)v1270;
	i8 v1272 = v1271+(+16);
	i2 v1273 = *(i2*)(intptr_t)v1272;

void f65_EmitterReferenceSubroutine(i2 /* used */, i2 /* user */);
	f65_EmitterReferenceSubroutine(v1273, v1269);

	goto c02_013d;

c02_0141:;

c02_013d:;

	i1 v1274 = (i1)+46;

void f70_ExpectC(i1 /* want */);
	f70_ExpectC(v1274);


void f74_ReadNumber(i4* /* result */);
	i4 v1275;
	f74_ReadNumber(&v1275);
	i1 v1276 = (s1)(s4)v1275;
	i8 v1277 = (i8)(intptr_t)(ws+1200);
	*(i1*)(intptr_t)v1277 = v1276;

	i1 v1278 = (i1)+46;

void f70_ExpectC(i1 /* want */);
	f70_ExpectC(v1278);


void f74_ReadNumber(i4* /* result */);
	i4 v1279;
	f74_ReadNumber(&v1279);
	i2 v1280 = (s2)(s4)v1279;
	i8 v1281 = (i8)(intptr_t)(ws+1202);
	*(i2*)(intptr_t)v1281 = v1280;

	i1 v1282 = (i1)+2;

void f55_E_b8(i1 /* byte */);
	f55_E_b8(v1282);

	i8 v1283 = (i8)(intptr_t)(ws+1192);
	i8 v1284 = *(i8*)(intptr_t)v1283;
	i8 v1285 = v1284+(+16);
	i2 v1286 = *(i2*)(intptr_t)v1285;

void f57_E_b16(i2 /* word */);
	f57_E_b16(v1286);

	i8 v1287 = (i8)(intptr_t)(ws+1200);
	i1 v1288 = *(i1*)(intptr_t)v1287;

void f55_E_b8(i1 /* byte */);
	f55_E_b8(v1288);

	i8 v1289 = (i8)(intptr_t)(ws+1202);
	i2 v1290 = *(i2*)(intptr_t)v1289;

void f57_E_b16(i2 /* word */);
	f57_E_b16(v1290);

endsub:;
}
const i1 c02_s000a[] = { 0x73,0x6f,0x75,0x72,0x63,0x65,0x20,0x74,0x65,0x78,0x74,0x20,0x77,0x69,0x74,0x68,0x20,0x6e,0x6f,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x64,0x65,0x66,0x69,0x6e,0x65,0x64,0 };

// SourceLine workspace at ws+1184 length ws+8
void f81_SourceLine(void) {

	i8 v1291 = (i8)(intptr_t)(ws+1136);
	i8 v1292 = *(i8*)(intptr_t)v1291;
	i8 v1293 = (i8)+0;
	if (v1292==v1293) goto c02_0145; else goto c02_0146;

c02_0145:;

	i8 v1294 = (i8)(intptr_t)c02_s000a;

void f54_FatalError(i8 /* s */);
	f54_FatalError(v1294);

	goto c02_0142;

c02_0146:;

c02_0142:;

c02_0147:;

	i8 v1295 = (i8)(intptr_t)(ws+1144);
	i1 v1296 = *(i1*)(intptr_t)v1295;
	i1 v1297 = (i1)+0;
	if (v1296==v1297) goto c02_0150; else goto c02_0153;

c02_0153:;

	i8 v1298 = (i8)(intptr_t)(ws+1144);
	i1 v1299 = *(i1*)(intptr_t)v1298;
	i1 v1300 = (i1)+10;
	if (v1299==v1300) goto c02_0150; else goto c02_0152;

c02_0152:;

	i8 v1301 = (i8)(intptr_t)(ws+1144);
	i1 v1302 = *(i1*)(intptr_t)v1301;
	i1 v1303 = (i1)+26;
	if (v1302==v1303) goto c02_0150; else goto c02_0151;

c02_0150:;

	goto c02_0148;

c02_0151:;

c02_0149:;

	i8 v1304 = (i8)(intptr_t)(ws+1144);
	i1 v1305 = *(i1*)(intptr_t)v1304;
	i1 v1306 = (i1)+13;
	if (v1305==v1306) goto c02_0158; else goto c02_0157;

c02_0157:;

	i8 v1307 = (i8)(intptr_t)(ws+1144);
	i1 v1308 = *(i1*)(intptr_t)v1307;
	i1 v1309 = (i1)+96;
	if (v1308==v1309) goto c02_015c; else goto c02_015d;

c02_015c:;


void f69_GetC(void);
	f69_GetC();

	i8 v1310 = (i8)(intptr_t)(ws+1144);
	i1 v1311 = *(i1*)(intptr_t)v1310;

	if (v1311 != +96) goto c02_015f;

	i1 v1312 = (i1)+4;

void f55_E_b8(i1 /* byte */);
	f55_E_b8(v1312);


void f69_GetC(void);
	f69_GetC();

	goto c02_015e;

c02_015f:;

	if (v1311 != +94) goto c02_0160;

	i1 v1313 = (i1)+3;

void f55_E_b8(i1 /* byte */);
	f55_E_b8(v1313);


void f69_GetC(void);
	f69_GetC();

	goto c02_015e;

c02_0160:;

	if (v1311 != +36) goto c02_0161;


void f80_EmitWorkspaceRef(void);
	f80_EmitWorkspaceRef();

	goto c02_015e;

c02_0161:;


void f73_ReadWord(void);
	f73_ReadWord();

	i8 v1314 = (i8)(intptr_t)(ws+1148);

void f67_GetSymbol(i8* /* symbol */, i8 /* name */);
	i8 v1315;
	f67_GetSymbol(&v1315, v1314);
	i8 v1316 = (i8)(intptr_t)(ws+1184);
	*(i8*)(intptr_t)v1316 = v1315;

	i1 v1317 = (i1)+1;

void f55_E_b8(i1 /* byte */);
	f55_E_b8(v1317);

	i8 v1318 = (i8)(intptr_t)(ws+1184);
	i8 v1319 = *(i8*)(intptr_t)v1318;
	i8 v1320 = v1319+(+16);
	i2 v1321 = *(i2*)(intptr_t)v1320;

void f57_E_b16(i2 /* word */);
	f57_E_b16(v1321);

	i8 v1322 = (i8)(intptr_t)(ws+1136);
	i8 v1323 = *(i8*)(intptr_t)v1322;
	i8 v1324 = v1323+(+16);
	i2 v1325 = *(i2*)(intptr_t)v1324;
	i8 v1326 = (i8)(intptr_t)(ws+1184);
	i8 v1327 = *(i8*)(intptr_t)v1326;
	i8 v1328 = v1327+(+16);
	i2 v1329 = *(i2*)(intptr_t)v1328;

void f65_EmitterReferenceSubroutine(i2 /* used */, i2 /* user */);
	f65_EmitterReferenceSubroutine(v1329, v1325);

c02_015e:;


	goto c02_0159;

c02_015d:;

	i8 v1330 = (i8)(intptr_t)(ws+1144);
	i1 v1331 = *(i1*)(intptr_t)v1330;

void f55_E_b8(i1 /* byte */);
	f55_E_b8(v1331);


void f69_GetC(void);
	f69_GetC();

c02_0159:;

	goto c02_0154;

c02_0158:;

c02_0154:;

	goto c02_0147;

c02_0148:;

	i1 v1332 = (i1)+10;

void f55_E_b8(i1 /* byte */);
	f55_E_b8(v1332);

endsub:;
}
const i1 c02_s000b[] = { 0x62,0x61,0x64,0x20,0x63,0x6f,0x77,0x77,0x72,0x61,0x70,0x20,0x63,0x6f,0x6d,0x6d,0x61,0x6e,0x64,0 };

// ProcessFile workspace at ws+1144 length ws+36
void f68_ProcessFile(void) {

	i8 v1085 = (i8)(intptr_t)c02_s0006;
	i8 v1086 = (i8)(intptr_t)(ws+1104);
	*(i8*)(intptr_t)v1086 = v1085;

	i1 v1087 = (i1)+5;
	i8 v1088 = (i8)(intptr_t)(ws+1114);
	*(i1*)(intptr_t)v1088 = v1087;

	i2 v1089 = (i2)+0;
	i8 v1090 = (i8)(intptr_t)(ws+1146);
	*(i2*)(intptr_t)v1090 = v1089;















void f69_GetC(void);
	f69_GetC();

c02_0162:;

	i8 v1333 = (i8)(intptr_t)(ws+1144);
	i1 v1334 = *(i1*)(intptr_t)v1333;
	i1 v1335 = (i1)+0;
	if (v1334==v1335) goto c02_0169; else goto c02_016b;

c02_016b:;

	i8 v1336 = (i8)(intptr_t)(ws+1144);
	i1 v1337 = *(i1*)(intptr_t)v1336;
	i1 v1338 = (i1)+26;
	if (v1337==v1338) goto c02_0169; else goto c02_016a;

c02_0169:;

	goto c02_0163;

c02_016a:;

c02_0164:;

	i8 v1339 = (i8)(intptr_t)(ws+1144);
	i1 v1340 = *(i1*)(intptr_t)v1339;

	if (v1340 != +38) goto c02_016d;


void f69_GetC(void);
	f69_GetC();

	i8 v1341 = (i8)(intptr_t)(ws+1144);
	i1 v1342 = *(i1*)(intptr_t)v1341;

	if (v1342 != +88) goto c02_016f;

	i1 v1343 = (i1)+1;

void f78_DeclareSubroutine(i1 /* exported */);
	f78_DeclareSubroutine(v1343);

	goto c02_016e;

c02_016f:;

	if (v1342 != +83) goto c02_0170;

	i1 v1344 = (i1)+0;

void f78_DeclareSubroutine(i1 /* exported */);
	f78_DeclareSubroutine(v1344);

	goto c02_016e;

c02_0170:;

	if (v1342 != +87) goto c02_0171;


void f79_SetSubroutineWorkspace(void);
	f79_SetSubroutineWorkspace();

	goto c02_016e;

c02_0171:;

	i8 v1345 = (i8)(intptr_t)c02_s000b;

void f54_FatalError(i8 /* s */);
	f54_FatalError(v1345);

c02_016e:;



void f71_SkipToEndOfLine(void);
	f71_SkipToEndOfLine();

	goto c02_016c;

c02_016d:;

	if (v1340 != +35) goto c02_0172;


void f71_SkipToEndOfLine(void);
	f71_SkipToEndOfLine();

	goto c02_016c;

c02_0172:;


void f81_SourceLine(void);
	f81_SourceLine();

c02_016c:;



void f69_GetC(void);
	f69_GetC();

	goto c02_0162;

c02_0163:;


void f77_CloseChunk(void);
	f77_CloseChunk();

endsub:;
}
const i1 c02_s000c[] = { 0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x20,0x74,0x6f,0x20,0x75,0x6e,0x64,0x65,0x63,0x6c,0x61,0x72,0x65,0x64,0x20,0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
const i1 c02_s000d[] = { 0x27,0x0a,0 };
const i1 c02_s000e[] = { 0x66,0x61,0x69,0x6c,0x65,0x64,0 };

// CheckSymbols workspace at ws+1144 length ws+16
void f82_CheckSymbols(void) {

	i1 v1346 = (i1)+1;
	i8 v1347 = (i8)(intptr_t)(ws+1144);
	*(i1*)(intptr_t)v1347 = v1346;

	i8 v1348 = (i8)(intptr_t)(ws+1120);
	i8 v1349 = *(i8*)(intptr_t)v1348;
	i8 v1350 = (i8)(intptr_t)(ws+1152);
	*(i8*)(intptr_t)v1350 = v1349;

c02_0175:;

	i8 v1351 = (i8)(intptr_t)(ws+1152);
	i8 v1352 = *(i8*)(intptr_t)v1351;
	i8 v1353 = (i8)+0;
	if (v1352==v1353) goto c02_0178; else goto c02_0177;

c02_0177:;

	i8 v1354 = (i8)(intptr_t)(ws+1152);
	i8 v1355 = *(i8*)(intptr_t)v1354;
	i8 v1356 = v1355+(+18);
	i1 v1357 = *(i1*)(intptr_t)v1356;
	i1 v1358 = (i1)+0;
	if (v1357==v1358) goto c02_017c; else goto c02_017d;

c02_017c:;

	i8 v1359 = (i8)(intptr_t)c02_s000c;

void f11_print(i8 /* ptr */);
	f11_print(v1359);

	i8 v1360 = (i8)(intptr_t)(ws+1152);
	i8 v1361 = *(i8*)(intptr_t)v1360;
	i8 v1362 = v1361+(+8);
	i8 v1363 = *(i8*)(intptr_t)v1362;

void f11_print(i8 /* ptr */);
	f11_print(v1363);

	i8 v1364 = (i8)(intptr_t)c02_s000d;

void f11_print(i8 /* ptr */);
	f11_print(v1364);

	i1 v1365 = (i1)+0;
	i8 v1366 = (i8)(intptr_t)(ws+1144);
	*(i1*)(intptr_t)v1366 = v1365;

	goto c02_0179;

c02_017d:;

c02_0179:;

	i8 v1367 = (i8)(intptr_t)(ws+1152);
	i8 v1368 = *(i8*)(intptr_t)v1367;
	i8 v1369 = *(i8*)(intptr_t)v1368;
	i8 v1370 = (i8)(intptr_t)(ws+1152);
	*(i8*)(intptr_t)v1370 = v1369;

	goto c02_0175;

c02_0178:;

	i8 v1371 = (i8)(intptr_t)(ws+1144);
	i1 v1372 = *(i1*)(intptr_t)v1371;
	i1 v1373 = (i1)+0;
	if (v1372==v1373) goto c02_0181; else goto c02_0182;

c02_0181:;

	i8 v1374 = (i8)(intptr_t)c02_s000e;

void f54_FatalError(i8 /* s */);
	f54_FatalError(v1374);

	goto c02_017e;

c02_0182:;

c02_017e:;

endsub:;
}
const i1 c02_s000f[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x69,0x6e,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };

// __main workspace at ws+0 length ws+1144
void f3___main(void) {

	
*(i8*)(intptr_t)(ws+0) 
= (i8)(intptr_t) __lomem; 


	
*(i8*)(intptr_t)(ws+8) 
= (i8)(intptr_t) __himem; 



















































	i8 v792 = (i8)+0;
	i8 v793 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v793 = v792;

	i8 v794 = (i8)+0;
	i8 v795 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v795 = v794;

	i8 v796 = (i8)(intptr_t)c02_s0000;

void f11_print(i8 /* ptr */);
	f11_print(v796);


void f35_GetFreeMemory(i8* /* i */);
	i8 v797;
	f35_GetFreeMemory(&v797);
	i1 v798 = (i1)+10;
	i8 v799 = ((i8)v797)>>v798;
	i2 v800 = v799;

void f16_print_i16(i2 /* value */);
	f16_print_i16(v800);

	i8 v801 = (i8)(intptr_t)c02_s0001;

void f11_print(i8 /* ptr */);
	f11_print(v801);















	i8 v1034 = (i8)(intptr_t)(ws+1096);
	i8 v1035 = (i8)(intptr_t)(ws+1120);
	*(i8*)(intptr_t)v1035 = v1034;

	i2 v1036 = (i2)+1;
	i8 v1037 = (i8)(intptr_t)(ws+1128);
	*(i2*)(intptr_t)v1037 = v1036;

	i8 v1038 = (i8)+0;
	i8 v1039 = (i8)(intptr_t)(ws+1136);
	*(i8*)(intptr_t)v1039 = v1038;





void f23_ArgvInit(void);
	f23_ArgvInit();


void f24_ArgvNext(i8* /* arg */);
	i8 v1375;
	f24_ArgvNext(&v1375);
	i8 v1376 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v1376 = v1375;


void f24_ArgvNext(i8* /* arg */);
	i8 v1377;
	f24_ArgvNext(&v1377);
	i8 v1378 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v1378 = v1377;

	i8 v1379 = (i8)(intptr_t)(ws+24);
	i8 v1380 = *(i8*)(intptr_t)v1379;
	i8 v1381 = (i8)+0;
	if (v1380==v1381) goto c02_018a; else goto c02_018d;

c02_018d:;

	i8 v1382 = (i8)(intptr_t)(ws+32);
	i8 v1383 = *(i8*)(intptr_t)v1382;
	i8 v1384 = (i8)+0;
	if (v1383==v1384) goto c02_018a; else goto c02_018c;

c02_018c:;


void f24_ArgvNext(i8* /* arg */);
	i8 v1385;
	f24_ArgvNext(&v1385);
	i8 v1386 = (i8)+0;
	if (v1385==v1386) goto c02_018b; else goto c02_018a;

c02_018a:;


void f53_SyntaxError(void);
	f53_SyntaxError();

	goto c02_0183;

c02_018b:;

c02_0183:;

	i8 v1387 = (i8)(intptr_t)(ws+40);
	i8 v1388 = (i8)(intptr_t)(ws+24);
	i8 v1389 = *(i8*)(intptr_t)v1388;

void f40_FCBOpenIn(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
	i1 v1390;
	f40_FCBOpenIn(&v1390, v1389, v1387);
	i1 v1391 = (i1)+0;
	if (v1390==v1391) goto c02_0192; else goto c02_0191;

c02_0191:;

	i8 v1392 = (i8)(intptr_t)c02_s000f;

void f54_FatalError(i8 /* s */);
	f54_FatalError(v1392);

	goto c02_018e;

c02_0192:;

c02_018e:;

	i8 v1393 = (i8)(intptr_t)(ws+32);
	i8 v1394 = *(i8*)(intptr_t)v1393;

void f61_EmitterOpenfile(i8 /* filename */);
	f61_EmitterOpenfile(v1394);


void f68_ProcessFile(void);
	f68_ProcessFile();


void f82_CheckSymbols(void);
	f82_CheckSymbols();


void f62_EmitterClosefile(void);
	f62_EmitterClosefile();

endsub:;
}
void cmain(void) {
	f3___main();
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                       