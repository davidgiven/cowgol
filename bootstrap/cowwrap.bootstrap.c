#include "cowgol.h"
static i8 workspace[0x00b1];
#define ws ((i1*)workspace)

// ExitWithError workspace at ws+1344 length ws+0
void f6_ExitWithError(void) {


	
exit(1); 



endsub:;
}

// print_char workspace at ws+1360 length ws+1
void f9_print_char(i1 p12 /* c */) {
	*(i1*)(intptr_t)(ws+1360) = p12; /* c */


	
putchar( 
*(i1*)(intptr_t)(ws+1360) 
); 



endsub:;
}
	void f9_print_char(i1 /* c */);

// print workspace at ws+1344 length ws+9
void f12_print(i8 p21 /* ptr */) {
	*(i8*)(intptr_t)(ws+1344) = p21; /* ptr */

c02_0001:;

	i8 v22 = (i8)(intptr_t)(ws+1344);
	i8 v23 = *(i8*)(intptr_t)v22;
	i1 v24 = *(i1*)(intptr_t)v23;
	i8 v25 = (i8)(intptr_t)(ws+1352);
	*(i1*)(intptr_t)v25 = v24;

	i8 v26 = (i8)(intptr_t)(ws+1352);
	i1 v27 = *(i1*)(intptr_t)v26;
	i1 v28 = (i1)+0;
	if (v27==v28) goto c02_0006; else goto c02_0007;

c02_0006:;

	goto endsub;

c02_0007:;

c02_0003:;

	i8 v29 = (i8)(intptr_t)(ws+1352);
	i1 v30 = *(i1*)(intptr_t)v29;
	i8 v31 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v31)(v30);

	i8 v32 = (i8)(intptr_t)(ws+1344);
	i8 v33 = *(i8*)(intptr_t)v32;
	i8 v34 = v33+(+1);
	i8 v35 = (i8)(intptr_t)(ws+1344);
	*(i8*)(intptr_t)v35 = v34;

	goto c02_0001;

c02_0002:;

endsub:;
}
	void f9_print_char(i1 /* c */);

// print_nl workspace at ws+1312 length ws+0
void f13_print_nl(void) {

	i1 v36 = (i1)+10;
	i8 v37 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v37)(v36);

endsub:;
}

// UIToA workspace at ws+1232 length ws+49
void f14_UIToA(i8* p38 /* ptr */, i8 p39 /* buffer */, i1 p40 /* base */, i4 p41 /* value */) {
	*(i4*)(intptr_t)(ws+1232) = p41; /* value */
	*(i1*)(intptr_t)(ws+1236) = p40; /* base */
	*(i8*)(intptr_t)(ws+1240) = p39; /* buffer */

	i8 v42 = (i8)(intptr_t)(ws+1240);
	i8 v43 = *(i8*)(intptr_t)v42;
	i8 v44 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v44 = v43;

c02_0008:;

	i8 v45 = (i8)(intptr_t)(ws+1232);
	i4 v46 = *(i4*)(intptr_t)v45;
	i8 v47 = (i8)(intptr_t)(ws+1236);
	i1 v48 = *(i1*)(intptr_t)v47;
	i4 v49 = v48;
	i4 v50 = v46%v49;
	i8 v51 = (i8)(intptr_t)(ws+1256);
	*(i4*)(intptr_t)v51 = v50;

	i8 v52 = (i8)(intptr_t)(ws+1232);
	i4 v53 = *(i4*)(intptr_t)v52;
	i8 v54 = (i8)(intptr_t)(ws+1236);
	i1 v55 = *(i1*)(intptr_t)v54;
	i4 v56 = v55;
	i4 v57 = v53/v56;
	i8 v58 = (i8)(intptr_t)(ws+1232);
	*(i4*)(intptr_t)v58 = v57;

	i8 v59 = (i8)(intptr_t)(ws+1256);
	i4 v60 = *(i4*)(intptr_t)v59;
	i4 v61 = (i4)+10;
	if (v60<v61) goto c02_000d; else goto c02_000e;

c02_000d:;

	i8 v62 = (i8)(intptr_t)(ws+1256);
	i4 v63 = *(i4*)(intptr_t)v62;
	i4 v64 = v63+(+48);
	i8 v65 = (i8)(intptr_t)(ws+1256);
	*(i4*)(intptr_t)v65 = v64;

	goto c02_000a;

c02_000e:;

	i8 v66 = (i8)(intptr_t)(ws+1256);
	i4 v67 = *(i4*)(intptr_t)v66;
	i4 v68 = v67+(+87);
	i8 v69 = (i8)(intptr_t)(ws+1256);
	*(i4*)(intptr_t)v69 = v68;

c02_000a:;

	i8 v70 = (i8)(intptr_t)(ws+1256);
	i4 v71 = *(i4*)(intptr_t)v70;
	i1 v72 = v71;
	i8 v73 = (i8)(intptr_t)(ws+1248);
	i8 v74 = *(i8*)(intptr_t)v73;
	*(i1*)(intptr_t)v74 = v72;

	i8 v75 = (i8)(intptr_t)(ws+1248);
	i8 v76 = *(i8*)(intptr_t)v75;
	i8 v77 = v76+(+1);
	i8 v78 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v78 = v77;

	i8 v79 = (i8)(intptr_t)(ws+1232);
	i4 v80 = *(i4*)(intptr_t)v79;
	i4 v81 = (i4)+0;
	if (v80==v81) goto c02_0012; else goto c02_0013;

c02_0012:;

	goto c02_0009;

c02_0013:;

c02_000f:;

	goto c02_0008;

c02_0009:;

	i8 v82 = (i8)(intptr_t)(ws+1240);
	i8 v83 = *(i8*)(intptr_t)v82;
	i8 v84 = (i8)(intptr_t)(ws+1264);
	*(i8*)(intptr_t)v84 = v83;

	i8 v85 = (i8)(intptr_t)(ws+1248);
	i8 v86 = *(i8*)(intptr_t)v85;
	i8 v87 = v86+(-1);
	i8 v88 = (i8)(intptr_t)(ws+1272);
	*(i8*)(intptr_t)v88 = v87;

c02_0014:;

	i8 v89 = (i8)(intptr_t)(ws+1264);
	i8 v90 = *(i8*)(intptr_t)v89;
	i8 v91 = (i8)(intptr_t)(ws+1272);
	i8 v92 = *(i8*)(intptr_t)v91;
	if (v90<v92) goto c02_0018; else goto c02_0019;

c02_0018:;

	i8 v93 = (i8)(intptr_t)(ws+1264);
	i8 v94 = *(i8*)(intptr_t)v93;
	i1 v95 = *(i1*)(intptr_t)v94;
	i8 v96 = (i8)(intptr_t)(ws+1280);
	*(i1*)(intptr_t)v96 = v95;

	i8 v97 = (i8)(intptr_t)(ws+1272);
	i8 v98 = *(i8*)(intptr_t)v97;
	i1 v99 = *(i1*)(intptr_t)v98;
	i8 v100 = (i8)(intptr_t)(ws+1264);
	i8 v101 = *(i8*)(intptr_t)v100;
	*(i1*)(intptr_t)v101 = v99;

	i8 v102 = (i8)(intptr_t)(ws+1280);
	i1 v103 = *(i1*)(intptr_t)v102;
	i8 v104 = (i8)(intptr_t)(ws+1272);
	i8 v105 = *(i8*)(intptr_t)v104;
	*(i1*)(intptr_t)v105 = v103;

	i8 v106 = (i8)(intptr_t)(ws+1264);
	i8 v107 = *(i8*)(intptr_t)v106;
	i8 v108 = v107+(+1);
	i8 v109 = (i8)(intptr_t)(ws+1264);
	*(i8*)(intptr_t)v109 = v108;

	i8 v110 = (i8)(intptr_t)(ws+1272);
	i8 v111 = *(i8*)(intptr_t)v110;
	i8 v112 = v111+(-1);
	i8 v113 = (i8)(intptr_t)(ws+1272);
	*(i8*)(intptr_t)v113 = v112;

	goto c02_0014;

c02_0019:;

	i1 v114 = (i1)+0;
	i8 v115 = (i8)(intptr_t)(ws+1248);
	i8 v116 = *(i8*)(intptr_t)v115;
	*(i1*)(intptr_t)v116 = v114;

endsub:;
	*p38 = *(i8*)(intptr_t)(ws+1248);
}
	void f14_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f12_print(i8 /* ptr */);

// print_i32 workspace at ws+1200 length ws+32
void f16_print_i32(i4 p147 /* value */) {
	*(i4*)(intptr_t)(ws+1200) = p147; /* value */

	i8 v148 = (i8)(intptr_t)(ws+1200);
	i4 v149 = *(i4*)(intptr_t)v148;
	i1 v150 = (i1)+10;
	i8 v151 = (i8)(intptr_t)(ws+1204);
	i8 v152 = (i8)(intptr_t)(f14_UIToA);
	i8 v153;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v152)(&v153, v151, v150, v149);

	i8 v154 = (i8)(intptr_t)(ws+1216);
	*(i8*)(intptr_t)v154 = v153;

	i8 v155 = (i8)(intptr_t)(ws+1216);
	i8 v156 = *(i8*)(intptr_t)v155;
	i8 v157 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v157 = v156;

	i8 v158 = (i8)(intptr_t)(ws+1204);
	i8 v159 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v159)(v158);

endsub:;
}
	void f16_print_i32(i4 /* value */);

// print_i16 workspace at ws+1192 length ws+2
void f17_print_i16(i2 p160 /* value */) {
	*(i2*)(intptr_t)(ws+1192) = p160; /* value */

	i8 v161 = (i8)(intptr_t)(ws+1192);
	i2 v162 = *(i2*)(intptr_t)v161;
	i4 v163 = v162;
	i8 v164 = (i8)(intptr_t)(f16_print_i32);

	((void(*)(i4 /* value */))(intptr_t)v164)(v163);

endsub:;
}

// AToI workspace at ws+1296 length ws+27
void f22_AToI(i4* p238 /* result */, i8* p239 /* ptr */, i8 p240 /* buffer */) {
	*(i8*)(intptr_t)(ws+1296) = p240; /* buffer */

	i1 v241 = (i1)+0;
	i8 v242 = (i8)(intptr_t)(ws+1320);
	*(i1*)(intptr_t)v242 = v241;

	i1 v243 = (i1)+10;
	i8 v244 = (i8)(intptr_t)(ws+1321);
	*(i1*)(intptr_t)v244 = v243;

	i8 v245 = (i8)(intptr_t)(ws+1296);
	i8 v246 = *(i8*)(intptr_t)v245;
	i8 v247 = (i8)(intptr_t)(ws+1312);
	*(i8*)(intptr_t)v247 = v246;

	i4 v248 = (i4)+0;
	i8 v249 = (i8)(intptr_t)(ws+1304);
	*(i4*)(intptr_t)v249 = v248;

	i8 v250 = (i8)(intptr_t)(ws+1312);
	i8 v251 = *(i8*)(intptr_t)v250;
	i1 v252 = *(i1*)(intptr_t)v251;
	i8 v253 = (i8)(intptr_t)(ws+1322);
	*(i1*)(intptr_t)v253 = v252;

	i8 v254 = (i8)(intptr_t)(ws+1322);
	i1 v255 = *(i1*)(intptr_t)v254;
	i1 v256 = (i1)+45;
	if (v255==v256) goto c02_002e; else goto c02_002f;

c02_002e:;

	i1 v257 = (i1)+1;
	i8 v258 = (i8)(intptr_t)(ws+1320);
	*(i1*)(intptr_t)v258 = v257;

	i8 v259 = (i8)(intptr_t)(ws+1312);
	i8 v260 = *(i8*)(intptr_t)v259;
	i8 v261 = v260+(+1);
	i8 v262 = (i8)(intptr_t)(ws+1312);
	*(i8*)(intptr_t)v262 = v261;

	i8 v263 = (i8)(intptr_t)(ws+1312);
	i8 v264 = *(i8*)(intptr_t)v263;
	i1 v265 = *(i1*)(intptr_t)v264;
	i8 v266 = (i8)(intptr_t)(ws+1322);
	*(i1*)(intptr_t)v266 = v265;

c02_002f:;

c02_002b:;

	i8 v267 = (i8)(intptr_t)(ws+1322);
	i1 v268 = *(i1*)(intptr_t)v267;
	i1 v269 = (i1)+48;
	if (v268==v269) goto c02_0033; else goto c02_0034;

c02_0033:;

	i8 v270 = (i8)(intptr_t)(ws+1312);
	i8 v271 = *(i8*)(intptr_t)v270;
	i8 v272 = v271+(+1);
	i1 v273 = *(i1*)(intptr_t)v272;

	if (v273 != +120) goto c02_0036;

	i1 v274 = (i1)+16;
	i8 v275 = (i8)(intptr_t)(ws+1321);
	*(i1*)(intptr_t)v275 = v274;

	goto c02_0035;

c02_0036:;

	if (v273 != +111) goto c02_0037;

	i1 v276 = (i1)+8;
	i8 v277 = (i8)(intptr_t)(ws+1321);
	*(i1*)(intptr_t)v277 = v276;

	goto c02_0035;

c02_0037:;

	if (v273 != +98) goto c02_0038;

	i1 v278 = (i1)+2;
	i8 v279 = (i8)(intptr_t)(ws+1321);
	*(i1*)(intptr_t)v279 = v278;

	goto c02_0035;

c02_0038:;

	if (v273 != +100) goto c02_0039;

	i1 v280 = (i1)+10;
	i8 v281 = (i8)(intptr_t)(ws+1321);
	*(i1*)(intptr_t)v281 = v280;

	goto c02_0035;

c02_0039:;

	i8 v282 = (i8)(intptr_t)(ws+1312);
	i8 v283 = *(i8*)(intptr_t)v282;
	i8 v284 = v283+(-2);
	i8 v285 = (i8)(intptr_t)(ws+1312);
	*(i8*)(intptr_t)v285 = v284;

c02_0035:;


	i8 v286 = (i8)(intptr_t)(ws+1312);
	i8 v287 = *(i8*)(intptr_t)v286;
	i8 v288 = v287+(+2);
	i8 v289 = (i8)(intptr_t)(ws+1312);
	*(i8*)(intptr_t)v289 = v288;

	i8 v290 = (i8)(intptr_t)(ws+1312);
	i8 v291 = *(i8*)(intptr_t)v290;
	i1 v292 = *(i1*)(intptr_t)v291;
	i8 v293 = (i8)(intptr_t)(ws+1322);
	*(i1*)(intptr_t)v293 = v292;

c02_0034:;

c02_0030:;

c02_003a:;

	i8 v294 = (i8)(intptr_t)(ws+1322);
	i1 v295 = *(i1*)(intptr_t)v294;
	i1 v296 = (i1)+97;
	if (v295<v296) goto c02_0040; else goto c02_003f;

c02_003f:;

	i8 v297 = (i8)(intptr_t)(ws+1322);
	i1 v298 = *(i1*)(intptr_t)v297;
	i1 v299 = v298+(-87);
	i8 v300 = (i8)(intptr_t)(ws+1322);
	*(i1*)(intptr_t)v300 = v299;

	goto c02_003c;

c02_0040:;

	i8 v301 = (i8)(intptr_t)(ws+1322);
	i1 v302 = *(i1*)(intptr_t)v301;
	i1 v303 = (i1)+65;
	if (v302<v303) goto c02_0044; else goto c02_0043;

c02_0043:;

	i8 v304 = (i8)(intptr_t)(ws+1322);
	i1 v305 = *(i1*)(intptr_t)v304;
	i1 v306 = v305+(-55);
	i8 v307 = (i8)(intptr_t)(ws+1322);
	*(i1*)(intptr_t)v307 = v306;

	goto c02_003c;

c02_0044:;

	i8 v308 = (i8)(intptr_t)(ws+1322);
	i1 v309 = *(i1*)(intptr_t)v308;
	i1 v310 = v309+(-48);
	i8 v311 = (i8)(intptr_t)(ws+1322);
	*(i1*)(intptr_t)v311 = v310;

c02_003c:;

	i8 v312 = (i8)(intptr_t)(ws+1322);
	i1 v313 = *(i1*)(intptr_t)v312;
	i8 v314 = (i8)(intptr_t)(ws+1321);
	i1 v315 = *(i1*)(intptr_t)v314;
	if (v313<v315) goto c02_0049; else goto c02_0048;

c02_0048:;

	goto c02_003b;

c02_0049:;

c02_0045:;

	i8 v316 = (i8)(intptr_t)(ws+1304);
	i4 v317 = *(i4*)(intptr_t)v316;
	i8 v318 = (i8)(intptr_t)(ws+1321);
	i1 v319 = *(i1*)(intptr_t)v318;
	i4 v320 = v319;
	i4 v321 = v317*v320;
	i8 v322 = (i8)(intptr_t)(ws+1322);
	i1 v323 = *(i1*)(intptr_t)v322;
	i4 v324 = v323;
	i4 v325 = v321+v324;
	i8 v326 = (i8)(intptr_t)(ws+1304);
	*(i4*)(intptr_t)v326 = v325;

	i8 v327 = (i8)(intptr_t)(ws+1312);
	i8 v328 = *(i8*)(intptr_t)v327;
	i8 v329 = v328+(+1);
	i8 v330 = (i8)(intptr_t)(ws+1312);
	*(i8*)(intptr_t)v330 = v329;

	i8 v331 = (i8)(intptr_t)(ws+1312);
	i8 v332 = *(i8*)(intptr_t)v331;
	i1 v333 = *(i1*)(intptr_t)v332;
	i8 v334 = (i8)(intptr_t)(ws+1322);
	*(i1*)(intptr_t)v334 = v333;

	goto c02_003a;

c02_003b:;

	i8 v335 = (i8)(intptr_t)(ws+1320);
	i1 v336 = *(i1*)(intptr_t)v335;
	i1 v337 = (i1)+0;
	if (v336==v337) goto c02_004e; else goto c02_004d;

c02_004d:;

	i8 v338 = (i8)(intptr_t)(ws+1304);
	i4 v339 = *(i4*)(intptr_t)v338;
	i4 v340 = -v339;
	i8 v341 = (i8)(intptr_t)(ws+1304);
	*(i4*)(intptr_t)v341 = v340;

c02_004e:;

c02_004a:;

endsub:;
	*p239 = *(i8*)(intptr_t)(ws+1312);
	*p238 = *(i4*)(intptr_t)(ws+1304);
}

