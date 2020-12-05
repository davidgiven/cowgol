#include "cowgol.h"
static i8 workspace[0x00a9];
#define ws ((i1*)workspace)

// ExitWithError workspace at ws+1272 length ws+0
void f6_ExitWithError(void) {


	
exit(1); 



endsub:;
}

// print_char workspace at ws+1288 length ws+1
void f9_print_char(i1 p12 /* c */) {
	*(i1*)(intptr_t)(ws+1288) = p12; /*c */


	
putchar( 
*(i1*)(intptr_t)(ws+1288) 
); 



endsub:;
}
	void f9_print_char(i1 /* c */);

// print workspace at ws+1272 length ws+9
void f12_print(i8 p21 /* ptr */) {
	*(i8*)(intptr_t)(ws+1272) = p21; /*ptr */

c02_0001:;

	i8 v22 = (i8)(intptr_t)(ws+1272);
	i8 v23 = *(i8*)(intptr_t)v22;
	i1 v24 = *(i1*)(intptr_t)v23;
	i8 v25 = (i8)(intptr_t)(ws+1280);
	*(i1*)(intptr_t)v25 = v24;

	i8 v26 = (i8)(intptr_t)(ws+1280);
	i1 v27 = *(i1*)(intptr_t)v26;
	i1 v28 = (i1)+0;
	if (v27==v28) goto c02_0006; else goto c02_0007;

c02_0006:;

	goto endsub;

c02_0007:;

c02_0003:;

	i8 v29 = (i8)(intptr_t)(ws+1280);
	i1 v30 = *(i1*)(intptr_t)v29;
	i8 v31 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v31)(v30);

	i8 v32 = (i8)(intptr_t)(ws+1272);
	i8 v33 = *(i8*)(intptr_t)v32;
	i8 v34 = v33+(+1);
	i8 v35 = (i8)(intptr_t)(ws+1272);
	*(i8*)(intptr_t)v35 = v34;

	goto c02_0001;

c02_0002:;

endsub:;
}
	void f9_print_char(i1 /* c */);

// print_nl workspace at ws+1248 length ws+0
void f13_print_nl(void) {

	i1 v36 = (i1)+10;
	i8 v37 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v37)(v36);

endsub:;
}

// UIToA workspace at ws+1184 length ws+49
void f14_UIToA(i8* p38 /* ptr */, i8 p39 /* buffer */, i1 p40 /* base */, i4 p41 /* value */) {
	*(i4*)(intptr_t)(ws+1184) = p41; /*value */
	*(i1*)(intptr_t)(ws+1188) = p40; /*base */
	*(i8*)(intptr_t)(ws+1192) = p39; /*buffer */

	i8 v42 = (i8)(intptr_t)(ws+1192);
	i8 v43 = *(i8*)(intptr_t)v42;
	i8 v44 = (i8)(intptr_t)(ws+1200);
	*(i8*)(intptr_t)v44 = v43;

c02_0008:;

	i8 v45 = (i8)(intptr_t)(ws+1184);
	i4 v46 = *(i4*)(intptr_t)v45;
	i8 v47 = (i8)(intptr_t)(ws+1188);
	i1 v48 = *(i1*)(intptr_t)v47;
	i4 v49 = v48;
	i4 v50 = v46%v49;
	i8 v51 = (i8)(intptr_t)(ws+1208);
	*(i4*)(intptr_t)v51 = v50;

	i8 v52 = (i8)(intptr_t)(ws+1184);
	i4 v53 = *(i4*)(intptr_t)v52;
	i8 v54 = (i8)(intptr_t)(ws+1188);
	i1 v55 = *(i1*)(intptr_t)v54;
	i4 v56 = v55;
	i4 v57 = v53/v56;
	i8 v58 = (i8)(intptr_t)(ws+1184);
	*(i4*)(intptr_t)v58 = v57;

	i8 v59 = (i8)(intptr_t)(ws+1208);
	i4 v60 = *(i4*)(intptr_t)v59;
	i4 v61 = (i4)+10;
	if (v60<v61) goto c02_000d; else goto c02_000e;

c02_000d:;

	i8 v62 = (i8)(intptr_t)(ws+1208);
	i4 v63 = *(i4*)(intptr_t)v62;
	i4 v64 = v63+(+48);
	i8 v65 = (i8)(intptr_t)(ws+1208);
	*(i4*)(intptr_t)v65 = v64;

	goto c02_000a;

c02_000e:;

	i8 v66 = (i8)(intptr_t)(ws+1208);
	i4 v67 = *(i4*)(intptr_t)v66;
	i4 v68 = v67+(+87);
	i8 v69 = (i8)(intptr_t)(ws+1208);
	*(i4*)(intptr_t)v69 = v68;

c02_000a:;

	i8 v70 = (i8)(intptr_t)(ws+1208);
	i4 v71 = *(i4*)(intptr_t)v70;
	i1 v72 = v71;
	i8 v73 = (i8)(intptr_t)(ws+1200);
	i8 v74 = *(i8*)(intptr_t)v73;
	*(i1*)(intptr_t)v74 = v72;

	i8 v75 = (i8)(intptr_t)(ws+1200);
	i8 v76 = *(i8*)(intptr_t)v75;
	i8 v77 = v76+(+1);
	i8 v78 = (i8)(intptr_t)(ws+1200);
	*(i8*)(intptr_t)v78 = v77;

	i8 v79 = (i8)(intptr_t)(ws+1184);
	i4 v80 = *(i4*)(intptr_t)v79;
	i4 v81 = (i4)+0;
	if (v80==v81) goto c02_0012; else goto c02_0013;

c02_0012:;

	goto c02_0009;

c02_0013:;

c02_000f:;

	goto c02_0008;

c02_0009:;

	i8 v82 = (i8)(intptr_t)(ws+1192);
	i8 v83 = *(i8*)(intptr_t)v82;
	i8 v84 = (i8)(intptr_t)(ws+1216);
	*(i8*)(intptr_t)v84 = v83;

	i8 v85 = (i8)(intptr_t)(ws+1200);
	i8 v86 = *(i8*)(intptr_t)v85;
	i8 v87 = v86+(-1);
	i8 v88 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v88 = v87;

c02_0016:;

	i8 v89 = (i8)(intptr_t)(ws+1216);
	i8 v90 = *(i8*)(intptr_t)v89;
	i8 v91 = (i8)(intptr_t)(ws+1224);
	i8 v92 = *(i8*)(intptr_t)v91;
	if (v90<v92) goto c02_0018; else goto c02_0019;

c02_0018:;

	i8 v93 = (i8)(intptr_t)(ws+1216);
	i8 v94 = *(i8*)(intptr_t)v93;
	i1 v95 = *(i1*)(intptr_t)v94;
	i8 v96 = (i8)(intptr_t)(ws+1232);
	*(i1*)(intptr_t)v96 = v95;

	i8 v97 = (i8)(intptr_t)(ws+1224);
	i8 v98 = *(i8*)(intptr_t)v97;
	i1 v99 = *(i1*)(intptr_t)v98;
	i8 v100 = (i8)(intptr_t)(ws+1216);
	i8 v101 = *(i8*)(intptr_t)v100;
	*(i1*)(intptr_t)v101 = v99;

	i8 v102 = (i8)(intptr_t)(ws+1232);
	i1 v103 = *(i1*)(intptr_t)v102;
	i8 v104 = (i8)(intptr_t)(ws+1224);
	i8 v105 = *(i8*)(intptr_t)v104;
	*(i1*)(intptr_t)v105 = v103;

	i8 v106 = (i8)(intptr_t)(ws+1216);
	i8 v107 = *(i8*)(intptr_t)v106;
	i8 v108 = v107+(+1);
	i8 v109 = (i8)(intptr_t)(ws+1216);
	*(i8*)(intptr_t)v109 = v108;

	i8 v110 = (i8)(intptr_t)(ws+1224);
	i8 v111 = *(i8*)(intptr_t)v110;
	i8 v112 = v111+(-1);
	i8 v113 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v113 = v112;

	goto c02_0016;

c02_0019:;

	i1 v114 = (i1)+0;
	i8 v115 = (i8)(intptr_t)(ws+1200);
	i8 v116 = *(i8*)(intptr_t)v115;
	*(i1*)(intptr_t)v116 = v114;

endsub:;
	*p38 = *(i8*)(intptr_t)(ws+1200);
}
	void f14_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f12_print(i8 /* ptr */);

// print_i32 workspace at ws+1160 length ws+24
void f16_print_i32(i4 p144 /* value */) {
	*(i4*)(intptr_t)(ws+1160) = p144; /*value */

	i8 v145 = (i8)(intptr_t)(ws+1160);
	i4 v146 = *(i4*)(intptr_t)v145;
	i1 v147 = (i1)+10;
	i8 v148 = (i8)(intptr_t)(ws+1164);
	i8 v149 = (i8)(intptr_t)(f14_UIToA);
	i8 v150;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v149)(&v150, v148, v147, v146);
	i8 v151 = (i8)(intptr_t)(ws+1176);
	*(i8*)(intptr_t)v151 = v150;

	i8 v152 = (i8)(intptr_t)(ws+1164);
	i8 v153 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v153)(v152);

endsub:;
}
	void f16_print_i32(i4 /* value */);

// print_i16 workspace at ws+1152 length ws+2
void f17_print_i16(i2 p154 /* value */) {
	*(i2*)(intptr_t)(ws+1152) = p154; /*value */

	i8 v155 = (i8)(intptr_t)(ws+1152);
	i2 v156 = *(i2*)(intptr_t)v155;
	i4 v157 = v156;
	i8 v158 = (i8)(intptr_t)(f16_print_i32);

	((void(*)(i4 /* value */))(intptr_t)v158)(v157);

endsub:;
}

// AToI workspace at ws+1232 length ws+27
void f22_AToI(i4* p232 /* result */, i8* p233 /* ptr */, i8 p234 /* buffer */) {
	*(i8*)(intptr_t)(ws+1232) = p234; /*buffer */

	i1 v235 = (i1)+0;
	i8 v236 = (i8)(intptr_t)(ws+1256);
	*(i1*)(intptr_t)v236 = v235;

	i1 v237 = (i1)+10;
	i8 v238 = (i8)(intptr_t)(ws+1257);
	*(i1*)(intptr_t)v238 = v237;

	i8 v239 = (i8)(intptr_t)(ws+1232);
	i8 v240 = *(i8*)(intptr_t)v239;
	i8 v241 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v241 = v240;

	i4 v242 = (i4)+0;
	i8 v243 = (i8)(intptr_t)(ws+1240);
	*(i4*)(intptr_t)v243 = v242;

	i8 v244 = (i8)(intptr_t)(ws+1248);
	i8 v245 = *(i8*)(intptr_t)v244;
	i1 v246 = *(i1*)(intptr_t)v245;
	i8 v247 = (i8)(intptr_t)(ws+1258);
	*(i1*)(intptr_t)v247 = v246;

	i8 v248 = (i8)(intptr_t)(ws+1258);
	i1 v249 = *(i1*)(intptr_t)v248;
	i1 v250 = (i1)+45;
	if (v249==v250) goto c02_002e; else goto c02_002f;

c02_002e:;

	i1 v251 = (i1)+1;
	i8 v252 = (i8)(intptr_t)(ws+1256);
	*(i1*)(intptr_t)v252 = v251;

	i8 v253 = (i8)(intptr_t)(ws+1248);
	i8 v254 = *(i8*)(intptr_t)v253;
	i8 v255 = v254+(+1);
	i8 v256 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v256 = v255;

	i8 v257 = (i8)(intptr_t)(ws+1248);
	i8 v258 = *(i8*)(intptr_t)v257;
	i1 v259 = *(i1*)(intptr_t)v258;
	i8 v260 = (i8)(intptr_t)(ws+1258);
	*(i1*)(intptr_t)v260 = v259;

c02_002f:;

c02_002b:;

	i8 v261 = (i8)(intptr_t)(ws+1258);
	i1 v262 = *(i1*)(intptr_t)v261;
	i1 v263 = (i1)+48;
	if (v262==v263) goto c02_0033; else goto c02_0034;

c02_0033:;

	i8 v264 = (i8)(intptr_t)(ws+1248);
	i8 v265 = *(i8*)(intptr_t)v264;
	i8 v266 = v265+(+1);
	i1 v267 = *(i1*)(intptr_t)v266;

	if (v267 != +120) goto c02_0036;

	i1 v268 = (i1)+16;
	i8 v269 = (i8)(intptr_t)(ws+1257);
	*(i1*)(intptr_t)v269 = v268;

	goto c02_0035;

c02_0036:;

	if (v267 != +111) goto c02_0037;

	i1 v270 = (i1)+8;
	i8 v271 = (i8)(intptr_t)(ws+1257);
	*(i1*)(intptr_t)v271 = v270;

	goto c02_0035;

c02_0037:;

	if (v267 != +98) goto c02_0038;

	i1 v272 = (i1)+2;
	i8 v273 = (i8)(intptr_t)(ws+1257);
	*(i1*)(intptr_t)v273 = v272;

	goto c02_0035;

c02_0038:;

	if (v267 != +100) goto c02_0039;

	i1 v274 = (i1)+10;
	i8 v275 = (i8)(intptr_t)(ws+1257);
	*(i1*)(intptr_t)v275 = v274;

	goto c02_0035;

c02_0039:;

	i8 v276 = (i8)(intptr_t)(ws+1248);
	i8 v277 = *(i8*)(intptr_t)v276;
	i8 v278 = v277+(-2);
	i8 v279 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v279 = v278;

c02_0035:;


	i8 v280 = (i8)(intptr_t)(ws+1248);
	i8 v281 = *(i8*)(intptr_t)v280;
	i8 v282 = v281+(+2);
	i8 v283 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v283 = v282;

	i8 v284 = (i8)(intptr_t)(ws+1248);
	i8 v285 = *(i8*)(intptr_t)v284;
	i1 v286 = *(i1*)(intptr_t)v285;
	i8 v287 = (i8)(intptr_t)(ws+1258);
	*(i1*)(intptr_t)v287 = v286;

c02_0034:;

c02_0030:;

c02_003a:;

	i8 v288 = (i8)(intptr_t)(ws+1258);
	i1 v289 = *(i1*)(intptr_t)v288;
	i1 v290 = (i1)+97;
	if (v289<v290) goto c02_0040; else goto c02_003f;

c02_003f:;

	i8 v291 = (i8)(intptr_t)(ws+1258);
	i1 v292 = *(i1*)(intptr_t)v291;
	i1 v293 = v292+(-87);
	i8 v294 = (i8)(intptr_t)(ws+1258);
	*(i1*)(intptr_t)v294 = v293;

	goto c02_003c;

c02_0040:;

	i8 v295 = (i8)(intptr_t)(ws+1258);
	i1 v296 = *(i1*)(intptr_t)v295;
	i1 v297 = (i1)+65;
	if (v296<v297) goto c02_0044; else goto c02_0043;

c02_0043:;

	i8 v298 = (i8)(intptr_t)(ws+1258);
	i1 v299 = *(i1*)(intptr_t)v298;
	i1 v300 = v299+(-55);
	i8 v301 = (i8)(intptr_t)(ws+1258);
	*(i1*)(intptr_t)v301 = v300;

	goto c02_003c;

c02_0044:;

	i8 v302 = (i8)(intptr_t)(ws+1258);
	i1 v303 = *(i1*)(intptr_t)v302;
	i1 v304 = v303+(-48);
	i8 v305 = (i8)(intptr_t)(ws+1258);
	*(i1*)(intptr_t)v305 = v304;

c02_003c:;

	i8 v306 = (i8)(intptr_t)(ws+1258);
	i1 v307 = *(i1*)(intptr_t)v306;
	i8 v308 = (i8)(intptr_t)(ws+1257);
	i1 v309 = *(i1*)(intptr_t)v308;
	if (v307<v309) goto c02_0049; else goto c02_0048;

c02_0048:;

	goto c02_003b;

c02_0049:;

c02_0045:;

	i8 v310 = (i8)(intptr_t)(ws+1240);
	i4 v311 = *(i4*)(intptr_t)v310;
	i8 v312 = (i8)(intptr_t)(ws+1257);
	i1 v313 = *(i1*)(intptr_t)v312;
	i4 v314 = v313;
	i4 v315 = v311*v314;
	i8 v316 = (i8)(intptr_t)(ws+1258);
	i1 v317 = *(i1*)(intptr_t)v316;
	i4 v318 = v317;
	i4 v319 = v315+v318;
	i8 v320 = (i8)(intptr_t)(ws+1240);
	*(i4*)(intptr_t)v320 = v319;

	i8 v321 = (i8)(intptr_t)(ws+1248);
	i8 v322 = *(i8*)(intptr_t)v321;
	i8 v323 = v322+(+1);
	i8 v324 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v324 = v323;

	i8 v325 = (i8)(intptr_t)(ws+1248);
	i8 v326 = *(i8*)(intptr_t)v325;
	i1 v327 = *(i1*)(intptr_t)v326;
	i8 v328 = (i8)(intptr_t)(ws+1258);
	*(i1*)(intptr_t)v328 = v327;

	goto c02_003a;

c02_003b:;

	i8 v329 = (i8)(intptr_t)(ws+1256);
	i1 v330 = *(i1*)(intptr_t)v329;
	i1 v331 = (i1)+0;
	if (v330==v331) goto c02_004e; else goto c02_004d;

c02_004d:;

	i8 v332 = (i8)(intptr_t)(ws+1240);
	i4 v333 = *(i4*)(intptr_t)v332;
	i4 v334 = -v333;
	i8 v335 = (i8)(intptr_t)(ws+1240);
	*(i4*)(intptr_t)v335 = v334;

c02_004e:;

c02_004a:;

endsub:;
	*p233 = *(i8*)(intptr_t)(ws+1248);
	*p232 = *(i4*)(intptr_t)(ws+1240);
}

