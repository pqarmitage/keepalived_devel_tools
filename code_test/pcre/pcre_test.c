#include <sys/time.h>

char *page =
"\n"
"\n"
"<!DOCTYPE html>\n"
"<html>\n"
"	<head>\n"
"		<meta charset=\"UTF-8\">\n"
"		<title>Tower Hill Insurance &#8211; RPM &#8211; Access Denied</title>\n"
"		<meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge, chrome=1\">\n"
"		\n"
"		<meta name=\"_csrf_form_key\" content=\"_csrf\"/>\n"
"		<meta name=\"_csrf_header_name\" content=\"X-CSRF-TOKEN\"/>\n"
"		<meta name=\"_csrf_token\" content=\"18ab9721-ee83-4a3d-80a1-e935c76a9a7c\"/>\n"
"		\n"
"<script type=\"text/javascript\">(window.NREUM||(NREUM={})).loader_config={xpid:\"VQ4OV15QGwoAU1BUAg==\"};window.NREUM||(NREUM={}),__nr_require=function(t,n,e){function r(e){if(!n[e]){var o=n[e]={exports:{}};t[e][0].call(o.exports,function(n){var o=t[e][1][n];return r(o||n)},o,o.exports)}return n[e].exports}if(\"function\"==typeof __nr_require)return __nr_require;for(var o=0;o<e.length;o++)r(e[o]);return r}({1:[function(t,n,e){function r(t){try{s.console&&console.log(t)}catch(n){}}var o,i=t(\"ee\"),a=t(15),s={};try{o=localStorage.getItem(\"__nr_flags\").split(\",\"),console&&\"function\"==typeof console.log&&(s.console=!0,o.indexOf(\"dev\")!==-1&&(s.dev=!0),o.indexOf(\"nr_dev\")!==-1&&(s.nrDev=!0))}catch(c){}s.nrDev&&i.on(\"internal-error\",function(t){r(t.stack)}),s.dev&&i.on(\"fn-err\",function(t,n,e){r(e.stack)}),s.dev&&(r(\"NR AGENT IN DEVELOPMENT MODE\"),r(\"flags: \"+a(s,function(t,n){return t}).join(\", \")))},{}],2:[function(t,n,e){function r(t,n,e,r,s){try{p?p-=1:o(s||new UncaughtException(t,n,e),!0)}catch(f){try{i(\"ierr\",[f,c.now(),!0])}catch(d){}}return\"function\"==typeof u&&u.apply(this,a(arguments))}function UncaughtException(t,n,e){this.message=t||\"Uncaught error with no additional information\",this.sourceURL=n,this.line=e}function o(t,n){var e=n?null:c.now();i(\"err\",[t,e])}var i=t(\"handle\"),a=t(16),s=t(\"ee\"),c=t(\"loader\"),f=t(\"gos\"),u=window.onerror,d=!1,l=\"nr@seenError\",p=0;c.features.err=!0,t(1),window.onerror=r;try{throw new Error}catch(h){\"stack\"in h&&(t(8),t(7),\"addEventListener\"in window&&t(5),c.xhrWrappable&&t(9),d=!0)}s.on(\"fn-start\",function(t,n,e){d&&(p+=1)}),s.on(\"fn-err\",function(t,n,e){d&&!e[l]&&(f(e,l,function(){return!0}),this.thrown=!0,o(e))}),s.on(\"fn-end\",function(){d&&!this.thrown&&p>0&&(p-=1)}),s.on(\"internal-error\",function(t){i(\"ierr\",[t,c.now(),!0])})},{}],3:[function(t,n,e){t(\"loader\").features.ins=!0},{}],4:[function(t,n,e){function r(t){}if(window.performance&&window.performance.timing&&window.performance.getEntriesByType){var o=t(\"ee\"),i=t(\"handle\"),a=t(8),s=t(7),c=\"learResourceTimings\",f=\"addEventListener\",u=\"resourcetimingbufferfull\",d=\"bstResource\",l=\"resource\",p=\"-start\",h=\"-end\",m=\"fn\"+p,w=\"fn\"+h,v=\"bstTimer\",y=\"pushState\",g=t(\"loader\");g.features.stn=!0,t(6);var b=NREUM.o.EV;o.on(m,function(t,n){var e=t[0];e instanceof b&&(this.bstStart=g.now())}),o.on(w,function(t,n){var e=t[0];e instanceof b&&i(\"bst\",[e,n,this.bstStart,g.now()])}),a.on(m,function(t,n,e){this.bstStart=g.now(),this.bstType=e}),a.on(w,function(t,n){i(v,[n,this.bstStart,g.now(),this.bstType])}),s.on(m,function(){this.bstStart=g.now()}),s.on(w,function(t,n){i(v,[n,this.bstStart,g.now(),\"requestAnimationFrame\"])}),o.on(y+p,function(t){this.time=g.now(),this.startPath=location.pathname+location.hash}),o.on(y+h,function(t){i(\"bstHist\",[location.pathname+location.hash,this.startPath,this.time])}),f in window.performance&&(window.performance[\"c\"+c]?window.performance[f](u,function(t){i(d,[window.performance.getEntriesByType(l)]),window.performance[\"c\"+c]()},!1):window.performance[f](\"webkit\"+u,function(t){i(d,[window.performance.getEntriesByType(l)]),window.performance[\"webkitC\"+c]()},!1)),document[f](\"scroll\",r,{passive:!0}),document[f](\"keypress\",r,!1),document[f](\"click\",r,!1)}},{}],5:[function(t,n,e){function r(t){for(var n=t;n&&!n.hasOwnProperty(u);)n=Object.getPrototypeOf(n);n&&o(n)}function o(t){s.inPlace(t,[u,d],\"-\",i)}function i(t,n){return t[1]}var a=t(\"ee\").get(\"events\"),s=t(18)(a,!0),c=t(\"gos\"),f=XMLHttpRequest,u=\"addEventListener\",d=\"removeEventListener\";n.exports=a,\"getPrototypeOf\"in Object?(r(document),r(window),r(f.prototype)):f.prototype.hasOwnProperty(u)&&(o(window),o(f.prototype)),a.on(u+\"-start\",function(t,n){var e=t[1],r=c(e,\"nr@wrapped\",function(){function t(){if(\"function\"==typeof e.handleEvent)return e.handleEvent.apply(e,arguments)}var n={object:t,\"function\":e}[typeof e];return n?s(n,\"fn-\",null,n.name||\"anonymous\"):e});this.wrapped=t[1]=r}),a.on(d+\"-start\",function(t){t[1]=this.wrapped||t[1]})},{}],6:[function(t,n,e){var r=t(\"ee\").get(\"history\"),o=t(18)(r);n.exports=r,o.inPlace(window.history,[\"pushState\",\"replaceState\"],\"-\")},{}],7:[function(t,n,e){var r=t(\"ee\").get(\"raf\"),o=t(18)(r),i=\"equestAnimationFrame\";n.exports=r,o.inPlace(window,[\"r\"+i,\"mozR\"+i,\"webkitR\"+i,\"msR\"+i],\"raf-\"),r.on(\"raf-start\",function(t){t[0]=o(t[0],\"fn-\")})},{}],8:[function(t,n,e){function r(t,n,e){t[0]=a(t[0],\"fn-\",null,e)}function o(t,n,e){this.method=e,this.timerDuration=isNaN(t[1])?0:+t[1],t[0]=a(t[0],\"fn-\",this,e)}var i=t(\"ee\").get(\"timer\"),a=t(18)(i),s=\"setTimeout\",c=\"setInterval\",f=\"clearTimeout\",u=\"-start\",d=\"-\";n.exports=i,a.inPlace(window,[s,\"setImmediate\"],s+d),a.inPlace(window,[c],c+d),a.inPlace(window,[f,\"clearImmediate\"],f+d),i.on(c+u,r),i.on(s+u,o)},{}],9:[function(t,n,e){function r(t,n){d.inPlace(n,[\"onreadystatechange\"],\"fn-\",s)}function o(){var t=this,n=u.context(t);t.readyState>3&&!n.resolved&&(n.resolved=!0,u.emit(\"xhr-resolved\",[],t)),d.inPlace(t,y,\"fn-\",s)}function i(t){g.push(t),h&&(x?x.then(a):w?w(a):(E=-E,O.data=E))}function a(){for(var t=0;t<g.length;t++)r([],g[t]);g.length&&(g=[])}function s(t,n){return n}function c(t,n){for(var e in t)n[e]=t[e];return n}t(5);var f=t(\"ee\"),u=f.get(\"xhr\"),d=t(18)(u),l=NREUM.o,p=l.XHR,h=l.MO,m=l.PR,w=l.SI,v=\"readystatechange\",y=[\"onload\",\"onerror\",\"onabort\",\"onloadstart\",\"onloadend\",\"onprogress\",\"ontimeout\"],g=[];n.exports=u;var b=window.XMLHttpRequest=function(t){var n=new p(t);try{u.emit(\"new-xhr\",[n],n),n.addEventListener(v,o,!1)}catch(e){try{u.emit(\"internal-error\",[e])}catch(r){}}return n};if(c(p,b),b.prototype=p.prototype,d.inPlace(b.prototype,[\"open\",\"send\"],\"-xhr-\",s),u.on(\"send-xhr-start\",function(t,n){r(t,n),i(n)}),u.on(\"open-xhr-start\",r),h){var x=m&&m.resolve();if(!w&&!m){var E=1,O=document.createTextNode(E);new h(a).observe(O,{characterData:!0})}}else f.on(\"fn-end\",function(t){t[0]&&t[0].type===v||a()})},{}],10:[function(t,n,e){function r(t){var n=this.params,e=this.metrics;if(!this.ended){this.ended=!0;for(var r=0;r<d;r++)t.removeEventListener(u[r],this.listener,!1);if(!n.aborted){if(e.duration=a.now()-this.startTime,4===t.readyState){n.status=t.status;var i=o(t,this.lastSize);if(i&&(e.rxSize=i),this.sameOrigin){var c=t.getResponseHeader(\"X-NewRelic-App-Data\");c&&(n.cat=c.split(\", \").pop())}}else n.status=0;e.cbTime=this.cbTime,f.emit(\"xhr-done\",[t],t),s(\"xhr\",[n,e,this.startTime])}}}function o(t,n){var e=t.responseType;if(\"json\"===e&&null!==n)return n;var r=\"arraybuffer\"===e||\"blob\"===e||\"json\"===e?t.response:t.responseText;return h(r)}function i(t,n){var e=c(n),r=t.params;r.host=e.hostname+\":\"+e.port,r.pathname=e.pathname,t.sameOrigin=e.sameOrigin}var a=t(\"loader\");if(a.xhrWrappable){var s=t(\"handle\"),c=t(11),f=t(\"ee\"),u=[\"load\",\"error\",\"abort\",\"timeout\"],d=u.length,l=t(\"id\"),p=t(14),h=t(13),m=window.XMLHttpRequest;a.features.xhr=!0,t(9),f.on(\"new-xhr\",function(t){var n=this;n.totalCbs=0,n.called=0,n.cbTime=0,n.end=r,n.ended=!1,n.xhrGuids={},n.lastSize=null,p&&(p>34||p<10)||window.opera||t.addEventListener(\"progress\",function(t){n.lastSize=t.loaded},!1)}),f.on(\"open-xhr-start\",function(t){this.params={method:t[0]},i(this,t[1]),this.metrics={}}),f.on(\"open-xhr-end\",function(t,n){\"loader_config\"in NREUM&&\"xpid\"in NREUM.loader_config&&this.sameOrigin&&n.setRequestHeader(\"X-NewRelic-ID\",NREUM.loader_config.xpid)}),f.on(\"send-xhr-start\",function(t,n){var e=this.metrics,r=t[0],o=this;if(e&&r){var i=h(r);i&&(e.txSize=i)}this.startTime=a.now(),this.listener=function(t){try{\"abort\"===t.type&&(o.params.aborted=!0),(\"load\"!==t.type||o.called===o.totalCbs&&(o.onloadCalled||\"function\"!=typeof n.onload))&&o.end(n)}catch(e){try{f.emit(\"internal-error\",[e])}catch(r){}}};for(var s=0;s<d;s++)n.addEventListener(u[s],this.listener,!1)}),f.on(\"xhr-cb-time\",function(t,n,e){this.cbTime+=t,n?this.onloadCalled=!0:this.called+=1,this.called!==this.totalCbs||!this.onloadCalled&&\"function\"==typeof e.onload||this.end(e)}),f.on(\"xhr-load-added\",function(t,n){var e=\"\"+l(t)+!!n;this.xhrGuids&&!this.xhrGuids[e]&&(this.xhrGuids[e]=!0,this.totalCbs+=1)}),f.on(\"xhr-load-removed\",function(t,n){var e=\"\"+l(t)+!!n;this.xhrGuids&&this.xhrGuids[e]&&(delete this.xhrGuids[e],this.totalCbs-=1)}),f.on(\"addEventListener-end\",function(t,n){n instanceof m&&\"load\"===t[0]&&f.emit(\"xhr-load-added\",[t[1],t[2]],n)}),f.on(\"removeEventListener-end\",function(t,n){n instanceof m&&\"load\"===t[0]&&f.emit(\"xhr-load-removed\",[t[1],t[2]],n)}),f.on(\"fn-start\",function(t,n,e){n instanceof m&&(\"onload\"===e&&(this.onload=!0),(\"load\"===(t[0]&&t[0].type)||this.onload)&&(this.xhrCbStart=a.now()))}),f.on(\"fn-end\",function(t,n){this.xhrCbStart&&f.emit(\"xhr-cb-time\",[a.now()-this.xhrCbStart,this.onload,n],n)})}},{}],11:[function(t,n,e){n.exports=function(t){var n=document.createElement(\"a\"),e=window.location,r={};n.href=t,r.port=n.port;var o=n.href.split(\"://\");!r.port&&o[1]&&(r.port=o[1].split(\"/\")[0].split(\"@\").pop().split(\":\")[1]),r.port&&\"0\"!==r.port||(r.port=\"https\"===o[0]?\"443\":\"80\"),r.hostname=n.hostname||e.hostname,r.pathname=n.pathname,r.protocol=o[0],\"/\"!==r.pathname.charAt(0)&&(r.pathname=\"/\"+r.pathname);var i=!n.protocol||\":\"===n.protocol||n.protocol===e.protocol,a=n.hostname===document.domain&&n.port===e.port;return r.sameOrigin=i&&(!n.hostname||a),r}},{}],12:[function(t,n,e){function r(){}function o(t,n,e){return function(){return i(t,[f.now()].concat(s(arguments)),n?null:this,e),n?void 0:this}}var i=t(\"handle\"),a=t(15),s=t(16),c=t(\"ee\").get(\"tracer\"),f=t(\"loader\"),u=NREUM;\"undefined\"==typeof window.newrelic&&(newrelic=u);var d=[\"setPageViewName\",\"setCustomAttribute\",\"setErrorHandler\",\"finished\",\"addToTrace\",\"inlineHit\",\"addRelease\"],l=\"api-\",p=l+\"ixn-\";a(d,function(t,n){u[n]=o(l+n,!0,\"api\")}),u.addPageAction=o(l+\"addPageAction\",!0),u.setCurrentRouteName=o(l+\"routeName\",!0),n.exports=newrelic,u.interaction=function(){return(new r).get()};var h=r.prototype={createTracer:function(t,n){var e={},r=this,o=\"function\"==typeof n;return i(p+\"tracer\",[f.now(),t,e],r),function(){if(c.emit((o?\"\":\"no-\")+\"fn-start\",[f.now(),r,o],e),o)try{return n.apply(this,arguments)}catch(t){throw c.emit(\"fn-err\",[arguments,this,t],e),t}finally{c.emit(\"fn-end\",[f.now()],e)}}}};a(\"setName,setAttribute,save,ignore,onEnd,getContext,end,get\".split(\",\"),function(t,n){h[n]=o(p+n)}),newrelic.noticeError=function(t){\"string\"==typeof t&&(t=new Error(t)),i(\"err\",[t,f.now()])}},{}],13:[function(t,n,e){n.exports=function(t){if(\"string\"==typeof t&&t.length)return t.length;if(\"object\"==typeof t){if(\"undefined\"!=typeof ArrayBuffer&&t instanceof ArrayBuffer&&t.byteLength)return t.byteLength;if(\"undefined\"!=typeof Blob&&t instanceof Blob&&t.size)return t.size;if(!(\"undefined\"!=typeof FormData&&t instanceof FormData))try{return JSON.stringify(t).length}catch(n){return}}}},{}],14:[function(t,n,e){var r=0,o=navigator.userAgent.match(/Firefox[\\/\\s](\\d+\\.\\d+)/);o&&(r=+o[1]),n.exports=r},{}],15:[function(t,n,e){function r(t,n){var e=[],r=\"\",i=0;for(r in t)o.call(t,r)&&(e[i]=n(r,t[r]),i+=1);return e}var o=Object.prototype.hasOwnProperty;n.exports=r},{}],16:[function(t,n,e){function r(t,n,e){n||(n=0),\"undefined\"==typeof e&&(e=t?t.length:0);for(var r=-1,o=e-n||0,i=Array(o<0?0:o);++r<o;)i[r]=t[n+r];return i}n.exports=r},{}],17:[function(t,n,e){n.exports={exists:\"undefined\"!=typeof window.performance&&window.performance.timing&&\"undefined\"!=typeof window.performance.timing.navigationStart}},{}],18:[function(t,n,e){function r(t){return!(t&&t instanceof Function&&t.apply&&!t[a])}var o=t(\"ee\"),i=t(16),a=\"nr@original\",s=Object.prototype.hasOwnProperty,c=!1;n.exports=function(t,n){function e(t,n,e,o){function nrWrapper(){var r,a,s,c;try{a=this,r=i(arguments),s=\"function\"==typeof e?e(r,a):e||{}}catch(f){l([f,\"\",[r,a,o],s])}u(n+\"start\",[r,a,o],s);try{return c=t.apply(a,r)}catch(d){throw u(n+\"err\",[r,a,d],s),d}finally{u(n+\"end\",[r,a,c],s)}}return r(t)?t:(n||(n=\"\"),nrWrapper[a]=t,d(t,nrWrapper),nrWrapper)}function f(t,n,o,i){o||(o=\"\");var a,s,c,f=\"-\"===o.charAt(0);for(c=0;c<n.length;c++)s=n[c],a=t[s],r(a)||(t[s]=e(a,f?s+o:o,i,s))}function u(e,r,o){if(!c||n){var i=c;c=!0;try{t.emit(e,r,o,n)}catch(a){l([a,e,r,o])}c=i}}function d(t,n){if(Object.defineProperty&&Object.keys)try{var e=Object.keys(t);return e.forEach(function(e){Object.defineProperty(n,e,{get:function(){return t[e]},set:function(n){return t[e]=n,n}})}),n}catch(r){l([r])}for(var o in t)s.call(t,o)&&(n[o]=t[o]);return n}function l(n){try{t.emit(\"internal-error\",n)}catch(e){}}return t||(t=o),e.inPlace=f,e.flag=a,e}},{}],ee:[function(t,n,e){function r(){}function o(t){function n(t){return t&&t instanceof r?t:t?c(t,s,i):i()}function e(e,r,o,i){if(!l.aborted||i){t&&t(e,r,o);for(var a=n(o),s=h(e),c=s.length,f=0;f<c;f++)s[f].apply(a,r);var d=u[y[e]];return d&&d.push([g,e,r,a]),a}}function p(t,n){v[t]=h(t).concat(n)}function h(t){return v[t]||[]}function m(t){return d[t]=d[t]||o(e)}function w(t,n){f(t,function(t,e){n=n||\"feature\",y[e]=n,n in u||(u[n]=[])})}var v={},y={},g={on:p,emit:e,get:m,listeners:h,context:n,buffer:w,abort:a,aborted:!1};return g}function i(){return new r}function a(){(u.api||u.feature)&&(l.aborted=!0,u=l.backlog={})}var s=\"nr@context\",c=t(\"gos\"),f=t(15),u={},d={},l=n.exports=o();l.backlog=u},{}],gos:[function(t,n,e){function r(t,n,e){if(o.call(t,n))return t[n];var r=e();if(Object.defineProperty&&Object.keys)try{return Object.defineProperty(t,n,{value:r,writable:!0,enumerable:!1}),r}catch(i){}return t[n]=r,r}var o=Object.prototype.hasOwnProperty;n.exports=r},{}],handle:[function(t,n,e){function r(t,n,e,r){o.buffer([t],r),o.emit(t,n,e)}var o=t(\"ee\").get(\"handle\");n.exports=r,r.ee=o},{}],id:[function(t,n,e){function r(t){var n=typeof t;return!t||\"object\"!==n&&\"function\"!==n?-1:t===window?0:a(t,i,function(){return o++})}var o=1,i=\"nr@id\",a=t(\"gos\");n.exports=r},{}],loader:[function(t,n,e){function r(){if(!x++){var t=b.info=NREUM.info,n=l.getElementsByTagName(\"script\")[0];if(setTimeout(u.abort,3e4),!(t&&t.licenseKey&&t.applicationID&&n))return u.abort();f(y,function(n,e){t[n]||(t[n]=e)}),c(\"mark\",[\"onload\",a()+b.offset],null,\"api\");var e=l.createElement(\"script\");e.src=\"https://\"+t.agent,n.parentNode.insertBefore(e,n)}}function o(){\"complete\"===l.readyState&&i()}function i(){c(\"mark\",[\"domContent\",a()+b.offset],null,\"api\")}function a(){return E.exists&&performance.now?Math.round(performance.now()):(s=Math.max((new Date).getTime(),s))-b.offset}var s=(new Date).getTime(),c=t(\"handle\"),f=t(15),u=t(\"ee\"),d=window,l=d.document,p=\"addEventListener\",h=\"attachEvent\",m=d.XMLHttpRequest,w=m&&m.prototype;NREUM.o={ST:setTimeout,SI:d.setImmediate,CT:clearTimeout,XHR:m,REQ:d.Request,EV:d.Event,PR:d.Promise,MO:d.MutationObserver};var v=\"\"+location,y={beacon:\"bam.nr-data.net\",errorBeacon:\"bam.nr-data.net\",agent:\"js-agent.newrelic.com/nr-1071.min.js\"},g=m&&w&&w[p]&&!/CriOS/.test(navigator.userAgent),b=n.exports={offset:s,now:a,origin:v,features:{},xhrWrappable:g};t(12),l[p]?(l[p](\"DOMContentLoaded\",i,!1),d[p](\"load\",r,!1)):(l[h](\"onreadystatechange\",o),d[h](\"onload\",r)),c(\"mark\",[\"firstbyte\",s],null,\"api\");var x=0,E=t(17)},{}]},{},[\"loader\",2,10,4,3]);</script>\n"
"		<link rel=\"shortcut icon\" href=\"/chore/images/thig.ico\" type=\"image/x-icon\" />\n"
"		\n"
"		<style> body { display : none; } </style>\n"
"\n"
"		<!-- JQuery -->\n"
"		<script src=\"/static/js/jquery/jquery-1.9.1.min.js\"></script>\n"
"		\n"
"		<script src=\"/static/js/jquery/defaultGlobalAjaxSettings.js\"></script>\n"
"		<script src=\"/static/js/jquery/jquery-migrate-1.2.1.js\"></script><!-- Remove after fixing deprecation errors -->\n"
"		<!-- Bootstrap -->\n"
"		<link rel=\"stylesheet\" href=\"/static/css/bootstrap/bootstrap.min.css\"/><!-- Bootstrap -->\n"
"		<script src=\"/static/js/bootstrap/bootstrap.min.js\"></script><!-- Bootstrap -->\n"
"		<link rel=\"stylesheet\" href=\"/static/css/rpm-webapp.css\"/><!-- Legacy rpm.gsp file -->\n"
"		\n"
"		\n"
"		<meta name=\"layout\" content=\"rpm\">\n"
"	\n"
"		\n"
"		<script>\n"
"			(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':new Date().getTime(),event:'gtm.js'});\n"
"				var f=d.getElementsByTagName(s)[0],j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';\n"
"				j.async=true;\n"
"				j.src='//www.googletagmanager.com/gtm.js?id='+i+dl;\n"
"				f.parentNode.insertBefore(j,f);\n"
"			})(window,document,'script','dataLayer','GTM-5QPV');\n"
"		</script>\n"
"\n"
"	</head>\n"
"	<body style=\"visibility: hidden;\" onload=\"js_Load()\">\n"
"		<noscript><meta http-equiv=\"refresh\" content=\"0; url=/noJavascript\" /></noscript>\n"
"		\n"
"		<script language=\"JavaScript\">\n"
"			if (self == top) {\n"
"				var theBody = document.getElementsByTagName('body')[0];\n"
"				theBody.style.display = \"block\";\n"
"			} else {\n"
"				top.location = self.location;\n"
"			}\n"
"\n"
"			//function to fix FOUC issue\n"
"			function js_Load() {\n"
"				document.body.style.visibility='visible';\n"
"			};\n"
"		</script>\n"
"\n"
"		<div id=\"application-container\" class=\"container-fluid\">\n"
"				<div class=\"row-fluid portalPageHeader\">\n"
"					<div class=\"span12\">\n"
"						<!--Header content-->\n"
"						<div class=\"row\">\n"
"							<div class=\"portalHeaderleft span2\">\n"
"								&nbsp;&nbsp;\n"
"								<img src=\"/images/brand/logo-215x60.png\" id=\"thigLogo\">\n"
"							</div>\n"
"							\n"
"								\n"
"\n"
"<div class=\"portalHeaderRight portalBlueGradient span10\">\n"
"	<div class=\"pull-left\">\n"
"		<h3 id=\"product-title\">RATING &amp; POLICY MANAGEMENT</h3>\n"
"	</div>\n"
"	<div class=\"pull-right portalHeaderRightText\">\n"
"		\n"
"		\n"
"	</div>\n"
"\n"
"	<br><br>\n"
"	<!-- Top Nav -->\n"
"	\n"
"</div>\n"
"\n"
"\n"
"							\n"
"						</div>\n"
"					</div>\n"
"				</div>\n"
"\n"
"			<!-- codeblock corresponds to new jquery.portalmessage.js -->\n"
"			<script type=\"text/template\" id=\"portalErrorTemplate\">\n"
"				<div class=\"row-fluid portalErrorBlock\">\n"
"					<div id=\"{{id}}\" class=\" span12 alert {{messageClass}}\">\n"
"						<button type=\"button\" class=\"close\" data-dismiss=\"alert\">&times;</button>\n"
"						<strong><img class=\"icon {{labelIcon}}\" width=\"16\" height=\"16\" src=\"/images/ghost.gif\" />&nbsp;{{labelText}}</strong><br />\n"
"						<ul>{{messages}}</ul>\n"
"					</div>\n"
"				</div>\n"
"			</script>\n"
"			<span id=\"spnPortalErrorBlock\"></span>\n"
"\n"
"			\n"
"			\n"
"<html>\n"
"	<head>\n"
"		<title>Access Denied</title>\n"
"		<meta name=\"layout\" content=\"rpm\">\n"
"	</head>\n"
"\n"
"\n"
"\n"
"<div class=\"portalBox portalBlueGradient\">\n"
"	<h4>\n"
"		<img class=\"icon key\" width=\"16\" height=\"16\" src=\"/static/images/ghost.gif\">\n"
"		Access Denied\n"
"	</h4>\n"
"	<div style=\"text-align:center; padding: 10px; color:#fff;\">\n"
"		\n"
"			You are not authorized to view the requested resource.<br />\n"
"		\n"
"	</div>\n"
"	<div class=\"sideFormButtons\">\n"
"		<a style=\"color:#fff;text-decoration:underline;\" href=\"/\">Return to RPM</a>\n"
"	</div>\n"
"</div>\n"
"\n"
"</html>\n"
"		</div>\n"
"		\n"
"		\n"
"		\n"
"		<p class=\"portalPageFooter\">\n"
"	&copy; 2001 - 2018 &nbsp; Tower Hill Insurance Group, LLC. All rights reserved.\n"
"	<br/>\n"
"	This website contains proprietary information of Tower Hill Insurance Group, LLC and its affiliates.\n"
"	<br/>\n"
"	<br/>\n"
"	BUILD: rpm-maintenance_147_147 :: DATE: 06/12/2018 18:29:57 :: HOST: sflgnvrpm06.thig.com :: SESSION: A4303ED70370A73B84C6188436AB671B\n"
"</p>\n"
"\n"
"<!-- Javascript and CSS -->\n"
"\n"
"		<!-- Files from master branch rpm.gsp -->\n"
"		<link rel=\"stylesheet\" href=\"/static/css/icons.css\" type=\"text/css\">\n"
"\n"
"		<link rel=\"stylesheet\" href=\"/static/css/header.css\"/><!-- Legacy rpm.gsp file -->\n"
"		<link rel=\"stylesheet\" href=\"/static/css/tooltip.css\"/><!-- Legacy rpm.gsp file -->\n"
"		<link rel=\"stylesheet\" href=\"/static/css/thig.css\"/><!-- Legacy rpm.gsp file, may not be needed -->\n"
"		<link rel=\"stylesheet\" href=\"/static/css/messages.css\"/><!-- Legacy rpm.gsp file -->\n"
"		<link rel=\"stylesheet\" href=\"/static/css/modal.css\"/><!-- Legacy rpm.gsp file -->\n"
"		<link rel=\"stylesheet\" href=\"/chore/styles/new/jqModal.css\"/><!-- Legacy rpm.gsp file -->\n"
"		<link rel=\"stylesheet\" href=\"/chore/styles/jquery/jquery.tooltip.css\"/><!-- Legacy rpm.gsp file, may not be needed -->\n"
"		<link rel=\"stylesheet\" href=\"/static/css/jquery/ui/jquery-ui.css\"/><!-- JQuery Datepicker Styling -->\n"
"		\n"
"			<link rel=\"stylesheet\" href=\"/chore/styles/forms-common.css\"/><!-- Legacy rpm.gsp file -->\n"
"		\n"
"		<script src=\"/static/js/application.js\" type=\"text/javascript\"></script><!-- Legacy rpm.gsp file -->\n"
"		<script src=\"/static/js/jquery/jquery.cookie.js\" type=\"text/javascript\"></script><!-- Legacy rpm.gsp file -->\n"
"		<script src=\"/static/js/jquery/jquery.datepicker.js\"></script><!-- JQuery Datepicker -->\n"
"		<script src=\"/static/js/jquery/jquery.debounce.js\"></script><!-- JQuery Datepicker -->\n"
"		<script src=\"/static/js/jquery/jquery.portalmessage.js\" type=\"text/javascript\"></script><!-- New Error Message display -->\n"
"		<script src=\"/static/js/jquery/jqModal.js\" type=\"text/javascript\"></script><!-- Legacy rpm.gsp file -->\n"
"		<script src=\"/static/js/jquery/jquery.tooltip.js\" type=\"text/javascript\"></script>\n"
"		<script src=\"/static/js/jquery/jquery.livequery.js\" type=\"text/javascript\"></script><!-- Legacy rpm.gsp file -->\n"
"		<script src=\"/static/js/shared/datePickerCustomization.js\"></script><!-- Added Fixes styling --><!-- JQuery Datepicker -->\n"
"		<script src=\"/static/js/jquery/jquery.formatdate.js\"></script><!-- JQuery Datepicker -->\n"
"		<script src=\"/static/js/grails-global-nav.js\" type=\"text/javascript\"></script><!-- Legacy rpm.gsp file -->\n"
"		<!-- End files from master branch rpm.gsp -->\n"
"		<script src=\"/js/typeahead/typeahead.bundle.js\" type=\"text/javascript\"></script>\r\n"
"\n"
"\n"
"		<!-- Context Nav -->\n"
"		\n"
"		<!-- Thig Bootstrap Base -->\n"
"		<!-- RPM Legacy Styles -->\n"
"		<link rel=\"stylesheet\" href=\"/static/css/app.css\"/><!-- RPM Legacy Styles -->\n"
"		<link rel=\"stylesheet\" href=\"/static/css/brand.css\"/><!-- RPM Legacy Styles -->\n"
"		<!-- Portal_Bootstrap stuff -->\n"
"		<link rel=\"stylesheet\" href=\"/static/css/bootstrap-customization.css\" type=\"text/css\"><!-- Portal_Bootstrap stuff -->\n"
"		<link rel=\"stylesheet\" href=\"/static/css/bootstrap-portal.css\" type=\"text/css\"><!-- Portal_Bootstrap stuff -->\n"
"\n"
"		\n"
"		<!-- Search Component -->\n"
"		\n"
"			<script src=\"/static/js/search/attachSearch.js\" type=\"text/javascript\"></script>\n"
"		\n"
"\n"
"		\n"
"<script type=\"text/javascript\">window.NREUM||(NREUM={});NREUM.info={\"errorBeacon\":\"bam.nr-data.net\",\"licenseKey\":\"923278f1d0\",\"agent\":\"\",\"beacon\":\"bam.nr-data.net\",\"applicationTime\":7,\"applicationID\":\"907165\",\"transactionName\":\"NVBQYUUCCBEAWkxQDQwacUBEFwkPTlpQVhAHGhg=\",\"queueTime\":0}</script>\n"
"\n"
"	</body>\n"
"</html>\n";