// ArgvInit workspace at ws+1192 length ws+0
void f24_ArgvInit(void) {


	
*(i8*)(intptr_t)(ws+16) 
 = (i8)(intptr_t)global_argv; 



	i8 v350 = (i8)(intptr_t)(ws+16);
	i8 v351 = *(i8*)(intptr_t)v350;
	i8 v352 = v351+(+8);
	i8 v353 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v353 = v352;

endsub:;
}

// ArgvNext workspace at ws+1192 length ws+8
void f25_ArgvNext(i8* p354 /* arg */) {

	i8 v355 = (i8)(intptr_t)(ws+16);
	i8 v356 = *(i8*)(intptr_t)v355;
	i8 v357 = (i8)+0;
	if (v356==v357) goto c02_0052; else goto c02_0053;

c02_0052:;

	i8 v358 = (i8)+0;
	i8 v359 = (i8)(intptr_t)(ws+1192);
	*(i8*)(intptr_t)v359 = v358;

	goto endsub;

c02_0053:;

c02_004f:;

	i8 v360 = (i8)(intptr_t)(ws+16);
	i8 v361 = *(i8*)(intptr_t)v360;
	i8 v362 = *(i8*)(intptr_t)v361;
	i8 v363 = (i8)(intptr_t)(ws+1192);
	*(i8*)(intptr_t)v363 = v362;

	i8 v364 = (i8)(intptr_t)(ws+1192);
	i8 v365 = *(i8*)(intptr_t)v364;
	i8 v366 = (i8)+0;
	if (v365==v366) goto c02_0057; else goto c02_0058;

c02_0057:;

	i8 v367 = (i8)+0;
	i8 v368 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v368 = v367;

	goto c02_0054;

c02_0058:;

	i8 v369 = (i8)(intptr_t)(ws+16);
	i8 v370 = *(i8*)(intptr_t)v369;
	i8 v371 = v370+(+8);
	i8 v372 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v372 = v371;

c02_0054:;

endsub:;
	*p354 = *(i8*)(intptr_t)(ws+1192);
}

// StrCmp workspace at ws+1320 length ws+17
void f26_StrCmp(i1* p373 /* res */, i8 p374 /* s2 */, i8 p375 /* s1 */) {
	*(i8*)(intptr_t)(ws+1320) = p375; /* s1 */
	*(i8*)(intptr_t)(ws+1328) = p374; /* s2 */

c02_0059:;

	i8 v376 = (i8)(intptr_t)(ws+1320);
	i8 v377 = *(i8*)(intptr_t)v376;
	i1 v378 = *(i1*)(intptr_t)v377;
	i8 v379 = (i8)(intptr_t)(ws+1328);
	i8 v380 = *(i8*)(intptr_t)v379;
	i1 v381 = *(i1*)(intptr_t)v380;
	i1 v382 = v378-v381;
	i8 v383 = (i8)(intptr_t)(ws+1336);
	*(i1*)(intptr_t)v383 = v382;

	i8 v384 = (i8)(intptr_t)(ws+1336);
	i1 v385 = *(i1*)(intptr_t)v384;
	i1 v386 = (i1)+0;
	if (v385==v386) goto c02_0062; else goto c02_0060;

c02_0062:;

	i8 v387 = (i8)(intptr_t)(ws+1320);
	i8 v388 = *(i8*)(intptr_t)v387;
	i1 v389 = *(i1*)(intptr_t)v388;
	i1 v390 = (i1)+0;
	if (v389==v390) goto c02_0060; else goto c02_0061;

c02_0060:;

	goto c02_005a;

c02_0061:;

c02_005b:;

	i8 v391 = (i8)(intptr_t)(ws+1320);
	i8 v392 = *(i8*)(intptr_t)v391;
	i8 v393 = v392+(+1);
	i8 v394 = (i8)(intptr_t)(ws+1320);
	*(i8*)(intptr_t)v394 = v393;

	i8 v395 = (i8)(intptr_t)(ws+1328);
	i8 v396 = *(i8*)(intptr_t)v395;
	i8 v397 = v396+(+1);
	i8 v398 = (i8)(intptr_t)(ws+1328);
	*(i8*)(intptr_t)v398 = v397;

	goto c02_0059;

c02_005a:;

endsub:;
	*p373 = *(i1*)(intptr_t)(ws+1336);
}

// RawAlloc workspace at ws+1344 length ws+16
void f32_RawAlloc(i8* p516 /* block */, i8 p517 /* length */) {
	*(i8*)(intptr_t)(ws+1344) = p517; /* length */


	
*(i8*)(intptr_t)(ws+1352) 
=(intptr_t)calloc(1, (size_t) 
*(i8*)(intptr_t)(ws+1344) 
); 



endsub:;
	*p516 = *(i8*)(intptr_t)(ws+1352);
}
	void f32_RawAlloc(i8* /* block */, i8 /* length */);
const i1 c02_s0000[] = { 0x4f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0 };
	void f12_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// Alloc workspace at ws+1320 length ws+24
void f33_Alloc(i8* p518 /* block */, i8 p519 /* length */) {
	*(i8*)(intptr_t)(ws+1320) = p519; /* length */

	i8 v520 = (i8)(intptr_t)(ws+1320);
	i8 v521 = *(i8*)(intptr_t)v520;
	i8 v522 = (i8)(intptr_t)(f32_RawAlloc);
	i8 v523;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v522)(&v523, v521);

	i8 v524 = (i8)(intptr_t)(ws+1336);
	*(i8*)(intptr_t)v524 = v523;

	i8 v525 = (i8)(intptr_t)(ws+1336);
	i8 v526 = *(i8*)(intptr_t)v525;
	i8 v527 = (i8)(intptr_t)(ws+1328);
	*(i8*)(intptr_t)v527 = v526;

	i8 v528 = (i8)(intptr_t)(ws+1328);
	i8 v529 = *(i8*)(intptr_t)v528;
	i8 v530 = (i8)+0;
	if (v529==v530) goto c02_008c; else goto c02_008d;

c02_008c:;

	i8 v531 = (i8)(intptr_t)c02_s0000;
	i8 v532 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v532)(v531);

	i8 v533 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v533)();

c02_008d:;

c02_0089:;

endsub:;
	*p518 = *(i8*)(intptr_t)(ws+1328);
}

// Free workspace at ws+1328 length ws+8
void f34_Free(i8 p534 /* block */) {
	*(i8*)(intptr_t)(ws+1328) = p534; /* block */


	
free((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+1328) 
); 



endsub:;
}

// StrDup workspace at ws+1320 length ws+16
void f35_StrDup(i8* p535 /* sout */, i8 p536 /* s */) {
	*(i8*)(intptr_t)(ws+1320) = p536; /* s */


	
*(i8*)(intptr_t)(ws+1328) 
=(intptr_t)strdup((const char*)(intptr_t) 
*(i8*)(intptr_t)(ws+1320) 
); 



endsub:;
	*p535 = *(i8*)(intptr_t)(ws+1328);
}

// GetFreeMemory workspace at ws+1192 length ws+8
void f38_GetFreeMemory(i8* p537 /* i */) {

	i8 v538 = (i8)+0;
	i8 v539 = (i8)(intptr_t)(ws+1192);
	*(i8*)(intptr_t)v539 = v538;

endsub:;
	*p537 = *(i8*)(intptr_t)(ws+1192);
}

// _fcb_init workspace at ws+1264 length ws+8
void f41__fcb_init(i8 p540 /* fcb */) {
	*(i8*)(intptr_t)(ws+1264) = p540; /* fcb */

	i4 v541 = (i4)+0;
	i8 v542 = (i8)(intptr_t)(ws+1264);
	i8 v543 = *(i8*)(intptr_t)v542;
	i8 v544 = v543+(+4);
	*(i4*)(intptr_t)v544 = v541;

	i2 v545 = (i2)+0;
	i8 v546 = (i8)(intptr_t)(ws+1264);
	i8 v547 = *(i8*)(intptr_t)v546;
	i8 v548 = v547+(+8);
	*(i2*)(intptr_t)v548 = v545;

	i2 v549 = (i2)+0;
	i8 v550 = (i8)(intptr_t)(ws+1264);
	i8 v551 = *(i8*)(intptr_t)v550;
	i8 v552 = v551+(+10);
	*(i2*)(intptr_t)v552 = v549;

	i1 v553 = (i1)+0;
	i8 v554 = (i8)(intptr_t)(ws+1264);
	i8 v555 = *(i8*)(intptr_t)v554;
	i8 v556 = v555+(+524);
	*(i1*)(intptr_t)v556 = v553;

endsub:;
}

// _fcb_advance workspace at ws+1360 length ws+8
void f42__fcb_advance(i8 p557 /* fcb */) {
	*(i8*)(intptr_t)(ws+1360) = p557; /* fcb */

	i8 v558 = (i8)(intptr_t)(ws+1360);
	i8 v559 = *(i8*)(intptr_t)v558;
	i8 v560 = v559+(+10);
	i2 v561 = *(i2*)(intptr_t)v560;
	i2 v562 = v561+(+1);
	i8 v563 = (i8)(intptr_t)(ws+1360);
	i8 v564 = *(i8*)(intptr_t)v563;
	i8 v565 = v564+(+10);
	*(i2*)(intptr_t)v565 = v562;

endsub:;
}
	void f39_FCBRawRead(i2* /* amount */, i2 /* len */, i4 /* pos */, i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// _fcb_fillbuffer workspace at ws+1328 length ws+18
void f43__fcb_fillbuffer(i1* p566 /* b */, i8 p567 /* fcb */) {
	*(i8*)(intptr_t)(ws+1328) = p567; /* fcb */

	i8 v568 = (i8)(intptr_t)(ws+1328);
	i8 v569 = *(i8*)(intptr_t)v568;
	i8 v570 = v569+(+4);
	i4 v571 = *(i4*)(intptr_t)v570;
	i8 v572 = (i8)(intptr_t)(ws+1328);
	i8 v573 = *(i8*)(intptr_t)v572;
	i8 v574 = v573+(+10);
	i2 v575 = *(i2*)(intptr_t)v574;
	i4 v576 = v575;
	i4 v577 = v571+v576;
	i8 v578 = (i8)(intptr_t)(ws+1340);
	*(i4*)(intptr_t)v578 = v577;

	i8 v579 = (i8)(intptr_t)(ws+1328);
	i8 v580 = *(i8*)(intptr_t)v579;
	i8 v581 = (i8)(intptr_t)(ws+1340);
	i4 v582 = *(i4*)(intptr_t)v581;
	i2 v583 = (i2)+512;
	i8 v584 = (i8)(intptr_t)(f39_FCBRawRead);
	i2 v585;

	((void(*)(i2* /* amount */, i2 /* len */, i4 /* pos */, i8 /* fcb */))(intptr_t)v584)(&v585, v583, v582, v580);

	i8 v586 = (i8)(intptr_t)(ws+1344);
	*(i2*)(intptr_t)v586 = v585;

	i8 v587 = (i8)(intptr_t)(ws+1344);
	i2 v588 = *(i2*)(intptr_t)v587;
	i8 v589 = (i8)(intptr_t)(ws+1328);
	i8 v590 = *(i8*)(intptr_t)v589;
	i8 v591 = v590+(+8);
	*(i2*)(intptr_t)v591 = v588;

	i1 v592 = (i1)+0;
	i8 v593 = (i8)(intptr_t)(ws+1336);
	*(i1*)(intptr_t)v593 = v592;

	i8 v594 = (i8)(intptr_t)(ws+1328);
	i8 v595 = *(i8*)(intptr_t)v594;
	i8 v596 = v595+(+524);
	i1 v597 = *(i1*)(intptr_t)v596;
	i1 v598 = v597&(+1);
	i1 v599 = (i1)+0;
	if (v598==v599) goto c02_0092; else goto c02_0091;

c02_0091:;

	goto endsub;

c02_0092:;

c02_008e:;

	i1 v600 = (i1)+2;
	i8 v601 = (i8)(intptr_t)(ws+1328);
	i8 v602 = *(i8*)(intptr_t)v601;
	i8 v603 = v602+(+524);
	*(i1*)(intptr_t)v603 = v600;

	i8 v604 = (i8)(intptr_t)(ws+1340);
	i4 v605 = *(i4*)(intptr_t)v604;
	i8 v606 = (i8)(intptr_t)(ws+1328);
	i8 v607 = *(i8*)(intptr_t)v606;
	i8 v608 = v607+(+4);
	*(i4*)(intptr_t)v608 = v605;

	i2 v609 = (i2)+0;
	i8 v610 = (i8)(intptr_t)(ws+1328);
	i8 v611 = *(i8*)(intptr_t)v610;
	i8 v612 = v611+(+10);
	*(i2*)(intptr_t)v612 = v609;

	i8 v613 = (i8)(intptr_t)(ws+1328);
	i8 v614 = *(i8*)(intptr_t)v613;
	i8 v615 = v614+(+8);
	i2 v616 = *(i2*)(intptr_t)v615;
	i2 v617 = (i2)+0;
	if (v616==v617) goto c02_0097; else goto c02_0096;

c02_0096:;

	i8 v618 = (i8)(intptr_t)(ws+1328);
	i8 v619 = *(i8*)(intptr_t)v618;
	i8 v620 = v619+(+12);
	i1 v621 = *(i1*)(intptr_t)v620;
	i8 v622 = (i8)(intptr_t)(ws+1336);
	*(i1*)(intptr_t)v622 = v621;

	i8 v623 = (i8)(intptr_t)(ws+1328);
	i8 v624 = *(i8*)(intptr_t)v623;
	i8 v625 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v625)(v624);

c02_0097:;

c02_0093:;

endsub:;
	*p566 = *(i1*)(intptr_t)(ws+1336);
}
	void f40_FCBRawWrite(i2 /* len */, i4 /* pos */, i8 /* fcb */);