// ArgvInit workspace at ws+1152 length ws+0
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

// ArgvNext workspace at ws+1152 length ws+8
void f25_ArgvNext(i8* p348 /* arg */) {

	i8 v349 = (i8)(intptr_t)(ws+16);
	i8 v350 = *(i8*)(intptr_t)v349;
	i8 v351 = (i8)+0;
	if (v350==v351) goto c02_0052; else goto c02_0053;

c02_0052:;

	i8 v352 = (i8)+0;
	i8 v353 = (i8)(intptr_t)(ws+1152);
	*(i8*)(intptr_t)v353 = v352;

	goto endsub;

c02_0053:;

c02_004f:;

	i8 v354 = (i8)(intptr_t)(ws+16);
	i8 v355 = *(i8*)(intptr_t)v354;
	i8 v356 = *(i8*)(intptr_t)v355;
	i8 v357 = (i8)(intptr_t)(ws+1152);
	*(i8*)(intptr_t)v357 = v356;

	i8 v358 = (i8)(intptr_t)(ws+1152);
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
	*p348 = *(i8*)(intptr_t)(ws+1152);
}

// StrCmp workspace at ws+1232 length ws+17
void f26_StrCmp(i1* p367 /* res */, i8 p368 /* s2 */, i8 p369 /* s1 */) {
	*(i8*)(intptr_t)(ws+1232) = p369; /*s1 */
	*(i8*)(intptr_t)(ws+1240) = p368; /*s2 */

c02_0059:;

	i8 v370 = (i8)(intptr_t)(ws+1232);
	i8 v371 = *(i8*)(intptr_t)v370;
	i1 v372 = *(i1*)(intptr_t)v371;
	i8 v373 = (i8)(intptr_t)(ws+1240);
	i8 v374 = *(i8*)(intptr_t)v373;
	i1 v375 = *(i1*)(intptr_t)v374;
	i1 v376 = v372-v375;
	i8 v377 = (i8)(intptr_t)(ws+1248);
	*(i1*)(intptr_t)v377 = v376;

	i8 v378 = (i8)(intptr_t)(ws+1248);
	i1 v379 = *(i1*)(intptr_t)v378;
	i1 v380 = (i1)+0;
	if (v379==v380) goto c02_0062; else goto c02_0060;

c02_0062:;

	i8 v381 = (i8)(intptr_t)(ws+1232);
	i8 v382 = *(i8*)(intptr_t)v381;
	i1 v383 = *(i1*)(intptr_t)v382;
	i1 v384 = (i1)+0;
	if (v383==v384) goto c02_0060; else goto c02_0061;

c02_0060:;

	goto c02_005a;

c02_0061:;

c02_005b:;

	i8 v385 = (i8)(intptr_t)(ws+1232);
	i8 v386 = *(i8*)(intptr_t)v385;
	i8 v387 = v386+(+1);
	i8 v388 = (i8)(intptr_t)(ws+1232);
	*(i8*)(intptr_t)v388 = v387;

	i8 v389 = (i8)(intptr_t)(ws+1240);
	i8 v390 = *(i8*)(intptr_t)v389;
	i8 v391 = v390+(+1);
	i8 v392 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v392 = v391;

	goto c02_0059;

c02_005a:;

endsub:;
	*p367 = *(i1*)(intptr_t)(ws+1248);
}

// RawAlloc workspace at ws+1272 length ws+16
void f32_RawAlloc(i8* p504 /* block */, i8 p505 /* length */) {
	*(i8*)(intptr_t)(ws+1272) = p505; /*length */


	
*(i8*)(intptr_t)(ws+1280) 
=(intptr_t)calloc(1, (size_t) 
*(i8*)(intptr_t)(ws+1272) 
); 



endsub:;
	*p504 = *(i8*)(intptr_t)(ws+1280);
}
	void f32_RawAlloc(i8* /* block */, i8 /* length */);
const i1 c02_s0000[] = { 0x4f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0 };
	void f12_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// Alloc workspace at ws+1256 length ws+16
void f33_Alloc(i8* p506 /* block */, i8 p507 /* length */) {
	*(i8*)(intptr_t)(ws+1256) = p507; /*length */

	i8 v508 = (i8)(intptr_t)(ws+1256);
	i8 v509 = *(i8*)(intptr_t)v508;
	i8 v510 = (i8)(intptr_t)(f32_RawAlloc);
	i8 v511;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v510)(&v511, v509);
	i8 v512 = (i8)(intptr_t)(ws+1264);
	*(i8*)(intptr_t)v512 = v511;

	i8 v513 = (i8)(intptr_t)(ws+1264);
	i8 v514 = *(i8*)(intptr_t)v513;
	i8 v515 = (i8)+0;
	if (v514==v515) goto c02_008c; else goto c02_008d;

c02_008c:;

	i8 v516 = (i8)(intptr_t)c02_s0000;
	i8 v517 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v517)(v516);

	i8 v518 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v518)();

c02_008d:;

c02_0089:;

endsub:;
	*p506 = *(i8*)(intptr_t)(ws+1264);
}

// Free workspace at ws+1264 length ws+8
void f34_Free(i8 p519 /* block */) {
	*(i8*)(intptr_t)(ws+1264) = p519; /*block */


	
free((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+1264) 
); 



endsub:;
}

// StrDup workspace at ws+1232 length ws+16
void f35_StrDup(i8* p520 /* sout */, i8 p521 /* s */) {
	*(i8*)(intptr_t)(ws+1232) = p521; /*s */


	
*(i8*)(intptr_t)(ws+1240) 
=(intptr_t)strdup((const char*)(intptr_t) 
*(i8*)(intptr_t)(ws+1232) 
); 



endsub:;
	*p520 = *(i8*)(intptr_t)(ws+1240);
}

// GetFreeMemory workspace at ws+1152 length ws+8
void f38_GetFreeMemory(i8* p522 /* i */) {

	i8 v523 = (i8)+0;
	i8 v524 = (i8)(intptr_t)(ws+1152);
	*(i8*)(intptr_t)v524 = v523;

endsub:;
	*p522 = *(i8*)(intptr_t)(ws+1152);
}

// _fcb_init workspace at ws+1216 length ws+8
void f41__fcb_init(i8 p525 /* fcb */) {
	*(i8*)(intptr_t)(ws+1216) = p525; /*fcb */

	i4 v526 = (i4)+0;
	i8 v527 = (i8)(intptr_t)(ws+1216);
	i8 v528 = *(i8*)(intptr_t)v527;
	i8 v529 = v528+(+4);
	*(i4*)(intptr_t)v529 = v526;

	i2 v530 = (i2)+0;
	i8 v531 = (i8)(intptr_t)(ws+1216);
	i8 v532 = *(i8*)(intptr_t)v531;
	i8 v533 = v532+(+8);
	*(i2*)(intptr_t)v533 = v530;

	i2 v534 = (i2)+0;
	i8 v535 = (i8)(intptr_t)(ws+1216);
	i8 v536 = *(i8*)(intptr_t)v535;
	i8 v537 = v536+(+10);
	*(i2*)(intptr_t)v537 = v534;

	i1 v538 = (i1)+0;
	i8 v539 = (i8)(intptr_t)(ws+1216);
	i8 v540 = *(i8*)(intptr_t)v539;
	i8 v541 = v540+(+524);
	*(i1*)(intptr_t)v541 = v538;

endsub:;
}

// _fcb_advance workspace at ws+1296 length ws+8
void f42__fcb_advance(i8 p542 /* fcb */) {
	*(i8*)(intptr_t)(ws+1296) = p542; /*fcb */

	i8 v543 = (i8)(intptr_t)(ws+1296);
	i8 v544 = *(i8*)(intptr_t)v543;
	i8 v545 = v544+(+10);
	i2 v546 = *(i2*)(intptr_t)v545;
	i2 v547 = v546+(+1);
	i8 v548 = (i8)(intptr_t)(ws+1296);
	i8 v549 = *(i8*)(intptr_t)v548;
	i8 v550 = v549+(+10);
	*(i2*)(intptr_t)v550 = v547;

endsub:;
}
	void f39_FCBRawRead(i2* /* amount */, i2 /* len */, i4 /* pos */, i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// _fcb_fillbuffer workspace at ws+1256 length ws+16
void f43__fcb_fillbuffer(i1* p551 /* b */, i8 p552 /* fcb */) {
	*(i8*)(intptr_t)(ws+1256) = p552; /*fcb */

	i8 v553 = (i8)(intptr_t)(ws+1256);
	i8 v554 = *(i8*)(intptr_t)v553;
	i8 v555 = v554+(+4);
	i4 v556 = *(i4*)(intptr_t)v555;
	i8 v557 = (i8)(intptr_t)(ws+1256);
	i8 v558 = *(i8*)(intptr_t)v557;
	i8 v559 = v558+(+10);
	i2 v560 = *(i2*)(intptr_t)v559;
	i4 v561 = v560;
	i4 v562 = v556+v561;
	i8 v563 = (i8)(intptr_t)(ws+1268);
	*(i4*)(intptr_t)v563 = v562;

	i8 v564 = (i8)(intptr_t)(ws+1256);
	i8 v565 = *(i8*)(intptr_t)v564;
	i8 v566 = (i8)(intptr_t)(ws+1268);
	i4 v567 = *(i4*)(intptr_t)v566;
	i2 v568 = (i2)+512;
	i8 v569 = (i8)(intptr_t)(f39_FCBRawRead);
	i2 v570;

	((void(*)(i2* /* amount */, i2 /* len */, i4 /* pos */, i8 /* fcb */))(intptr_t)v569)(&v570, v568, v567, v565);
	i8 v571 = (i8)(intptr_t)(ws+1256);
	i8 v572 = *(i8*)(intptr_t)v571;
	i8 v573 = v572+(+8);
	*(i2*)(intptr_t)v573 = v570;

	i1 v574 = (i1)+0;
	i8 v575 = (i8)(intptr_t)(ws+1264);
	*(i1*)(intptr_t)v575 = v574;

	i8 v576 = (i8)(intptr_t)(ws+1256);
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
	i8 v583 = (i8)(intptr_t)(ws+1256);
	i8 v584 = *(i8*)(intptr_t)v583;
	i8 v585 = v584+(+524);
	*(i1*)(intptr_t)v585 = v582;

	i8 v586 = (i8)(intptr_t)(ws+1268);
	i4 v587 = *(i4*)(intptr_t)v586;
	i8 v588 = (i8)(intptr_t)(ws+1256);
	i8 v589 = *(i8*)(intptr_t)v588;
	i8 v590 = v589+(+4);
	*(i4*)(intptr_t)v590 = v587;

	i2 v591 = (i2)+0;
	i8 v592 = (i8)(intptr_t)(ws+1256);
	i8 v593 = *(i8*)(intptr_t)v592;
	i8 v594 = v593+(+10);
	*(i2*)(intptr_t)v594 = v591;

	i8 v595 = (i8)(intptr_t)(ws+1256);
	i8 v596 = *(i8*)(intptr_t)v595;
	i8 v597 = v596+(+8);
	i2 v598 = *(i2*)(intptr_t)v597;
	i2 v599 = (i2)+0;
	if (v598==v599) goto c02_0097; else goto c02_0096;

c02_0096:;

	i8 v600 = (i8)(intptr_t)(ws+1256);
	i8 v601 = *(i8*)(intptr_t)v600;
	i8 v602 = v601+(+12);
	i1 v603 = *(i1*)(intptr_t)v602;
	i8 v604 = (i8)(intptr_t)(ws+1264);
	*(i1*)(intptr_t)v604 = v603;

	i8 v605 = (i8)(intptr_t)(ws+1256);
	i8 v606 = *(i8*)(intptr_t)v605;
	i8 v607 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v607)(v606);

c02_0097:;

c02_0093:;

endsub:;
	*p551 = *(i1*)(intptr_t)(ws+1264);
}
	void f40_FCBRawWrite(i2 /* len */, i4 /* pos */, i8 /* fcb */);