char *pattern="BUILD: rpm-.{3,50} :: DATE: ..\\/..\\/.... .{12}";

/* -*- Mode:C; Coding:us-ascii-unix; fill-column:132 -*- */
/**********************************************************************************************************************************/
/**
   @file      pcre_example.c
   @author    Mitch Richling <https://www.mitchr.me/>
   @Copyright Copyright 1994,1998 by Mitch Richling.  All rights reserved.
   @brief     UNIX regex tools@EOL
   @Keywords  UNIX regular expressions regex perl pcre
   @Std       ISOC POSIX.2 (IEEE Std 103.2) BSD4.3 
   @Tested    
              - Solaris 2.8
              - MacOS X.2
              - Linux (RH 7.3)

   This is an example program intended to illustrate very basic use of the PCRE regular expression library.  PCRE is NOT part of any
   UNIX or language standard; however, it is commonly found on UNIX systems today, and it has a compatibility mode that supports the
   standard interfaces.

   The vast irregularities found in various UNIX favors with regard to regular expression support can make using regular expressions
   frustrating.  It can be less difficult, and safer, to simply carry around a regular expression library with you!  PCRE is by far
   the most popular, "alternate", regular expression library available today.  It makes a fine choice for the budding UNIX
   programmer unwilling to explore the vulgarities of some operating system vendor's regular expression library.  If you are a C++
   programmer, another good alternative may be found as part of the BOOST library.

   Note: This program is very similar to the regex_example.c example found in this directory.
***********************************************************************************************************************************/