// FCBFlush workspace at ws+1360 length ws+12
void f44_FCBFlush(i8 p626 /* fcb */) {
	*(i8*)(intptr_t)(ws+1360) = p626; /* fcb */

	i8 v627 = (i8)(intptr_t)(ws+1360);
	i8 v628 = *(i8*)(intptr_t)v627;
	i8 v629 = v628+(+4);
	i4 v630 = *(i4*)(intptr_t)v629;
	i8 v631 = (i8)(intptr_t)(ws+1368);
	*(i4*)(intptr_t)v631 = v630;

	i8 v632 = (i8)(intptr_t)(ws+1360);
	i8 v633 = *(i8*)(intptr_t)v632;
	i8 v634 = v633+(+524);
	i1 v635 = *(i1*)(intptr_t)v634;
	i1 v636 = v635&(+4);
	i1 v637 = (i1)+0;
	if (v636==v637) goto c02_009c; else goto c02_009b;

c02_009b:;

	i8 v638 = (i8)(intptr_t)(ws+1360);
	i8 v639 = *(i8*)(intptr_t)v638;
	i8 v640 = (i8)(intptr_t)(ws+1368);
	i4 v641 = *(i4*)(intptr_t)v640;
	i8 v642 = (i8)(intptr_t)(ws+1360);
	i8 v643 = *(i8*)(intptr_t)v642;
	i8 v644 = v643+(+10);
	i2 v645 = *(i2*)(intptr_t)v644;
	i8 v646 = (i8)(intptr_t)(f40_FCBRawWrite);

	((void(*)(i2 /* len */, i4 /* pos */, i8 /* fcb */))(intptr_t)v646)(v645, v641, v639);

	i8 v647 = (i8)(intptr_t)(ws+1360);
	i8 v648 = *(i8*)(intptr_t)v647;
	i8 v649 = v648+(+524);
	i1 v650 = *(i1*)(intptr_t)v649;
	i1 v651 = v650&(+1);
	i1 v652 = (i1)+0;
	if (v651==v652) goto c02_00a1; else goto c02_00a0;

c02_00a0:;

	goto endsub;

c02_00a1:;

c02_009d:;

c02_009c:;

c02_0098:;

	i8 v653 = (i8)(intptr_t)(ws+1368);
	i4 v654 = *(i4*)(intptr_t)v653;
	i8 v655 = (i8)(intptr_t)(ws+1360);
	i8 v656 = *(i8*)(intptr_t)v655;
	i8 v657 = v656+(+10);
	i2 v658 = *(i2*)(intptr_t)v657;
	i4 v659 = v658;
	i4 v660 = v654+v659;
	i8 v661 = (i8)(intptr_t)(ws+1360);
	i8 v662 = *(i8*)(intptr_t)v661;
	i8 v663 = v662+(+4);
	*(i4*)(intptr_t)v663 = v660;

	i1 v664 = (i1)+0;
	i8 v665 = (i8)(intptr_t)(ws+1360);
	i8 v666 = *(i8*)(intptr_t)v665;
	i8 v667 = v666+(+524);
	*(i1*)(intptr_t)v667 = v664;

	i2 v668 = (i2)+0;
	i8 v669 = (i8)(intptr_t)(ws+1360);
	i8 v670 = *(i8*)(intptr_t)v669;
	i8 v671 = v670+(+10);
	*(i2*)(intptr_t)v671 = v668;

	i2 v672 = (i2)+0;
	i8 v673 = (i8)(intptr_t)(ws+1360);
	i8 v674 = *(i8*)(intptr_t)v673;
	i8 v675 = v674+(+8);
	*(i2*)(intptr_t)v675 = v672;

endsub:;
}
	void f44_FCBFlush(i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// _fcb_flushbuffer workspace at ws+1344 length ws+9
void f45__fcb_flushbuffer(i1 p676 /* b */, i8 p677 /* fcb */) {
	*(i8*)(intptr_t)(ws+1344) = p677; /* fcb */
	*(i1*)(intptr_t)(ws+1352) = p676; /* b */

	i8 v678 = (i8)(intptr_t)(ws+1344);
	i8 v679 = *(i8*)(intptr_t)v678;
	i8 v680 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v680)(v679);

	i8 v681 = (i8)(intptr_t)(ws+1344);
	i8 v682 = *(i8*)(intptr_t)v681;
	i8 v683 = v682+(+524);
	i1 v684 = *(i1*)(intptr_t)v683;
	i1 v685 = v684&(+1);
	i1 v686 = (i1)+0;
	if (v685==v686) goto c02_00a6; else goto c02_00a5;

c02_00a5:;

	goto endsub;

c02_00a6:;

c02_00a2:;

	i1 v687 = (i1)+4;
	i8 v688 = (i8)(intptr_t)(ws+1344);
	i8 v689 = *(i8*)(intptr_t)v688;
	i8 v690 = v689+(+524);
	*(i1*)(intptr_t)v690 = v687;

	i8 v691 = (i8)(intptr_t)(ws+1352);
	i1 v692 = *(i1*)(intptr_t)v691;
	i8 v693 = (i8)(intptr_t)(ws+1344);
	i8 v694 = *(i8*)(intptr_t)v693;
	i8 v695 = v694+(+12);
	*(i1*)(intptr_t)v695 = v692;

	i8 v696 = (i8)(intptr_t)(ws+1344);
	i8 v697 = *(i8*)(intptr_t)v696;
	i8 v698 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v698)(v697);

endsub:;
}
	void f44_FCBFlush(i8 /* fcb */);
	void f43__fcb_fillbuffer(i1* /* b */, i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// FCBGetChar workspace at ws+1312 length ws+13
void f46_FCBGetChar(i1* p699 /* b */, i8 p700 /* fcb */) {
	*(i8*)(intptr_t)(ws+1312) = p700; /* fcb */

	i8 v701 = (i8)(intptr_t)(ws+1312);
	i8 v702 = *(i8*)(intptr_t)v701;
	i8 v703 = v702+(+524);
	i1 v704 = *(i1*)(intptr_t)v703;
	i1 v705 = v704&(+4);
	i1 v706 = (i1)+0;
	if (v705==v706) goto c02_00ab; else goto c02_00aa;

c02_00aa:;

	i8 v707 = (i8)(intptr_t)(ws+1312);
	i8 v708 = *(i8*)(intptr_t)v707;
	i8 v709 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v709)(v708);

c02_00ab:;

c02_00a7:;

	i8 v710 = (i8)(intptr_t)(ws+1312);
	i8 v711 = *(i8*)(intptr_t)v710;
	i8 v712 = v711+(+10);
	i2 v713 = *(i2*)(intptr_t)v712;
	i8 v714 = (i8)(intptr_t)(ws+1322);
	*(i2*)(intptr_t)v714 = v713;

	i8 v715 = (i8)(intptr_t)(ws+1322);
	i2 v716 = *(i2*)(intptr_t)v715;
	i8 v717 = (i8)(intptr_t)(ws+1312);
	i8 v718 = *(i8*)(intptr_t)v717;
	i8 v719 = v718+(+8);
	i2 v720 = *(i2*)(intptr_t)v719;
	if (v716==v720) goto c02_00af; else goto c02_00b0;

c02_00af:;

	i8 v721 = (i8)(intptr_t)(ws+1312);
	i8 v722 = *(i8*)(intptr_t)v721;
	i8 v723 = (i8)(intptr_t)(f43__fcb_fillbuffer);
	i1 v724;

	((void(*)(i1* /* b */, i8 /* fcb */))(intptr_t)v723)(&v724, v722);

	i8 v725 = (i8)(intptr_t)(ws+1324);
	*(i1*)(intptr_t)v725 = v724;

	i8 v726 = (i8)(intptr_t)(ws+1324);
	i1 v727 = *(i1*)(intptr_t)v726;
	i8 v728 = (i8)(intptr_t)(ws+1320);
	*(i1*)(intptr_t)v728 = v727;

	goto c02_00ac;

c02_00b0:;

	i8 v729 = (i8)(intptr_t)(ws+1312);
	i8 v730 = *(i8*)(intptr_t)v729;
	i8 v731 = v730+(+12);
	i8 v732 = (i8)(intptr_t)(ws+1322);
	i2 v733 = *(i2*)(intptr_t)v732;
	i8 v734 = v733;
	i8 v735 = v731+v734;
	i1 v736 = *(i1*)(intptr_t)v735;
	i8 v737 = (i8)(intptr_t)(ws+1320);
	*(i1*)(intptr_t)v737 = v736;

	i8 v738 = (i8)(intptr_t)(ws+1312);
	i8 v739 = *(i8*)(intptr_t)v738;
	i8 v740 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v740)(v739);

c02_00ac:;

endsub:;
	*p699 = *(i1*)(intptr_t)(ws+1320);
}
	void f44_FCBFlush(i8 /* fcb */);
	void f45__fcb_flushbuffer(i1 /* b */, i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// FCBPutChar workspace at ws+1328 length ws+12
void f47_FCBPutChar(i1 p741 /* b */, i8 p742 /* fcb */) {
	*(i8*)(intptr_t)(ws+1328) = p742; /* fcb */
	*(i1*)(intptr_t)(ws+1336) = p741; /* b */

	i8 v743 = (i8)(intptr_t)(ws+1328);
	i8 v744 = *(i8*)(intptr_t)v743;
	i8 v745 = v744+(+524);
	i1 v746 = *(i1*)(intptr_t)v745;
	i1 v747 = v746&(+2);
	i1 v748 = (i1)+0;
	if (v747==v748) goto c02_00b5; else goto c02_00b4;

c02_00b4:;

	i8 v749 = (i8)(intptr_t)(ws+1328);
	i8 v750 = *(i8*)(intptr_t)v749;
	i8 v751 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v751)(v750);

c02_00b5:;

c02_00b1:;

	i8 v752 = (i8)(intptr_t)(ws+1328);
	i8 v753 = *(i8*)(intptr_t)v752;
	i8 v754 = v753+(+10);
	i2 v755 = *(i2*)(intptr_t)v754;
	i8 v756 = (i8)(intptr_t)(ws+1338);
	*(i2*)(intptr_t)v756 = v755;

	i8 v757 = (i8)(intptr_t)(ws+1338);
	i2 v758 = *(i2*)(intptr_t)v757;
	i2 v759 = (i2)+512;
	if (v758==v759) goto c02_00b9; else goto c02_00ba;

c02_00b9:;

	i8 v760 = (i8)(intptr_t)(ws+1328);
	i8 v761 = *(i8*)(intptr_t)v760;
	i8 v762 = (i8)(intptr_t)(ws+1336);
	i1 v763 = *(i1*)(intptr_t)v762;
	i8 v764 = (i8)(intptr_t)(f45__fcb_flushbuffer);

	((void(*)(i1 /* b */, i8 /* fcb */))(intptr_t)v764)(v763, v761);

	goto c02_00b6;

c02_00ba:;

	i8 v765 = (i8)(intptr_t)(ws+1336);
	i1 v766 = *(i1*)(intptr_t)v765;
	i8 v767 = (i8)(intptr_t)(ws+1328);
	i8 v768 = *(i8*)(intptr_t)v767;
	i8 v769 = v768+(+12);
	i8 v770 = (i8)(intptr_t)(ws+1338);
	i2 v771 = *(i2*)(intptr_t)v770;
	i8 v772 = v771;
	i8 v773 = v769+v772;
	*(i1*)(intptr_t)v773 = v766;

	i8 v774 = (i8)(intptr_t)(ws+1328);
	i8 v775 = *(i8*)(intptr_t)v774;
	i8 v776 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v776)(v775);

c02_00b6:;

	i8 v777 = (i8)(intptr_t)(ws+1328);
	i8 v778 = *(i8*)(intptr_t)v777;
	i8 v779 = v778+(+524);
	i1 v780 = *(i1*)(intptr_t)v779;
	i1 v781 = v780|(+4);
	i8 v782 = (i8)(intptr_t)(ws+1328);
	i8 v783 = *(i8*)(intptr_t)v782;
	i8 v784 = v783+(+524);
	*(i1*)(intptr_t)v784 = v781;

endsub:;
}

// FCBRawRead workspace at ws+1352 length ws+36
void f39_FCBRawRead(i2* p866 /* amount */, i2 p867 /* len */, i4 p868 /* pos */, i8 p869 /* fcb */) {
	*(i8*)(intptr_t)(ws+1352) = p869; /* fcb */
	*(i4*)(intptr_t)(ws+1360) = p868; /* pos */
	*(i2*)(intptr_t)(ws+1364) = p867; /* len */

	i8 v870 = (i8)(intptr_t)(ws+1352);
	i8 v871 = *(i8*)(intptr_t)v870;
	i4 v872 = *(i4*)(intptr_t)v871;
	i8 v873 = (i8)(intptr_t)(ws+1368);
	*(i4*)(intptr_t)v873 = v872;

	i8 v874 = (i8)(intptr_t)(ws+1352);
	i8 v875 = *(i8*)(intptr_t)v874;
	i8 v876 = v875+(+12);
	i8 v877 = (i8)(intptr_t)(ws+1376);
	*(i8*)(intptr_t)v877 = v876;


	
*(i4*)(intptr_t)(ws+1384) 
=pread( 
*(i4*)(intptr_t)(ws+1368) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+1376) 
,  
*(i2*)(intptr_t)(ws+1364) 
,  
*(i4*)(intptr_t)(ws+1360) 
); 



	i8 v878 = (i8)(intptr_t)(ws+1384);
	i4 v879 = *(i4*)(intptr_t)v878;
	i4 v880 = (i4)-1;
	if (v879==v880) goto c02_00d6; else goto c02_00d7;

c02_00d6:;

	i2 v881 = (i2)+0;
	i8 v882 = (i8)(intptr_t)(ws+1366);
	*(i2*)(intptr_t)v882 = v881;

	i8 v883 = (i8)(intptr_t)(ws+1352);
	i8 v884 = *(i8*)(intptr_t)v883;
	i8 v885 = v884+(+524);
	i1 v886 = *(i1*)(intptr_t)v885;
	i1 v887 = v886|(+1);
	i8 v888 = (i8)(intptr_t)(ws+1352);
	i8 v889 = *(i8*)(intptr_t)v888;
	i8 v890 = v889+(+524);
	*(i1*)(intptr_t)v890 = v887;

	goto c02_00d3;

c02_00d7:;

	i8 v891 = (i8)(intptr_t)(ws+1384);
	i4 v892 = *(i4*)(intptr_t)v891;
	i2 v893 = (s2)(s4)v892;
	i8 v894 = (i8)(intptr_t)(ws+1366);
	*(i2*)(intptr_t)v894 = v893;

c02_00d3:;

endsub:;
	*p866 = *(i2*)(intptr_t)(ws+1366);
}

// FCBRawWrite workspace at ws+1376 length ws+36
void f40_FCBRawWrite(i2 p895 /* len */, i4 p896 /* pos */, i8 p897 /* fcb */) {
	*(i8*)(intptr_t)(ws+1376) = p897; /* fcb */
	*(i4*)(intptr_t)(ws+1384) = p896; /* pos */
	*(i2*)(intptr_t)(ws+1388) = p895; /* len */

	i8 v898 = (i8)(intptr_t)(ws+1376);
	i8 v899 = *(i8*)(intptr_t)v898;
	i4 v900 = *(i4*)(intptr_t)v899;
	i8 v901 = (i8)(intptr_t)(ws+1392);
	*(i4*)(intptr_t)v901 = v900;

	i8 v902 = (i8)(intptr_t)(ws+1376);
	i8 v903 = *(i8*)(intptr_t)v902;
	i8 v904 = v903+(+12);
	i8 v905 = (i8)(intptr_t)(ws+1400);
	*(i8*)(intptr_t)v905 = v904;


	
*(i4*)(intptr_t)(ws+1408) 
=pwrite( 
*(i4*)(intptr_t)(ws+1392) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+1400) 
,  
*(i2*)(intptr_t)(ws+1388) 
,  
*(i4*)(intptr_t)(ws+1384) 
); 



	i8 v906 = (i8)(intptr_t)(ws+1408);
	i4 v907 = *(i4*)(intptr_t)v906;
	i4 v908 = (i4)-1;
	if (v907==v908) goto c02_00db; else goto c02_00dc;