// FCBFlush workspace at ws+1296 length ws+12
void f44_FCBFlush(i8 p608 /* fcb */) {
	*(i8*)(intptr_t)(ws+1296) = p608; /*fcb */

	i8 v609 = (i8)(intptr_t)(ws+1296);
	i8 v610 = *(i8*)(intptr_t)v609;
	i8 v611 = v610+(+4);
	i4 v612 = *(i4*)(intptr_t)v611;
	i8 v613 = (i8)(intptr_t)(ws+1304);
	*(i4*)(intptr_t)v613 = v612;

	i8 v614 = (i8)(intptr_t)(ws+1296);
	i8 v615 = *(i8*)(intptr_t)v614;
	i8 v616 = v615+(+524);
	i1 v617 = *(i1*)(intptr_t)v616;
	i1 v618 = v617&(+4);
	i1 v619 = (i1)+0;
	if (v618==v619) goto c02_009c; else goto c02_009b;

c02_009b:;

	i8 v620 = (i8)(intptr_t)(ws+1296);
	i8 v621 = *(i8*)(intptr_t)v620;
	i8 v622 = (i8)(intptr_t)(ws+1304);
	i4 v623 = *(i4*)(intptr_t)v622;
	i8 v624 = (i8)(intptr_t)(ws+1296);
	i8 v625 = *(i8*)(intptr_t)v624;
	i8 v626 = v625+(+10);
	i2 v627 = *(i2*)(intptr_t)v626;
	i8 v628 = (i8)(intptr_t)(f40_FCBRawWrite);

	((void(*)(i2 /* len */, i4 /* pos */, i8 /* fcb */))(intptr_t)v628)(v627, v623, v621);

	i8 v629 = (i8)(intptr_t)(ws+1296);
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

	i8 v635 = (i8)(intptr_t)(ws+1304);
	i4 v636 = *(i4*)(intptr_t)v635;
	i8 v637 = (i8)(intptr_t)(ws+1296);
	i8 v638 = *(i8*)(intptr_t)v637;
	i8 v639 = v638+(+10);
	i2 v640 = *(i2*)(intptr_t)v639;
	i4 v641 = v640;
	i4 v642 = v636+v641;
	i8 v643 = (i8)(intptr_t)(ws+1296);
	i8 v644 = *(i8*)(intptr_t)v643;
	i8 v645 = v644+(+4);
	*(i4*)(intptr_t)v645 = v642;

	i1 v646 = (i1)+0;
	i8 v647 = (i8)(intptr_t)(ws+1296);
	i8 v648 = *(i8*)(intptr_t)v647;
	i8 v649 = v648+(+524);
	*(i1*)(intptr_t)v649 = v646;

	i2 v650 = (i2)+0;
	i8 v651 = (i8)(intptr_t)(ws+1296);
	i8 v652 = *(i8*)(intptr_t)v651;
	i8 v653 = v652+(+10);
	*(i2*)(intptr_t)v653 = v650;

	i2 v654 = (i2)+0;
	i8 v655 = (i8)(intptr_t)(ws+1296);
	i8 v656 = *(i8*)(intptr_t)v655;
	i8 v657 = v656+(+8);
	*(i2*)(intptr_t)v657 = v654;

endsub:;
}
	void f44_FCBFlush(i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// _fcb_flushbuffer workspace at ws+1280 length ws+9
void f45__fcb_flushbuffer(i1 p658 /* b */, i8 p659 /* fcb */) {
	*(i8*)(intptr_t)(ws+1280) = p659; /*fcb */
	*(i1*)(intptr_t)(ws+1288) = p658; /*b */

	i8 v660 = (i8)(intptr_t)(ws+1280);
	i8 v661 = *(i8*)(intptr_t)v660;
	i8 v662 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v662)(v661);

	i8 v663 = (i8)(intptr_t)(ws+1280);
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
	i8 v670 = (i8)(intptr_t)(ws+1280);
	i8 v671 = *(i8*)(intptr_t)v670;
	i8 v672 = v671+(+524);
	*(i1*)(intptr_t)v672 = v669;

	i8 v673 = (i8)(intptr_t)(ws+1288);
	i1 v674 = *(i1*)(intptr_t)v673;
	i8 v675 = (i8)(intptr_t)(ws+1280);
	i8 v676 = *(i8*)(intptr_t)v675;
	i8 v677 = v676+(+12);
	*(i1*)(intptr_t)v677 = v674;

	i8 v678 = (i8)(intptr_t)(ws+1280);
	i8 v679 = *(i8*)(intptr_t)v678;
	i8 v680 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v680)(v679);

endsub:;
}
	void f44_FCBFlush(i8 /* fcb */);
	void f43__fcb_fillbuffer(i1* /* b */, i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// FCBGetChar workspace at ws+1240 length ws+12
void f46_FCBGetChar(i1* p681 /* b */, i8 p682 /* fcb */) {
	*(i8*)(intptr_t)(ws+1240) = p682; /*fcb */

	i8 v683 = (i8)(intptr_t)(ws+1240);
	i8 v684 = *(i8*)(intptr_t)v683;
	i8 v685 = v684+(+524);
	i1 v686 = *(i1*)(intptr_t)v685;
	i1 v687 = v686&(+4);
	i1 v688 = (i1)+0;
	if (v687==v688) goto c02_00ab; else goto c02_00aa;

c02_00aa:;

	i8 v689 = (i8)(intptr_t)(ws+1240);
	i8 v690 = *(i8*)(intptr_t)v689;
	i8 v691 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v691)(v690);

c02_00ab:;

c02_00a7:;

	i8 v692 = (i8)(intptr_t)(ws+1240);
	i8 v693 = *(i8*)(intptr_t)v692;
	i8 v694 = v693+(+10);
	i2 v695 = *(i2*)(intptr_t)v694;
	i8 v696 = (i8)(intptr_t)(ws+1250);
	*(i2*)(intptr_t)v696 = v695;

	i8 v697 = (i8)(intptr_t)(ws+1250);
	i2 v698 = *(i2*)(intptr_t)v697;
	i8 v699 = (i8)(intptr_t)(ws+1240);
	i8 v700 = *(i8*)(intptr_t)v699;
	i8 v701 = v700+(+8);
	i2 v702 = *(i2*)(intptr_t)v701;
	if (v698==v702) goto c02_00af; else goto c02_00b0;

c02_00af:;

	i8 v703 = (i8)(intptr_t)(ws+1240);
	i8 v704 = *(i8*)(intptr_t)v703;
	i8 v705 = (i8)(intptr_t)(f43__fcb_fillbuffer);
	i1 v706;

	((void(*)(i1* /* b */, i8 /* fcb */))(intptr_t)v705)(&v706, v704);
	i8 v707 = (i8)(intptr_t)(ws+1248);
	*(i1*)(intptr_t)v707 = v706;

	goto c02_00ac;

c02_00b0:;

	i8 v708 = (i8)(intptr_t)(ws+1240);
	i8 v709 = *(i8*)(intptr_t)v708;
	i8 v710 = v709+(+12);
	i8 v711 = (i8)(intptr_t)(ws+1250);
	i2 v712 = *(i2*)(intptr_t)v711;
	i8 v713 = v712;
	i8 v714 = v710+v713;
	i1 v715 = *(i1*)(intptr_t)v714;
	i8 v716 = (i8)(intptr_t)(ws+1248);
	*(i1*)(intptr_t)v716 = v715;

	i8 v717 = (i8)(intptr_t)(ws+1240);
	i8 v718 = *(i8*)(intptr_t)v717;
	i8 v719 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v719)(v718);

c02_00ac:;

endsub:;
	*p681 = *(i1*)(intptr_t)(ws+1248);
}
	void f44_FCBFlush(i8 /* fcb */);
	void f45__fcb_flushbuffer(i1 /* b */, i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// FCBPutChar workspace at ws+1264 length ws+12
void f47_FCBPutChar(i1 p720 /* b */, i8 p721 /* fcb */) {
	*(i8*)(intptr_t)(ws+1264) = p721; /*fcb */
	*(i1*)(intptr_t)(ws+1272) = p720; /*b */

	i8 v722 = (i8)(intptr_t)(ws+1264);
	i8 v723 = *(i8*)(intptr_t)v722;
	i8 v724 = v723+(+524);
	i1 v725 = *(i1*)(intptr_t)v724;
	i1 v726 = v725&(+2);
	i1 v727 = (i1)+0;
	if (v726==v727) goto c02_00b5; else goto c02_00b4;

c02_00b4:;

	i8 v728 = (i8)(intptr_t)(ws+1264);
	i8 v729 = *(i8*)(intptr_t)v728;
	i8 v730 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v730)(v729);

c02_00b5:;

c02_00b1:;

	i8 v731 = (i8)(intptr_t)(ws+1264);
	i8 v732 = *(i8*)(intptr_t)v731;
	i8 v733 = v732+(+10);
	i2 v734 = *(i2*)(intptr_t)v733;
	i8 v735 = (i8)(intptr_t)(ws+1274);
	*(i2*)(intptr_t)v735 = v734;

	i8 v736 = (i8)(intptr_t)(ws+1274);
	i2 v737 = *(i2*)(intptr_t)v736;
	i2 v738 = (i2)+512;
	if (v737==v738) goto c02_00b9; else goto c02_00ba;

c02_00b9:;

	i8 v739 = (i8)(intptr_t)(ws+1264);
	i8 v740 = *(i8*)(intptr_t)v739;
	i8 v741 = (i8)(intptr_t)(ws+1272);
	i1 v742 = *(i1*)(intptr_t)v741;
	i8 v743 = (i8)(intptr_t)(f45__fcb_flushbuffer);

	((void(*)(i1 /* b */, i8 /* fcb */))(intptr_t)v743)(v742, v740);

	goto c02_00b6;

c02_00ba:;

	i8 v744 = (i8)(intptr_t)(ws+1272);
	i1 v745 = *(i1*)(intptr_t)v744;
	i8 v746 = (i8)(intptr_t)(ws+1264);
	i8 v747 = *(i8*)(intptr_t)v746;
	i8 v748 = v747+(+12);
	i8 v749 = (i8)(intptr_t)(ws+1274);
	i2 v750 = *(i2*)(intptr_t)v749;
	i8 v751 = v750;
	i8 v752 = v748+v751;
	*(i1*)(intptr_t)v752 = v745;

	i8 v753 = (i8)(intptr_t)(ws+1264);
	i8 v754 = *(i8*)(intptr_t)v753;
	i8 v755 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v755)(v754);

c02_00b6:;

	i8 v756 = (i8)(intptr_t)(ws+1264);
	i8 v757 = *(i8*)(intptr_t)v756;
	i8 v758 = v757+(+524);
	i1 v759 = *(i1*)(intptr_t)v758;
	i1 v760 = v759|(+4);
	i8 v761 = (i8)(intptr_t)(ws+1264);
	i8 v762 = *(i8*)(intptr_t)v761;
	i8 v763 = v762+(+524);
	*(i1*)(intptr_t)v763 = v760;

endsub:;
}

// FCBRawRead workspace at ws+1272 length ws+36
void f39_FCBRawRead(i2* p845 /* amount */, i2 p846 /* len */, i4 p847 /* pos */, i8 p848 /* fcb */) {
	*(i8*)(intptr_t)(ws+1272) = p848; /*fcb */
	*(i4*)(intptr_t)(ws+1280) = p847; /*pos */
	*(i2*)(intptr_t)(ws+1284) = p846; /*len */

	i8 v849 = (i8)(intptr_t)(ws+1272);
	i8 v850 = *(i8*)(intptr_t)v849;
	i4 v851 = *(i4*)(intptr_t)v850;
	i8 v852 = (i8)(intptr_t)(ws+1288);
	*(i4*)(intptr_t)v852 = v851;

	i8 v853 = (i8)(intptr_t)(ws+1272);
	i8 v854 = *(i8*)(intptr_t)v853;
	i8 v855 = v854+(+12);
	i8 v856 = (i8)(intptr_t)(ws+1296);
	*(i8*)(intptr_t)v856 = v855;


	
*(i4*)(intptr_t)(ws+1304) 
=pread( 
*(i4*)(intptr_t)(ws+1288) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+1296) 
,  
*(i2*)(intptr_t)(ws+1284) 
,  
*(i4*)(intptr_t)(ws+1280) 
); 



	i8 v857 = (i8)(intptr_t)(ws+1304);
	i4 v858 = *(i4*)(intptr_t)v857;
	i4 v859 = (i4)-1;
	if (v858==v859) goto c02_00d6; else goto c02_00d7;

c02_00d6:;

	i2 v860 = (i2)+0;
	i8 v861 = (i8)(intptr_t)(ws+1286);
	*(i2*)(intptr_t)v861 = v860;

	i8 v862 = (i8)(intptr_t)(ws+1272);
	i8 v863 = *(i8*)(intptr_t)v862;
	i8 v864 = v863+(+524);
	i1 v865 = *(i1*)(intptr_t)v864;
	i1 v866 = v865|(+1);
	i8 v867 = (i8)(intptr_t)(ws+1272);
	i8 v868 = *(i8*)(intptr_t)v867;
	i8 v869 = v868+(+524);
	*(i1*)(intptr_t)v869 = v866;

	goto c02_00d3;

c02_00d7:;

	i8 v870 = (i8)(intptr_t)(ws+1304);
	i4 v871 = *(i4*)(intptr_t)v870;
	i2 v872 = (s2)(s4)v871;
	i8 v873 = (i8)(intptr_t)(ws+1286);
	*(i2*)(intptr_t)v873 = v872;

c02_00d3:;

endsub:;
	*p845 = *(i2*)(intptr_t)(ws+1286);
}

// FCBRawWrite workspace at ws+1312 length ws+36
void f40_FCBRawWrite(i2 p874 /* len */, i4 p875 /* pos */, i8 p876 /* fcb */) {
	*(i8*)(intptr_t)(ws+1312) = p876; /*fcb */
	*(i4*)(intptr_t)(ws+1320) = p875; /*pos */
	*(i2*)(intptr_t)(ws+1324) = p874; /*len */

	i8 v877 = (i8)(intptr_t)(ws+1312);
	i8 v878 = *(i8*)(intptr_t)v877;
	i4 v879 = *(i4*)(intptr_t)v878;
	i8 v880 = (i8)(intptr_t)(ws+1328);
	*(i4*)(intptr_t)v880 = v879;

	i8 v881 = (i8)(intptr_t)(ws+1312);
	i8 v882 = *(i8*)(intptr_t)v881;
	i8 v883 = v882+(+12);
	i8 v884 = (i8)(intptr_t)(ws+1336);
	*(i8*)(intptr_t)v884 = v883;


	
*(i4*)(intptr_t)(ws+1344) 
=pwrite( 
*(i4*)(intptr_t)(ws+1328) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+1336) 
,  
*(i2*)(intptr_t)(ws+1324) 
,  
*(i4*)(intptr_t)(ws+1320) 
); 



	i8 v885 = (i8)(intptr_t)(ws+1344);
	i4 v886 = *(i4*)(intptr_t)v885;
	i4 v887 = (i4)-1;
	if (v886==v887) goto c02_00db; else goto c02_00dc;

c02_00db:;

	i8 v888 = (i8)(intptr_t)(ws+1312);
	i8 v889 = *(i8*)(intptr_t)v888;
	i8 v890 = v889+(+524);
	i1 v891 = *(i1*)(intptr_t)v890;
	i1 v892 = v891|(+1);
	i8 v893 = (i8)(intptr_t)(ws+1312);
	i8 v894 = *(i8*)(intptr_t)v893;
	i8 v895 = v894+(+524);
	*(i1*)(intptr_t)v895 = v892;

c02_00dc:;

c02_00d8:;

endsub:;
}
	void f41__fcb_init(i8 /* fcb */);

