Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=81", 
		"Resource=1", 
		"RecContentType=application/x-gzip", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_add_cookie("NID=201=oJdu8W2kbMautpsGwAfV8HQwHhpT1_uI5J7Ee3bk58ZyGShCiFLZMjHl6Cgoo_aG3V-Wgj9IwOerIycs4FD2ZIkPjWAKjX_3QngauWGw1Zy8Z5hBQgja4PqMvf941_Mo8YLgVXcVcSv-wN4M0hWvSVxRUhGW-I7_Cx5pzEcWQ6c; DOMAIN=accounts.google.com");

	web_add_cookie("OGPC=19016257-2:; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2020-03-27-16; DOMAIN=accounts.google.com");

	web_add_cookie("ANID=AHWqTUkYLzjoWNYF1d4_VuCV5iRABhRWgkM8U09l55pFFpflPDhkAM1Hc7ol36NE; DOMAIN=accounts.google.com");

	web_add_cookie("CONSENT=YES+IE.en+V9; DOMAIN=accounts.google.com");

	web_add_header("Origin", 
		"https://www.google.com");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		"Body= ", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("www.google.co.in", 
		"URL=http://www.google.co.in/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_concurrent_start(NULL);

	web_url("stay-home-save-lives-april-20-copy-6753651837108785-law.gif", 
		"URL=https://www.google.co.in/logos/doodles/2020/stay-home-save-lives-april-20-copy-6753651837108785-law.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t4.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("desktop_searchbox_sprites302_hr.webp", 
		"URL=https://www.google.co.in/images/searchbox/desktop_searchbox_sprites302_hr.webp", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t5.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("i2_2ec824b0.png", 
		"URL=https://ssl.gstatic.com/gb/images/i2_2ec824b0.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t6.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("nav_logo299.webp", 
		"URL=https://www.google.co.in/images/nav_logo299.webp", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t7.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("googlemic_color_24dp.png", 
		"URL=https://www.gstatic.com/images/branding/googlemic/2x/googlemic_color_24dp.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t8.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://www.google.co.in");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("gen_204", 
		"URL=https://www.google.co.in/gen_204?s=webhp&t=aft&atyp=csi&ei=_7SeXvbFCMb9kwWU-5XYBQ&rt=wsrt.5437,aft.279,prt.142&bl=2amb&ima=2&imad=0&imn=3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t9.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("status", 
		"URL=https://consent.google.com/status?continue=https://www.google.co.in&m=0&pc=s&timestamp=1587459327&gl=IE", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t10.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_concurrent_start(NULL);

	web_url("rs=AA2YrTtZD8fkTv6TooSIFeF99xFdLUqB6w", 
		"URL=https://www.gstatic.com/og/_/js/k=og.og2.en_US.FcblBUaxLP4.O/rt=j/m=def,aswid/exm=in,fot/d=1/ed=1/rs=AA2YrTtZD8fkTv6TooSIFeF99xFdLUqB6w", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t11.inf", 
		LAST);

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("rs=ACT90oG17oX98_-7FedJoY66PnVPPoL1Dg", 
		"URL=https://www.google.co.in/xjs/_/js/k=xjs.s.en_GB.PK9KWMpaDU8.O/ck=xjs.s.3WRIPZXiutg.L.W.O/m=Fkg7bd,HcFEGb,IvlUe,MC8mtf,OF7gzc,RMhBfe,T4BAC,TJw5qb,TbaHGc,Y33vzc,cdos,hsm,iDPoPb,jsa,mvYTse,tg8oTe,uz938c,vWNDde,ws9Tlc,yQ43ff,d,csi/am=AkAAAACwBGDXHSDgfxMAAAB2DAAAgAAuIthYIIxIKAhAALaaAAIB/d=1/dg=2/br=1/ct=zgms/rs=ACT90oG17oX98_-7FedJoY66PnVPPoL1Dg", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t12.inf", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIYCQqEX43lIl4-EgsNaUhHRxIAGgAiABoA", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIYCQqEX43lIl4-EgsNaUhHRxIAGgAiABoA?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t13.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_cookie("1P_JAR=2020-4-21-8; DOMAIN=www.google.co.in");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Origin", 
		"https://www.google.co.in");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("gen_204_2", 
		"URL=https://www.google.co.in/gen_204?atyp=csi&ei=_7SeXvbFCMb9kwWU-5XYBQ&s=jsa&jsi=s,t.0,et.focus,n.iDPoPb,cn.1&zx=1587459328089", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t14.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_concurrent_start(NULL);

	web_url("m=NpD4ec,RqxLvf,aa,abd,async,dv7Bfe,dvl,fEVMic,foot,k27Oqb,kVbfxd,lu,m,mUpTid,mu,sb_wiz,sf,sonic,spch,xz7cCd", 
		"URL=https://www.google.co.in/xjs/_/js/k=xjs.s.en_GB.PK9KWMpaDU8.O/ck=xjs.s.3WRIPZXiutg.L.W.O/am=AkAAAACwBGDXHSDgfxMAAAB2DAAAgAAuIthYIIxIKAhAALaaAAIB/d=1/exm=Fkg7bd,HcFEGb,IvlUe,MC8mtf,OF7gzc,RMhBfe,T4BAC,TJw5qb,TbaHGc,Y33vzc,cdos,csi,d,hsm,iDPoPb,jsa,mvYTse,tg8oTe,uz938c,vWNDde,ws9Tlc,yQ43ff/ed=1/dg=2/br=1/ct=zgms/rs=ACT90oG17oX98_-7FedJoY66PnVPPoL1Dg/m=NpD4ec,RqxLvf,aa,abd,async,dv7Bfe,dvl,fEVMic,foot,k27Oqb,kVbfxd,lu,m,mUpTid,mu,sb_wiz,sf,sonic,spch,xz7cCd?xjs=s1", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t15.inf", 
		LAST);

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("cb=gapi.loaded_0", 
		"URL=https://apis.google.com/_/scs/abc-static/_/js/k=gapi.gapi.en.jw7XZHvcak8.O/m=gapi_iframes,googleapis_client,plusone/rt=j/sv=1/d=1/ed=1/rs=AHpOoo-L1iz4xVj0PCdm2On38RCj6aYemA/cb=gapi.loaded_0", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t16.inf", 
		LAST);

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("m=GxIAgd,MkHyGd,OG6ZHd,T6sTsf,T7XTS,URQPYc,eN4qad,o02Jie,pB6Zqd,uiNkee,zbML3c", 
		"URL=https://www.google.co.in/xjs/_/js/k=xjs.s.en_GB.PK9KWMpaDU8.O/ck=xjs.s.3WRIPZXiutg.L.W.O/am=AkAAAACwBGDXHSDgfxMAAAB2DAAAgAAuIthYIIxIKAhAALaaAAIB/d=1/exm=Fkg7bd,HcFEGb,IvlUe,MC8mtf,NpD4ec,OF7gzc,RMhBfe,RqxLvf,T4BAC,TJw5qb,TbaHGc,Y33vzc,aa,abd,async,cdos,csi,d,dv7Bfe,dvl,fEVMic,foot,hsm,iDPoPb,jsa,k27Oqb,kVbfxd,lu,m,mUpTid,mu,mvYTse,sb_wiz,sf,sonic,spch,tg8oTe,uz938c,vWNDde,ws9Tlc,xz7cCd,yQ43ff/ed=1/dg=2/br=1/ct=zgms/rs=ACT90oG17oX98_-7FedJoY66PnVPPoL1Dg/m=GxIAgd,MkHyGd,OG6ZHd,T6sTsf,T7XTS,"
		"URQPYc,eN4qad,o02Jie,pB6Zqd,uiNkee,zbML3c?xjs=s2", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t17.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("gen_204_3", 
		"URL=https://www.google.co.in/gen_204?atyp=i&ei=_7SeXvbFCMb9kwWU-5XYBQ&vet=10ahUKEwi2wajqkvnoAhXG_qQKHZR9BVsQsmQIGQ..s&zx=1587459328314", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t18.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_cookie("1P_JAR=2020-4-21-8; DOMAIN=ogs.google.co.in");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Purpose", 
		"prefetch");

	web_url("so", 
		"URL=https://ogs.google.co.in/widget/app/so?origin=https%3A%2F%2Fwww.google.co.in&pid=1&spid=1&hl=en&gm=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t19.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("m=wkrYee", 
		"URL=https://www.google.co.in/xjs/_/js/k=xjs.s.en_GB.PK9KWMpaDU8.O/ck=xjs.s.3WRIPZXiutg.L.W.O/am=AkAAAACwBGDXHSDgfxMAAAB2DAAAgAAuIthYIIxIKAhAALaaAAIB/d=1/exm=Fkg7bd,GxIAgd,HcFEGb,IvlUe,MC8mtf,MkHyGd,NpD4ec,OF7gzc,OG6ZHd,RMhBfe,RqxLvf,T4BAC,T6sTsf,T7XTS,TJw5qb,TbaHGc,URQPYc,Y33vzc,aa,abd,async,cdos,csi,d,dv7Bfe,dvl,eN4qad,fEVMic,foot,hsm,iDPoPb,jsa,k27Oqb,kVbfxd,lu,m,mUpTid,mu,mvYTse,o02Jie,pB6Zqd,sb_wiz,sf,sonic,spch,tg8oTe,uiNkee,uz938c,vWNDde,ws9Tlc,xz7cCd,yQ43ff,zbML3c/ed=1/dg=2/br=1/ct=zgms/rs="
		"ACT90oG17oX98_-7FedJoY66PnVPPoL1Dg/m=wkrYee?xjs=s2", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t20.inf", 
		LAST);

	web_url("favicon.ico", 
		"URL=https://www.google.co.in/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t21.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("gen_204_4", 
		"URL=https://www.google.co.in/gen_204?atyp=csi&ei=_7SeXvbFCMb9kwWU-5XYBQ&s=webhp&t=all&bl=2amb&imn=3&adh=&conn=onchange&ima=2&imad=0&ime=2&imex=2&imeh=1&imea=0&imeb=0&wh=580&scp=0&net=dl.1450,ect.4g,rtt.100&mem=ujhs.7,tjhs.12,jhsl.2173,dm.8&sto=&sys=hc.8&rt=aft.279,iml.503,prt.142,dcl.185,xjsls.198,xjses.842,xjsee.872,xjs.872,ol.3236,wsrt.5437,cst.1123,dnst.0,rqst.1079,rspt.73,sslt.1096,rqstt.4431,unt.3296,cstt.3308,dit.5622&zx=1587459330448", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t22.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_concurrent_start(NULL);

	web_url("client_model_v5_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t23.inf", 
		LAST);

	web_url("client_model_v5_ext_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t24.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(10);

	lr_start_transaction("1_transaction");

	web_custom_request("gen_204_5", 
		"URL=https://www.google.co.in/gen_204?atyp=csi&ei=_7SeXvbFCMb9kwWU-5XYBQ&s=jsa&jsi=s,et.focus,n.iDPoPb,cn.2&zx=1587459340198", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t25.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("gen_204_6", 
		"URL=https://www.google.co.in/gen_204?atyp=csi&ei=_7SeXvbFCMb9kwWU-5XYBQ&s=jsa&jsi=s,et.click,n.iDPoPb,cn.3&zx=1587459340831", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t26.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("gen_204_7", 
		"URL=https://www.google.co.in/gen_204?atyp=i&ei=_7SeXvbFCMb9kwWU-5XYBQ&ved=0ahUKEwi2wajqkvnoAhXG_qQKHZR9BVsQ39UDCAQ&zx=1587459340832", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t27.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("search", 
		"URL=https://www.google.co.in/complete/search?q&cp=0&client=psy-ab&xssi=t&gs_ri=gws-wiz&hl=en-IE&authuser=0&psi=_7SeXvbFCMb9kwWU-5XYBQ.1587459328101&ei=_7SeXvbFCMb9kwWU-5XYBQ&nolsbt=1", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t28.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Origin", 
		"https://www.google.co.in");

	web_custom_request("gen_204_8", 
		"URL=https://www.google.co.in/gen_204?atyp=i&ei=_7SeXvbFCMb9kwWU-5XYBQ&ved=0ahUKEwi2wajqkvnoAhXG_qQKHZR9BVsQ39UDCAQ&zx=1587459341728", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t29.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("search_2", 
		"URL=https://www.google.co.in/complete/search?q=l&cp=1&client=psy-ab&xssi=t&gs_ri=gws-wiz&hl=en-IE&authuser=0&psi=_7SeXvbFCMb9kwWU-5XYBQ.1587459328101&ei=_7SeXvbFCMb9kwWU-5XYBQ", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t30.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("search_3", 
		"URL=https://www.google.co.in/complete/search?q=lo&cp=2&client=psy-ab&xssi=t&gs_ri=gws-wiz&hl=en-IE&authuser=0&psi=_7SeXvbFCMb9kwWU-5XYBQ.1587459328101&ei=_7SeXvbFCMb9kwWU-5XYBQ", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t31.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("search_4", 
		"URL=https://www.google.co.in/complete/search?q=loa&cp=3&client=psy-ab&xssi=t&gs_ri=gws-wiz&hl=en-IE&authuser=0&psi=_7SeXvbFCMb9kwWU-5XYBQ.1587459328101&ei=_7SeXvbFCMb9kwWU-5XYBQ", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t32.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("search_5", 
		"URL=https://www.google.co.in/complete/search?q=load&cp=4&client=psy-ab&xssi=t&gs_ri=gws-wiz&hl=en-IE&authuser=0&psi=_7SeXvbFCMb9kwWU-5XYBQ.1587459328101&ei=_7SeXvbFCMb9kwWU-5XYBQ", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t33.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("search_6", 
		"URL=https://www.google.co.in/complete/search?q=load%20&cp=5&client=psy-ab&xssi=t&gs_ri=gws-wiz&hl=en-IE&authuser=0&psi=_7SeXvbFCMb9kwWU-5XYBQ.1587459328101&ei=_7SeXvbFCMb9kwWU-5XYBQ", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t34.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("search_7", 
		"URL=https://www.google.co.in/complete/search?q=load%20r&cp=6&client=psy-ab&xssi=t&gs_ri=gws-wiz&hl=en-IE&authuser=0&psi=_7SeXvbFCMb9kwWU-5XYBQ.1587459328101&ei=_7SeXvbFCMb9kwWU-5XYBQ", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t35.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("wavy-underline.png", 
		"URL=https://www.google.co.in/images/experiments/wavy-underline.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t36.inf", 
		LAST);

	web_url("search_8", 
		"URL=https://www.google.co.in/complete/search?q=load%20ru&cp=7&client=psy-ab&xssi=t&gs_ri=gws-wiz&hl=en-IE&authuser=0&psi=_7SeXvbFCMb9kwWU-5XYBQ.1587459328101&ei=_7SeXvbFCMb9kwWU-5XYBQ", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t37.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("search_9", 
		"URL=https://www.google.co.in/complete/search?q=load%20run&cp=8&client=psy-ab&xssi=t&gs_ri=gws-wiz&hl=en-IE&authuser=0&psi=_7SeXvbFCMb9kwWU-5XYBQ.1587459328101&ei=_7SeXvbFCMb9kwWU-5XYBQ", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t38.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("search_10", 
		"URL=https://www.google.co.in/complete/search?q=load%20runn&cp=9&client=psy-ab&xssi=t&gs_ri=gws-wiz&hl=en-IE&authuser=0&psi=_7SeXvbFCMb9kwWU-5XYBQ.1587459328101&ei=_7SeXvbFCMb9kwWU-5XYBQ", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t39.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("search_11", 
		"URL=https://www.google.co.in/complete/search?q=load%20runne&cp=10&client=psy-ab&xssi=t&gs_ri=gws-wiz&hl=en-IE&authuser=0&psi=_7SeXvbFCMb9kwWU-5XYBQ.1587459328101&ei=_7SeXvbFCMb9kwWU-5XYBQ", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t40.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("search_12", 
		"URL=https://www.google.co.in/complete/search?q=load%20runner&cp=11&client=psy-ab&xssi=t&gs_ri=gws-wiz&hl=en-IE&authuser=0&psi=_7SeXvbFCMb9kwWU-5XYBQ.1587459328101&ei=_7SeXvbFCMb9kwWU-5XYBQ", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t41.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("search_13", 
		"URL=https://www.google.co.in/search?source=hp&ei=_7SeXvbFCMb9kwWU-5XYBQ&q=load+runner&oq=load+runner&gs_lcp=CgZwc3ktYWIQAzIECAAQCjICCAAyAggAMgIIADIECAAQCjICCAAyBAgAEAoyAggAMgIIADICCAA6BQgAEIMBUMhqWIJ6YI2GAWgAcAB4AIABgAKIAfAJkgEFOS4xLjKYAQCgAQGqAQdnd3Mtd2l6sAEA&sclient=psy-ab&ved=0ahUKEwi2wajqkvnoAhXG_qQKHZR9BVsQ4dUDCAc&uact=5", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t42.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("stay-home-save-lives-april-20-copy-6753651837108785-s.png", 
		"URL=https://www.google.co.in/logos/doodles/2020/stay-home-save-lives-april-20-copy-6753651837108785-s.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t43.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("status_2", 
		"URL=https://consent.google.com/status?continue=https://www.google.co.in&m=0&pc=s&timestamp=1587459345&gl=IE", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t44.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("loading_24.gif", 
		"URL=https://www.gstatic.com/ui/v1/activityindicator/loading_24.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t45.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://www.google.co.in");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("gen_204_9", 
		"URL=https://www.google.co.in/gen_204?s=web&t=aft&atyp=csi&ei=EbWeXpuqEsORsAfc4IzIBw&rt=wsrt.114,aft.1138,prt.1138,sct.489&bl=2amb&ima=0&imad=0&imn=16", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t46.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_url("rs=AA2YrTuismEQKS9oNeLk4VDxLFFISdrsGg", 
		"URL=https://www.gstatic.com/og/_/js/k=og.qtm.en_US.d9-RbZNwksw.O/rt=j/m=qabr,q_d,qcwid,qmutsd,qapid/exm=qaaw,qadd,qaid,qein,qhaw,qhbr,qhch,qhga,qhid,qhin,qhpr/d=1/ed=1/rs=AA2YrTuismEQKS9oNeLk4VDxLFFISdrsGg", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t47.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("gen_204_10", 
		"URL=https://www.google.co.in/gen_204?atyp=i&ct=rfl&cad=&ei=EbWeXpuqEsORsAfc4IzIBw&zx=1587459346524", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t48.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("rs=ACT90oE-KHx-iqwYkci0MKE5PindTSfYnA", 
		"URL=https://www.google.co.in/xjs/_/js/k=xjs.s.en_GB.PK9KWMpaDU8.O/ck=xjs.s.3WRIPZXiutg.L.W.O/m=Fkg7bd,HcFEGb,IvlUe,MC8mtf,OF7gzc,RMhBfe,T4BAC,TJw5qb,TbaHGc,Y33vzc,ZyRBae,cdos,hsm,iDPoPb,jsa,mvYTse,tg8oTe,uz938c,vWNDde,ws9Tlc,yQ43ff,d,csi/am=AkAAAACwBGDXHSDnfxMAwAVmHAAAgAAuIthYIIVIKAhAALa6AAIB/d=1/dg=2/br=1/ct=zgms/rs=ACT90oE-KHx-iqwYkci0MKE5PindTSfYnA", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t49.inf", 
		LAST);

	web_url("rs=AA2YrTtJrF5VkzhlkhpH0aMjFQXPXQnH-g", 
		"URL=https://www.gstatic.com/og/_/ss/k=og.qtm.1x00dz3uw51vk.L.W.O/m=qcwid/excm=qaaw,qadd,qaid,qein,qhaw,qhbr,qhch,qhga,qhid,qhin,qhpr/d=1/ed=1/ct=zgms/rs=AA2YrTtJrF5VkzhlkhpH0aMjFQXPXQnH-g", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t50.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://www.google.co.in");

	web_add_header("Purpose", 
		"prefetch");

	web_url("so_2", 
		"URL=https://ogs.google.co.in/widget/app/so?origin=https%3A%2F%2Fwww.google.co.in&pid=1&spid=1&hl=en&gm=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t51.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("client_204", 
		"URL=https://www.google.co.in/client_204?&atyp=i&biw=1280&bih=580&dpr=1.5&ei=EbWeXpuqEsORsAfc4IzIBw", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t52.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_url("search_14", 
		"URL=https://www.google.co.in/complete/search?q&cp=0&client=psy-ab&xssi=t&gs_ri=gws-wiz&hl=en-IE&authuser=0&pq=load%20runner&psi=EbWeXpuqEsORsAfc4IzIBw.1587459347051&ei=EbWeXpuqEsORsAfc4IzIBw", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t53.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("m=DGEKAc,EPszLb,F8FRnd,IkchZc,MkHyGd,NBZ7u,NpD4ec,OG6ZHd,RqxLvf,SvnKM,T6sTsf,T7XTS,TxZWcc,URQPYc,VugqBb,Wq6lxf,XMgU6d,XjCeUc,ZDfS0b,aCZVp,aa,aam1T,abd,async,bgd,dv7Bfe,dvl,eN4qad,eT9j9d,exdc,fEVMic,foot,iD8Yk,kVbfxd,kyn,lazG7b,lli,lu,m,mI3LFb,mUpTid,mpck,m", 
		"URL=https://www.google.co.in/xjs/_/js/k=xjs.s.en_GB.PK9KWMpaDU8.O/ck=xjs.s.3WRIPZXiutg.L.W.O/am=AkAAAACwBGDXHSDnfxMAwAVmHAAAgAAuIthYIIVIKAhAALa6AAIB/d=1/exm=Fkg7bd,HcFEGb,IvlUe,MC8mtf,OF7gzc,RMhBfe,T4BAC,TJw5qb,TbaHGc,Y33vzc,ZyRBae,cdos,csi,d,hsm,iDPoPb,jsa,mvYTse,tg8oTe,uz938c,vWNDde,ws9Tlc,yQ43ff/ed=1/dg=2/br=1/ct=zgms/rs=ACT90oE-KHx-iqwYkci0MKE5PindTSfYnA/m=DGEKAc,EPszLb,F8FRnd,IkchZc,MkHyGd,NBZ7u,NpD4ec,OG6ZHd,RqxLvf,SvnKM,T6sTsf,T7XTS,TxZWcc,URQPYc,VugqBb,Wq6lxf,XMgU6d,XjCeUc,ZDfS0b,aCZVp,aa,"
		"aam1T,abd,async,bgd,dv7Bfe,dvl,eN4qad,eT9j9d,exdc,fEVMic,foot,iD8Yk,kVbfxd,kyn,lazG7b,lli,lu,m,mI3LFb,mUpTid,mpck,mu,o02Jie,pB6Zqd,qik19b,rHjpXd,runuse,sb_wiz,sf,sonic,spch,tl,uiNkee,vdwa,vs,wkrYee,xz7cCd,yyqeUd,zbML3c?xjs=s1", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t54.inf", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIYCbi5G7ztz11vEgsNSoWeUhIAGgAiABoA", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIYCbi5G7ztz11vEgsNSoWeUhIAGgAiABoA?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t55.inf", 
		LAST);

	web_url("m=Adromf,XeLme,ZuqZhb,c3JEL", 
		"URL=https://www.google.co.in/xjs/_/js/k=xjs.s.en_GB.PK9KWMpaDU8.O/ck=xjs.s.3WRIPZXiutg.L.W.O/am=AkAAAACwBGDXHSDnfxMAwAVmHAAAgAAuIthYIIVIKAhAALa6AAIB/d=1/exm=DGEKAc,EPszLb,F8FRnd,Fkg7bd,HcFEGb,IkchZc,IvlUe,MC8mtf,MkHyGd,NBZ7u,NpD4ec,OF7gzc,OG6ZHd,RMhBfe,RqxLvf,SvnKM,T4BAC,T6sTsf,T7XTS,TJw5qb,TbaHGc,TxZWcc,URQPYc,VugqBb,Wq6lxf,XMgU6d,XjCeUc,Y33vzc,ZDfS0b,ZyRBae,aCZVp,aa,aam1T,abd,async,bgd,cdos,csi,d,dv7Bfe,dvl,eN4qad,eT9j9d,exdc,fEVMic,foot,hsm,iD8Yk,iDPoPb,jsa,kVbfxd,kyn,lazG7b,lli,lu,m,mI3LFb,"
		"mUpTid,mpck,mu,mvYTse,o02Jie,pB6Zqd,qik19b,rHjpXd,runuse,sb_wiz,sf,sonic,spch,tg8oTe,tl,uiNkee,uz938c,vWNDde,vdwa,vs,wkrYee,ws9Tlc,xz7cCd,yQ43ff,yyqeUd,zbML3c/ed=1/dg=2/br=1/ct=zgms/rs=ACT90oE-KHx-iqwYkci0MKE5PindTSfYnA/m=Adromf,XeLme,ZuqZhb,c3JEL?xjs=s2", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t56.inf", 
		LAST);

	web_url("loading_24.gif_2", 
		"URL=https://ssl.gstatic.com/ui/v1/activityindicator/loading_24.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t57.inf", 
		LAST);

	web_url("fb_32x32.png", 
		"URL=https://ssl.gstatic.com/kpui/social/fb_32x32.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t58.inf", 
		LAST);

	web_concurrent_end(NULL);

	//web_add_cookie("DV=s6KeaXkRf1krECjFbPp1FKBX3jS_GZfyqnMyKQBBBwAAAAA; DOMAIN=www.google.co.in");

	web_add_auto_header("Origin", 
		"https://www.google.co.in");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("gen_204_11", 
		"URL=https://www.google.co.in/gen_204?atyp=i&ei=EbWeXpuqEsORsAfc4IzIBw&dt19=2&zx=1587459347437", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t59.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_url("email_grey600_24dp.png", 
		"URL=https://www.google.co.in/images/icons/material/system/1x/email_grey600_24dp.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t60.inf", 
		LAST);

	web_custom_request("gen_204_12", 
		"URL=https://www.google.co.in/gen_204?atyp=i&ei=EbWeXpuqEsORsAfc4IzIBw&vet=12ahUKEwjb9vzykvnoAhXDCOwKHVwwA3kQtWQoBXoECBcQLg..s&zx=1587459347466", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t61.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_url("twitter_32x32.png", 
		"URL=https://ssl.gstatic.com/kpui/social/twitter_32x32.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t62.inf", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("bgasy", 
		"URL=https://www.google.co.in/async/bgasy?ei=EbWeXpuqEsORsAfc4IzIBw&yv=3&async=_fmt:jspb", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t63.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Origin", 
		"https://www.google.co.in");

	web_custom_request("gen_204_13", 
		"URL=https://www.google.co.in/gen_204?atyp=i&ei=EbWeXpuqEsORsAfc4IzIBw&ct=kptm:il&iw=1263&ih=580&r=0&sh=720&sw=1280&tmw=0&tmh=0&nvi=3&eg=0&zx=1587459347474", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t64.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("ecr", 
		"URL=https://www.google.co.in/async/ecr?ei=EbWeXpuqEsORsAfc4IzIBw&lei=EbWeXpuqEsORsAfc4IzIBw&yv=3&async=encoded_cache_key:ChMI2_b88pL56AIVwwjsCh1cMAN5EgIYAg,version_info:s6KeaXkRf1kbQPlO3VfHelk04TS_GRc,attempt:1,_fmt:jspb", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t65.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("m=GxIAgd,QPfswe,U0SiBc,Uuupec,XEVFK,Xrogfe,ZvxbPe,bfCVtd,eJUPEd,mKXrsd,mfkHA,ptS8Ie,r36a9c,xj7LNb", 
		"URL=https://www.google.co.in/xjs/_/js/k=xjs.s.en_GB.PK9KWMpaDU8.O/ck=xjs.s.3WRIPZXiutg.L.W.O/am=AkAAAACwBGDXHSDnfxMAwAVmHAAAgAAuIthYIIVIKAhAALa6AAIB/d=1/exm=Adromf,DGEKAc,EPszLb,F8FRnd,Fkg7bd,HcFEGb,IkchZc,IvlUe,MC8mtf,MkHyGd,NBZ7u,NpD4ec,OF7gzc,OG6ZHd,RMhBfe,RqxLvf,SvnKM,T4BAC,T6sTsf,T7XTS,TJw5qb,TbaHGc,TxZWcc,URQPYc,VugqBb,Wq6lxf,XMgU6d,XeLme,XjCeUc,Y33vzc,ZDfS0b,ZuqZhb,ZyRBae,aCZVp,aa,aam1T,abd,async,bgd,c3JEL,cdos,csi,d,dv7Bfe,dvl,eN4qad,eT9j9d,exdc,fEVMic,foot,hsm,iD8Yk,iDPoPb,jsa,kVbfxd,kyn,"
		"lazG7b,lli,lu,m,mI3LFb,mUpTid,mpck,mu,mvYTse,o02Jie,pB6Zqd,qik19b,rHjpXd,runuse,sb_wiz,sf,sonic,spch,tg8oTe,tl,uiNkee,uz938c,vWNDde,vdwa,vs,wkrYee,ws9Tlc,xz7cCd,yQ43ff,yyqeUd,zbML3c/ed=1/dg=2/br=1/ct=zgms/rs=ACT90oE-KHx-iqwYkci0MKE5PindTSfYnA/m=GxIAgd,QPfswe,U0SiBc,Uuupec,XEVFK,Xrogfe,ZvxbPe,bfCVtd,eJUPEd,mKXrsd,mfkHA,ptS8Ie,r36a9c,xj7LNb?xjs=s2", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t66.inf", 
		LAST);

	web_add_header("Origin", 
		"https://www.google.co.in");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("gen_204_14", 
		"URL=https://www.google.co.in/gen_204?atyp=csi&ei=EbWeXpuqEsORsAfc4IzIBw&s=web&t=all&bl=2amb&imn=16&adh=&conn=onchange&ima=1&imad=0&ime=1&imex=1&imeh=6&imea=0&imeb=7&wh=580&scp=0&fld=1830&net=dl.1450,ect.4g,rtt.100&mem=ujhs.13,tjhs.23,jhsl.2173,dm.8&sto=&sys=hc.8&rt=sct.489,iml.1166,prt.1138,aft.1138,dcl.1160,xjsls.1170,xjses.1622,xjsee.1653,xjs.1653,ol.3085,wsrt.114,cst.0,dnst.0,rqst.759,rspt.652,rqstt.7,unt.5,ppunt.2,cstt.5,dit.1274&zx=1587459348458", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t67.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("ui", 
		"URL=https://adservice.google.co.in/adsid/google/ui", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t68.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Origin", 
		"https://www.google.co.in");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_think_time(4);

	web_custom_request("gen_204_15", 
		"URL=https://www.google.co.in/gen_204?atyp=i&ei=EbWeXpuqEsORsAfc4IzIBw&ct=slh&v=2&m=HV&t=C&s=1&pv=0.26094389051709577&me=1:1587459347440,x:1,V,0,0,1280,580:0,N,1,EbWeXpuqEsORsAfc4IzIBw:0,R,1,7,24,46,92,15:0,R,1,CAkQAA,180,364,600,75:0,R,1,CAMQAA,180,467,600,119:0,R,1,CBUQAA,892,172,369,656:0,R,1,CBUQAQ,893,172,368,636:0,R,1,CAEQDA,1141,141,119,32:0,R,1,CBMQAw,894,185,366,62:0,R,1,CBYQAA,894,277,366,154:0,R,1,CBYQAQ,909,277,336,154:0,R,1,CAsQAA,894,444,366,22:0,R,1,CA0QAA,894,473,366,22:0,R,1,CA4QAA"
		",894,502,366,22:0,R,1,CA8QAA,894,531,366,44:1,B,2532:1183,h,1,CAEQAA,i:0,h,1,CBMQAg,i:0,h,1,CBUQAQ,i:0,h,1,CBUQAA,i:2664,h,1,CAEQAA,o:1,h,1,CBMQAg,o:0,h,1,CBUQAQ,o:0,h,1,CBUQAA,o:1280,e,B&zx=1587459352574", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.co.in/", 
		"Snapshot=t69.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	lr_end_transaction("1_transaction",LR_AUTO);

	return 0;
}