c02_00db:;

	i8 v909 = (i8)(intptr_t)(ws+1376);
	i8 v910 = *(i8*)(intptr_t)v909;
	i8 v911 = v910+(+524);
	i1 v912 = *(i1*)(intptr_t)v911;
	i1 v913 = v912|(+1);
	i8 v914 = (i8)(intptr_t)(ws+1376);
	i8 v915 = *(i8*)(intptr_t)v914;
	i8 v916 = v915+(+524);
	*(i1*)(intptr_t)v916 = v913;

c02_00dc:;

c02_00d8:;

endsub:;
}
	void f41__fcb_init(i8 /* fcb */);

// fcb_i_open workspace at ws+1232 length ws+28
void f51_fcb_i_open(i1* p917 /* errno */, i4 p918 /* flags */, i8 p919 /* filename */, i8 p920 /* fcb */) {
	*(i8*)(intptr_t)(ws+1232) = p920; /* fcb */
	*(i8*)(intptr_t)(ws+1240) = p919; /* filename */
	*(i4*)(intptr_t)(ws+1248) = p918; /* flags */

	i8 v921 = (i8)(intptr_t)(ws+1232);
	i8 v922 = *(i8*)(intptr_t)v921;
	i8 v923 = (i8)(intptr_t)(f41__fcb_init);

	((void(*)(i8 /* fcb */))(intptr_t)v923)(v922);


	
errno = 0; 


	
*(i4*)(intptr_t)(ws+1256) 
 = open((char*)(intptr_t) 
*(i8*)(intptr_t)(ws+1240) 
,  
*(i4*)(intptr_t)(ws+1248) 
,  
(+438)
); 



	i8 v924 = (i8)(intptr_t)(ws+1256);
	i4 v925 = *(i4*)(intptr_t)v924;
	i8 v926 = (i8)(intptr_t)(ws+1232);
	i8 v927 = *(i8*)(intptr_t)v926;
	*(i4*)(intptr_t)v927 = v925;

	i8 v928 = (i8)(intptr_t)(ws+1256);
	i4 v929 = *(i4*)(intptr_t)v928;
	i4 v930 = (i4)+0;
	if ((s4)v929<(s4)v930) goto c02_00e0; else goto c02_00e1;

c02_00e0:;


	
*(i1*)(intptr_t)(ws+1252) 
 = errno; 



	goto c02_00dd;

c02_00e1:;

	i1 v931 = (i1)+0;
	i8 v932 = (i8)(intptr_t)(ws+1252);
	*(i1*)(intptr_t)v932 = v931;

c02_00dd:;

endsub:;
	*p917 = *(i1*)(intptr_t)(ws+1252);
}
	void f51_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenIn workspace at ws+1192 length ws+18
void f52_FCBOpenIn(i1* p933 /* errno */, i8 p934 /* filename */, i8 p935 /* fcb */) {
	*(i8*)(intptr_t)(ws+1192) = p935; /* fcb */
	*(i8*)(intptr_t)(ws+1200) = p934; /* filename */

	i8 v936 = (i8)(intptr_t)(ws+1192);
	i8 v937 = *(i8*)(intptr_t)v936;
	i8 v938 = (i8)(intptr_t)(ws+1200);
	i8 v939 = *(i8*)(intptr_t)v938;
	i4 v940 = (i4)+0;
	i8 v941 = (i8)(intptr_t)(f51_fcb_i_open);
	i1 v942;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v941)(&v942, v940, v939, v937);

	i8 v943 = (i8)(intptr_t)(ws+1209);
	*(i1*)(intptr_t)v943 = v942;

	i8 v944 = (i8)(intptr_t)(ws+1209);
	i1 v945 = *(i1*)(intptr_t)v944;
	i8 v946 = (i8)(intptr_t)(ws+1208);
	*(i1*)(intptr_t)v946 = v945;

endsub:;
	*p933 = *(i1*)(intptr_t)(ws+1208);
}
	void f51_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenOut workspace at ws+1208 length ws+18
void f54_FCBOpenOut(i1* p961 /* errno */, i8 p962 /* filename */, i8 p963 /* fcb */) {
	*(i8*)(intptr_t)(ws+1208) = p963; /* fcb */
	*(i8*)(intptr_t)(ws+1216) = p962; /* filename */

	i8 v964 = (i8)(intptr_t)(ws+1208);
	i8 v965 = *(i8*)(intptr_t)v964;
	i8 v966 = (i8)(intptr_t)(ws+1216);
	i8 v967 = *(i8*)(intptr_t)v966;
	i4 v968 = (i4)+578;
	i8 v969 = (i8)(intptr_t)(f51_fcb_i_open);
	i1 v970;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v969)(&v970, v968, v967, v965);

	i8 v971 = (i8)(intptr_t)(ws+1225);
	*(i1*)(intptr_t)v971 = v970;

	i8 v972 = (i8)(intptr_t)(ws+1225);
	i1 v973 = *(i1*)(intptr_t)v972;
	i8 v974 = (i8)(intptr_t)(ws+1224);
	*(i1*)(intptr_t)v974 = v973;

endsub:;
	*p961 = *(i1*)(intptr_t)(ws+1224);
}
	void f44_FCBFlush(i8 /* fcb */);

// FCBClose workspace at ws+1200 length ws+16
void f55_FCBClose(i1* p975 /* errno */, i8 p976 /* fcb */) {
	*(i8*)(intptr_t)(ws+1200) = p976; /* fcb */

	i8 v977 = (i8)(intptr_t)(ws+1200);
	i8 v978 = *(i8*)(intptr_t)v977;
	i8 v979 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v979)(v978);

	i8 v980 = (i8)(intptr_t)(ws+1200);
	i8 v981 = *(i8*)(intptr_t)v980;
	i4 v982 = *(i4*)(intptr_t)v981;
	i8 v983 = (i8)(intptr_t)(ws+1212);
	*(i4*)(intptr_t)v983 = v982;


	
errno = 0; 


	
close( 
*(i4*)(intptr_t)(ws+1212) 
); 


	
*(i1*)(intptr_t)(ws+1208) 
 = errno; 



endsub:;
	*p975 = *(i1*)(intptr_t)(ws+1208);
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

// SyntaxError workspace at ws+1192 length ws+0
void f60_SyntaxError(void) {

	i8 v1071 = (i8)(intptr_t)c02_s0003;
	i8 v1072 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1072)(v1071);

	i8 v1073 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v1073)();

endsub:;
}
const i1 c02_s0004[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f13_print_nl(void);
	void f6_ExitWithError(void);

// FatalError workspace at ws+1304 length ws+8
void f61_FatalError(i8 p1074 /* s */) {
	*(i8*)(intptr_t)(ws+1304) = p1074; /* s */

	i8 v1075 = (i8)(intptr_t)c02_s0004;
	i8 v1076 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1076)(v1075);

	i8 v1077 = (i8)(intptr_t)(ws+1304);
	i8 v1078 = *(i8*)(intptr_t)v1077;
	i8 v1079 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1079)(v1078);

	i8 v1080 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v1080)();

	i8 v1081 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v1081)();

endsub:;
}
	void f33_Alloc(i8* /* block */, i8 /* length */);

// E_b8 workspace at ws+1296 length ws+24
void f62_E_b8(i1 p1082 /* byte */) {
	*(i1*)(intptr_t)(ws+1296) = p1082; /* byte */

	i8 v1083 = (i8)(intptr_t)(ws+1104);
	i8 v1084 = *(i8*)(intptr_t)v1083;
	i8 v1085 = (i8)+0;
	if (v1084==v1085) goto c02_00f9; else goto c02_00f8;

c02_00f8:;

	i8 v1086 = (i8)(intptr_t)(ws+1104);
	i8 v1087 = *(i8*)(intptr_t)v1086;
	i8 v1088 = v1087+(+16);
	i8 v1089 = *(i8*)(intptr_t)v1088;
	i8 v1090 = (i8)(intptr_t)(ws+1304);
	*(i8*)(intptr_t)v1090 = v1089;

	i8 v1091 = (i8)(intptr_t)(ws+1304);
	i8 v1092 = *(i8*)(intptr_t)v1091;
	i8 v1093 = v1092+(+255);
	i1 v1094 = *(i1*)(intptr_t)v1093;
	i1 v1095 = (i1)+255;
	if (v1094==v1095) goto c02_00fd; else goto c02_00fe;

c02_00fd:;

	i8 v1096 = (i8)+264;
	i8 v1097 = (i8)(intptr_t)(f33_Alloc);
	i8 v1098;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1097)(&v1098, v1096);

	i8 v1099 = (i8)(intptr_t)(ws+1312);
	*(i8*)(intptr_t)v1099 = v1098;

	i8 v1100 = (i8)(intptr_t)(ws+1312);
	i8 v1101 = *(i8*)(intptr_t)v1100;
	i8 v1102 = (i8)(intptr_t)(ws+1304);
	*(i8*)(intptr_t)v1102 = v1101;

	i8 v1103 = (i8)(intptr_t)(ws+1304);
	i8 v1104 = *(i8*)(intptr_t)v1103;
	i8 v1105 = (i8)(intptr_t)(ws+1104);
	i8 v1106 = *(i8*)(intptr_t)v1105;
	i8 v1107 = v1106+(+16);
	i8 v1108 = *(i8*)(intptr_t)v1107;
	i8 v1109 = v1108+(+256);
	*(i8*)(intptr_t)v1109 = v1104;

	i8 v1110 = (i8)(intptr_t)(ws+1304);
	i8 v1111 = *(i8*)(intptr_t)v1110;
	i8 v1112 = (i8)(intptr_t)(ws+1104);
	i8 v1113 = *(i8*)(intptr_t)v1112;
	i8 v1114 = v1113+(+16);
	*(i8*)(intptr_t)v1114 = v1111;

c02_00fe:;

c02_00fa:;

	i8 v1115 = (i8)(intptr_t)(ws+1296);
	i1 v1116 = *(i1*)(intptr_t)v1115;
	i8 v1117 = (i8)(intptr_t)(ws+1304);
	i8 v1118 = *(i8*)(intptr_t)v1117;
	i8 v1119 = (i8)(intptr_t)(ws+1304);
	i8 v1120 = *(i8*)(intptr_t)v1119;
	i8 v1121 = v1120+(+255);
	i1 v1122 = *(i1*)(intptr_t)v1121;
	i8 v1123 = v1122;
	i8 v1124 = v1118+v1123;
	*(i1*)(intptr_t)v1124 = v1116;

	i8 v1125 = (i8)(intptr_t)(ws+1304);
	i8 v1126 = *(i8*)(intptr_t)v1125;
	i8 v1127 = v1126+(+255);
	i1 v1128 = *(i1*)(intptr_t)v1127;
	i1 v1129 = v1128+(+1);
	i8 v1130 = (i8)(intptr_t)(ws+1304);
	i8 v1131 = *(i8*)(intptr_t)v1130;
	i8 v1132 = v1131+(+255);
	*(i1*)(intptr_t)v1132 = v1129;

	i8 v1133 = (i8)(intptr_t)(ws+1104);
	i8 v1134 = *(i8*)(intptr_t)v1133;
	i8 v1135 = v1134+(+24);
	i2 v1136 = *(i2*)(intptr_t)v1135;
	i2 v1137 = v1136+(+1);
	i8 v1138 = (i8)(intptr_t)(ws+1104);
	i8 v1139 = *(i8*)(intptr_t)v1138;
	i8 v1140 = v1139+(+24);
	*(i2*)(intptr_t)v1140 = v1137;

c02_00f9:;

c02_00f5:;

endsub:;
}
	void f62_E_b8(i1 /* byte */);

// E workspace at ws+1272 length ws+9
void f63_E(i8 p1141 /* text */) {
	*(i8*)(intptr_t)(ws+1272) = p1141; /* text */

c02_00ff:;

	i8 v1142 = (i8)(intptr_t)(ws+1272);
	i8 v1143 = *(i8*)(intptr_t)v1142;
	i1 v1144 = *(i1*)(intptr_t)v1143;
	i8 v1145 = (i8)(intptr_t)(ws+1280);
	*(i1*)(intptr_t)v1145 = v1144;

	i8 v1146 = (i8)(intptr_t)(ws+1272);
	i8 v1147 = *(i8*)(intptr_t)v1146;
	i8 v1148 = v1147+(+1);
	i8 v1149 = (i8)(intptr_t)(ws+1272);
	*(i8*)(intptr_t)v1149 = v1148;

	i8 v1150 = (i8)(intptr_t)(ws+1280);
	i1 v1151 = *(i1*)(intptr_t)v1150;
	i1 v1152 = (i1)+0;
	if (v1151==v1152) goto c02_0104; else goto c02_0105;

c02_0104:;

	goto c02_0100;

c02_0105:;

c02_0101:;

	i8 v1153 = (i8)(intptr_t)(ws+1280);
	i1 v1154 = *(i1*)(intptr_t)v1153;
	i8 v1155 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1155)(v1154);

	goto c02_00ff;

c02_0100:;

endsub:;
}
	void f62_E_b8(i1 /* byte */);
	void f62_E_b8(i1 /* byte */);

// E_b16 workspace at ws+1288 length ws+2
void f64_E_b16(i2 p1156 /* word */) {
	*(i2*)(intptr_t)(ws+1288) = p1156; /* word */

	i8 v1157 = (i8)(intptr_t)(ws+1288);
	i2 v1158 = *(i2*)(intptr_t)v1157;
	i1 v1159 = v1158;
	i8 v1160 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1160)(v1159);

	i8 v1161 = (i8)(intptr_t)(ws+1288);
	i2 v1162 = *(i2*)(intptr_t)v1161;
	i1 v1163 = (i1)+8;
	i2 v1164 = ((i2)v1162)>>v1163;
	i1 v1165 = v1164;
	i8 v1166 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1166)(v1165);

endsub:;
}
	void f33_Alloc(i8* /* block */, i8 /* length */);
	void f33_Alloc(i8* /* block */, i8 /* length */);

// EmitterPushChunk workspace at ws+1288 length ws+24
void f66_EmitterPushChunk(void) {

	i8 v1178 = (i8)+26;
	i8 v1179 = (i8)(intptr_t)(f33_Alloc);
	i8 v1180;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1179)(&v1180, v1178);

	i8 v1181 = (i8)(intptr_t)(ws+1288);
	*(i8*)(intptr_t)v1181 = v1180;

	i8 v1182 = (i8)(intptr_t)(ws+1288);
	i8 v1183 = *(i8*)(intptr_t)v1182;
	i8 v1184 = (i8)(intptr_t)(ws+1296);
	*(i8*)(intptr_t)v1184 = v1183;

	i8 v1185 = (i8)+264;
	i8 v1186 = (i8)(intptr_t)(f33_Alloc);
	i8 v1187;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1186)(&v1187, v1185);

	i8 v1188 = (i8)(intptr_t)(ws+1304);
	*(i8*)(intptr_t)v1188 = v1187;

	i8 v1189 = (i8)(intptr_t)(ws+1304);
	i8 v1190 = *(i8*)(intptr_t)v1189;
	i8 v1191 = (i8)(intptr_t)(ws+1296);
	i8 v1192 = *(i8*)(intptr_t)v1191;
	i8 v1193 = v1192+(+16);
	*(i8*)(intptr_t)v1193 = v1190;

	i8 v1194 = (i8)(intptr_t)(ws+1296);
	i8 v1195 = *(i8*)(intptr_t)v1194;
	i8 v1196 = v1195+(+16);
	i8 v1197 = *(i8*)(intptr_t)v1196;
	i8 v1198 = (i8)(intptr_t)(ws+1296);
	i8 v1199 = *(i8*)(intptr_t)v1198;
	i8 v1200 = v1199+(+8);
	*(i8*)(intptr_t)v1200 = v1197;

	i8 v1201 = (i8)(intptr_t)(ws+1104);
	i8 v1202 = *(i8*)(intptr_t)v1201;
	i8 v1203 = (i8)(intptr_t)(ws+1296);
	i8 v1204 = *(i8*)(intptr_t)v1203;
	*(i8*)(intptr_t)v1204 = v1202;

	i8 v1205 = (i8)(intptr_t)(ws+1296);
	i8 v1206 = *(i8*)(intptr_t)v1205;
	i8 v1207 = (i8)(intptr_t)(ws+1104);
	*(i8*)(intptr_t)v1207 = v1206;