// fcb_i_open workspace at ws+1184 length ws+28
void f51_fcb_i_open(i1* p896 /* errno */, i4 p897 /* flags */, i8 p898 /* filename */, i8 p899 /* fcb */) {
	*(i8*)(intptr_t)(ws+1184) = p899; /*fcb */
	*(i8*)(intptr_t)(ws+1192) = p898; /*filename */
	*(i4*)(intptr_t)(ws+1200) = p897; /*flags */

	i8 v900 = (i8)(intptr_t)(ws+1184);
	i8 v901 = *(i8*)(intptr_t)v900;
	i8 v902 = (i8)(intptr_t)(f41__fcb_init);

	((void(*)(i8 /* fcb */))(intptr_t)v902)(v901);


	
errno = 0; 


	
*(i4*)(intptr_t)(ws+1208) 
 = open((char*)(intptr_t) 
*(i8*)(intptr_t)(ws+1192) 
,  
*(i4*)(intptr_t)(ws+1200) 
,  
(+438)
); 



	i8 v903 = (i8)(intptr_t)(ws+1208);
	i4 v904 = *(i4*)(intptr_t)v903;
	i8 v905 = (i8)(intptr_t)(ws+1184);
	i8 v906 = *(i8*)(intptr_t)v905;
	*(i4*)(intptr_t)v906 = v904;

	i8 v907 = (i8)(intptr_t)(ws+1208);
	i4 v908 = *(i4*)(intptr_t)v907;
	i4 v909 = (i4)+0;
	if ((s4)v908<(s4)v909) goto c02_00e0; else goto c02_00e1;

c02_00e0:;


	
*(i1*)(intptr_t)(ws+1204) 
 = errno; 



	goto c02_00dd;

c02_00e1:;

	i1 v910 = (i1)+0;
	i8 v911 = (i8)(intptr_t)(ws+1204);
	*(i1*)(intptr_t)v911 = v910;

c02_00dd:;

endsub:;
	*p896 = *(i1*)(intptr_t)(ws+1204);
}
	void f51_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenIn workspace at ws+1152 length ws+17
void f52_FCBOpenIn(i1* p912 /* errno */, i8 p913 /* filename */, i8 p914 /* fcb */) {
	*(i8*)(intptr_t)(ws+1152) = p914; /*fcb */
	*(i8*)(intptr_t)(ws+1160) = p913; /*filename */

	i8 v915 = (i8)(intptr_t)(ws+1152);
	i8 v916 = *(i8*)(intptr_t)v915;
	i8 v917 = (i8)(intptr_t)(ws+1160);
	i8 v918 = *(i8*)(intptr_t)v917;
	i4 v919 = (i4)+0;
	i8 v920 = (i8)(intptr_t)(f51_fcb_i_open);
	i1 v921;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v920)(&v921, v919, v918, v916);
	i8 v922 = (i8)(intptr_t)(ws+1168);
	*(i1*)(intptr_t)v922 = v921;

endsub:;
	*p912 = *(i1*)(intptr_t)(ws+1168);
}
	void f51_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenOut workspace at ws+1160 length ws+17
void f54_FCBOpenOut(i1* p934 /* errno */, i8 p935 /* filename */, i8 p936 /* fcb */) {
	*(i8*)(intptr_t)(ws+1160) = p936; /*fcb */
	*(i8*)(intptr_t)(ws+1168) = p935; /*filename */

	i8 v937 = (i8)(intptr_t)(ws+1160);
	i8 v938 = *(i8*)(intptr_t)v937;
	i8 v939 = (i8)(intptr_t)(ws+1168);
	i8 v940 = *(i8*)(intptr_t)v939;
	i4 v941 = (i4)+578;
	i8 v942 = (i8)(intptr_t)(f51_fcb_i_open);
	i1 v943;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v942)(&v943, v941, v940, v938);
	i8 v944 = (i8)(intptr_t)(ws+1176);
	*(i1*)(intptr_t)v944 = v943;

endsub:;
	*p934 = *(i1*)(intptr_t)(ws+1176);
}
	void f44_FCBFlush(i8 /* fcb */);

// FCBClose workspace at ws+1152 length ws+16
void f55_FCBClose(i1* p945 /* errno */, i8 p946 /* fcb */) {
	*(i8*)(intptr_t)(ws+1152) = p946; /*fcb */

	i8 v947 = (i8)(intptr_t)(ws+1152);
	i8 v948 = *(i8*)(intptr_t)v947;
	i8 v949 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v949)(v948);

	i8 v950 = (i8)(intptr_t)(ws+1152);
	i8 v951 = *(i8*)(intptr_t)v950;
	i4 v952 = *(i4*)(intptr_t)v951;
	i8 v953 = (i8)(intptr_t)(ws+1164);
	*(i4*)(intptr_t)v953 = v952;


	
errno = 0; 


	
close( 
*(i4*)(intptr_t)(ws+1164) 
); 


	
*(i1*)(intptr_t)(ws+1160) 
 = errno; 



endsub:;
	*p945 = *(i1*)(intptr_t)(ws+1160);
}
const i1 c02_s0001[] = { 0x43,0x4f,0x57,0x57,0x52,0x41,0x50,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f38_GetFreeMemory(i8* /* i */);
	void f17_print_i16(i2 /* value */);
const i1 c02_s0002[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f12_print(i8 /* ptr */);
const i1 c02_s0003[] = { 0x63,0x6f,0x77,0x77,0x72,0x61,0x70,0x20,0x3c,0x69,0x6e,0x70,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x20,0x3c,0x6f,0x75,0x74,0x70,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x0a,0 };
	void f12_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// SyntaxError workspace at ws+1152 length ws+0
void f60_SyntaxError(void) {

	i8 v1035 = (i8)(intptr_t)c02_s0003;
	i8 v1036 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1036)(v1035);

	i8 v1037 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v1037)();

endsub:;
}
const i1 c02_s0004[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f13_print_nl(void);
	void f6_ExitWithError(void);

// FatalError workspace at ws+1240 length ws+8
void f61_FatalError(i8 p1038 /* s */) {
	*(i8*)(intptr_t)(ws+1240) = p1038; /*s */

	i8 v1039 = (i8)(intptr_t)c02_s0004;
	i8 v1040 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1040)(v1039);

	i8 v1041 = (i8)(intptr_t)(ws+1240);
	i8 v1042 = *(i8*)(intptr_t)v1041;
	i8 v1043 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1043)(v1042);

	i8 v1044 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v1044)();

	i8 v1045 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v1045)();

endsub:;
}
	void f33_Alloc(i8* /* block */, i8 /* length */);

// E_b8 workspace at ws+1240 length ws+16
void f62_E_b8(i1 p1046 /* byte */) {
	*(i1*)(intptr_t)(ws+1240) = p1046; /*byte */

	i8 v1047 = (i8)(intptr_t)(ws+1096);
	i8 v1048 = *(i8*)(intptr_t)v1047;
	i8 v1049 = (i8)+0;
	if (v1048==v1049) goto c02_00f9; else goto c02_00f8;

c02_00f8:;

	i8 v1050 = (i8)(intptr_t)(ws+1096);
	i8 v1051 = *(i8*)(intptr_t)v1050;
	i8 v1052 = v1051+(+16);
	i8 v1053 = *(i8*)(intptr_t)v1052;
	i8 v1054 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v1054 = v1053;

	i8 v1055 = (i8)(intptr_t)(ws+1248);
	i8 v1056 = *(i8*)(intptr_t)v1055;
	i8 v1057 = v1056+(+255);
	i1 v1058 = *(i1*)(intptr_t)v1057;
	i1 v1059 = (i1)+255;
	if (v1058==v1059) goto c02_00fd; else goto c02_00fe;

c02_00fd:;

	i8 v1060 = (i8)+264;
	i8 v1061 = (i8)(intptr_t)(f33_Alloc);
	i8 v1062;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1061)(&v1062, v1060);
	i8 v1063 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v1063 = v1062;

	i8 v1064 = (i8)(intptr_t)(ws+1248);
	i8 v1065 = *(i8*)(intptr_t)v1064;
	i8 v1066 = (i8)(intptr_t)(ws+1096);
	i8 v1067 = *(i8*)(intptr_t)v1066;
	i8 v1068 = v1067+(+16);
	i8 v1069 = *(i8*)(intptr_t)v1068;
	i8 v1070 = v1069+(+256);
	*(i8*)(intptr_t)v1070 = v1065;

	i8 v1071 = (i8)(intptr_t)(ws+1248);
	i8 v1072 = *(i8*)(intptr_t)v1071;
	i8 v1073 = (i8)(intptr_t)(ws+1096);
	i8 v1074 = *(i8*)(intptr_t)v1073;
	i8 v1075 = v1074+(+16);
	*(i8*)(intptr_t)v1075 = v1072;

c02_00fe:;

c02_00fa:;

	i8 v1076 = (i8)(intptr_t)(ws+1240);
	i1 v1077 = *(i1*)(intptr_t)v1076;
	i8 v1078 = (i8)(intptr_t)(ws+1248);
	i8 v1079 = *(i8*)(intptr_t)v1078;
	i8 v1080 = (i8)(intptr_t)(ws+1248);
	i8 v1081 = *(i8*)(intptr_t)v1080;
	i8 v1082 = v1081+(+255);
	i1 v1083 = *(i1*)(intptr_t)v1082;
	i8 v1084 = v1083;
	i8 v1085 = v1079+v1084;
	*(i1*)(intptr_t)v1085 = v1077;

	i8 v1086 = (i8)(intptr_t)(ws+1248);
	i8 v1087 = *(i8*)(intptr_t)v1086;
	i8 v1088 = v1087+(+255);
	i1 v1089 = *(i1*)(intptr_t)v1088;
	i1 v1090 = v1089+(+1);
	i8 v1091 = (i8)(intptr_t)(ws+1248);
	i8 v1092 = *(i8*)(intptr_t)v1091;
	i8 v1093 = v1092+(+255);
	*(i1*)(intptr_t)v1093 = v1090;

	i8 v1094 = (i8)(intptr_t)(ws+1096);
	i8 v1095 = *(i8*)(intptr_t)v1094;
	i8 v1096 = v1095+(+24);
	i2 v1097 = *(i2*)(intptr_t)v1096;
	i2 v1098 = v1097+(+1);
	i8 v1099 = (i8)(intptr_t)(ws+1096);
	i8 v1100 = *(i8*)(intptr_t)v1099;
	i8 v1101 = v1100+(+24);
	*(i2*)(intptr_t)v1101 = v1098;

c02_00f9:;

c02_00f5:;

endsub:;
}
	void f62_E_b8(i1 /* byte */);

// E workspace at ws+1224 length ws+9
void f63_E(i8 p1102 /* text */) {
	*(i8*)(intptr_t)(ws+1224) = p1102; /*text */

c02_00ff:;

	i8 v1103 = (i8)(intptr_t)(ws+1224);
	i8 v1104 = *(i8*)(intptr_t)v1103;
	i1 v1105 = *(i1*)(intptr_t)v1104;
	i8 v1106 = (i8)(intptr_t)(ws+1232);
	*(i1*)(intptr_t)v1106 = v1105;

	i8 v1107 = (i8)(intptr_t)(ws+1224);
	i8 v1108 = *(i8*)(intptr_t)v1107;
	i8 v1109 = v1108+(+1);
	i8 v1110 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v1110 = v1109;

	i8 v1111 = (i8)(intptr_t)(ws+1232);
	i1 v1112 = *(i1*)(intptr_t)v1111;
	i1 v1113 = (i1)+0;
	if (v1112==v1113) goto c02_0104; else goto c02_0105;

c02_0104:;

	goto c02_0100;

c02_0105:;

c02_0101:;

	i8 v1114 = (i8)(intptr_t)(ws+1232);
	i1 v1115 = *(i1*)(intptr_t)v1114;
	i8 v1116 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1116)(v1115);

	goto c02_00ff;

c02_0100:;

endsub:;
}
	void f62_E_b8(i1 /* byte */);
	void f62_E_b8(i1 /* byte */);

// E_b16 workspace at ws+1224 length ws+2
void f64_E_b16(i2 p1117 /* word */) {
	*(i2*)(intptr_t)(ws+1224) = p1117; /*word */

	i8 v1118 = (i8)(intptr_t)(ws+1224);
	i2 v1119 = *(i2*)(intptr_t)v1118;
	i1 v1120 = v1119;
	i8 v1121 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1121)(v1120);

	i8 v1122 = (i8)(intptr_t)(ws+1224);
	i2 v1123 = *(i2*)(intptr_t)v1122;
	i1 v1124 = (i1)+8;
	i2 v1125 = ((i2)v1123)>>v1124;
	i1 v1126 = v1125;
	i8 v1127 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1127)(v1126);

endsub:;
}
	void f33_Alloc(i8* /* block */, i8 /* length */);
	void f33_Alloc(i8* /* block */, i8 /* length */);

// EmitterPushChunk workspace at ws+1224 length ws+8
void f66_EmitterPushChunk(void) {

	i8 v1139 = (i8)+26;
	i8 v1140 = (i8)(intptr_t)(f33_Alloc);
	i8 v1141;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1140)(&v1141, v1139);
	i8 v1142 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v1142 = v1141;

	i8 v1143 = (i8)+264;
	i8 v1144 = (i8)(intptr_t)(f33_Alloc);
	i8 v1145;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1144)(&v1145, v1143);
	i8 v1146 = (i8)(intptr_t)(ws+1224);
	i8 v1147 = *(i8*)(intptr_t)v1146;
	i8 v1148 = v1147+(+16);
	*(i8*)(intptr_t)v1148 = v1145;

	i8 v1149 = (i8)(intptr_t)(ws+1224);
	i8 v1150 = *(i8*)(intptr_t)v1149;
	i8 v1151 = v1150+(+16);
	i8 v1152 = *(i8*)(intptr_t)v1151;
	i8 v1153 = (i8)(intptr_t)(ws+1224);
	i8 v1154 = *(i8*)(intptr_t)v1153;
	i8 v1155 = v1154+(+8);
	*(i8*)(intptr_t)v1155 = v1152;

	i8 v1156 = (i8)(intptr_t)(ws+1096);
	i8 v1157 = *(i8*)(intptr_t)v1156;
	i8 v1158 = (i8)(intptr_t)(ws+1224);
	i8 v1159 = *(i8*)(intptr_t)v1158;
	*(i8*)(intptr_t)v1159 = v1157;

	i8 v1160 = (i8)(intptr_t)(ws+1224);
	i8 v1161 = *(i8*)(intptr_t)v1160;
	i8 v1162 = (i8)(intptr_t)(ws+1096);
	*(i8*)(intptr_t)v1162 = v1161;

endsub:;
}
	void f47_FCBPutChar(i1 /* b */, i8 /* fcb */);
	void f47_FCBPutChar(i1 /* b */, i8 /* fcb */);
	void f47_FCBPutChar(i1 /* b */, i8 /* fcb */);
	void f47_FCBPutChar(i1 /* b */, i8 /* fcb */);
	void f34_Free(i8 /* block */);
	void f34_Free(i8 /* block */);