#include <pcre.h>               /* PCRE lib        NONE  */
#include <stdio.h>              /* I/O lib         C89   */
#include <stdlib.h>             /* Standard Lib    C89   */
#include <string.h>             /* Strings         C89   */

/**********************************************************************************************************************************/
int main(int argc, char *argv[]) {
  pcre *reCompiled;
  pcre_extra *pcreExtra;
  int pcreExecRet;
  int subStrVec[30];
  const char *pcreErrorStr;
  int pcreErrorOffset;
  char *aStrRegex;
//  char **aLineToMatch;
  const char *psubStrMatchStr;
  int j;
  unsigned loop_count = 100000;
  unsigned iter;

  aStrRegex = pattern;
  printf("Regex to use: %s\n", aStrRegex);

  // First, the regex string must be compiled.
  reCompiled = pcre_compile(aStrRegex, 0, &pcreErrorStr, &pcreErrorOffset, NULL);

  /* OPTIONS (second argument) (||'ed together) can be:
       PCRE_ANCHORED       -- Like adding ^ at start of pattern.
       PCRE_CASELESS       -- Like m//i
       PCRE_DOLLAR_ENDONLY -- Make $ match end of string regardless of \n's
                              No Perl equivalent.
       PCRE_DOTALL         -- Makes . match newlins too.  Like m//s
       PCRE_EXTENDED       -- Like m//x
       PCRE_EXTRA          -- 
       PCRE_MULTILINE      -- Like m//m
       PCRE_UNGREEDY       -- Set quantifiers to be ungreedy.  Individual quantifiers
                              may be set to be greedy if they are followed by "?".
       PCRE_UTF8           -- Work with UTF8 strings.
  */

  // pcre_compile returns NULL on error, and sets pcreErrorOffset & pcreErrorStr
  if(reCompiled == NULL) {
    printf("ERROR: Could not compile '%s': %s\n", aStrRegex, pcreErrorStr);
    exit(1);
  } /* end if */

  // Optimize the regex
  pcreExtra = pcre_study(reCompiled, PCRE_STUDY_JIT_COMPILE, &pcreErrorStr);

  /* pcre_study() returns NULL for both errors and when it can not optimize the regex.  The last argument is how one checks for
     errors (it is NULL if everything works, and points to an error string otherwise. */
  if(pcreErrorStr != NULL) {
    printf("ERROR: Could not study '%s': %s\n", aStrRegex, pcreErrorStr);
    exit(1);
  } /* end if */

  struct timeval start_time, end_time;
  gettimeofday(&start_time, NULL);

  for (iter = 0; iter < loop_count; iter++) {
    /* Try to find the regex in aLineToMatch, and report results. */
    pcreExecRet = pcre_exec(reCompiled,
                            pcreExtra,
                            page, 
                            strlen(page),  // length of string
                            0,                      // Start looking at this point
                            0,                      // OPTIONS
                            subStrVec,
                            30);                    // Length of subStrVec

    /* pcre_exec OPTIONS (||'ed together) can be:
       PCRE_ANCHORED -- can be turned on at this time.
       PCRE_NOTBOL
       PCRE_NOTEOL
       PCRE_NOTEMPTY */

    // Report what happened in the pcre_exec call..
    //printf("pcre_exec return: %d\n", pcreExecRet);
    if(pcreExecRet < 0) { // Something bad happened..
      switch(pcreExecRet) {
      case PCRE_ERROR_NOMATCH      : printf("String did not match the pattern\n");        break;
      case PCRE_ERROR_NULL         : printf("Something was null\n");                      break;
      case PCRE_ERROR_BADOPTION    : printf("A bad option was passed\n");                 break;
      case PCRE_ERROR_BADMAGIC     : printf("Magic number bad (compiled re corrupt?)\n"); break;
      case PCRE_ERROR_UNKNOWN_NODE : printf("Something kooky in the compiled re\n");      break;
      case PCRE_ERROR_NOMEMORY     : printf("Ran out of memory\n");                       break;
      default                      : printf("Unknown error\n");                           break;
      } /* end switch */
    } else {
if (iter == loop_count - 1)
      printf("Result: We have a match!\n");
        
      // At this point, rc contains the number of substring matches found...
      if(pcreExecRet == 0) {
        printf("But too many substrings were found to fit in subStrVec!\n");
        // Set rc to the max number of substring matches possible.
        pcreExecRet = 30 / 3;
      } /* end if */

      // Do it yourself way to get the first substring match (whole pattern):
      // char subStrMatchStr[1024];
      // int i, j
      // for(j=0,i=subStrVec[0];i<subStrVec[1];i++,j++) 
      //   subStrMatchStr[j] = (*aLineToMatch)[i];
      // subStrMatchStr[subStrVec[1]-subStrVec[0]] = 0;
      //printf("MATCHED SUBSTRING: '%s'\n", subStrMatchStr);
        
if (iter == loop_count - 1) {
      // PCRE contains a handy function to do the above for you:
      for(j=0; j<pcreExecRet; j++) {
        pcre_get_substring(page, subStrVec, pcreExecRet, j, &(psubStrMatchStr));
//        printf("Match(%2d/%2d): (%2d,%2d): '%s'\n", j, pcreExecRet-1, subStrVec[j*2], subStrVec[j*2+1], psubStrMatchStr);
      } /* end for */
//}
        
      // Free up the substring
      pcre_free_substring(psubStrMatchStr);
}
    }  /* end if/else */
if (iter == loop_count - 1)
    printf("\n");
  }
      
  gettimeofday(&end_time, NULL);
  unsigned durn = (end_time.tv_sec - start_time.tv_sec) * 1000000 + end_time.tv_usec - start_time.tv_usec;
  printf("pcre took %u usecs for %u loops\n", durn, loop_count);

  // Free up the regular expression.
  pcre_free(reCompiled);
      
  // Free up the EXTRA PCRE value (may be NULL at this point)
  if(pcreExtra != NULL) {
#ifdef PCRE_CONFIG_JIT
    pcre_free_study(pcreExtra);
#else
    pcre_free(pcreExtra);
#endif
  }

  // We are all done..
  return 0;

} /* end func main */