endsub:;
}
	void f47_FCBPutChar(i1 /* b */, i8 /* fcb */);
	void f47_FCBPutChar(i1 /* b */, i8 /* fcb */);
	void f47_FCBPutChar(i1 /* b */, i8 /* fcb */);
	void f47_FCBPutChar(i1 /* b */, i8 /* fcb */);
	void f34_Free(i8 /* block */);
	void f34_Free(i8 /* block */);

// EmitterPopChunk workspace at ws+1288 length ws+40
void f67_EmitterPopChunk(i1 p1208 /* type */) {
	*(i1*)(intptr_t)(ws+1288) = p1208; /* type */

	i8 v1209 = (i8)(intptr_t)(ws+576);
	i8 v1210 = (i8)(intptr_t)(ws+1288);
	i1 v1211 = *(i1*)(intptr_t)v1210;
	i8 v1212 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(i1 /* b */, i8 /* fcb */))(intptr_t)v1212)(v1211, v1209);

	i8 v1213 = (i8)(intptr_t)(ws+1104);
	i8 v1214 = *(i8*)(intptr_t)v1213;
	i8 v1215 = v1214+(+24);
	i2 v1216 = *(i2*)(intptr_t)v1215;
	i8 v1217 = (i8)(intptr_t)(ws+1290);
	*(i2*)(intptr_t)v1217 = v1216;

	i8 v1218 = (i8)(intptr_t)(ws+576);
	i8 v1219 = (i8)(intptr_t)(ws+1290);
	i2 v1220 = *(i2*)(intptr_t)v1219;
	i1 v1221 = v1220;
	i8 v1222 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(i1 /* b */, i8 /* fcb */))(intptr_t)v1222)(v1221, v1218);

	i8 v1223 = (i8)(intptr_t)(ws+576);
	i8 v1224 = (i8)(intptr_t)(ws+1290);
	i2 v1225 = *(i2*)(intptr_t)v1224;
	i1 v1226 = (i1)+8;
	i2 v1227 = ((i2)v1225)>>v1226;
	i1 v1228 = v1227;
	i8 v1229 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(i1 /* b */, i8 /* fcb */))(intptr_t)v1229)(v1228, v1223);

	i8 v1230 = (i8)(intptr_t)(ws+1104);
	i8 v1231 = *(i8*)(intptr_t)v1230;
	i8 v1232 = v1231+(+8);
	i8 v1233 = *(i8*)(intptr_t)v1232;
	i8 v1234 = (i8)(intptr_t)(ws+1296);
	*(i8*)(intptr_t)v1234 = v1233;

c02_0106:;

	i8 v1235 = (i8)(intptr_t)(ws+1296);
	i8 v1236 = *(i8*)(intptr_t)v1235;
	i8 v1237 = (i8)+0;
	if (v1236==v1237) goto c02_010b; else goto c02_010a;

c02_010a:;

	i1 v1238 = (i1)+0;
	i8 v1239 = (i8)(intptr_t)(ws+1304);
	*(i1*)(intptr_t)v1239 = v1238;

c02_010c:;

	i8 v1240 = (i8)(intptr_t)(ws+1304);
	i1 v1241 = *(i1*)(intptr_t)v1240;
	i8 v1242 = (i8)(intptr_t)(ws+1296);
	i8 v1243 = *(i8*)(intptr_t)v1242;
	i8 v1244 = v1243+(+255);
	i1 v1245 = *(i1*)(intptr_t)v1244;
	if (v1241==v1245) goto c02_0111; else goto c02_0110;

c02_0110:;

	i8 v1246 = (i8)(intptr_t)(ws+576);
	i8 v1247 = (i8)(intptr_t)(ws+1296);
	i8 v1248 = *(i8*)(intptr_t)v1247;
	i8 v1249 = (i8)(intptr_t)(ws+1304);
	i1 v1250 = *(i1*)(intptr_t)v1249;
	i8 v1251 = v1250;
	i8 v1252 = v1248+v1251;
	i1 v1253 = *(i1*)(intptr_t)v1252;
	i8 v1254 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(i1 /* b */, i8 /* fcb */))(intptr_t)v1254)(v1253, v1246);

	i8 v1255 = (i8)(intptr_t)(ws+1304);
	i1 v1256 = *(i1*)(intptr_t)v1255;
	i1 v1257 = v1256+(+1);
	i8 v1258 = (i8)(intptr_t)(ws+1304);
	*(i1*)(intptr_t)v1258 = v1257;

	goto c02_010c;

c02_0111:;

	i8 v1259 = (i8)(intptr_t)(ws+1296);
	i8 v1260 = *(i8*)(intptr_t)v1259;
	i8 v1261 = v1260+(+256);
	i8 v1262 = *(i8*)(intptr_t)v1261;
	i8 v1263 = (i8)(intptr_t)(ws+1312);
	*(i8*)(intptr_t)v1263 = v1262;

	i8 v1264 = (i8)(intptr_t)(ws+1296);
	i8 v1265 = *(i8*)(intptr_t)v1264;
	i8 v1266 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v1266)(v1265);

	i8 v1267 = (i8)(intptr_t)(ws+1312);
	i8 v1268 = *(i8*)(intptr_t)v1267;
	i8 v1269 = (i8)(intptr_t)(ws+1296);
	*(i8*)(intptr_t)v1269 = v1268;

	goto c02_0106;

c02_010b:;

	i8 v1270 = (i8)(intptr_t)(ws+1104);
	i8 v1271 = *(i8*)(intptr_t)v1270;
	i8 v1272 = *(i8*)(intptr_t)v1271;
	i8 v1273 = (i8)(intptr_t)(ws+1320);
	*(i8*)(intptr_t)v1273 = v1272;

	i8 v1274 = (i8)(intptr_t)(ws+1104);
	i8 v1275 = *(i8*)(intptr_t)v1274;
	i8 v1276 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v1276)(v1275);

	i8 v1277 = (i8)(intptr_t)(ws+1320);
	i8 v1278 = *(i8*)(intptr_t)v1277;
	i8 v1279 = (i8)(intptr_t)(ws+1104);
	*(i8*)(intptr_t)v1279 = v1278;

endsub:;
}
	void f54_FCBOpenOut(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
const i1 c02_s0005[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f61_FatalError(i8 /* s */);

// EmitterOpenfile workspace at ws+1192 length ws+9
void f68_EmitterOpenfile(i8 p1280 /* filename */) {
	*(i8*)(intptr_t)(ws+1192) = p1280; /* filename */

	i8 v1281 = (i8)(intptr_t)(ws+576);
	i8 v1282 = (i8)(intptr_t)(ws+1192);
	i8 v1283 = *(i8*)(intptr_t)v1282;
	i8 v1284 = (i8)(intptr_t)(f54_FCBOpenOut);
	i1 v1285;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v1284)(&v1285, v1283, v1281);

	i8 v1286 = (i8)(intptr_t)(ws+1200);
	*(i1*)(intptr_t)v1286 = v1285;

	i8 v1287 = (i8)(intptr_t)(ws+1200);
	i1 v1288 = *(i1*)(intptr_t)v1287;
	i1 v1289 = (i1)+0;
	if (v1288==v1289) goto c02_0116; else goto c02_0115;

c02_0115:;

	i8 v1290 = (i8)(intptr_t)c02_s0005;
	i8 v1291 = (i8)(intptr_t)(f61_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1291)(v1290);

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

// EmitterClosefile workspace at ws+1192 length ws+1
void f69_EmitterClosefile(void) {

	i8 v1292 = (i8)(intptr_t)(ws+576);
	i1 v1293 = (i1)+69;
	i8 v1294 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(i1 /* b */, i8 /* fcb */))(intptr_t)v1294)(v1293, v1292);

	i8 v1295 = (i8)(intptr_t)(ws+576);
	i1 v1296 = (i1)+0;
	i8 v1297 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(i1 /* b */, i8 /* fcb */))(intptr_t)v1297)(v1296, v1295);

	i8 v1298 = (i8)(intptr_t)(ws+576);
	i1 v1299 = (i1)+0;
	i8 v1300 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(i1 /* b */, i8 /* fcb */))(intptr_t)v1300)(v1299, v1298);

	i8 v1301 = (i8)(intptr_t)(ws+576);
	i8 v1302 = (i8)(intptr_t)(f55_FCBClose);
	i1 v1303;

	((void(*)(i1* /* errno */, i8 /* fcb */))(intptr_t)v1302)(&v1303, v1301);

	i8 v1304 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v1304 = v1303;

	i8 v1305 = (i8)(intptr_t)(ws+1192);
	i1 v1306 = *(i1*)(intptr_t)v1305;
	i1 v1307 = (i1)+0;
	if (v1306==v1307) goto c02_011b; else goto c02_011a;

c02_011a:;

	i8 v1308 = (i8)(intptr_t)c02_s0006;
	i8 v1309 = (i8)(intptr_t)(f61_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1309)(v1308);

c02_011b:;

c02_0117:;

endsub:;
}
	void f66_EmitterPushChunk(void);
	void f64_E_b16(i2 /* word */);
	void f63_E(i8 /* text */);
	void f67_EmitterPopChunk(i1 /* type */);

// EmitterDeclareSubroutine workspace at ws+1248 length ws+16
void f70_EmitterDeclareSubroutine(i8 p1310 /* name */, i2 p1311 /* id */) {
	*(i2*)(intptr_t)(ws+1248) = p1311; /* id */
	*(i8*)(intptr_t)(ws+1256) = p1310; /* name */

	i8 v1312 = (i8)(intptr_t)(f66_EmitterPushChunk);

	((void(*)(void))(intptr_t)v1312)();

	i8 v1313 = (i8)(intptr_t)(ws+1248);
	i2 v1314 = *(i2*)(intptr_t)v1313;
	i8 v1315 = (i8)(intptr_t)(f64_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1315)(v1314);

	i8 v1316 = (i8)(intptr_t)(ws+1256);
	i8 v1317 = *(i8*)(intptr_t)v1316;
	i8 v1318 = (i8)(intptr_t)(f63_E);

	((void(*)(i8 /* text */))(intptr_t)v1318)(v1317);

	i1 v1319 = (i1)+78;
	i8 v1320 = (i8)(intptr_t)(f67_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v1320)(v1319);

endsub:;
}
	void f66_EmitterPushChunk(void);
	void f64_E_b16(i2 /* word */);
	void f63_E(i8 /* text */);
	void f67_EmitterPopChunk(i1 /* type */);

// EmitterDeclareExternal workspace at ws+1256 length ws+16
void f71_EmitterDeclareExternal(i8 p1321 /* name */, i2 p1322 /* id */) {
	*(i2*)(intptr_t)(ws+1256) = p1322; /* id */
	*(i8*)(intptr_t)(ws+1264) = p1321; /* name */

	i8 v1323 = (i8)(intptr_t)(f66_EmitterPushChunk);

	((void(*)(void))(intptr_t)v1323)();

	i8 v1324 = (i8)(intptr_t)(ws+1256);
	i2 v1325 = *(i2*)(intptr_t)v1324;
	i8 v1326 = (i8)(intptr_t)(f64_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1326)(v1325);

	i8 v1327 = (i8)(intptr_t)(ws+1264);
	i8 v1328 = *(i8*)(intptr_t)v1327;
	i8 v1329 = (i8)(intptr_t)(f63_E);

	((void(*)(i8 /* text */))(intptr_t)v1329)(v1328);

	i1 v1330 = (i1)+88;
	i8 v1331 = (i8)(intptr_t)(f67_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v1331)(v1330);

endsub:;
}
	void f66_EmitterPushChunk(void);
	void f64_E_b16(i2 /* word */);
	void f64_E_b16(i2 /* word */);
	void f67_EmitterPopChunk(i1 /* type */);

// EmitterReferenceSubroutine workspace at ws+1280 length ws+4
void f72_EmitterReferenceSubroutine(i2 p1332 /* used */, i2 p1333 /* user */) {
	*(i2*)(intptr_t)(ws+1280) = p1333; /* user */
	*(i2*)(intptr_t)(ws+1282) = p1332; /* used */

	i8 v1334 = (i8)(intptr_t)(ws+1280);
	i2 v1335 = *(i2*)(intptr_t)v1334;
	i8 v1336 = (i8)(intptr_t)(ws+1282);
	i2 v1337 = *(i2*)(intptr_t)v1336;
	if (v1335==v1337) goto c02_0120; else goto c02_011f;

c02_011f:;

	i8 v1338 = (i8)(intptr_t)(f66_EmitterPushChunk);

	((void(*)(void))(intptr_t)v1338)();

	i8 v1339 = (i8)(intptr_t)(ws+1280);
	i2 v1340 = *(i2*)(intptr_t)v1339;
	i8 v1341 = (i8)(intptr_t)(f64_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1341)(v1340);

	i8 v1342 = (i8)(intptr_t)(ws+1282);
	i2 v1343 = *(i2*)(intptr_t)v1342;
	i8 v1344 = (i8)(intptr_t)(f64_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1344)(v1343);

	i1 v1345 = (i1)+82;
	i8 v1346 = (i8)(intptr_t)(f67_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v1346)(v1345);

c02_0120:;

c02_011c:;

endsub:;
}
	void f66_EmitterPushChunk(void);
	void f64_E_b16(i2 /* word */);
	void f62_E_b8(i1 /* byte */);
	void f64_E_b16(i2 /* word */);
	void f67_EmitterPopChunk(i1 /* type */);

// EmitterDeclareWorkspace workspace at ws+1264 length ws+6
void f73_EmitterDeclareWorkspace(i2 p1347 /* workspace */, i1 p1348 /* wid */, i2 p1349 /* id */) {
	*(i2*)(intptr_t)(ws+1264) = p1349; /* id */
	*(i1*)(intptr_t)(ws+1266) = p1348; /* wid */
	*(i2*)(intptr_t)(ws+1268) = p1347; /* workspace */

	i8 v1350 = (i8)(intptr_t)(f66_EmitterPushChunk);

	((void(*)(void))(intptr_t)v1350)();

	i8 v1351 = (i8)(intptr_t)(ws+1264);
	i2 v1352 = *(i2*)(intptr_t)v1351;
	i8 v1353 = (i8)(intptr_t)(f64_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1353)(v1352);

	i8 v1354 = (i8)(intptr_t)(ws+1266);
	i1 v1355 = *(i1*)(intptr_t)v1354;
	i8 v1356 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1356)(v1355);

	i8 v1357 = (i8)(intptr_t)(ws+1268);
	i2 v1358 = *(i2*)(intptr_t)v1357;
	i8 v1359 = (i8)(intptr_t)(f64_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1359)(v1358);

	i1 v1360 = (i1)+87;
	i8 v1361 = (i8)(intptr_t)(f67_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v1361)(v1360);