// EmitterPopChunk workspace at ws+1224 length ws+40
void f67_EmitterPopChunk(i1 p1163 /* type */) {
	*(i1*)(intptr_t)(ws+1224) = p1163; /*type */

	i8 v1164 = (i8)(intptr_t)(ws+568);
	i8 v1165 = (i8)(intptr_t)(ws+1224);
	i1 v1166 = *(i1*)(intptr_t)v1165;
	i8 v1167 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(i1 /* b */, i8 /* fcb */))(intptr_t)v1167)(v1166, v1164);

	i8 v1168 = (i8)(intptr_t)(ws+1096);
	i8 v1169 = *(i8*)(intptr_t)v1168;
	i8 v1170 = v1169+(+24);
	i2 v1171 = *(i2*)(intptr_t)v1170;
	i8 v1172 = (i8)(intptr_t)(ws+1226);
	*(i2*)(intptr_t)v1172 = v1171;

	i8 v1173 = (i8)(intptr_t)(ws+568);
	i8 v1174 = (i8)(intptr_t)(ws+1226);
	i2 v1175 = *(i2*)(intptr_t)v1174;
	i1 v1176 = v1175;
	i8 v1177 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(i1 /* b */, i8 /* fcb */))(intptr_t)v1177)(v1176, v1173);

	i8 v1178 = (i8)(intptr_t)(ws+568);
	i8 v1179 = (i8)(intptr_t)(ws+1226);
	i2 v1180 = *(i2*)(intptr_t)v1179;
	i1 v1181 = (i1)+8;
	i2 v1182 = ((i2)v1180)>>v1181;
	i1 v1183 = v1182;
	i8 v1184 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(i1 /* b */, i8 /* fcb */))(intptr_t)v1184)(v1183, v1178);

	i8 v1185 = (i8)(intptr_t)(ws+1096);
	i8 v1186 = *(i8*)(intptr_t)v1185;
	i8 v1187 = v1186+(+8);
	i8 v1188 = *(i8*)(intptr_t)v1187;
	i8 v1189 = (i8)(intptr_t)(ws+1232);
	*(i8*)(intptr_t)v1189 = v1188;

c02_0108:;

	i8 v1190 = (i8)(intptr_t)(ws+1232);
	i8 v1191 = *(i8*)(intptr_t)v1190;
	i8 v1192 = (i8)+0;
	if (v1191==v1192) goto c02_010b; else goto c02_010a;

c02_010a:;

	i1 v1193 = (i1)+0;
	i8 v1194 = (i8)(intptr_t)(ws+1240);
	*(i1*)(intptr_t)v1194 = v1193;

c02_010e:;

	i8 v1195 = (i8)(intptr_t)(ws+1240);
	i1 v1196 = *(i1*)(intptr_t)v1195;
	i8 v1197 = (i8)(intptr_t)(ws+1232);
	i8 v1198 = *(i8*)(intptr_t)v1197;
	i8 v1199 = v1198+(+255);
	i1 v1200 = *(i1*)(intptr_t)v1199;
	if (v1196==v1200) goto c02_0111; else goto c02_0110;

c02_0110:;

	i8 v1201 = (i8)(intptr_t)(ws+568);
	i8 v1202 = (i8)(intptr_t)(ws+1232);
	i8 v1203 = *(i8*)(intptr_t)v1202;
	i8 v1204 = (i8)(intptr_t)(ws+1240);
	i1 v1205 = *(i1*)(intptr_t)v1204;
	i8 v1206 = v1205;
	i8 v1207 = v1203+v1206;
	i1 v1208 = *(i1*)(intptr_t)v1207;
	i8 v1209 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(i1 /* b */, i8 /* fcb */))(intptr_t)v1209)(v1208, v1201);

	i8 v1210 = (i8)(intptr_t)(ws+1240);
	i1 v1211 = *(i1*)(intptr_t)v1210;
	i1 v1212 = v1211+(+1);
	i8 v1213 = (i8)(intptr_t)(ws+1240);
	*(i1*)(intptr_t)v1213 = v1212;

	goto c02_010e;

c02_0111:;

	i8 v1214 = (i8)(intptr_t)(ws+1232);
	i8 v1215 = *(i8*)(intptr_t)v1214;
	i8 v1216 = v1215+(+256);
	i8 v1217 = *(i8*)(intptr_t)v1216;
	i8 v1218 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v1218 = v1217;

	i8 v1219 = (i8)(intptr_t)(ws+1232);
	i8 v1220 = *(i8*)(intptr_t)v1219;
	i8 v1221 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v1221)(v1220);

	i8 v1222 = (i8)(intptr_t)(ws+1248);
	i8 v1223 = *(i8*)(intptr_t)v1222;
	i8 v1224 = (i8)(intptr_t)(ws+1232);
	*(i8*)(intptr_t)v1224 = v1223;

	goto c02_0108;

c02_010b:;

	i8 v1225 = (i8)(intptr_t)(ws+1096);
	i8 v1226 = *(i8*)(intptr_t)v1225;
	i8 v1227 = *(i8*)(intptr_t)v1226;
	i8 v1228 = (i8)(intptr_t)(ws+1256);
	*(i8*)(intptr_t)v1228 = v1227;

	i8 v1229 = (i8)(intptr_t)(ws+1096);
	i8 v1230 = *(i8*)(intptr_t)v1229;
	i8 v1231 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v1231)(v1230);

	i8 v1232 = (i8)(intptr_t)(ws+1256);
	i8 v1233 = *(i8*)(intptr_t)v1232;
	i8 v1234 = (i8)(intptr_t)(ws+1096);
	*(i8*)(intptr_t)v1234 = v1233;

endsub:;
}
	void f54_FCBOpenOut(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
const i1 c02_s0005[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f61_FatalError(i8 /* s */);

// EmitterOpenfile workspace at ws+1152 length ws+8
void f68_EmitterOpenfile(i8 p1235 /* filename */) {
	*(i8*)(intptr_t)(ws+1152) = p1235; /*filename */

	i8 v1236 = (i8)(intptr_t)(ws+568);
	i8 v1237 = (i8)(intptr_t)(ws+1152);
	i8 v1238 = *(i8*)(intptr_t)v1237;
	i8 v1239 = (i8)(intptr_t)(f54_FCBOpenOut);
	i1 v1240;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v1239)(&v1240, v1238, v1236);
	i1 v1241 = (i1)+0;
	if (v1240==v1241) goto c02_0116; else goto c02_0115;

c02_0115:;

	i8 v1242 = (i8)(intptr_t)c02_s0005;
	i8 v1243 = (i8)(intptr_t)(f61_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1243)(v1242);

c02_0116:;

c02_0112:;

endsub:;
}
	void f47_FCBPutChar(i1 /* b */, i8 /* fcb */);
	void f47_FCBPutChar(i1 /* b */, i8 /* fcb */);
	void f47_FCBPutChar(i1 /* b */, i8 /* fcb */);
	void f55_FCBClose(i1* /* errno */, i8 /* fcb */);
const i1 c02_s0006[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f61_FatalError(i8 /* s */);

// EmitterClosefile workspace at ws+1152 length ws+0
void f69_EmitterClosefile(void) {

	i8 v1244 = (i8)(intptr_t)(ws+568);
	i1 v1245 = (i1)+69;
	i8 v1246 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(i1 /* b */, i8 /* fcb */))(intptr_t)v1246)(v1245, v1244);

	i8 v1247 = (i8)(intptr_t)(ws+568);
	i1 v1248 = (i1)+0;
	i8 v1249 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(i1 /* b */, i8 /* fcb */))(intptr_t)v1249)(v1248, v1247);

	i8 v1250 = (i8)(intptr_t)(ws+568);
	i1 v1251 = (i1)+0;
	i8 v1252 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(i1 /* b */, i8 /* fcb */))(intptr_t)v1252)(v1251, v1250);

	i8 v1253 = (i8)(intptr_t)(ws+568);
	i8 v1254 = (i8)(intptr_t)(f55_FCBClose);
	i1 v1255;

	((void(*)(i1* /* errno */, i8 /* fcb */))(intptr_t)v1254)(&v1255, v1253);
	i1 v1256 = (i1)+0;
	if (v1255==v1256) goto c02_011b; else goto c02_011a;

c02_011a:;

	i8 v1257 = (i8)(intptr_t)c02_s0006;
	i8 v1258 = (i8)(intptr_t)(f61_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1258)(v1257);

c02_011b:;

c02_0117:;

endsub:;
}
	void f66_EmitterPushChunk(void);
	void f64_E_b16(i2 /* word */);
	void f63_E(i8 /* text */);
	void f67_EmitterPopChunk(i1 /* type */);

// EmitterDeclareSubroutine workspace at ws+1200 length ws+16
void f70_EmitterDeclareSubroutine(i8 p1259 /* name */, i2 p1260 /* id */) {
	*(i2*)(intptr_t)(ws+1200) = p1260; /*id */
	*(i8*)(intptr_t)(ws+1208) = p1259; /*name */

	i8 v1261 = (i8)(intptr_t)(f66_EmitterPushChunk);

	((void(*)(void))(intptr_t)v1261)();

	i8 v1262 = (i8)(intptr_t)(ws+1200);
	i2 v1263 = *(i2*)(intptr_t)v1262;
	i8 v1264 = (i8)(intptr_t)(f64_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1264)(v1263);

	i8 v1265 = (i8)(intptr_t)(ws+1208);
	i8 v1266 = *(i8*)(intptr_t)v1265;
	i8 v1267 = (i8)(intptr_t)(f63_E);

	((void(*)(i8 /* text */))(intptr_t)v1267)(v1266);

	i1 v1268 = (i1)+78;
	i8 v1269 = (i8)(intptr_t)(f67_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v1269)(v1268);

endsub:;
}
	void f66_EmitterPushChunk(void);
	void f64_E_b16(i2 /* word */);
	void f63_E(i8 /* text */);
	void f67_EmitterPopChunk(i1 /* type */);

// EmitterDeclareExternal workspace at ws+1208 length ws+16
void f71_EmitterDeclareExternal(i8 p1270 /* name */, i2 p1271 /* id */) {
	*(i2*)(intptr_t)(ws+1208) = p1271; /*id */
	*(i8*)(intptr_t)(ws+1216) = p1270; /*name */

	i8 v1272 = (i8)(intptr_t)(f66_EmitterPushChunk);

	((void(*)(void))(intptr_t)v1272)();

	i8 v1273 = (i8)(intptr_t)(ws+1208);
	i2 v1274 = *(i2*)(intptr_t)v1273;
	i8 v1275 = (i8)(intptr_t)(f64_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1275)(v1274);

	i8 v1276 = (i8)(intptr_t)(ws+1216);
	i8 v1277 = *(i8*)(intptr_t)v1276;
	i8 v1278 = (i8)(intptr_t)(f63_E);

	((void(*)(i8 /* text */))(intptr_t)v1278)(v1277);

	i1 v1279 = (i1)+88;
	i8 v1280 = (i8)(intptr_t)(f67_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v1280)(v1279);

endsub:;
}
	void f66_EmitterPushChunk(void);
	void f64_E_b16(i2 /* word */);
	void f64_E_b16(i2 /* word */);
	void f67_EmitterPopChunk(i1 /* type */);

// EmitterReferenceSubroutine workspace at ws+1216 length ws+4
void f72_EmitterReferenceSubroutine(i2 p1281 /* used */, i2 p1282 /* user */) {
	*(i2*)(intptr_t)(ws+1216) = p1282; /*user */
	*(i2*)(intptr_t)(ws+1218) = p1281; /*used */

	i8 v1283 = (i8)(intptr_t)(ws+1216);
	i2 v1284 = *(i2*)(intptr_t)v1283;
	i8 v1285 = (i8)(intptr_t)(ws+1218);
	i2 v1286 = *(i2*)(intptr_t)v1285;
	if (v1284==v1286) goto c02_0120; else goto c02_011f;

c02_011f:;

	i8 v1287 = (i8)(intptr_t)(f66_EmitterPushChunk);

	((void(*)(void))(intptr_t)v1287)();

	i8 v1288 = (i8)(intptr_t)(ws+1216);
	i2 v1289 = *(i2*)(intptr_t)v1288;
	i8 v1290 = (i8)(intptr_t)(f64_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1290)(v1289);

	i8 v1291 = (i8)(intptr_t)(ws+1218);
	i2 v1292 = *(i2*)(intptr_t)v1291;
	i8 v1293 = (i8)(intptr_t)(f64_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1293)(v1292);

	i1 v1294 = (i1)+82;
	i8 v1295 = (i8)(intptr_t)(f67_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v1295)(v1294);

c02_0120:;

c02_011c:;

endsub:;
}
	void f66_EmitterPushChunk(void);
	void f64_E_b16(i2 /* word */);
	void f62_E_b8(i1 /* byte */);
	void f64_E_b16(i2 /* word */);
	void f67_EmitterPopChunk(i1 /* type */);

// EmitterDeclareWorkspace workspace at ws+1208 length ws+6
void f73_EmitterDeclareWorkspace(i2 p1296 /* workspace */, i1 p1297 /* wid */, i2 p1298 /* id */) {
	*(i2*)(intptr_t)(ws+1208) = p1298; /*id */
	*(i1*)(intptr_t)(ws+1210) = p1297; /*wid */
	*(i2*)(intptr_t)(ws+1212) = p1296; /*workspace */

	i8 v1299 = (i8)(intptr_t)(f66_EmitterPushChunk);

	((void(*)(void))(intptr_t)v1299)();

	i8 v1300 = (i8)(intptr_t)(ws+1208);
	i2 v1301 = *(i2*)(intptr_t)v1300;
	i8 v1302 = (i8)(intptr_t)(f64_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1302)(v1301);

	i8 v1303 = (i8)(intptr_t)(ws+1210);
	i1 v1304 = *(i1*)(intptr_t)v1303;
	i8 v1305 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1305)(v1304);

	i8 v1306 = (i8)(intptr_t)(ws+1212);
	i2 v1307 = *(i2*)(intptr_t)v1306;
	i8 v1308 = (i8)(intptr_t)(f64_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1308)(v1307);

	i1 v1309 = (i1)+87;
	i8 v1310 = (i8)(intptr_t)(f67_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v1310)(v1309);

endsub:;
}
	void f26_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);
	void f33_Alloc(i8* /* block */, i8 /* length */);
	void f35_StrDup(i8* /* sout */, i8 /* s */);

