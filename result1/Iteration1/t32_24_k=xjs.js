try{
s_P("sy76");
var s_ko=function(a){s_i.call(this,a.Ja);a=!1;var b=this.Ha().el().getAttribute("data-df");null!=b&&(a="true"==b);this.Ca=new s_di;this.Qa=new s_ho;this.ha=this.Na("AHe6Kc").el();this.ka=this.Na("Sx9Kwc").el();this.Da=null;this.Ka=new s_FUa(this.ha);this.Te=this.Na("aZ2wEe").el();this.Pa=this.Ha().el().hasAttribute("data-m")&&!a;this.La="";this.Ba=this.Ha().el().hasAttribute("data-a");this.Ga=!1;this.Ia=new Map;this.wa=this.Na("jt9vfc").el();this.Aa=this.Na("qngMid").el();this.Oa=s_ob(s_8j)};
s_n(s_ko,s_i);s_ko.Fa=s_i.Fa;s_ko.prototype.Jc=function(){this.close(!1)};s_ko.prototype.cB=function(){s_M(this.ha,!0);s_M(this.Te,!0);s_M(this.ka,!1);s_M(this.wa,!0);s_M(this.Aa,!0);s_2a(this.ka,"lcm_lightbox_loaded");this.Ba&&s_Jh(s_c(function(){this.ha.style.opacity=1},this))};var s_JUa=function(a){s_M(a.ha,!1);s_M(a.Te,!1);s_M(a.wa,!1);s_M(a.Aa,!1)};s_ko.prototype.hya=function(){this.Ba?(this.ha.style.opacity=0,s_O(s_c(function(){s_JUa(this)},this),300)):s_JUa(this)};
s_ko.prototype.Vf=function(){var a=this;if(s_vh(this.ka))return!1;this.Oa.then(function(c){c&&c.isAvailable()&&(a.Ga=c.ha())});s_M(this.ha,!0);s_M(this.Te,!1);s_M(this.ka,!0);s_M(this.wa,!0);s_M(this.Aa,!0);this.Da=document.activeElement;this.ha.focus();s_GUa(this.Ka);this.Ca.listen(document.body,"keydown",s_c(this.fRb,this));this.Ca.listen(this.Qa,"resize",s_c(this.AJa,this));this.Ca.listen(this.ha,"touchmove",s_c(this.ndc,this));if(this.Pa){var b=document.body.style;this.La=b.overflow;b.overflow=
"hidden"}this.AJa();s_2a(this.ka,"lcm_lightbox_opened");s_0a(document.body,"srp_hd");this.Ba&&s_Jh(s_c(function(){this.ha.style.opacity=1},this));return!0};var s_KUa=function(a,b){var c=(new s_Ei([a.ha])).find("*").toArray();c=[a.ha].concat(c);c=b?c.reverse():c;(s_Tb(c,function(d){return s_uf(d)&&s_zf(d)})||a.ha).focus()};s_ko.prototype.Uaa=function(){s_KUa(this,!0)};s_ko.prototype.Vaa=function(){s_KUa(this,!1)};
s_ko.prototype.X3=function(a){var b=this.close(!0);b&&(a=a.Ya.el())&&s_f(a,{data:{ct:"lbcls"}});return b};s_ko.prototype.NDb=function(){return this.close(!1)};var s_LUa=function(a,b){s_M(a.ha,!1);s_M(a.ka,!1);s_M(a.Te,!1);s_M(a.wa,!1);s_M(a.Aa,!1);a.Ia.forEach(function(c,d){s_$g(a.ka,d)==c&&s_L(a.ka,d,"")});s_HUa(a.Ka);a.Da&&(a.Da.focus(),a.Da=null);a.Pa&&(document.body.style.overflow=a.La);a.AJa();a.Ca.removeAll();s_2a(a.ka,"lcm_lightbox_closed",{Gk:!!b});s_0a(document.body,"srp_uhd")};s_=s_ko.prototype;
s_.close=function(a){if(!s_vh(this.ka)&&!s_vh(this.Te))return!1;this.Ba?(this.ha.style.opacity=0,s_O(s_c(function(){s_LUa(this,a)},this),300)):s_LUa(this,a);return!0};s_.stopPropagation=function(a){a&&a.event.stopPropagation()};s_.fRb=function(a){27==a.keyCode&&(this.close(!0),a.stopPropagation())};s_.AJa=function(){var a=this;this.Oa.then(function(b){b&&b.isAvailable()&&(s_vh(a.ka)?a.Ga||b.Bp():a.Ga||b.Qq())})};s_.ndc=function(a){a.stopPropagation();a.preventDefault&&a.preventDefault()};
s_X(s_ko.prototype,"mLt3mc",function(){return this.stopPropagation});s_X(s_ko.prototype,"DlGmce",function(){return this.NDb});s_X(s_ko.prototype,"yZGKvf",function(){return this.X3});s_X(s_ko.prototype,"tuePCd",function(){return this.Vaa});s_X(s_ko.prototype,"sT2f3e",function(){return this.Uaa});s_X(s_ko.prototype,"FL9aIe",function(){return this.Vf});s_X(s_ko.prototype,"vhMcte",function(){return this.hya});s_X(s_ko.prototype,"hfClUb",function(){return this.cB});s_Y(s_nEa,s_ko);

s_g().ha();

}catch(e){_DumpException(e)}
try{
s_P("Adromf");

s_g().ha();

}catch(e){_DumpException(e)}
try{
s_P("syot");
var s_JB=function(a){s_i.call(this,a.Ja);this.ha=s_Ti(s_Ii(this.Ha(),"input")).el();this.Lb=this.Ha().el();s_K(this.ha,"input",s_c(this.fZ,this));this.Mu(this.Fn());this.fZ()};s_n(s_JB,s_i);s_JB.Fa=s_i.Fa;s_=s_JB.prototype;s_.focus=function(){this.ha.focus()};s_.setValue=function(a){this.ha.value=a;this.fZ()};s_.getValue=function(){return this.ha.value};s_.yn=function(){return this.ha};s_.z3=function(){return this.ha.selectionStart};s_.mma=function(){return this.ha.selectionEnd};
var s_KB=function(a,b){s_ni(a.Lb,"HOKz3d",!b)};s_=s_JB.prototype;s_.yj=function(){return this.ha.checkValidity()&&!s_ki(this.Lb,"HOKz3d")};s_.Mu=function(a){this.ha.checkValidity();this.ha.disabled=a;s_ni(this.Lb,"A8x8Pb",a)};s_.Fn=function(){return this.ha.disabled};s_.fZ=function(){var a=this.ha.checkValidity();s_ni(this.Lb,"UNtZ8",!a);a=0<this.ha.value.length||!this.yj();s_ni(this.Lb,"qpdYhc",a)};s_.qK=function(){s_S(this.Lb,"RKbDve");s_2a(this.Lb,"focus")};
s_.rS=function(){s_T(this.Lb,"RKbDve");s_2a(this.Lb,"blur")};s_.bGb=function(a){this.ha.focus();this.qK(a)};s_X(s_JB.prototype,"Vm7Ynd",function(){return this.bGb});s_X(s_JB.prototype,"kDTLMd",function(){return this.rS});s_X(s_JB.prototype,"daRB0b",function(){return this.qK});s_X(s_JB.prototype,"RDPZE",function(){return this.Fn});s_X(s_JB.prototype,"If42bb",function(){return this.yj});s_X(s_JB.prototype,"aLYK2e",function(){return this.mma});s_X(s_JB.prototype,"jbCcg",function(){return this.z3});
s_X(s_JB.prototype,"XFMo9e",function(){return this.yn});s_X(s_JB.prototype,"HvnK2b",function(){return this.getValue});s_X(s_JB.prototype,"AHmuwe",function(){return this.focus});s_Y(s_9j,s_JB);

s_g().ha();

}catch(e){_DumpException(e)}
try{
s_P("XeLme");

s_g().ha();

}catch(e){_DumpException(e)}
try{
s_P("sy69");
var s_Pn=function(){this.wb=s_ya();this.Ia=null;this.Qa=-1;this.wd=this.Od=this.La=!1;this.Yb=null;this.Aa=!0};s_n(s_Pn,s_Hn);s_Pn.prototype.getChildren=function(){return this.Ia?[this.Ia]:[]};s_Pn.prototype.play=function(){s_yTa(this);this.Cb();this.Jd();return this.wb.Pb};s_Pn.prototype.finish=function(){this.La||(s_yTa(this),this.Cb(),this.Ia.finish(),this.Xa(),this.wb.resolve(null))};var s_yTa=function(a){a.Ia||a.La||(a.measure(),a.Ia=a.Af())};
s_Pn.prototype.Cb=function(){this.Od||this.La||(this.Od=!0,this.Ac())};s_Pn.prototype.Jd=function(a){var b=this;a=void 0===a?!1:a;this.wd||this.La||(this.wd=!0,this.uq(),this.Ia.play().then(function(c){s_zTa(b);a||b.Xa();b.wb.resolve(c)}));return this.wb.Pb};s_Pn.prototype.uq=function(){var a=this,b=this.Ce();-1===this.Qa&&(this.Qa=window.setTimeout(function(){a.Qa=-1;a.Ia.finish()},b))};var s_zTa=function(a){-1!=a.Qa&&(window.clearTimeout(a.Qa),a.Qa=-1)};
s_Pn.prototype.Xa=function(){this.La||(this.La=!0,s_zTa(this),this.Yd())};s_Pn.prototype.Yd=function(){};

s_g().ha();

}catch(e){_DumpException(e)}
try{
var s_ATa=function(a,b){a.ha.wa=b;return a},s_BTa=function(a){var b=a.style;a="";"opacity"in b?a=b.opacity:"MozOpacity"in b?a=b.MozOpacity:"filter"in b&&(b=b.filter.match(/alpha\(opacity=([\d.]+)\)/))&&(a=String(b[1]/100));return""==a?a:Number(a)};s_P("sy6a");
var s_Qn=function(a,b){this.ha=a;this.ka=void 0===b?100:b};s_n(s_Qn,s_Hn);s_Qn.prototype.play=function(){return s_CTa(this)||s_l()};s_Qn.prototype.finish=function(){s_CTa(this)};s_Qn.prototype.Ce=function(){return this.ka};var s_CTa=function(a){if(a.ha){var b=a.ha();a.ha=null;return b}};
var s_DTa=function(){this.ha=[]};s_DTa.prototype.add=function(a){s_Ca(a)?this.ha.push(new s_Qn(a)):a&&this.ha.push(a);return this};var s_Rn=function(a){var b=s_Pb(a.ha,function(c){return c instanceof s_DTa?s_Rn(c):c});return a.create(b)};
var s_Sn=function(a,b){b=void 0===b?!1:b;this.ha=a.filter(function(c){return null!=c});this.wa=Array(this.ha.length);this.Ba=b&&this.ka()};s_n(s_Sn,s_Hn);var s_Tn=function(){return new s_ETa};
s_Sn.prototype.play=function(){var a=this,b=[],c=[],d=[],e=[],f=[];if(this.Ba)s_FTa(this.ha,{gMb:b,k2b:c,jSb:d,qrb:e,wub:f});else for(var g=s_a(this.ha),h=g.next();!h.done;h=g.next())h=h.value,h instanceof s_Pn?(s_yTa(h),d.push(h.Cb.bind(h)),e.push(h.Xa.bind(h)),c.push(h.Jd.bind(h,!0))):(h instanceof s_In&&b.push(h.init.bind(h)),c.push(h.play.bind(h)));d=s_a(d);for(g=d.next();!g.done;g=d.next())g=g.value,g();for(d=0;d<b.length;d++)(0,b[d])(d==b.length-1);b=c.map(function(k,l){return k().then(function(m){a.wa[l]=
!0;return m})});f=s_a(f);for(c=f.next();!c.done;c=f.next())c=c.value,c();f=s_cb(b);f.then(function(){for(var k=s_a(e),l=k.next();!l.done;l=k.next())l=l.value,l()});return f};s_Sn.prototype.ka=function(){return!1};
var s_FTa=function(a,b){var c=b.gMb,d=b.k2b,e=b.jSb,f=b.qrb;for(b=b.wub;a.length;){var g=a.shift();if(g instanceof s_Pn){s_yTa(g);var h=g.getChildren()&&g.getChildren().length?g.getChildren()[0]:null,k=g.Cb.bind(g),l=g.Xa.bind(g);g=g.uq.bind(g);h=h?h.getChildren():[];e.push(k);f.push(l);b.push(g);a.push.apply(a,s_nb(h))}else g instanceof s_In?(c.push(g.init.bind(g)),d.push(g.play.bind(g))):g instanceof s_Sn?a.push.apply(a,s_nb(g.getChildren())):d.push(g.play.bind(g))}};
s_Sn.prototype.finish=function(){var a=this,b=this.ha.map(function(d,e){return a.wa[e]?s_da:(d instanceof s_Pn&&s_yTa(d),d.finish.bind(d))});b=s_a(b);for(var c=b.next();!c.done;c=b.next())c=c.value,c()};s_Sn.prototype.Ce=function(){for(var a=0,b=s_a(this.ha),c=b.next();!c.done;c=b.next())c=c.value,c.Ce()>a&&(a=c.Ce());return a};s_Sn.prototype.getChildren=function(){return this.ha};var s_ETa=function(){s_DTa.apply(this,arguments)};s_n(s_ETa,s_DTa);s_ETa.prototype.create=function(a){return new s_Sn(a)};

s_g().ha();

}catch(e){_DumpException(e)}
try{
s_P("sy71");

s_Sn.prototype.ka=function(){return!0};

s_g().ha();

}catch(e){_DumpException(e)}
try{
s_P("emt");


s_g().ha();

}catch(e){_DumpException(e)}
try{
s_P("sy67");

s_g().ha();

}catch(e){_DumpException(e)}
try{
s_P("sy178");
var s_Esg=s_U("ZuqZhb");
var s_Fsg={duration:200,easing:"cubic-bezier(.4,0,.2,1)"};
var s_Gsg=[.001,1],s_FZ=function(a){s_i.call(this,a.Ja);var b=this;this.Ca=s_ec(function(){return b.Ha().el()});this.ha=s_ec(function(){return b.Na("NQBQ7d").el()});this.ka=s_ec(function(){return b.Na("pwYex").el()});this.Da=!1;this.Aa=null;this.wa=!1;this.getData("userInitiatedAutoplay").wc()&&this.DQa();a=.36;this.getData("textOpacityOn").wc()&&(a=this.getData("textOpacityOn").Bb());var c=.87;this.getData("textOpacityOff").wc()&&(c=this.getData("textOpacityOff").Bb());this.Ba=[a,c]};s_n(s_FZ,s_i);
s_FZ.Fa=s_i.Fa;s_FZ.prototype.DQa=function(){var a=this;this.wa||(this.wa=!0,s_L(this.ha(),"display","block"),this.Aa=s_ska(this.Ca(),"click",function(b){a.Da||(s_Ph(b),s_Oh(b),b=a.Ca(),s_Ai(b,s_Asg,void 0,void 0,void 0))}))};var s_Hsg=function(a,b,c,d,e){var f=[];b!=c&&f.push((new s_In(a.ka(),s_Fsg)).opacity(b,c));d!=e&&a.wa&&f.push((new s_In(a.ha(),s_Fsg)).opacity(d,e));return new s_Sn(f)},s_Isg=function(a,b){b=(a.Da=b)?1:0;var c=1-b;return s_Hsg(a,a.Ba[b],a.Ba[c],s_Gsg[b],s_Gsg[c])};
s_FZ.prototype.d1a=function(){return s_Isg(this,!0)};s_FZ.prototype.c1a=function(){return s_Isg(this,!1)};s_FZ.prototype.handleError=function(){null!=this.Aa&&s_sTa(this.Ca(),this.Aa);s_xf(this.ka(),"Preview unavailable");s_xf(this.ha(),"Preview unavailable");this.ka().setAttribute("aria-label","Preview unavailable");var a=s_BTa(this.ka()),b=this.wa?s_BTa(this.ha()):0;return s_Hsg(this,""==a?1:a,this.Ba[0],""==b?1:b,s_Gsg[0])};s_X(s_FZ.prototype,"JqRO3d",function(){return this.handleError});
s_X(s_FZ.prototype,"J8ZKk",function(){return this.c1a});s_X(s_FZ.prototype,"F9rNV",function(){return this.d1a});s_X(s_FZ.prototype,"TfYVvf",function(){return this.DQa});s_Y(s_Esg,s_FZ);

s_g().ha();

}catch(e){_DumpException(e)}
try{
s_P("ZuqZhb");



s_g().ha();

}catch(e){_DumpException(e)}
try{
s_P("syfd");
/*

 Copyright The Closure Library Authors.
 SPDX-License-Identifier: Apache-2.0
*/

s_g().ha();

}catch(e){_DumpException(e)}
try{
s_P("syhj");
/*

 Copyright The Closure Library Authors.
 SPDX-License-Identifier: Apache-2.0
*/
var s_Fu=function(a,b,c){s_J.call(this);this.Ol=null!=c?s_c(a,c):a;this.Ca=b;this.uf=s_c(this.gCb,this);this.ka=!1;this.wa=0;this.Aa=this.ha=null;this.Ba=[]};s_p(s_Fu,s_J);s_=s_Fu.prototype;s_.Yn=function(a){this.Ba=arguments;this.ka=!1;this.ha?this.Aa=s_Oa()+this.Ca:this.ha=s_bi(this.uf,this.Ca)};s_.stop=function(){this.ha&&(s_ci(this.ha),this.ha=null);this.Aa=null;this.ka=!1;this.Ba=[]};s_.pause=function(){++this.wa};
s_.resume=function(){this.wa&&(--this.wa,!this.wa&&this.ka&&(this.ka=!1,this.Ol.apply(null,this.Ba)))};s_.Za=function(){this.stop();s_Fu.Xb.Za.call(this)};s_.gCb=function(){this.Aa?(this.ha=s_bi(this.uf,this.Aa-s_Oa()),this.Aa=null):(this.ha=null,this.wa?this.ka=!0:(this.ka=!1,this.Ol.apply(null,this.Ba)))};

s_g().ha();

}catch(e){_DumpException(e)}
try{
s_P("sy177");
var s_Jsg=function(a){s_z(this,a,0,-1,null,null)};s_p(s_Jsg,s_y);var s_Ksg=function(a,b){var c=s_A(a,1);null!=c&&s_x(b,1,c);c=s_A(a,2);null!=c&&s_de(b,2,c);c=s_A(a,3);null!=c&&b.wa(3,c)};
var s_Lsg=function(a){s_z(this,a,0,-1,null,null)};s_p(s_Lsg,s_y);var s_Msg=function(a,b){var c=s_A(a,1);null!=c&&b.wa(1,c);c=s_A(a,2);null!=c&&s_de(b,2,c);c=s_A(a,3);null!=c&&s_de(b,3,c)};
var s_Osg=function(a){s_z(this,a,0,-1,null,s_Nsg)};s_p(s_Osg,s_y);var s_Nsg=[[1,2,3]],s_Psg=function(){var a=new s_Osg;return s_He(a,3,s_Nsg[0],!0)};
var s_Qsg=function(){this.ha=new s__oa;this.ka=this.wa=this.Aa=null};s_Qsg.prototype.reset=function(){this.ka=this.wa=this.Aa=null};
var s_Rsg=function(a,b){if(s_Fg(a,"ved")){var c=new s_9d;var d=s_E(b,s_Lsg,1);null!=d&&c.ka(1,d,s_Msg);d=s_E(b,s_Jsg,2);null!=d&&c.ka(2,d,s_Ksg);d=s_A(b,3);null!=d&&s_w(c,3,d);b=s_ce(c);b=s_ka(b,4);c={};s_f(a,{data:(c.vpp=b,c)})}},s_Ssg=function(a,b){if(null==a.ka){a.ha.reset();a.ka=Date.now();a.ha.start();var c=new s_Lsg;c=s_m(c,1,a.wa);c=s_m(c,2,a.Aa);a=s_m(c,3,a.ka);c=new s_Osg;a=s_Ie(c,1,s_Nsg[0],a);s_Rsg(b,a)}};
var s_Tsg=function(a){s_z(this,a,0,-1,null,null)};s_p(s_Tsg,s_y);s_Tsg.prototype.kb="ZQsE3e";s_Tsg.prototype.getUrl=function(){return s_A(this,1)};
var s_GZ=function(a){s_i.call(this,a.Ja);var b=this;this.Wa=a.Ma.xhc;this.xd=null;this.Ga=this.wa=!1;this.Ta=null;this.Ca=new s_di(this);this.ka=null;this.Va=!1;this.Aa=this.ha=null;this.nb="";this.Ia=this.Ka=this.Xa=!1;this.Pa=this.Oa=null;this.Ba=!1;this.La=!0;this.Qa=this.Da=null;"complete"==document.readyState?s_Usg(this):this.Qa=s_Uf(s_df(),"load",function(){return s_Usg(b)})},s_Vsg,s_Wsg;s_n(s_GZ,s_i);s_GZ.Fa=function(){return{Ma:{xhc:s_Tsg}}};s_GZ.prototype.fBb=function(){return this.Ia};
var s_Usg=function(a){try{a.xd=a.Na("haAclf").el(),a.Ga=s_Fg(a.xd,"hasPreviewImage"),a.Ta=a.Na("kyCLBb").el()}catch(b){s_O(function(){return s_Usg(a)},200);return}a.ka=s_C(a.Wa,5,3);s_2a(a.Ha().el(),"prevreg");a.ha=new s_Xsg(a);a.Dc(a.ha);a.nb=a.Wa.getUrl();a.Ka=!!s_D(a.Wa,2,!0);a.Da=new s_Fu(function(){a.Ka&&s_Ysg(a)},50);1!=a.ka&&(a.Ca.listen(s_df(),"scroll",function(){return a.Da.Yn()}),s_Jh(function(){return a.Da.Yn()}));a.Oa=function(){s_Zsg(a);s__sg(a);s_HZ(a,3)};a.Pa=function(){s_7g(s_Na())?
(s_Zsg(a),s_HZ(a,3)):(s_0sg(a),a.ha.wa.reset(),s_Ysg(a))};a.Aa=null;a.Ta&&s_k(a.Ta).then(function(b){a.Aa=b;null==s_Wsg&&(s_Wsg=[]);s_Wsg.push(a);s_Vsg&&s_1sg(a);a.La=!1})},s_3sg=function(a){if(!a.Va){s_2sg(a.ha);if(!s_D(a.Wa,2,!0)&&s_D(a.Wa,3,!0)){var b=s_ef("DIV");s_S(b,"mRYBec");s_S(b,"cYKmm89nbcX__gradient-overlay");s_vf(s_vf(a.xd)).appendChild(b)}a.Va=!0}},s_5sg=function(a){return a.ha.play().then(function(){if(a.Ia)s_HZ(a,1);else{s_Ssg(a.ha.wa,a.xd);var b=[s_Jn(new s_In(a.ha.ha,s_Fsg),1),a.Aa.d1a()];
s_Fg(a.xd,"ved")&&!a.Xa&&(a.Xa=!0,s_e([new s_N(a.xd,"show")]));s_0sg(a);a.Ca.listen(s_Na(),"visibilitychange",a.Pa);a.trigger(s_Dsg);return(new s_Sn(b)).play().then(function(){a.Ia&&s_HZ(a,1)})}},function(b){return s_4sg(a,b)})},s_6sg=function(a){s_3sg(a);a.ha.load();a.ha.ha.readyState==HTMLMediaElement.HAVE_ENOUGH_DATA&&s_5sg(a)},s_0sg=function(a){a.Ca.listen(s_df(),"pagehide",a.Oa)},s_Zsg=function(a){a.Ca.Ud(s_df(),"pagehide",a.Oa)},s__sg=function(a){a.Ca.Ud(s_Na(),"visibilitychange",a.Pa)},s_HZ=
function(a,b){s_Zsg(a);s__sg(a);a.ha.pause(b);b=[s_Jn(new s_In(a.ha.ha,s_Fsg),.001)];a.Aa&&b.push(a.Aa.c1a());return(new s_Sn(b)).play().then(function(){return a.ha.reset()})};s_GZ.prototype.Qh=function(){return this.ha.Qh()};var s_Ysg=function(a){if(1!=a.ka){var b=a.xd.getBoundingClientRect(),c=s_8e();if((new s_9g(0,0,c.width,c.height)).contains(b)&&b.left<=c.width/2&&b.right>=c.width/2||a.Ga){if(a.wa){s_l();return}s_6sg(a);a.wa=!0}else if(a.wa){a.wa=!1;s_HZ(a,1);return}}s_l()};s_=s_GZ.prototype;
s_.nHb=function(a){var b=a.targetElement.el();s_Fg(b,"ved")&&s_f(b);s_6sg(this);a.event&&(s_Oh(a.event),s_Ph(a.event))};s_.iHb=function(){this.La||this.Ba||this.Qh()||(this.Ia=!1,this.wa=!0,s_6sg(this))};s_.FIb=function(){this.La||this.Ba||!this.wa||(s_HZ(this,1),this.Ia=!0)};s_.RDa=function(a){this.La||this.Ba||1==this.ka||(null!==a&&(a=a.event,null!=a&&s_Oh(a)),this.Da&&this.Da.Yn())};s_.$aa=function(){this.Ka=!0;this.Ba||(s_3sg(this),1!=this.ka&&s_Ysg(this))};
s_.DEa=function(){this.Ka=!1;this.Ba||1==this.ka||s_Ysg(this)};var s_1sg=function(a){1!=a.ka&&(a.Aa.DQa(),a.ka=1,s_7sg(a.ha),s_Zsg(a),s__sg(a))},s_4sg=function(a,b){if(b&&("AbortError"!=b.name||!a.ha.Ba))if("NotAllowedError"==b.name||"AbortError"==b.name){if(s_Vsg=!0,null!=s_Wsg){b=s_a(s_Wsg);for(var c=b.next();!c.done;c=b.next())s_1sg(c.value);a=a.xd;b=s_Psg();s_Rsg(a,b)}}else a.Ba=!0,s_ba(Error("fj`"+b)),a.Ca.removeAll(),s_HZ(a,4),a.Aa.handleError().play()};
s_GZ.prototype.play=function(){var a=this,b=this;return new s_3f(function(c){var d=function(){null!==b.ha&&b.ha.loaded()&&b.ha.ha.readyState==HTMLMediaElement.HAVE_ENOUGH_DATA?b.Qh()?c():s_5sg(b).then(c):(null===b.ha||b.ha.loaded()||(s_3sg(a),a.ha.load()),s_O(d,100))};d()})};s_GZ.prototype.stop=function(){return this.Qh()?s_HZ(this,3):null};s_GZ.prototype.Jc=function(){s_Zsg(this);s__sg(this);null!=this.Qa&&s_Xf(this.Qa);s_i.prototype.Jc.call(this)};s_X(s_GZ.prototype,"QKiGd",function(){return this.stop});
s_X(s_GZ.prototype,"NziyQe",function(){return this.play});s_X(s_GZ.prototype,"UGmjbd",function(){return this.DEa});s_X(s_GZ.prototype,"PojOWc",function(){return this.$aa});s_X(s_GZ.prototype,"bR1Pxb",function(){return this.RDa});s_X(s_GZ.prototype,"sAbFSb",function(){return this.FIb});s_X(s_GZ.prototype,"dB6bid",function(){return this.iHb});s_X(s_GZ.prototype,"qLTW5e",function(){return this.nHb});s_X(s_GZ.prototype,"nZU0Cf",function(){return this.fBb});s_Y(s_7ya,s_GZ);
var s_Xsg=function(a){s_J.call(this);this.ka=a;this.Ba=this.Ca=this.Ga=this.Aa=!1;this.wa=new s_Qsg;this.ha=null;this.Da=new s_di(this)};s_n(s_Xsg,s_J);s_=s_Xsg.prototype;s_.load=function(){if(!this.Ca){this.Ca=!0;var a=this.wa;null==a.Aa&&null==a.wa&&null==a.ka&&(a.ha.reset(),a.Aa=Date.now(),a.ha.start())}this.loaded()||(this.Ga=!0,this.ha.load())};s_.play=function(){var a=this;this.Ca=!1;this.Aa=!0;this.Ba=!1;return new s_3f(function(b,c){var d=a.ha.play();null!=d?d.catch(c).then(b):b()})};
s_.pause=function(a){if(this.Aa){this.Aa=!1;this.Ba=!0;var b=this.wa,c=this.ka.xd;if(null!==b.ka){var d=Date.now(),e=s_hoa(b.ha),f=new s_Jsg;a=s_m(f,1,a);d=s_m(a,2,d);e=s_m(d,3,e);d=new s_Osg;e=s_Ie(d,2,s_Nsg[0],e);s_Rsg(c,e)}b.reset();this.ha.pause()}};s_.reset=function(){this.ha.currentTime=0};s_.Qh=function(){return this.Aa};s_.loaded=function(){return this.Ga};
var s_7sg=function(a){null!=a.ha&&(a.ha.removeAttribute("loop"),a.wa.reset())},s_2sg=function(a){if(null==a.ha){var b=s_ef("VIDEO");b.src=s_Lc(s_Oc(a.ka.nb));s_S(b,a.ka.Ga?"a2Xije":"HnGAzc");a.ka.Ga||s_S(b,"cYKmm89nbcX__preview-content");b.setAttribute("preload","none");a.ha=b;b.muted=!0;b.setAttribute("playsinline","");b.setAttribute("webkit-playsinline","");b.onloadeddata=function(){var d=a.wa;null!==d.Aa&&null==d.wa&&(d.wa=s_hoa(d.ha));d=a.ka;d.ha.Qh()||(d.wa||1==d.ka)&&s_5sg(d)};a.Da.listen(b,
"error",function(d){var e;a.ha.error?e=Error("gj`"+a.ha.error.code):e=d.error||d.Ed.error;e||(e=Error("hj"));s_4sg(a.ka,e)});3==a.ka.ka?b.setAttribute("loop","true"):b.onended=function(){return s_HZ(a.ka,2)};1==a.ka.ka&&s_7sg(a);Date.now();if(a.ka.Ga){var c=s_5e("g-img","",a.ka.xd);s_of(c)}a.ka.xd.appendChild(b)}};s_Xsg.prototype.Za=function(){this.Da.dispose();s_J.prototype.Za.call(this)};

s_g().ha();

}catch(e){_DumpException(e)}
try{
s_P("c3JEL");



s_g().ha();

}catch(e){_DumpException(e)}
// Google Inc.