endsub:;
}
	void f26_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);
	void f33_Alloc(i8* /* block */, i8 /* length */);
	void f35_StrDup(i8* /* sout */, i8 /* s */);

// GetSymbol workspace at ws+1280 length ws+40
void f74_GetSymbol(i8* p1368 /* symbol */, i8 p1369 /* name */) {
	*(i8*)(intptr_t)(ws+1280) = p1369; /* name */

	i8 v1370 = (i8)(intptr_t)(ws+1136);
	i8 v1371 = *(i8*)(intptr_t)v1370;
	i8 v1372 = (i8)(intptr_t)(ws+1288);
	*(i8*)(intptr_t)v1372 = v1371;

c02_0121:;

	i8 v1373 = (i8)(intptr_t)(ws+1288);
	i8 v1374 = *(i8*)(intptr_t)v1373;
	i8 v1375 = (i8)+0;
	if (v1374==v1375) goto c02_0126; else goto c02_0125;

c02_0125:;

	i8 v1376 = (i8)(intptr_t)(ws+1280);
	i8 v1377 = *(i8*)(intptr_t)v1376;
	i8 v1378 = (i8)(intptr_t)(ws+1288);
	i8 v1379 = *(i8*)(intptr_t)v1378;
	i8 v1380 = v1379+(+8);
	i8 v1381 = *(i8*)(intptr_t)v1380;
	i8 v1382 = (i8)(intptr_t)(f26_StrCmp);
	i1 v1383;

	((void(*)(i1* /* res */, i8 /* s2 */, i8 /* s1 */))(intptr_t)v1382)(&v1383, v1381, v1377);

	i8 v1384 = (i8)(intptr_t)(ws+1296);
	*(i1*)(intptr_t)v1384 = v1383;

	i8 v1385 = (i8)(intptr_t)(ws+1296);
	i1 v1386 = *(i1*)(intptr_t)v1385;
	i1 v1387 = (i1)+0;
	if (v1386==v1387) goto c02_012a; else goto c02_012b;

c02_012a:;

	goto endsub;

c02_012b:;

c02_0127:;

	i8 v1388 = (i8)(intptr_t)(ws+1288);
	i8 v1389 = *(i8*)(intptr_t)v1388;
	i8 v1390 = *(i8*)(intptr_t)v1389;
	i8 v1391 = (i8)(intptr_t)(ws+1288);
	*(i8*)(intptr_t)v1391 = v1390;

	goto c02_0121;

c02_0126:;

	i8 v1392 = (i8)+19;
	i8 v1393 = (i8)(intptr_t)(f33_Alloc);
	i8 v1394;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1393)(&v1394, v1392);

	i8 v1395 = (i8)(intptr_t)(ws+1304);
	*(i8*)(intptr_t)v1395 = v1394;

	i8 v1396 = (i8)(intptr_t)(ws+1304);
	i8 v1397 = *(i8*)(intptr_t)v1396;
	i8 v1398 = (i8)(intptr_t)(ws+1288);
	*(i8*)(intptr_t)v1398 = v1397;

	i8 v1399 = (i8)(intptr_t)(ws+1280);
	i8 v1400 = *(i8*)(intptr_t)v1399;
	i8 v1401 = (i8)(intptr_t)(f35_StrDup);
	i8 v1402;

	((void(*)(i8* /* sout */, i8 /* s */))(intptr_t)v1401)(&v1402, v1400);

	i8 v1403 = (i8)(intptr_t)(ws+1312);
	*(i8*)(intptr_t)v1403 = v1402;

	i8 v1404 = (i8)(intptr_t)(ws+1312);
	i8 v1405 = *(i8*)(intptr_t)v1404;
	i8 v1406 = (i8)(intptr_t)(ws+1288);
	i8 v1407 = *(i8*)(intptr_t)v1406;
	i8 v1408 = v1407+(+8);
	*(i8*)(intptr_t)v1408 = v1405;

	i8 v1409 = (i8)(intptr_t)(ws+1144);
	i2 v1410 = *(i2*)(intptr_t)v1409;
	i8 v1411 = (i8)(intptr_t)(ws+1288);
	i8 v1412 = *(i8*)(intptr_t)v1411;
	i8 v1413 = v1412+(+16);
	*(i2*)(intptr_t)v1413 = v1410;

	i8 v1414 = (i8)(intptr_t)(ws+1144);
	i2 v1415 = *(i2*)(intptr_t)v1414;
	i2 v1416 = v1415+(+1);
	i8 v1417 = (i8)(intptr_t)(ws+1144);
	*(i2*)(intptr_t)v1417 = v1416;

	i8 v1418 = (i8)(intptr_t)(ws+1136);
	i8 v1419 = *(i8*)(intptr_t)v1418;
	i8 v1420 = (i8)(intptr_t)(ws+1288);
	i8 v1421 = *(i8*)(intptr_t)v1420;
	*(i8*)(intptr_t)v1421 = v1419;

	i8 v1422 = (i8)(intptr_t)(ws+1288);
	i8 v1423 = *(i8*)(intptr_t)v1422;
	i8 v1424 = (i8)(intptr_t)(ws+1136);
	*(i8*)(intptr_t)v1424 = v1423;

endsub:;
	*p1368 = *(i8*)(intptr_t)(ws+1288);
}
const i1 c02_s0007[] = { 0x40,0 };
	void f46_FCBGetChar(i1* /* b */, i8 /* fcb */);

// GetC workspace at ws+1304 length ws+1
void f76_GetC(void) {

	i8 v1431 = (i8)(intptr_t)(ws+40);
	i8 v1432 = (i8)(intptr_t)(f46_FCBGetChar);
	i1 v1433;

	((void(*)(i1* /* b */, i8 /* fcb */))(intptr_t)v1432)(&v1433, v1431);

	i8 v1434 = (i8)(intptr_t)(ws+1304);
	*(i1*)(intptr_t)v1434 = v1433;

	i8 v1435 = (i8)(intptr_t)(ws+1304);
	i1 v1436 = *(i1*)(intptr_t)v1435;
	i8 v1437 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v1437 = v1436;

endsub:;
}
const i1 c02_s0008[] = { 0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0x63,0x6f,0x77,0x77,0x72,0x61,0x70,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x69,0x76,0x65,0 };
	void f61_FatalError(i8 /* s */);
	void f76_GetC(void);

// ExpectC workspace at ws+1280 length ws+1
void f77_ExpectC(i1 p1438 /* want */) {
	*(i1*)(intptr_t)(ws+1280) = p1438; /* want */

	i8 v1439 = (i8)(intptr_t)(ws+1192);
	i1 v1440 = *(i1*)(intptr_t)v1439;
	i8 v1441 = (i8)(intptr_t)(ws+1280);
	i1 v1442 = *(i1*)(intptr_t)v1441;
	if (v1440==v1442) goto c02_0130; else goto c02_012f;

c02_012f:;

	i8 v1443 = (i8)(intptr_t)c02_s0008;
	i8 v1444 = (i8)(intptr_t)(f61_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1444)(v1443);

c02_0130:;

c02_012c:;

	i8 v1445 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1445)();

endsub:;
}
	void f76_GetC(void);

// SkipToEndOfLine workspace at ws+1232 length ws+0
void f78_SkipToEndOfLine(void) {

c02_0131:;

	i8 v1446 = (i8)(intptr_t)(ws+1192);
	i1 v1447 = *(i1*)(intptr_t)v1446;
	i1 v1448 = (i1)+0;
	if (v1447==v1448) goto c02_013a; else goto c02_013d;

c02_013d:;

	i8 v1449 = (i8)(intptr_t)(ws+1192);
	i1 v1450 = *(i1*)(intptr_t)v1449;
	i1 v1451 = (i1)+26;
	if (v1450==v1451) goto c02_013a; else goto c02_013c;

c02_013c:;

	i8 v1452 = (i8)(intptr_t)(ws+1192);
	i1 v1453 = *(i1*)(intptr_t)v1452;
	i1 v1454 = (i1)+10;
	if (v1453==v1454) goto c02_013a; else goto c02_013b;

c02_013a:;

	goto c02_0132;

c02_013b:;

c02_0133:;

	i8 v1455 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1455)();

	goto c02_0131;

c02_0132:;

endsub:;
}
	void f76_GetC(void);

// SkipWhitespace workspace at ws+1304 length ws+0
void f79_SkipWhitespace(void) {

c02_013e:;

	i8 v1456 = (i8)(intptr_t)(ws+1192);
	i1 v1457 = *(i1*)(intptr_t)v1456;
	i1 v1458 = (i1)+32;
	if (v1457==v1458) goto c02_0146; else goto c02_0147;

c02_0147:;

	i8 v1459 = (i8)(intptr_t)(ws+1192);
	i1 v1460 = *(i1*)(intptr_t)v1459;
	i1 v1461 = (i1)+9;
	if (v1460==v1461) goto c02_0146; else goto c02_0145;

c02_0145:;

	goto c02_013f;

c02_0146:;

c02_0140:;

	i8 v1462 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1462)();

	goto c02_013e;

c02_013f:;

endsub:;
}
	void f79_SkipWhitespace(void);
const i1 c02_s0009[] = { 0x77,0x6f,0x72,0x64,0x20,0x74,0x6f,0x6f,0x20,0x6c,0x6f,0x6e,0x67,0 };
	void f61_FatalError(i8 /* s */);
	void f76_GetC(void);

// ReadWord workspace at ws+1296 length ws+8
void f80_ReadWord(void) {

	i8 v1463 = (i8)(intptr_t)(f79_SkipWhitespace);

	((void(*)(void))(intptr_t)v1463)();

	i8 v1464 = (i8)(intptr_t)(ws+1196);
	i8 v1465 = (i8)(intptr_t)(ws+1296);
	*(i8*)(intptr_t)v1465 = v1464;

c02_0148:;

	i8 v1466 = (i8)(intptr_t)(ws+1192);
	i1 v1467 = *(i1*)(intptr_t)v1466;
	i1 v1468 = (i1)+48;
	if (v1467<v1468) goto c02_0160; else goto c02_0161;

c02_0161:;

	i1 v1469 = (i1)+57;
	i8 v1470 = (i8)(intptr_t)(ws+1192);
	i1 v1471 = *(i1*)(intptr_t)v1470;
	if (v1469<v1471) goto c02_0160; else goto c02_015c;

c02_0160:;

	i8 v1472 = (i8)(intptr_t)(ws+1192);
	i1 v1473 = *(i1*)(intptr_t)v1472;
	i1 v1474 = (i1)+97;
	if (v1473<v1474) goto c02_015f; else goto c02_0162;

c02_0162:;

	i1 v1475 = (i1)+122;
	i8 v1476 = (i8)(intptr_t)(ws+1192);
	i1 v1477 = *(i1*)(intptr_t)v1476;
	if (v1475<v1477) goto c02_015f; else goto c02_015c;

c02_015f:;

	i8 v1478 = (i8)(intptr_t)(ws+1192);
	i1 v1479 = *(i1*)(intptr_t)v1478;
	i1 v1480 = (i1)+65;
	if (v1479<v1480) goto c02_015e; else goto c02_0163;

c02_0163:;

	i1 v1481 = (i1)+90;
	i8 v1482 = (i8)(intptr_t)(ws+1192);
	i1 v1483 = *(i1*)(intptr_t)v1482;
	if (v1481<v1483) goto c02_015e; else goto c02_015c;

c02_015e:;

	i8 v1484 = (i8)(intptr_t)(ws+1192);
	i1 v1485 = *(i1*)(intptr_t)v1484;
	i1 v1486 = (i1)+95;
	if (v1485==v1486) goto c02_015c; else goto c02_015d;

c02_015d:;

	i8 v1487 = (i8)(intptr_t)(ws+1192);
	i1 v1488 = *(i1*)(intptr_t)v1487;
	i1 v1489 = (i1)+64;
	if (v1488==v1489) goto c02_015c; else goto c02_015b;

c02_015b:;

	goto c02_0149;

c02_015c:;

c02_014a:;

	i8 v1490 = (i8)(intptr_t)(ws+1192);
	i1 v1491 = *(i1*)(intptr_t)v1490;
	i8 v1492 = (i8)(intptr_t)(ws+1296);
	i8 v1493 = *(i8*)(intptr_t)v1492;
	*(i1*)(intptr_t)v1493 = v1491;

	i8 v1494 = (i8)(intptr_t)(ws+1296);
	i8 v1495 = *(i8*)(intptr_t)v1494;
	i8 v1496 = v1495+(+1);
	i8 v1497 = (i8)(intptr_t)(ws+1296);
	*(i8*)(intptr_t)v1497 = v1496;

	i8 v1498 = (i8)(intptr_t)(ws+1296);
	i8 v1499 = *(i8*)(intptr_t)v1498;
	i8 v1500 = (i8)(intptr_t)(ws+1228);
	if (v1499==v1500) goto c02_0167; else goto c02_0168;

c02_0167:;

	i8 v1501 = (i8)(intptr_t)c02_s0009;
	i8 v1502 = (i8)(intptr_t)(f61_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1502)(v1501);

c02_0168:;

c02_0164:;

	i8 v1503 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1503)();

	goto c02_0148;

c02_0149:;

	i1 v1504 = (i1)+0;
	i8 v1505 = (i8)(intptr_t)(ws+1296);
	i8 v1506 = *(i8*)(intptr_t)v1505;
	*(i1*)(intptr_t)v1506 = v1504;

endsub:;
}
	void f80_ReadWord(void);
	void f22_AToI(i4* /* result */, i8* /* ptr */, i8 /* buffer */);
const i1 c02_s000a[] = { 0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };
	void f61_FatalError(i8 /* s */);

// ReadNumber workspace at ws+1280 length ws+16
void f81_ReadNumber(i4* p1507 /* result */) {

	i8 v1508 = (i8)(intptr_t)(f80_ReadWord);

	((void(*)(void))(intptr_t)v1508)();

	i8 v1509 = (i8)(intptr_t)(ws+1196);
	i8 v1510 = (i8)(intptr_t)(f22_AToI);
	i4 v1511;
	i8 v1512;

	((void(*)(i4* /* result */, i8* /* ptr */, i8 /* buffer */))(intptr_t)v1510)(&v1511, &v1512, v1509);

	i8 v1513 = (i8)(intptr_t)(ws+1288);
	*(i8*)(intptr_t)v1513 = v1512;

	i8 v1514 = (i8)(intptr_t)(ws+1280);
	*(i4*)(intptr_t)v1514 = v1511;

	i8 v1515 = (i8)(intptr_t)(ws+1288);
	i8 v1516 = *(i8*)(intptr_t)v1515;
	i8 v1517 = (i8)(intptr_t)(ws+1196);
	if (v1516==v1517) goto c02_016c; else goto c02_016d;

c02_016c:;

	i8 v1518 = (i8)(intptr_t)c02_s000a;
	i8 v1519 = (i8)(intptr_t)(f61_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1519)(v1518);

c02_016d:;

c02_0169:;

endsub:;
	*p1507 = *(i4*)(intptr_t)(ws+1280);
}
	void f71_EmitterDeclareExternal(i8 /* name */, i2 /* id */);