// GetSymbol workspace at ws+1216 length ws+16
void f74_GetSymbol(i8* p1317 /* symbol */, i8 p1318 /* name */) {
	*(i8*)(intptr_t)(ws+1216) = p1318; /*name */

	i8 v1319 = (i8)(intptr_t)(ws+1128);
	i8 v1320 = *(i8*)(intptr_t)v1319;
	i8 v1321 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v1321 = v1320;

c02_0123:;

	i8 v1322 = (i8)(intptr_t)(ws+1224);
	i8 v1323 = *(i8*)(intptr_t)v1322;
	i8 v1324 = (i8)+0;
	if (v1323==v1324) goto c02_0126; else goto c02_0125;

c02_0125:;

	i8 v1325 = (i8)(intptr_t)(ws+1216);
	i8 v1326 = *(i8*)(intptr_t)v1325;
	i8 v1327 = (i8)(intptr_t)(ws+1224);
	i8 v1328 = *(i8*)(intptr_t)v1327;
	i8 v1329 = v1328+(+8);
	i8 v1330 = *(i8*)(intptr_t)v1329;
	i8 v1331 = (i8)(intptr_t)(f26_StrCmp);
	i1 v1332;

	((void(*)(i1* /* res */, i8 /* s2 */, i8 /* s1 */))(intptr_t)v1331)(&v1332, v1330, v1326);
	i1 v1333 = (i1)+0;
	if (v1332==v1333) goto c02_012a; else goto c02_012b;

c02_012a:;

	goto endsub;

c02_012b:;

c02_0127:;

	i8 v1334 = (i8)(intptr_t)(ws+1224);
	i8 v1335 = *(i8*)(intptr_t)v1334;
	i8 v1336 = *(i8*)(intptr_t)v1335;
	i8 v1337 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v1337 = v1336;

	goto c02_0123;

c02_0126:;

	i8 v1338 = (i8)+19;
	i8 v1339 = (i8)(intptr_t)(f33_Alloc);
	i8 v1340;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1339)(&v1340, v1338);
	i8 v1341 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v1341 = v1340;

	i8 v1342 = (i8)(intptr_t)(ws+1216);
	i8 v1343 = *(i8*)(intptr_t)v1342;
	i8 v1344 = (i8)(intptr_t)(f35_StrDup);
	i8 v1345;

	((void(*)(i8* /* sout */, i8 /* s */))(intptr_t)v1344)(&v1345, v1343);
	i8 v1346 = (i8)(intptr_t)(ws+1224);
	i8 v1347 = *(i8*)(intptr_t)v1346;
	i8 v1348 = v1347+(+8);
	*(i8*)(intptr_t)v1348 = v1345;

	i8 v1349 = (i8)(intptr_t)(ws+1136);
	i2 v1350 = *(i2*)(intptr_t)v1349;
	i8 v1351 = (i8)(intptr_t)(ws+1224);
	i8 v1352 = *(i8*)(intptr_t)v1351;
	i8 v1353 = v1352+(+16);
	*(i2*)(intptr_t)v1353 = v1350;

	i8 v1354 = (i8)(intptr_t)(ws+1136);
	i2 v1355 = *(i2*)(intptr_t)v1354;
	i2 v1356 = v1355+(+1);
	i8 v1357 = (i8)(intptr_t)(ws+1136);
	*(i2*)(intptr_t)v1357 = v1356;

	i8 v1358 = (i8)(intptr_t)(ws+1128);
	i8 v1359 = *(i8*)(intptr_t)v1358;
	i8 v1360 = (i8)(intptr_t)(ws+1224);
	i8 v1361 = *(i8*)(intptr_t)v1360;
	*(i8*)(intptr_t)v1361 = v1359;

	i8 v1362 = (i8)(intptr_t)(ws+1224);
	i8 v1363 = *(i8*)(intptr_t)v1362;
	i8 v1364 = (i8)(intptr_t)(ws+1128);
	*(i8*)(intptr_t)v1364 = v1363;

endsub:;
	*p1317 = *(i8*)(intptr_t)(ws+1224);
}
const i1 c02_s0007[] = { 0x40,0 };
	void f46_FCBGetChar(i1* /* b */, i8 /* fcb */);

// GetC workspace at ws+1240 length ws+0
void f76_GetC(void) {

	i8 v1371 = (i8)(intptr_t)(ws+40);
	i8 v1372 = (i8)(intptr_t)(f46_FCBGetChar);
	i1 v1373;

	((void(*)(i1* /* b */, i8 /* fcb */))(intptr_t)v1372)(&v1373, v1371);
	i8 v1374 = (i8)(intptr_t)(ws+1152);
	*(i1*)(intptr_t)v1374 = v1373;

endsub:;
}
const i1 c02_s0008[] = { 0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0x63,0x6f,0x77,0x77,0x72,0x61,0x70,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x69,0x76,0x65,0 };
	void f61_FatalError(i8 /* s */);
	void f76_GetC(void);

// ExpectC workspace at ws+1216 length ws+1
void f77_ExpectC(i1 p1375 /* want */) {
	*(i1*)(intptr_t)(ws+1216) = p1375; /*want */

	i8 v1376 = (i8)(intptr_t)(ws+1152);
	i1 v1377 = *(i1*)(intptr_t)v1376;
	i8 v1378 = (i8)(intptr_t)(ws+1216);
	i1 v1379 = *(i1*)(intptr_t)v1378;
	if (v1377==v1379) goto c02_0130; else goto c02_012f;

c02_012f:;

	i8 v1380 = (i8)(intptr_t)c02_s0008;
	i8 v1381 = (i8)(intptr_t)(f61_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1381)(v1380);

c02_0130:;

c02_012c:;

	i8 v1382 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1382)();

endsub:;
}
	void f76_GetC(void);

// SkipToEndOfLine workspace at ws+1192 length ws+0
void f78_SkipToEndOfLine(void) {

c02_0131:;

	i8 v1383 = (i8)(intptr_t)(ws+1152);
	i1 v1384 = *(i1*)(intptr_t)v1383;
	i1 v1385 = (i1)+0;
	if (v1384==v1385) goto c02_013a; else goto c02_013d;

c02_013d:;

	i8 v1386 = (i8)(intptr_t)(ws+1152);
	i1 v1387 = *(i1*)(intptr_t)v1386;
	i1 v1388 = (i1)+26;
	if (v1387==v1388) goto c02_013a; else goto c02_013c;

c02_013c:;

	i8 v1389 = (i8)(intptr_t)(ws+1152);
	i1 v1390 = *(i1*)(intptr_t)v1389;
	i1 v1391 = (i1)+10;
	if (v1390==v1391) goto c02_013a; else goto c02_013b;

c02_013a:;

	goto c02_0132;

c02_013b:;

c02_0133:;

	i8 v1392 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1392)();

	goto c02_0131;

c02_0132:;

endsub:;
}
	void f76_GetC(void);

// SkipWhitespace workspace at ws+1240 length ws+0
void f79_SkipWhitespace(void) {

c02_013e:;

	i8 v1393 = (i8)(intptr_t)(ws+1152);
	i1 v1394 = *(i1*)(intptr_t)v1393;
	i1 v1395 = (i1)+32;
	if (v1394==v1395) goto c02_0146; else goto c02_0147;

c02_0147:;

	i8 v1396 = (i8)(intptr_t)(ws+1152);
	i1 v1397 = *(i1*)(intptr_t)v1396;
	i1 v1398 = (i1)+9;
	if (v1397==v1398) goto c02_0146; else goto c02_0145;

c02_0145:;

	goto c02_013f;

c02_0146:;

c02_0140:;

	i8 v1399 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1399)();

	goto c02_013e;

c02_013f:;

endsub:;
}
	void f79_SkipWhitespace(void);
const i1 c02_s0009[] = { 0x77,0x6f,0x72,0x64,0x20,0x74,0x6f,0x6f,0x20,0x6c,0x6f,0x6e,0x67,0 };
	void f61_FatalError(i8 /* s */);
	void f76_GetC(void);

// ReadWord workspace at ws+1232 length ws+8
void f80_ReadWord(void) {

	i8 v1400 = (i8)(intptr_t)(f79_SkipWhitespace);

	((void(*)(void))(intptr_t)v1400)();

	i8 v1401 = (i8)(intptr_t)(ws+1156);
	i8 v1402 = (i8)(intptr_t)(ws+1232);
	*(i8*)(intptr_t)v1402 = v1401;

c02_0148:;

	i8 v1403 = (i8)(intptr_t)(ws+1152);
	i1 v1404 = *(i1*)(intptr_t)v1403;
	i1 v1405 = (i1)+48;
	if (v1404<v1405) goto c02_0160; else goto c02_0161;

c02_0161:;

	i1 v1406 = (i1)+57;
	i8 v1407 = (i8)(intptr_t)(ws+1152);
	i1 v1408 = *(i1*)(intptr_t)v1407;
	if (v1406<v1408) goto c02_0160; else goto c02_015c;

c02_0160:;

	i8 v1409 = (i8)(intptr_t)(ws+1152);
	i1 v1410 = *(i1*)(intptr_t)v1409;
	i1 v1411 = (i1)+97;
	if (v1410<v1411) goto c02_015f; else goto c02_0162;

c02_0162:;

	i1 v1412 = (i1)+122;
	i8 v1413 = (i8)(intptr_t)(ws+1152);
	i1 v1414 = *(i1*)(intptr_t)v1413;
	if (v1412<v1414) goto c02_015f; else goto c02_015c;

c02_015f:;

	i8 v1415 = (i8)(intptr_t)(ws+1152);
	i1 v1416 = *(i1*)(intptr_t)v1415;
	i1 v1417 = (i1)+65;
	if (v1416<v1417) goto c02_015e; else goto c02_0163;

c02_0163:;

	i1 v1418 = (i1)+90;
	i8 v1419 = (i8)(intptr_t)(ws+1152);
	i1 v1420 = *(i1*)(intptr_t)v1419;
	if (v1418<v1420) goto c02_015e; else goto c02_015c;

c02_015e:;

	i8 v1421 = (i8)(intptr_t)(ws+1152);
	i1 v1422 = *(i1*)(intptr_t)v1421;
	i1 v1423 = (i1)+95;
	if (v1422==v1423) goto c02_015c; else goto c02_015d;

c02_015d:;

	i8 v1424 = (i8)(intptr_t)(ws+1152);
	i1 v1425 = *(i1*)(intptr_t)v1424;
	i1 v1426 = (i1)+64;
	if (v1425==v1426) goto c02_015c; else goto c02_015b;

c02_015b:;

	goto c02_0149;

c02_015c:;

c02_014a:;

	i8 v1427 = (i8)(intptr_t)(ws+1152);
	i1 v1428 = *(i1*)(intptr_t)v1427;
	i8 v1429 = (i8)(intptr_t)(ws+1232);
	i8 v1430 = *(i8*)(intptr_t)v1429;
	*(i1*)(intptr_t)v1430 = v1428;

	i8 v1431 = (i8)(intptr_t)(ws+1232);
	i8 v1432 = *(i8*)(intptr_t)v1431;
	i8 v1433 = v1432+(+1);
	i8 v1434 = (i8)(intptr_t)(ws+1232);
	*(i8*)(intptr_t)v1434 = v1433;

	i8 v1435 = (i8)(intptr_t)(ws+1232);
	i8 v1436 = *(i8*)(intptr_t)v1435;
	i8 v1437 = (i8)(intptr_t)(ws+1188);
	if (v1436==v1437) goto c02_0167; else goto c02_0168;

c02_0167:;

	i8 v1438 = (i8)(intptr_t)c02_s0009;
	i8 v1439 = (i8)(intptr_t)(f61_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1439)(v1438);

c02_0168:;

c02_0164:;

	i8 v1440 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1440)();

	goto c02_0148;

c02_0149:;

	i1 v1441 = (i1)+0;
	i8 v1442 = (i8)(intptr_t)(ws+1232);
	i8 v1443 = *(i8*)(intptr_t)v1442;
	*(i1*)(intptr_t)v1443 = v1441;

endsub:;
}
	void f80_ReadWord(void);
	void f22_AToI(i4* /* result */, i8* /* ptr */, i8 /* buffer */);
const i1 c02_s000a[] = { 0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };
	void f61_FatalError(i8 /* s */);

// ReadNumber workspace at ws+1216 length ws+16
void f81_ReadNumber(i4* p1444 /* result */) {

	i8 v1445 = (i8)(intptr_t)(f80_ReadWord);

	((void(*)(void))(intptr_t)v1445)();

	i8 v1446 = (i8)(intptr_t)(ws+1156);
	i8 v1447 = (i8)(intptr_t)(f22_AToI);
	i4 v1448;
	i8 v1449;

	((void(*)(i4* /* result */, i8* /* ptr */, i8 /* buffer */))(intptr_t)v1447)(&v1448, &v1449, v1446);

	i8 v1450 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v1450 = v1449;

	i8 v1451 = (i8)(intptr_t)(ws+1216);
	*(i4*)(intptr_t)v1451 = v1448;

	i8 v1452 = (i8)(intptr_t)(ws+1224);
	i8 v1453 = *(i8*)(intptr_t)v1452;
	i8 v1454 = (i8)(intptr_t)(ws+1156);
	if (v1453==v1454) goto c02_016c; else goto c02_016d;

c02_016c:;

	i8 v1455 = (i8)(intptr_t)c02_s000a;
	i8 v1456 = (i8)(intptr_t)(f61_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1456)(v1455);

c02_016d:;

c02_0169:;

endsub:;
	*p1444 = *(i4*)(intptr_t)(ws+1216);
}
	void f71_EmitterDeclareExternal(i8 /* name */, i2 /* id */);

// MarkSubroutinePublic workspace at ws+1200 length ws+8
void f82_MarkSubroutinePublic(i8 p1457 /* symbol */) {
	*(i8*)(intptr_t)(ws+1200) = p1457; /*symbol */

	i8 v1458 = (i8)(intptr_t)(ws+1200);
	i8 v1459 = *(i8*)(intptr_t)v1458;
	i8 v1460 = v1459+(+18);
	i1 v1461 = *(i1*)(intptr_t)v1460;
	i1 v1462 = v1461&(+2);
	i1 v1463 = (i1)+0;
	if (v1462==v1463) goto c02_0171; else goto c02_0172;

c02_0171:;

	i8 v1464 = (i8)(intptr_t)(ws+1200);
	i8 v1465 = *(i8*)(intptr_t)v1464;
	i8 v1466 = v1465+(+18);
	i1 v1467 = *(i1*)(intptr_t)v1466;
	i1 v1468 = v1467|(+2);
	i8 v1469 = (i8)(intptr_t)(ws+1200);
	i8 v1470 = *(i8*)(intptr_t)v1469;
	i8 v1471 = v1470+(+18);
	*(i1*)(intptr_t)v1471 = v1468;

	i8 v1472 = (i8)(intptr_t)(ws+1200);
	i8 v1473 = *(i8*)(intptr_t)v1472;
	i8 v1474 = v1473+(+16);
	i2 v1475 = *(i2*)(intptr_t)v1474;
	i8 v1476 = (i8)(intptr_t)(ws+1200);
	i8 v1477 = *(i8*)(intptr_t)v1476;
	i8 v1478 = v1477+(+8);
	i8 v1479 = *(i8*)(intptr_t)v1478;
	i8 v1480 = (i8)(intptr_t)(f71_EmitterDeclareExternal);

	((void(*)(i8 /* name */, i2 /* id */))(intptr_t)v1480)(v1479, v1475);

c02_0172:;

c02_016e:;

endsub:;
}
	void f67_EmitterPopChunk(i1 /* type */);

// CloseChunk workspace at ws+1200 length ws+0
void f84_CloseChunk(void) {

	i8 v1487 = (i8)(intptr_t)(ws+1144);
	i8 v1488 = *(i8*)(intptr_t)v1487;
	i8 v1489 = (i8)+0;
	if (v1488==v1489) goto c02_0177; else goto c02_0176;

c02_0176:;

	i1 v1490 = (i1)+70;
	i8 v1491 = (i8)(intptr_t)(f67_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v1491)(v1490);

	i8 v1492 = (i8)+0;
	i8 v1493 = (i8)(intptr_t)(ws+1144);
	*(i8*)(intptr_t)v1493 = v1492;

c02_0177:;

c02_0173:;

endsub:;
}
	void f84_CloseChunk(void);
	void f76_GetC(void);
	void f80_ReadWord(void);
	void f74_GetSymbol(i8* /* symbol */, i8 /* name */);
	void f82_MarkSubroutinePublic(i8 /* symbol */);
	void f70_EmitterDeclareSubroutine(i8 /* name */, i2 /* id */);
	void f66_EmitterPushChunk(void);
	void f62_E_b8(i1 /* byte */);
	void f64_E_b16(i2 /* word */);

// DeclareSubroutine workspace at ws+1192 length ws+1
void f85_DeclareSubroutine(i1 p1494 /* exported */) {
	*(i1*)(intptr_t)(ws+1192) = p1494; /*exported */

	i8 v1495 = (i8)(intptr_t)(f84_CloseChunk);

	((void(*)(void))(intptr_t)v1495)();

	i8 v1496 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1496)();

	i8 v1497 = (i8)(intptr_t)(f80_ReadWord);

	((void(*)(void))(intptr_t)v1497)();

	i8 v1498 = (i8)(intptr_t)(ws+1156);
	i8 v1499 = (i8)(intptr_t)(f74_GetSymbol);
	i8 v1500;

	((void(*)(i8* /* symbol */, i8 /* name */))(intptr_t)v1499)(&v1500, v1498);
	i8 v1501 = (i8)(intptr_t)(ws+1144);
	*(i8*)(intptr_t)v1501 = v1500;

	i8 v1502 = (i8)(intptr_t)(ws+1144);
	i8 v1503 = *(i8*)(intptr_t)v1502;
	i8 v1504 = v1503+(+18);
	i1 v1505 = *(i1*)(intptr_t)v1504;
	i1 v1506 = v1505|(+1);
	i8 v1507 = (i8)(intptr_t)(ws+1144);
	i8 v1508 = *(i8*)(intptr_t)v1507;
	i8 v1509 = v1508+(+18);
	*(i1*)(intptr_t)v1509 = v1506;

	i8 v1510 = (i8)(intptr_t)(ws+1192);
	i1 v1511 = *(i1*)(intptr_t)v1510;
	i1 v1512 = (i1)+0;
	if (v1511==v1512) goto c02_017c; else goto c02_017b;

c02_017b:;

	i8 v1513 = (i8)(intptr_t)(ws+1144);
	i8 v1514 = *(i8*)(intptr_t)v1513;
	i8 v1515 = (i8)(intptr_t)(f82_MarkSubroutinePublic);

	((void(*)(i8 /* symbol */))(intptr_t)v1515)(v1514);

c02_017c:;

c02_0178:;

	i8 v1516 = (i8)(intptr_t)(ws+1144);
	i8 v1517 = *(i8*)(intptr_t)v1516;
	i8 v1518 = v1517+(+18);
	i1 v1519 = *(i1*)(intptr_t)v1518;
	i1 v1520 = v1519&(+4);
	i1 v1521 = (i1)+0;
	if (v1520==v1521) goto c02_0180; else goto c02_0181;

c02_0180:;

	i8 v1522 = (i8)(intptr_t)(ws+1144);
	i8 v1523 = *(i8*)(intptr_t)v1522;
	i8 v1524 = v1523+(+16);
	i2 v1525 = *(i2*)(intptr_t)v1524;
	i8 v1526 = (i8)(intptr_t)(ws+1144);
	i8 v1527 = *(i8*)(intptr_t)v1526;
	i8 v1528 = v1527+(+8);
	i8 v1529 = *(i8*)(intptr_t)v1528;
	i8 v1530 = (i8)(intptr_t)(f70_EmitterDeclareSubroutine);

	((void(*)(i8 /* name */, i2 /* id */))(intptr_t)v1530)(v1529, v1525);

	i8 v1531 = (i8)(intptr_t)(ws+1144);
	i8 v1532 = *(i8*)(intptr_t)v1531;
	i8 v1533 = v1532+(+18);
	i1 v1534 = *(i1*)(intptr_t)v1533;
	i1 v1535 = v1534|(+4);
	i8 v1536 = (i8)(intptr_t)(ws+1144);
	i8 v1537 = *(i8*)(intptr_t)v1536;
	i8 v1538 = v1537+(+18);
	*(i1*)(intptr_t)v1538 = v1535;

c02_0181:;

c02_017d:;

	i8 v1539 = (i8)(intptr_t)(f66_EmitterPushChunk);

	((void(*)(void))(intptr_t)v1539)();

	i1 v1540 = (i1)+128;
	i8 v1541 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1541)(v1540);

	i8 v1542 = (i8)(intptr_t)(ws+1144);
	i8 v1543 = *(i8*)(intptr_t)v1542;
	i8 v1544 = v1543+(+16);
	i2 v1545 = *(i2*)(intptr_t)v1544;
	i8 v1546 = (i8)(intptr_t)(f64_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1546)(v1545);

endsub:;
}
	void f76_GetC(void);
	void f80_ReadWord(void);
	void f74_GetSymbol(i8* /* symbol */, i8 /* name */);
	void f79_SkipWhitespace(void);
	void f81_ReadNumber(i4* /* result */);
	void f79_SkipWhitespace(void);
	void f81_ReadNumber(i4* /* result */);
	void f73_EmitterDeclareWorkspace(i2 /* workspace */, i1 /* wid */, i2 /* id */);

// SetSubroutineWorkspace workspace at ws+1192 length ws+12
void f86_SetSubroutineWorkspace(void) {

	i8 v1547 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1547)();

	i8 v1548 = (i8)(intptr_t)(f80_ReadWord);

	((void(*)(void))(intptr_t)v1548)();

	i8 v1549 = (i8)(intptr_t)(ws+1156);
	i8 v1550 = (i8)(intptr_t)(f74_GetSymbol);
	i8 v1551;

	((void(*)(i8* /* symbol */, i8 /* name */))(intptr_t)v1550)(&v1551, v1549);
	i8 v1552 = (i8)(intptr_t)(ws+1192);
	*(i8*)(intptr_t)v1552 = v1551;

	i8 v1553 = (i8)(intptr_t)(f79_SkipWhitespace);

	((void(*)(void))(intptr_t)v1553)();

	i8 v1554 = (i8)(intptr_t)(f81_ReadNumber);
	i4 v1555;

	((void(*)(i4* /* result */))(intptr_t)v1554)(&v1555);
	i1 v1556 = (s1)(s4)v1555;
	i8 v1557 = (i8)(intptr_t)(ws+1200);
	*(i1*)(intptr_t)v1557 = v1556;

	i8 v1558 = (i8)(intptr_t)(f79_SkipWhitespace);

	((void(*)(void))(intptr_t)v1558)();

	i8 v1559 = (i8)(intptr_t)(f81_ReadNumber);
	i4 v1560;

	((void(*)(i4* /* result */))(intptr_t)v1559)(&v1560);
	i2 v1561 = (s2)(s4)v1560;
	i8 v1562 = (i8)(intptr_t)(ws+1202);
	*(i2*)(intptr_t)v1562 = v1561;

	i8 v1563 = (i8)(intptr_t)(ws+1192);
	i8 v1564 = *(i8*)(intptr_t)v1563;
	i8 v1565 = v1564+(+16);
	i2 v1566 = *(i2*)(intptr_t)v1565;
	i8 v1567 = (i8)(intptr_t)(ws+1200);
	i1 v1568 = *(i1*)(intptr_t)v1567;
	i8 v1569 = (i8)(intptr_t)(ws+1202);
	i2 v1570 = *(i2*)(intptr_t)v1569;
	i8 v1571 = (i8)(intptr_t)(f73_EmitterDeclareWorkspace);

	((void(*)(i2 /* workspace */, i1 /* wid */, i2 /* id */))(intptr_t)v1571)(v1570, v1568, v1566);

endsub:;
}
	void f76_GetC(void);
	void f80_ReadWord(void);
	void f74_GetSymbol(i8* /* symbol */, i8 /* name */);
	void f72_EmitterReferenceSubroutine(i2 /* used */, i2 /* user */);
	void f77_ExpectC(i1 /* want */);
	void f81_ReadNumber(i4* /* result */);
	void f77_ExpectC(i1 /* want */);
	void f81_ReadNumber(i4* /* result */);
	void f62_E_b8(i1 /* byte */);
	void f64_E_b16(i2 /* word */);
	void f62_E_b8(i1 /* byte */);
	void f64_E_b16(i2 /* word */);

// EmitWorkspaceRef workspace at ws+1200 length ws+12
void f87_EmitWorkspaceRef(void) {

	i8 v1572 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1572)();

	i8 v1573 = (i8)(intptr_t)(f80_ReadWord);

	((void(*)(void))(intptr_t)v1573)();

	i8 v1574 = (i8)(intptr_t)(ws+1144);
	i8 v1575 = *(i8*)(intptr_t)v1574;
	i8 v1576 = (i8)(intptr_t)(ws+1200);
	*(i8*)(intptr_t)v1576 = v1575;

	i8 v1577 = (i8)(intptr_t)(ws+1156);
	i1 v1578 = *(i1*)(intptr_t)v1577;
	i1 v1579 = (i1)+0;
	if (v1578==v1579) goto c02_0186; else goto c02_0185;

c02_0185:;

	i8 v1580 = (i8)(intptr_t)(ws+1156);
	i8 v1581 = (i8)(intptr_t)(f74_GetSymbol);
	i8 v1582;

	((void(*)(i8* /* symbol */, i8 /* name */))(intptr_t)v1581)(&v1582, v1580);
	i8 v1583 = (i8)(intptr_t)(ws+1200);
	*(i8*)(intptr_t)v1583 = v1582;

	i8 v1584 = (i8)(intptr_t)(ws+1144);
	i8 v1585 = *(i8*)(intptr_t)v1584;
	i8 v1586 = v1585+(+16);
	i2 v1587 = *(i2*)(intptr_t)v1586;
	i8 v1588 = (i8)(intptr_t)(ws+1200);
	i8 v1589 = *(i8*)(intptr_t)v1588;
	i8 v1590 = v1589+(+16);
	i2 v1591 = *(i2*)(intptr_t)v1590;
	i8 v1592 = (i8)(intptr_t)(f72_EmitterReferenceSubroutine);

	((void(*)(i2 /* used */, i2 /* user */))(intptr_t)v1592)(v1591, v1587);

c02_0186:;

c02_0182:;

	i1 v1593 = (i1)+46;
	i8 v1594 = (i8)(intptr_t)(f77_ExpectC);

	((void(*)(i1 /* want */))(intptr_t)v1594)(v1593);

	i8 v1595 = (i8)(intptr_t)(f81_ReadNumber);
	i4 v1596;

	((void(*)(i4* /* result */))(intptr_t)v1595)(&v1596);
	i1 v1597 = (s1)(s4)v1596;
	i8 v1598 = (i8)(intptr_t)(ws+1208);
	*(i1*)(intptr_t)v1598 = v1597;

	i1 v1599 = (i1)+46;
	i8 v1600 = (i8)(intptr_t)(f77_ExpectC);

	((void(*)(i1 /* want */))(intptr_t)v1600)(v1599);

	i8 v1601 = (i8)(intptr_t)(f81_ReadNumber);
	i4 v1602;

	((void(*)(i4* /* result */))(intptr_t)v1601)(&v1602);
	i2 v1603 = (s2)(s4)v1602;
	i8 v1604 = (i8)(intptr_t)(ws+1210);
	*(i2*)(intptr_t)v1604 = v1603;

	i1 v1605 = (i1)+2;
	i8 v1606 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1606)(v1605);

	i8 v1607 = (i8)(intptr_t)(ws+1200);
	i8 v1608 = *(i8*)(intptr_t)v1607;
	i8 v1609 = v1608+(+16);
	i2 v1610 = *(i2*)(intptr_t)v1609;
	i8 v1611 = (i8)(intptr_t)(f64_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1611)(v1610);

	i8 v1612 = (i8)(intptr_t)(ws+1208);
	i1 v1613 = *(i1*)(intptr_t)v1612;
	i8 v1614 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1614)(v1613);

	i8 v1615 = (i8)(intptr_t)(ws+1210);
	i2 v1616 = *(i2*)(intptr_t)v1615;
	i8 v1617 = (i8)(intptr_t)(f64_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1617)(v1616);

endsub:;
}
const i1 c02_s000b[] = { 0x73,0x6f,0x75,0x72,0x63,0x65,0x20,0x74,0x65,0x78,0x74,0x20,0x77,0x69,0x74,0x68,0x20,0x6e,0x6f,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x64,0x65,0x66,0x69,0x6e,0x65,0x64,0 };
	void f61_FatalError(i8 /* s */);
	void f76_GetC(void);
	void f62_E_b8(i1 /* byte */);
	void f76_GetC(void);
	void f62_E_b8(i1 /* byte */);
	void f76_GetC(void);
	void f87_EmitWorkspaceRef(void);
	void f80_ReadWord(void);
	void f74_GetSymbol(i8* /* symbol */, i8 /* name */);
	void f62_E_b8(i1 /* byte */);
	void f64_E_b16(i2 /* word */);
	void f72_EmitterReferenceSubroutine(i2 /* used */, i2 /* user */);
	void f62_E_b8(i1 /* byte */);
	void f76_GetC(void);
	void f62_E_b8(i1 /* byte */);

// SourceLine workspace at ws+1192 length ws+8
void f88_SourceLine(void) {

	i8 v1618 = (i8)(intptr_t)(ws+1144);
	i8 v1619 = *(i8*)(intptr_t)v1618;
	i8 v1620 = (i8)+0;
	if (v1619==v1620) goto c02_018a; else goto c02_018b;

c02_018a:;

	i8 v1621 = (i8)(intptr_t)c02_s000b;
	i8 v1622 = (i8)(intptr_t)(f61_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1622)(v1621);

c02_018b:;

c02_0187:;

c02_018c:;

	i8 v1623 = (i8)(intptr_t)(ws+1152);
	i1 v1624 = *(i1*)(intptr_t)v1623;
	i1 v1625 = (i1)+0;
	if (v1624==v1625) goto c02_0195; else goto c02_0198;

c02_0198:;

	i8 v1626 = (i8)(intptr_t)(ws+1152);
	i1 v1627 = *(i1*)(intptr_t)v1626;
	i1 v1628 = (i1)+10;
	if (v1627==v1628) goto c02_0195; else goto c02_0197;

c02_0197:;

	i8 v1629 = (i8)(intptr_t)(ws+1152);
	i1 v1630 = *(i1*)(intptr_t)v1629;
	i1 v1631 = (i1)+26;
	if (v1630==v1631) goto c02_0195; else goto c02_0196;

c02_0195:;

	goto c02_018d;

c02_0196:;

c02_018e:;

	i8 v1632 = (i8)(intptr_t)(ws+1152);
	i1 v1633 = *(i1*)(intptr_t)v1632;
	i1 v1634 = (i1)+13;
	if (v1633==v1634) goto c02_019d; else goto c02_019c;

c02_019c:;

	i8 v1635 = (i8)(intptr_t)(ws+1152);
	i1 v1636 = *(i1*)(intptr_t)v1635;
	i1 v1637 = (i1)+96;
	if (v1636==v1637) goto c02_01a1; else goto c02_01a2;

c02_01a1:;

	i8 v1638 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1638)();

	i8 v1639 = (i8)(intptr_t)(ws+1152);
	i1 v1640 = *(i1*)(intptr_t)v1639;

	if (v1640 != +96) goto c02_01a4;

	i1 v1641 = (i1)+4;
	i8 v1642 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1642)(v1641);

	i8 v1643 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1643)();

	goto c02_01a3;