// MarkSubroutinePublic workspace at ws+1248 length ws+8
void f82_MarkSubroutinePublic(i8 p1520 /* symbol */) {
	*(i8*)(intptr_t)(ws+1248) = p1520; /* symbol */

	i8 v1521 = (i8)(intptr_t)(ws+1248);
	i8 v1522 = *(i8*)(intptr_t)v1521;
	i8 v1523 = v1522+(+18);
	i1 v1524 = *(i1*)(intptr_t)v1523;
	i1 v1525 = v1524&(+2);
	i1 v1526 = (i1)+0;
	if (v1525==v1526) goto c02_0171; else goto c02_0172;

c02_0171:;

	i8 v1527 = (i8)(intptr_t)(ws+1248);
	i8 v1528 = *(i8*)(intptr_t)v1527;
	i8 v1529 = v1528+(+18);
	i1 v1530 = *(i1*)(intptr_t)v1529;
	i1 v1531 = v1530|(+2);
	i8 v1532 = (i8)(intptr_t)(ws+1248);
	i8 v1533 = *(i8*)(intptr_t)v1532;
	i8 v1534 = v1533+(+18);
	*(i1*)(intptr_t)v1534 = v1531;

	i8 v1535 = (i8)(intptr_t)(ws+1248);
	i8 v1536 = *(i8*)(intptr_t)v1535;
	i8 v1537 = v1536+(+16);
	i2 v1538 = *(i2*)(intptr_t)v1537;
	i8 v1539 = (i8)(intptr_t)(ws+1248);
	i8 v1540 = *(i8*)(intptr_t)v1539;
	i8 v1541 = v1540+(+8);
	i8 v1542 = *(i8*)(intptr_t)v1541;
	i8 v1543 = (i8)(intptr_t)(f71_EmitterDeclareExternal);

	((void(*)(i8 /* name */, i2 /* id */))(intptr_t)v1543)(v1542, v1538);

c02_0172:;

c02_016e:;

endsub:;
}
	void f67_EmitterPopChunk(i1 /* type */);

// CloseChunk workspace at ws+1248 length ws+0
void f84_CloseChunk(void) {

	i8 v1553 = (i8)(intptr_t)(ws+1152);
	i8 v1554 = *(i8*)(intptr_t)v1553;
	i8 v1555 = (i8)+0;
	if (v1554==v1555) goto c02_0177; else goto c02_0176;

c02_0176:;

	i1 v1556 = (i1)+70;
	i8 v1557 = (i8)(intptr_t)(f67_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v1557)(v1556);

	i8 v1558 = (i8)+0;
	i8 v1559 = (i8)(intptr_t)(ws+1152);
	*(i8*)(intptr_t)v1559 = v1558;

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

// DeclareSubroutine workspace at ws+1232 length ws+16
void f85_DeclareSubroutine(i1 p1560 /* exported */) {
	*(i1*)(intptr_t)(ws+1232) = p1560; /* exported */

	i8 v1561 = (i8)(intptr_t)(f84_CloseChunk);

	((void(*)(void))(intptr_t)v1561)();

	i8 v1562 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1562)();

	i8 v1563 = (i8)(intptr_t)(f80_ReadWord);

	((void(*)(void))(intptr_t)v1563)();

	i8 v1564 = (i8)(intptr_t)(ws+1196);
	i8 v1565 = (i8)(intptr_t)(f74_GetSymbol);
	i8 v1566;

	((void(*)(i8* /* symbol */, i8 /* name */))(intptr_t)v1565)(&v1566, v1564);

	i8 v1567 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v1567 = v1566;

	i8 v1568 = (i8)(intptr_t)(ws+1240);
	i8 v1569 = *(i8*)(intptr_t)v1568;
	i8 v1570 = (i8)(intptr_t)(ws+1152);
	*(i8*)(intptr_t)v1570 = v1569;

	i8 v1571 = (i8)(intptr_t)(ws+1152);
	i8 v1572 = *(i8*)(intptr_t)v1571;
	i8 v1573 = v1572+(+18);
	i1 v1574 = *(i1*)(intptr_t)v1573;
	i1 v1575 = v1574|(+1);
	i8 v1576 = (i8)(intptr_t)(ws+1152);
	i8 v1577 = *(i8*)(intptr_t)v1576;
	i8 v1578 = v1577+(+18);
	*(i1*)(intptr_t)v1578 = v1575;

	i8 v1579 = (i8)(intptr_t)(ws+1232);
	i1 v1580 = *(i1*)(intptr_t)v1579;
	i1 v1581 = (i1)+0;
	if (v1580==v1581) goto c02_017c; else goto c02_017b;

c02_017b:;

	i8 v1582 = (i8)(intptr_t)(ws+1152);
	i8 v1583 = *(i8*)(intptr_t)v1582;
	i8 v1584 = (i8)(intptr_t)(f82_MarkSubroutinePublic);

	((void(*)(i8 /* symbol */))(intptr_t)v1584)(v1583);

c02_017c:;

c02_0178:;

	i8 v1585 = (i8)(intptr_t)(ws+1152);
	i8 v1586 = *(i8*)(intptr_t)v1585;
	i8 v1587 = v1586+(+18);
	i1 v1588 = *(i1*)(intptr_t)v1587;
	i1 v1589 = v1588&(+4);
	i1 v1590 = (i1)+0;
	if (v1589==v1590) goto c02_0180; else goto c02_0181;

c02_0180:;

	i8 v1591 = (i8)(intptr_t)(ws+1152);
	i8 v1592 = *(i8*)(intptr_t)v1591;
	i8 v1593 = v1592+(+16);
	i2 v1594 = *(i2*)(intptr_t)v1593;
	i8 v1595 = (i8)(intptr_t)(ws+1152);
	i8 v1596 = *(i8*)(intptr_t)v1595;
	i8 v1597 = v1596+(+8);
	i8 v1598 = *(i8*)(intptr_t)v1597;
	i8 v1599 = (i8)(intptr_t)(f70_EmitterDeclareSubroutine);

	((void(*)(i8 /* name */, i2 /* id */))(intptr_t)v1599)(v1598, v1594);

	i8 v1600 = (i8)(intptr_t)(ws+1152);
	i8 v1601 = *(i8*)(intptr_t)v1600;
	i8 v1602 = v1601+(+18);
	i1 v1603 = *(i1*)(intptr_t)v1602;
	i1 v1604 = v1603|(+4);
	i8 v1605 = (i8)(intptr_t)(ws+1152);
	i8 v1606 = *(i8*)(intptr_t)v1605;
	i8 v1607 = v1606+(+18);
	*(i1*)(intptr_t)v1607 = v1604;

c02_0181:;

c02_017d:;

	i8 v1608 = (i8)(intptr_t)(f66_EmitterPushChunk);

	((void(*)(void))(intptr_t)v1608)();

	i1 v1609 = (i1)+128;
	i8 v1610 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1610)(v1609);

	i8 v1611 = (i8)(intptr_t)(ws+1152);
	i8 v1612 = *(i8*)(intptr_t)v1611;
	i8 v1613 = v1612+(+16);
	i2 v1614 = *(i2*)(intptr_t)v1613;
	i8 v1615 = (i8)(intptr_t)(f64_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1615)(v1614);

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

// SetSubroutineWorkspace workspace at ws+1232 length ws+30
void f86_SetSubroutineWorkspace(void) {

	i8 v1616 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1616)();

	i8 v1617 = (i8)(intptr_t)(f80_ReadWord);

	((void(*)(void))(intptr_t)v1617)();

	i8 v1618 = (i8)(intptr_t)(ws+1196);
	i8 v1619 = (i8)(intptr_t)(f74_GetSymbol);
	i8 v1620;

	((void(*)(i8* /* symbol */, i8 /* name */))(intptr_t)v1619)(&v1620, v1618);

	i8 v1621 = (i8)(intptr_t)(ws+1232);
	*(i8*)(intptr_t)v1621 = v1620;

	i8 v1622 = (i8)(intptr_t)(ws+1232);
	i8 v1623 = *(i8*)(intptr_t)v1622;
	i8 v1624 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v1624 = v1623;

	i8 v1625 = (i8)(intptr_t)(f79_SkipWhitespace);

	((void(*)(void))(intptr_t)v1625)();

	i8 v1626 = (i8)(intptr_t)(f81_ReadNumber);
	i4 v1627;

	((void(*)(i4* /* result */))(intptr_t)v1626)(&v1627);

	i8 v1628 = (i8)(intptr_t)(ws+1248);
	*(i4*)(intptr_t)v1628 = v1627;

	i8 v1629 = (i8)(intptr_t)(ws+1248);
	i4 v1630 = *(i4*)(intptr_t)v1629;
	i1 v1631 = (s1)(s4)v1630;
	i8 v1632 = (i8)(intptr_t)(ws+1252);
	*(i1*)(intptr_t)v1632 = v1631;

	i8 v1633 = (i8)(intptr_t)(f79_SkipWhitespace);

	((void(*)(void))(intptr_t)v1633)();

	i8 v1634 = (i8)(intptr_t)(f81_ReadNumber);
	i4 v1635;

	((void(*)(i4* /* result */))(intptr_t)v1634)(&v1635);

	i8 v1636 = (i8)(intptr_t)(ws+1256);
	*(i4*)(intptr_t)v1636 = v1635;

	i8 v1637 = (i8)(intptr_t)(ws+1256);
	i4 v1638 = *(i4*)(intptr_t)v1637;
	i2 v1639 = (s2)(s4)v1638;
	i8 v1640 = (i8)(intptr_t)(ws+1260);
	*(i2*)(intptr_t)v1640 = v1639;

	i8 v1641 = (i8)(intptr_t)(ws+1240);
	i8 v1642 = *(i8*)(intptr_t)v1641;
	i8 v1643 = v1642+(+16);
	i2 v1644 = *(i2*)(intptr_t)v1643;
	i8 v1645 = (i8)(intptr_t)(ws+1252);
	i1 v1646 = *(i1*)(intptr_t)v1645;
	i8 v1647 = (i8)(intptr_t)(ws+1260);
	i2 v1648 = *(i2*)(intptr_t)v1647;
	i8 v1649 = (i8)(intptr_t)(f73_EmitterDeclareWorkspace);

	((void(*)(i2 /* workspace */, i1 /* wid */, i2 /* id */))(intptr_t)v1649)(v1648, v1646, v1644);

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

// EmitWorkspaceRef workspace at ws+1248 length ws+30
void f87_EmitWorkspaceRef(void) {

	i8 v1650 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1650)();

	i8 v1651 = (i8)(intptr_t)(f80_ReadWord);

	((void(*)(void))(intptr_t)v1651)();

	i8 v1652 = (i8)(intptr_t)(ws+1152);
	i8 v1653 = *(i8*)(intptr_t)v1652;
	i8 v1654 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v1654 = v1653;

	i8 v1655 = (i8)(intptr_t)(ws+1196);
	i1 v1656 = *(i1*)(intptr_t)v1655;
	i1 v1657 = (i1)+0;
	if (v1656==v1657) goto c02_0186; else goto c02_0185;

c02_0185:;

	i8 v1658 = (i8)(intptr_t)(ws+1196);
	i8 v1659 = (i8)(intptr_t)(f74_GetSymbol);
	i8 v1660;

	((void(*)(i8* /* symbol */, i8 /* name */))(intptr_t)v1659)(&v1660, v1658);

	i8 v1661 = (i8)(intptr_t)(ws+1256);
	*(i8*)(intptr_t)v1661 = v1660;

	i8 v1662 = (i8)(intptr_t)(ws+1256);
	i8 v1663 = *(i8*)(intptr_t)v1662;
	i8 v1664 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v1664 = v1663;

	i8 v1665 = (i8)(intptr_t)(ws+1152);
	i8 v1666 = *(i8*)(intptr_t)v1665;
	i8 v1667 = v1666+(+16);
	i2 v1668 = *(i2*)(intptr_t)v1667;
	i8 v1669 = (i8)(intptr_t)(ws+1248);
	i8 v1670 = *(i8*)(intptr_t)v1669;
	i8 v1671 = v1670+(+16);
	i2 v1672 = *(i2*)(intptr_t)v1671;
	i8 v1673 = (i8)(intptr_t)(f72_EmitterReferenceSubroutine);

	((void(*)(i2 /* used */, i2 /* user */))(intptr_t)v1673)(v1672, v1668);

c02_0186:;

c02_0182:;

	i1 v1674 = (i1)+46;
	i8 v1675 = (i8)(intptr_t)(f77_ExpectC);

	((void(*)(i1 /* want */))(intptr_t)v1675)(v1674);

	i8 v1676 = (i8)(intptr_t)(f81_ReadNumber);
	i4 v1677;

	((void(*)(i4* /* result */))(intptr_t)v1676)(&v1677);

	i8 v1678 = (i8)(intptr_t)(ws+1264);
	*(i4*)(intptr_t)v1678 = v1677;

	i8 v1679 = (i8)(intptr_t)(ws+1264);
	i4 v1680 = *(i4*)(intptr_t)v1679;
	i1 v1681 = (s1)(s4)v1680;
	i8 v1682 = (i8)(intptr_t)(ws+1268);
	*(i1*)(intptr_t)v1682 = v1681;

	i1 v1683 = (i1)+46;
	i8 v1684 = (i8)(intptr_t)(f77_ExpectC);

	((void(*)(i1 /* want */))(intptr_t)v1684)(v1683);

	i8 v1685 = (i8)(intptr_t)(f81_ReadNumber);
	i4 v1686;

	((void(*)(i4* /* result */))(intptr_t)v1685)(&v1686);

	i8 v1687 = (i8)(intptr_t)(ws+1272);
	*(i4*)(intptr_t)v1687 = v1686;

	i8 v1688 = (i8)(intptr_t)(ws+1272);
	i4 v1689 = *(i4*)(intptr_t)v1688;
	i2 v1690 = (s2)(s4)v1689;
	i8 v1691 = (i8)(intptr_t)(ws+1276);
	*(i2*)(intptr_t)v1691 = v1690;

	i1 v1692 = (i1)+2;
	i8 v1693 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1693)(v1692);

	i8 v1694 = (i8)(intptr_t)(ws+1248);
	i8 v1695 = *(i8*)(intptr_t)v1694;
	i8 v1696 = v1695+(+16);
	i2 v1697 = *(i2*)(intptr_t)v1696;
	i8 v1698 = (i8)(intptr_t)(f64_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1698)(v1697);

	i8 v1699 = (i8)(intptr_t)(ws+1268);
	i1 v1700 = *(i1*)(intptr_t)v1699;
	i8 v1701 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1701)(v1700);

	i8 v1702 = (i8)(intptr_t)(ws+1276);
	i2 v1703 = *(i2*)(intptr_t)v1702;
	i8 v1704 = (i8)(intptr_t)(f64_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1704)(v1703);

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

// SourceLine workspace at ws+1232 length ws+16
void f88_SourceLine(void) {

	i8 v1705 = (i8)(intptr_t)(ws+1152);
	i8 v1706 = *(i8*)(intptr_t)v1705;
	i8 v1707 = (i8)+0;
	if (v1706==v1707) goto c02_018a; else goto c02_018b;

c02_018a:;

	i8 v1708 = (i8)(intptr_t)c02_s000b;
	i8 v1709 = (i8)(intptr_t)(f61_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1709)(v1708);

c02_018b:;

c02_0187:;

c02_018c:;

	i8 v1710 = (i8)(intptr_t)(ws+1192);
	i1 v1711 = *(i1*)(intptr_t)v1710;
	i1 v1712 = (i1)+0;
	if (v1711==v1712) goto c02_0195; else goto c02_0198;

c02_0198:;

	i8 v1713 = (i8)(intptr_t)(ws+1192);
	i1 v1714 = *(i1*)(intptr_t)v1713;
	i1 v1715 = (i1)+10;
	if (v1714==v1715) goto c02_0195; else goto c02_0197;

c02_0197:;

	i8 v1716 = (i8)(intptr_t)(ws+1192);
	i1 v1717 = *(i1*)(intptr_t)v1716;
	i1 v1718 = (i1)+26;
	if (v1717==v1718) goto c02_0195; else goto c02_0196;

c02_0195:;

	goto c02_018d;

c02_0196:;

c02_018e:;

	i8 v1719 = (i8)(intptr_t)(ws+1192);
	i1 v1720 = *(i1*)(intptr_t)v1719;
	i1 v1721 = (i1)+13;
	if (v1720==v1721) goto c02_019d; else goto c02_019c;

c02_019c:;

	i8 v1722 = (i8)(intptr_t)(ws+1192);
	i1 v1723 = *(i1*)(intptr_t)v1722;
	i1 v1724 = (i1)+96;
	if (v1723==v1724) goto c02_01a1; else goto c02_01a2;

c02_01a1:;

	i8 v1725 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1725)();

	i8 v1726 = (i8)(intptr_t)(ws+1192);
	i1 v1727 = *(i1*)(intptr_t)v1726;

	if (v1727 != +96) goto c02_01a4;

	i1 v1728 = (i1)+4;
	i8 v1729 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1729)(v1728);

	i8 v1730 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1730)();

	goto c02_01a3;

c02_01a4:;

	if (v1727 != +94) goto c02_01a5;

	i1 v1731 = (i1)+3;
	i8 v1732 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1732)(v1731);

	i8 v1733 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1733)();

	goto c02_01a3;

c02_01a5:;

	if (v1727 != +36) goto c02_01a6;

	i8 v1734 = (i8)(intptr_t)(f87_EmitWorkspaceRef);

	((void(*)(void))(intptr_t)v1734)();

	goto c02_01a3;

c02_01a6:;

	i8 v1735 = (i8)(intptr_t)(f80_ReadWord);

	((void(*)(void))(intptr_t)v1735)();

	i8 v1736 = (i8)(intptr_t)(ws+1196);
	i8 v1737 = (i8)(intptr_t)(f74_GetSymbol);
	i8 v1738;

	((void(*)(i8* /* symbol */, i8 /* name */))(intptr_t)v1737)(&v1738, v1736);

	i8 v1739 = (i8)(intptr_t)(ws+1232);
	*(i8*)(intptr_t)v1739 = v1738;

	i8 v1740 = (i8)(intptr_t)(ws+1232);
	i8 v1741 = *(i8*)(intptr_t)v1740;
	i8 v1742 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v1742 = v1741;

	i1 v1743 = (i1)+1;
	i8 v1744 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1744)(v1743);

	i8 v1745 = (i8)(intptr_t)(ws+1240);
	i8 v1746 = *(i8*)(intptr_t)v1745;
	i8 v1747 = v1746+(+16);
	i2 v1748 = *(i2*)(intptr_t)v1747;
	i8 v1749 = (i8)(intptr_t)(f64_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v1749)(v1748);

	i8 v1750 = (i8)(intptr_t)(ws+1152);
	i8 v1751 = *(i8*)(intptr_t)v1750;
	i8 v1752 = v1751+(+16);
	i2 v1753 = *(i2*)(intptr_t)v1752;
	i8 v1754 = (i8)(intptr_t)(ws+1240);
	i8 v1755 = *(i8*)(intptr_t)v1754;
	i8 v1756 = v1755+(+16);
	i2 v1757 = *(i2*)(intptr_t)v1756;
	i8 v1758 = (i8)(intptr_t)(f72_EmitterReferenceSubroutine);

	((void(*)(i2 /* used */, i2 /* user */))(intptr_t)v1758)(v1757, v1753);

c02_01a3:;


	goto c02_019e;

c02_01a2:;

	i8 v1759 = (i8)(intptr_t)(ws+1192);
	i1 v1760 = *(i1*)(intptr_t)v1759;
	i8 v1761 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1761)(v1760);

	i8 v1762 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1762)();

c02_019e:;

c02_019d:;

c02_0199:;

	goto c02_018c;

c02_018d:;

	i1 v1763 = (i1)+10;
	i8 v1764 = (i8)(intptr_t)(f62_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v1764)(v1763);

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

// ProcessFile workspace at ws+1192 length ws+36
void f75_ProcessFile(void) {

	i8 v1425 = (i8)(intptr_t)c02_s0007;
	i8 v1426 = (i8)(intptr_t)(ws+1120);
	*(i8*)(intptr_t)v1426 = v1425;

	i1 v1427 = (i1)+5;
	i8 v1428 = (i8)(intptr_t)(ws+1130);
	*(i1*)(intptr_t)v1428 = v1427;

	i2 v1429 = (i2)+0;
	i8 v1430 = (i8)(intptr_t)(ws+1194);
	*(i2*)(intptr_t)v1430 = v1429;














	i8 v1765 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1765)();

c02_01a7:;

	i8 v1766 = (i8)(intptr_t)(ws+1192);
	i1 v1767 = *(i1*)(intptr_t)v1766;
	i1 v1768 = (i1)+0;
	if (v1767==v1768) goto c02_01ae; else goto c02_01b0;

c02_01b0:;

	i8 v1769 = (i8)(intptr_t)(ws+1192);
	i1 v1770 = *(i1*)(intptr_t)v1769;
	i1 v1771 = (i1)+26;
	if (v1770==v1771) goto c02_01ae; else goto c02_01af;

c02_01ae:;

	goto c02_01a8;

c02_01af:;

c02_01a9:;

	i8 v1772 = (i8)(intptr_t)(ws+1192);
	i1 v1773 = *(i1*)(intptr_t)v1772;

	if (v1773 != +38) goto c02_01b2;

	i8 v1774 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1774)();

	i8 v1775 = (i8)(intptr_t)(ws+1192);
	i1 v1776 = *(i1*)(intptr_t)v1775;

	if (v1776 != +88) goto c02_01b4;

	i1 v1777 = (i1)+1;
	i8 v1778 = (i8)(intptr_t)(f85_DeclareSubroutine);

	((void(*)(i1 /* exported */))(intptr_t)v1778)(v1777);

	goto c02_01b3;

c02_01b4:;

	if (v1776 != +83) goto c02_01b5;

	i1 v1779 = (i1)+0;
	i8 v1780 = (i8)(intptr_t)(f85_DeclareSubroutine);

	((void(*)(i1 /* exported */))(intptr_t)v1780)(v1779);

	goto c02_01b3;

c02_01b5:;

	if (v1776 != +87) goto c02_01b6;

	i8 v1781 = (i8)(intptr_t)(f86_SetSubroutineWorkspace);

	((void(*)(void))(intptr_t)v1781)();

	goto c02_01b3;

c02_01b6:;

	i8 v1782 = (i8)(intptr_t)c02_s000c;
	i8 v1783 = (i8)(intptr_t)(f61_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1783)(v1782);

c02_01b3:;


	i8 v1784 = (i8)(intptr_t)(f78_SkipToEndOfLine);

	((void(*)(void))(intptr_t)v1784)();

	goto c02_01b1;

c02_01b2:;

	if (v1773 != +35) goto c02_01b7;

	i8 v1785 = (i8)(intptr_t)(f78_SkipToEndOfLine);

	((void(*)(void))(intptr_t)v1785)();

	goto c02_01b1;

c02_01b7:;

	i8 v1786 = (i8)(intptr_t)(f88_SourceLine);

	((void(*)(void))(intptr_t)v1786)();

c02_01b1:;


	i8 v1787 = (i8)(intptr_t)(f76_GetC);

	((void(*)(void))(intptr_t)v1787)();

	goto c02_01a7;

c02_01a8:;

	i8 v1788 = (i8)(intptr_t)(f84_CloseChunk);

	((void(*)(void))(intptr_t)v1788)();

endsub:;
}
const i1 c02_s000d[] = { 0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x20,0x74,0x6f,0x20,0x75,0x6e,0x64,0x65,0x63,0x6c,0x61,0x72,0x65,0x64,0x20,0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s000e[] = { 0x27,0x0a,0 };
	void f12_print(i8 /* ptr */);
const i1 c02_s000f[] = { 0x66,0x61,0x69,0x6c,0x65,0x64,0 };
	void f61_FatalError(i8 /* s */);

// CheckSymbols workspace at ws+1192 length ws+16
void f89_CheckSymbols(void) {

	i1 v1789 = (i1)+1;
	i8 v1790 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v1790 = v1789;

	i8 v1791 = (i8)(intptr_t)(ws+1136);
	i8 v1792 = *(i8*)(intptr_t)v1791;
	i8 v1793 = (i8)(intptr_t)(ws+1200);
	*(i8*)(intptr_t)v1793 = v1792;

c02_01b8:;

	i8 v1794 = (i8)(intptr_t)(ws+1200);
	i8 v1795 = *(i8*)(intptr_t)v1794;
	i8 v1796 = (i8)+0;
	if (v1795==v1796) goto c02_01bd; else goto c02_01bc;

c02_01bc:;

	i8 v1797 = (i8)(intptr_t)(ws+1200);
	i8 v1798 = *(i8*)(intptr_t)v1797;
	i8 v1799 = v1798+(+18);
	i1 v1800 = *(i1*)(intptr_t)v1799;
	i1 v1801 = (i1)+0;
	if (v1800==v1801) goto c02_01c1; else goto c02_01c2;

c02_01c1:;

	i8 v1802 = (i8)(intptr_t)c02_s000d;
	i8 v1803 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1803)(v1802);

	i8 v1804 = (i8)(intptr_t)(ws+1200);
	i8 v1805 = *(i8*)(intptr_t)v1804;
	i8 v1806 = v1805+(+8);
	i8 v1807 = *(i8*)(intptr_t)v1806;
	i8 v1808 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1808)(v1807);

	i8 v1809 = (i8)(intptr_t)c02_s000e;
	i8 v1810 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1810)(v1809);

	i1 v1811 = (i1)+0;
	i8 v1812 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v1812 = v1811;

c02_01c2:;

c02_01be:;

	i8 v1813 = (i8)(intptr_t)(ws+1200);
	i8 v1814 = *(i8*)(intptr_t)v1813;
	i8 v1815 = *(i8*)(intptr_t)v1814;
	i8 v1816 = (i8)(intptr_t)(ws+1200);
	*(i8*)(intptr_t)v1816 = v1815;

	goto c02_01b8;

c02_01bd:;

	i8 v1817 = (i8)(intptr_t)(ws+1192);
	i1 v1818 = *(i1*)(intptr_t)v1817;
	i1 v1819 = (i1)+0;
	if (v1818==v1819) goto c02_01c6; else goto c02_01c7;

c02_01c6:;

	i8 v1820 = (i8)(intptr_t)c02_s000f;
	i8 v1821 = (i8)(intptr_t)(f61_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1821)(v1820);

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

// __main workspace at ws+0 length ws+1185
void f3___main(void) {


	
*(i8*)(intptr_t)(ws+0) 
= (i8)(intptr_t) __lomem; 


	
*(i8*)(intptr_t)(ws+8) 
= (i8)(intptr_t) __himem; 



























































	i8 v1054 = (i8)+0;
	i8 v1055 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v1055 = v1054;

	i8 v1056 = (i8)+0;
	i8 v1057 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v1057 = v1056;

	i8 v1058 = (i8)(intptr_t)c02_s0001;
	i8 v1059 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1059)(v1058);

	i8 v1060 = (i8)(intptr_t)(f38_GetFreeMemory);
	i8 v1061;

	((void(*)(i8* /* i */))(intptr_t)v1060)(&v1061);

	i8 v1062 = (i8)(intptr_t)(ws+568);
	*(i8*)(intptr_t)v1062 = v1061;

	i8 v1063 = (i8)(intptr_t)(ws+568);
	i8 v1064 = *(i8*)(intptr_t)v1063;
	i1 v1065 = (i1)+10;
	i8 v1066 = ((i8)v1064)>>v1065;
	i2 v1067 = v1066;
	i8 v1068 = (i8)(intptr_t)(f17_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v1068)(v1067);

	i8 v1069 = (i8)(intptr_t)c02_s0002;
	i8 v1070 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1070)(v1069);















	i8 v1362 = (i8)(intptr_t)(ws+1112);
	i8 v1363 = (i8)(intptr_t)(ws+1136);
	*(i8*)(intptr_t)v1363 = v1362;

	i2 v1364 = (i2)+1;
	i8 v1365 = (i8)(intptr_t)(ws+1144);
	*(i2*)(intptr_t)v1365 = v1364;

	i8 v1366 = (i8)+0;
	i8 v1367 = (i8)(intptr_t)(ws+1152);
	*(i8*)(intptr_t)v1367 = v1366;




	i8 v1822 = (i8)(intptr_t)(f24_ArgvInit);

	((void(*)(void))(intptr_t)v1822)();

	i8 v1823 = (i8)(intptr_t)(f25_ArgvNext);
	i8 v1824;

	((void(*)(i8* /* arg */))(intptr_t)v1823)(&v1824);

	i8 v1825 = (i8)(intptr_t)(ws+1160);
	*(i8*)(intptr_t)v1825 = v1824;

	i8 v1826 = (i8)(intptr_t)(ws+1160);
	i8 v1827 = *(i8*)(intptr_t)v1826;
	i8 v1828 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v1828 = v1827;

	i8 v1829 = (i8)(intptr_t)(f25_ArgvNext);
	i8 v1830;

	((void(*)(i8* /* arg */))(intptr_t)v1829)(&v1830);

	i8 v1831 = (i8)(intptr_t)(ws+1168);
	*(i8*)(intptr_t)v1831 = v1830;

	i8 v1832 = (i8)(intptr_t)(ws+1168);
	i8 v1833 = *(i8*)(intptr_t)v1832;
	i8 v1834 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v1834 = v1833;

	i8 v1835 = (i8)(intptr_t)(f25_ArgvNext);
	i8 v1836;

	((void(*)(i8* /* arg */))(intptr_t)v1835)(&v1836);

	i8 v1837 = (i8)(intptr_t)(ws+1176);
	*(i8*)(intptr_t)v1837 = v1836;

	i8 v1838 = (i8)(intptr_t)(ws+24);
	i8 v1839 = *(i8*)(intptr_t)v1838;
	i8 v1840 = (i8)+0;
	if (v1839==v1840) goto c02_01cf; else goto c02_01d2;

c02_01d2:;

	i8 v1841 = (i8)(intptr_t)(ws+32);
	i8 v1842 = *(i8*)(intptr_t)v1841;
	i8 v1843 = (i8)+0;
	if (v1842==v1843) goto c02_01cf; else goto c02_01d1;

c02_01d1:;

	i8 v1844 = (i8)(intptr_t)(ws+1176);
	i8 v1845 = *(i8*)(intptr_t)v1844;
	i8 v1846 = (i8)+0;
	if (v1845==v1846) goto c02_01d0; else goto c02_01cf;

c02_01cf:;

	i8 v1847 = (i8)(intptr_t)(f60_SyntaxError);

	((void(*)(void))(intptr_t)v1847)();

c02_01d0:;

c02_01c8:;

	i8 v1848 = (i8)(intptr_t)(ws+40);
	i8 v1849 = (i8)(intptr_t)(ws+24);
	i8 v1850 = *(i8*)(intptr_t)v1849;
	i8 v1851 = (i8)(intptr_t)(f52_FCBOpenIn);
	i1 v1852;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v1851)(&v1852, v1850, v1848);

	i8 v1853 = (i8)(intptr_t)(ws+1184);
	*(i1*)(intptr_t)v1853 = v1852;

	i8 v1854 = (i8)(intptr_t)(ws+1184);
	i1 v1855 = *(i1*)(intptr_t)v1854;
	i1 v1856 = (i1)+0;
	if (v1855==v1856) goto c02_01d7; else goto c02_01d6;

c02_01d6:;

	i8 v1857 = (i8)(intptr_t)c02_s0010;
	i8 v1858 = (i8)(intptr_t)(f61_FatalError);

	((void(*)(i8 /* s */))(intptr_t)v1858)(v1857);

c02_01d7:;

c02_01d3:;

	i8 v1859 = (i8)(intptr_t)(ws+32);
	i8 v1860 = *(i8*)(intptr_t)v1859;
	i8 v1861 = (i8)(intptr_t)(f68_EmitterOpenfile);

	((void(*)(i8 /* filename */))(intptr_t)v1861)(v1860);

	i8 v1862 = (i8)(intptr_t)(f75_ProcessFile);

	((void(*)(void))(intptr_t)v1862)();

	i8 v1863 = (i8)(intptr_t)(f89_CheckSymbols);

	((void(*)(void))(intptr_t)v1863)();

	i8 v1864 = (i8)(intptr_t)(f69_EmitterClosefile);

	((void(*)(void))(intptr_t)v1864)();

endsub:;
}
void cmain(void) {
	f3___main();
}