c02_01a4:;

	if (v1640 != +94) goto c02_01a5;

	i1 v1644 = (i1)+3;
	i8 v1645 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1645)(v1644);

	i8 v1646 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1646)();

	goto c02_01a3;

c02_01a5:;

	if (v1640 != +36) goto c02_01a6;

	i8 v1647 = (i8)(intptr_t)(f87_EmitWorkspaceRef);

	((void(*)(void))(intptr_t)v1647)();

	goto c02_01a3;

c02_01a6:;

	i8 v1648 = (i8)(intptr_t)(f80_ReadWord);

	((void(*)(void))(intptr_t)v1648)();

	i8 v1649 = (i8)(intptr_t)(ws+1156);
	i8 v1650 = (i8)(intptr_t)(f74_GetSymbol);
	i8 v1651;

	((void(*)(i8* /* symbol */, i8 /* name */))(intptr_t)v1650)(&v1651, v1649);
	i8 v1652 = (i8)(intptr_t)(ws+1192);
	*(i8*)(intptr_t)v1652 = v1651;

	i1 v1653 = (i1)+1;
	i8 v1654 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1654)(v1653);

	i8 v1655 = (i8)(intptr_t)(ws+1192);
	i8 v1656 = *(i8*)(intptr_t)v1655;
	i8 v1657 = v1656+(+16);
	i2 v1658 = *(i2*)(intptr_t)v1657;
	i8 v1659 = (i8)(intptr_t)(f64_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1659)(v1658);

	i8 v1660 = (i8)(intptr_t)(ws+1144);
	i8 v1661 = *(i8*)(intptr_t)v1660;
	i8 v1662 = v1661+(+16);
	i2 v1663 = *(i2*)(intptr_t)v1662;
	i8 v1664 = (i8)(intptr_t)(ws+1192);
	i8 v1665 = *(i8*)(intptr_t)v1664;
	i8 v1666 = v1665+(+16);
	i2 v1667 = *(i2*)(intptr_t)v1666;
	i8 v1668 = (i8)(intptr_t)(f72_EmitterReferenceSubroutine);

	((void(*)(i2 /* used */, i2 /* user */))(intptr_t)v1668)(v1667, v1663);

c02_01a3:;


	goto c02_019e;

c02_01a2:;

	i8 v1669 = (i8)(intptr_t)(ws+1152);
	i1 v1670 = *(i1*)(intptr_t)v1669;
	i8 v1671 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1671)(v1670);

	i8 v1672 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1672)();

c02_019e:;

c02_019d:;

c02_0199:;

	goto c02_018c;

c02_018d:;

	i1 v1673 = (i1)+10;
	i8 v1674 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1674)(v1673);

endsub:;
}
	void f76_GetC(void);
	void f76_GetC(void);
	void f85_DeclareSubroutine(i1 /* exported */);
	void f85_DeclareSubroutine(i1 /* exported */);
	void f86_SetSubroutineWorkspace(void);
const i1 c02_s000c[] = { 0x62,0x61,0x64,0x20,0x63,0x6f,0x77,0x77,0x72,0x61,0x70,0x20,0x63,0x6f,0x6d,0x6d,0x61,0x6e,0x64,0 };
	void f61_FatalError(i8 /* s */);
	void f78_SkipToEndOfLine(void);
	void f78_SkipToEndOfLine(void);
	void f88_SourceLine(void);
	void f76_GetC(void);
	void f84_CloseChunk(void);

// ProcessFile workspace at ws+1152 length ws+36
void f75_ProcessFile(void) {

	i8 v1365 = (i8)(intptr_t)c02_s0007;
	i8 v1366 = (i8)(intptr_t)(ws+1112);
	*(i8*)(intptr_t)v1366 = v1365;

	i1 v1367 = (i1)+5;
	i8 v1368 = (i8)(intptr_t)(ws+1122);
	*(i1*)(intptr_t)v1368 = v1367;

	i2 v1369 = (i2)+0;
	i8 v1370 = (i8)(intptr_t)(ws+1154);
	*(i2*)(intptr_t)v1370 = v1369;














	i8 v1675 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1675)();

c02_01a7:;

	i8 v1676 = (i8)(intptr_t)(ws+1152);
	i1 v1677 = *(i1*)(intptr_t)v1676;
	i1 v1678 = (i1)+0;
	if (v1677==v1678) goto c02_01ae; else goto c02_01b0;

c02_01b0:;

	i8 v1679 = (i8)(intptr_t)(ws+1152);
	i1 v1680 = *(i1*)(intptr_t)v1679;
	i1 v1681 = (i1)+26;
	if (v1680==v1681) goto c02_01ae; else goto c02_01af;

c02_01ae:;

	goto c02_01a8;

c02_01af:;

c02_01a9:;

	i8 v1682 = (i8)(intptr_t)(ws+1152);
	i1 v1683 = *(i1*)(intptr_t)v1682;

	if (v1683 != +38) goto c02_01b2;

	i8 v1684 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1684)();

	i8 v1685 = (i8)(intptr_t)(ws+1152);
	i1 v1686 = *(i1*)(intptr_t)v1685;

	if (v1686 != +88) goto c02_01b4;

	i1 v1687 = (i1)+1;
	i8 v1688 = (i8)(intptr_t)(f85_DeclareSubroutine);

	((void(*)(i1 /* exported */))(intptr_t)v1688)(v1687);

	goto c02_01b3;

c02_01b4:;

	if (v1686 != +83) goto c02_01b5;

	i1 v1689 = (i1)+0;
	i8 v1690 = (i8)(intptr_t)(f85_DeclareSubroutine);

	((void(*)(i1 /* exported */))(intptr_t)v1690)(v1689);

	goto c02_01b3;

c02_01b5:;

	if (v1686 != +87) goto c02_01b6;

	i8 v1691 = (i8)(intptr_t)(f86_SetSubroutineWorkspace);

	((void(*)(void))(intptr_t)v1691)();

	goto c02_01b3;

c02_01b6:;

	i8 v1692 = (i8)(intptr_t)c02_s000c;
	i8 v1693 = (i8)(intptr_t)(f61_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1693)(v1692);

c02_01b3:;


	i8 v1694 = (i8)(intptr_t)(f78_SkipToEndOfLine);

	((void(*)(void))(intptr_t)v1694)();

	goto c02_01b1;

c02_01b2:;

	if (v1683 != +35) goto c02_01b7;

	i8 v1695 = (i8)(intptr_t)(f78_SkipToEndOfLine);

	((void(*)(void))(intptr_t)v1695)();

	goto c02_01b1;

c02_01b7:;

	i8 v1696 = (i8)(intptr_t)(f88_SourceLine);

	((void(*)(void))(intptr_t)v1696)();

c02_01b1:;


	i8 v1697 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1697)();

	goto c02_01a7;

c02_01a8:;

	i8 v1698 = (i8)(intptr_t)(f84_CloseChunk);

	((void(*)(void))(intptr_t)v1698)();

endsub:;
}
const i1 c02_s000d[] = { 0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x20,0x74,0x6f,0x20,0x75,0x6e,0x64,0x65,0x63,0x6c,0x61,0x72,0x65,0x64,0x20,0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s000e[] = { 0x27,0x0a,0 };
	void f12_print(i8 /* ptr */);
const i1 c02_s000f[] = { 0x66,0x61,0x69,0x6c,0x65,0x64,0 };
	void f61_FatalError(i8 /* s */);

// CheckSymbols workspace at ws+1152 length ws+16
void f89_CheckSymbols(void) {

	i1 v1699 = (i1)+1;
	i8 v1700 = (i8)(intptr_t)(ws+1152);
	*(i1*)(intptr_t)v1700 = v1699;

	i8 v1701 = (i8)(intptr_t)(ws+1128);
	i8 v1702 = *(i8*)(intptr_t)v1701;
	i8 v1703 = (i8)(intptr_t)(ws+1160);
	*(i8*)(intptr_t)v1703 = v1702;

c02_01ba:;

	i8 v1704 = (i8)(intptr_t)(ws+1160);
	i8 v1705 = *(i8*)(intptr_t)v1704;
	i8 v1706 = (i8)+0;
	if (v1705==v1706) goto c02_01bd; else goto c02_01bc;

c02_01bc:;

	i8 v1707 = (i8)(intptr_t)(ws+1160);
	i8 v1708 = *(i8*)(intptr_t)v1707;
	i8 v1709 = v1708+(+18);
	i1 v1710 = *(i1*)(intptr_t)v1709;
	i1 v1711 = (i1)+0;
	if (v1710==v1711) goto c02_01c1; else goto c02_01c2;

c02_01c1:;

	i8 v1712 = (i8)(intptr_t)c02_s000d;
	i8 v1713 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1713)(v1712);

	i8 v1714 = (i8)(intptr_t)(ws+1160);
	i8 v1715 = *(i8*)(intptr_t)v1714;
	i8 v1716 = v1715+(+8);
	i8 v1717 = *(i8*)(intptr_t)v1716;
	i8 v1718 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1718)(v1717);

	i8 v1719 = (i8)(intptr_t)c02_s000e;
	i8 v1720 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1720)(v1719);

	i1 v1721 = (i1)+0;
	i8 v1722 = (i8)(intptr_t)(ws+1152);
	*(i1*)(intptr_t)v1722 = v1721;

c02_01c2:;

c02_01be:;

	i8 v1723 = (i8)(intptr_t)(ws+1160);
	i8 v1724 = *(i8*)(intptr_t)v1723;
	i8 v1725 = *(i8*)(intptr_t)v1724;
	i8 v1726 = (i8)(intptr_t)(ws+1160);
	*(i8*)(intptr_t)v1726 = v1725;

	goto c02_01ba;

c02_01bd:;

	i8 v1727 = (i8)(intptr_t)(ws+1152);
	i1 v1728 = *(i1*)(intptr_t)v1727;
	i1 v1729 = (i1)+0;
	if (v1728==v1729) goto c02_01c6; else goto c02_01c7;

c02_01c6:;

	i8 v1730 = (i8)(intptr_t)c02_s000f;
	i8 v1731 = (i8)(intptr_t)(f61_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1731)(v1730);

c02_01c7:;

c02_01c3:;

endsub:;
}
	void f24_ArgvInit(void);
	void f25_ArgvNext(i8* /* arg */);
	void f25_ArgvNext(i8* /* arg */);
	void f25_ArgvNext(i8* /* arg */);
	void f60_SyntaxError(void);
	void f52_FCBOpenIn(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
const i1 c02_s0010[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x69,0x6e,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f61_FatalError(i8 /* s */);
	void f68_EmitterOpenfile(i8 /* filename */);
	void f75_ProcessFile(void);
	void f89_CheckSymbols(void);
	void f69_EmitterClosefile(void);

// __main workspace at ws+0 length ws+1152
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

	i8 v1025 = (i8)(intptr_t)c02_s0001;
	i8 v1026 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1026)(v1025);

	i8 v1027 = (i8)(intptr_t)(f38_GetFreeMemory);
	i8 v1028;

	((void(*)(i8* /* i */))(intptr_t)v1027)(&v1028);
	i1 v1029 = (i1)+10;
	i8 v1030 = ((i8)v1028)>>v1029;
	i2 v1031 = v1030;
	i8 v1032 = (i8)(intptr_t)(f17_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v1032)(v1031);

	i8 v1033 = (i8)(intptr_t)c02_s0002;
	i8 v1034 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1034)(v1033);















	i8 v1311 = (i8)(intptr_t)(ws+1104);
	i8 v1312 = (i8)(intptr_t)(ws+1128);
	*(i8*)(intptr_t)v1312 = v1311;

	i2 v1313 = (i2)+1;
	i8 v1314 = (i8)(intptr_t)(ws+1136);
	*(i2*)(intptr_t)v1314 = v1313;

	i8 v1315 = (i8)+0;
	i8 v1316 = (i8)(intptr_t)(ws+1144);
	*(i8*)(intptr_t)v1316 = v1315;




	i8 v1732 = (i8)(intptr_t)(f24_ArgvInit);

	((void(*)(void))(intptr_t)v1732)();

	i8 v1733 = (i8)(intptr_t)(f25_ArgvNext);
	i8 v1734;

	((void(*)(i8* /* arg */))(intptr_t)v1733)(&v1734);
	i8 v1735 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v1735 = v1734;

	i8 v1736 = (i8)(intptr_t)(f25_ArgvNext);
	i8 v1737;

	((void(*)(i8* /* arg */))(intptr_t)v1736)(&v1737);
	i8 v1738 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v1738 = v1737;

	i8 v1739 = (i8)(intptr_t)(ws+24);
	i8 v1740 = *(i8*)(intptr_t)v1739;
	i8 v1741 = (i8)+0;
	if (v1740==v1741) goto c02_01cf; else goto c02_01d2;

c02_01d2:;

	i8 v1742 = (i8)(intptr_t)(ws+32);
	i8 v1743 = *(i8*)(intptr_t)v1742;
	i8 v1744 = (i8)+0;
	if (v1743==v1744) goto c02_01cf; else goto c02_01d1;

c02_01d1:;

	i8 v1745 = (i8)(intptr_t)(f25_ArgvNext);
	i8 v1746;

	((void(*)(i8* /* arg */))(intptr_t)v1745)(&v1746);
	i8 v1747 = (i8)+0;
	if (v1746==v1747) goto c02_01d0; else goto c02_01cf;

c02_01cf:;

	i8 v1748 = (i8)(intptr_t)(f60_SyntaxError);

	((void(*)(void))(intptr_t)v1748)();

c02_01d0:;

c02_01c8:;

	i8 v1749 = (i8)(intptr_t)(ws+40);
	i8 v1750 = (i8)(intptr_t)(ws+24);
	i8 v1751 = *(i8*)(intptr_t)v1750;
	i8 v1752 = (i8)(intptr_t)(f52_FCBOpenIn);
	i1 v1753;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v1752)(&v1753, v1751, v1749);
	i1 v1754 = (i1)+0;
	if (v1753==v1754) goto c02_01d7; else goto c02_01d6;

c02_01d6:;

	i8 v1755 = (i8)(intptr_t)c02_s0010;
	i8 v1756 = (i8)(intptr_t)(f61_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1756)(v1755);

c02_01d7:;

c02_01d3:;

	i8 v1757 = (i8)(intptr_t)(ws+32);
	i8 v1758 = *(i8*)(intptr_t)v1757;
	i8 v1759 = (i8)(intptr_t)(f68_EmitterOpenfile);

	((void(*)(i8 /* filename */))(intptr_t)v1759)(v1758);

	i8 v1760 = (i8)(intptr_t)(f75_ProcessFile);

	((void(*)(void))(intptr_t)v1760)();

	i8 v1761 = (i8)(intptr_t)(f89_CheckSymbols);

	((void(*)(void))(intptr_t)v1761)();

	i8 v1762 = (i8)(intptr_t)(f69_EmitterClosefile);

	((void(*)(void))(intptr_t)v1762)();

endsub:;
}
void cmain(void) {
	f3___main();
}
