#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_CutInt
#include <zpp_nape/geom/ZPP_CutInt.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_CutVert
#include <zpp_nape/geom/ZPP_CutVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_CutInt_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_CutInt","new",0x023ba6b5,"zpp_nape.geom.ZPP_CutInt.new","zpp_nape/geom/Cutter.hx",247,0x9f85878e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(279)
	this->path1 = null();
	HX_STACK_LINE(278)
	this->start = null();
	HX_STACK_LINE(277)
	this->end = null();
	HX_STACK_LINE(276)
	this->path0 = null();
	HX_STACK_LINE(275)
	this->vertex = false;
	HX_STACK_LINE(274)
	this->virtualint = false;
	HX_STACK_LINE(273)
	this->time = 0.0;
	HX_STACK_LINE(248)
	this->next = null();
}
;
	return null();
}

//ZPP_CutInt_obj::~ZPP_CutInt_obj() { }

Dynamic ZPP_CutInt_obj::__CreateEmpty() { return  new ZPP_CutInt_obj; }
hx::ObjectPtr< ZPP_CutInt_obj > ZPP_CutInt_obj::__new()
{  hx::ObjectPtr< ZPP_CutInt_obj > result = new ZPP_CutInt_obj();
	result->__construct();
	return result;}

Dynamic ZPP_CutInt_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_CutInt_obj > result = new ZPP_CutInt_obj();
	result->__construct();
	return result;}

Void ZPP_CutInt_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_CutInt","alloc",0x4ddd7a0a,"zpp_nape.geom.ZPP_CutInt.alloc","zpp_nape/geom/Cutter.hx",283,0x9f85878e)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CutInt_obj,alloc,(void))

Void ZPP_CutInt_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_CutInt","free",0xecb650b7,"zpp_nape.geom.ZPP_CutInt.free","zpp_nape/geom/Cutter.hx",286,0x9f85878e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(287)
		::zpp_nape::geom::ZPP_GeomVert _g = this->start = null();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(287)
		this->end = _g;
		HX_STACK_LINE(288)
		::zpp_nape::geom::ZPP_CutVert _g1 = this->path1 = null();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(288)
		this->path0 = _g1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CutInt_obj,free,(void))

::zpp_nape::geom::ZPP_CutInt ZPP_CutInt_obj::zpp_pool;

::zpp_nape::geom::ZPP_CutInt ZPP_CutInt_obj::get( Float time,::zpp_nape::geom::ZPP_GeomVert end,::zpp_nape::geom::ZPP_GeomVert start,::zpp_nape::geom::ZPP_CutVert path0,::zpp_nape::geom::ZPP_CutVert path1,hx::Null< bool >  __o_virtualint,hx::Null< bool >  __o_vertex){
bool virtualint = __o_virtualint.Default(false);
bool vertex = __o_vertex.Default(false);
	HX_STACK_FRAME("zpp_nape.geom.ZPP_CutInt","get",0x023656eb,"zpp_nape.geom.ZPP_CutInt.get","zpp_nape/geom/Cutter.hx",291,0x9f85878e)
	HX_STACK_ARG(time,"time")
	HX_STACK_ARG(end,"end")
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(path0,"path0")
	HX_STACK_ARG(path1,"path1")
	HX_STACK_ARG(virtualint,"virtualint")
	HX_STACK_ARG(vertex,"vertex")
{
		HX_STACK_LINE(292)
		::zpp_nape::geom::ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(293)
		{
			HX_STACK_LINE(294)
			if (((::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool == null()))){
				HX_STACK_LINE(295)
				::zpp_nape::geom::ZPP_CutInt _g = ::zpp_nape::geom::ZPP_CutInt_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(295)
				ret = _g;
			}
			else{
				HX_STACK_LINE(301)
				ret = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;
				HX_STACK_LINE(302)
				::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool = ret->next;
				HX_STACK_LINE(303)
				ret->next = null();
			}
			HX_STACK_LINE(308)
			Dynamic();
		}
		HX_STACK_LINE(310)
		ret->virtualint = virtualint;
		HX_STACK_LINE(311)
		ret->end = end;
		HX_STACK_LINE(312)
		ret->start = start;
		HX_STACK_LINE(313)
		ret->path0 = path0;
		HX_STACK_LINE(314)
		ret->path1 = path1;
		HX_STACK_LINE(315)
		ret->time = time;
		HX_STACK_LINE(316)
		ret->vertex = vertex;
		HX_STACK_LINE(317)
		return ret;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(ZPP_CutInt_obj,get,return )


ZPP_CutInt_obj::ZPP_CutInt_obj()
{
}

void ZPP_CutInt_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_CutInt);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(virtualint,"virtualint");
	HX_MARK_MEMBER_NAME(vertex,"vertex");
	HX_MARK_MEMBER_NAME(path0,"path0");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(path1,"path1");
	HX_MARK_END_CLASS();
}

void ZPP_CutInt_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(virtualint,"virtualint");
	HX_VISIT_MEMBER_NAME(vertex,"vertex");
	HX_VISIT_MEMBER_NAME(path0,"path0");
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(path1,"path1");
}

Dynamic ZPP_CutInt_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"end") ) { return end; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"path0") ) { return path0; }
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
		if (HX_FIELD_EQ(inName,"path1") ) { return path1; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"vertex") ) { return vertex; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"virtualint") ) { return virtualint; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_CutInt_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< ::zpp_nape::geom::ZPP_GeomVert >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_CutInt >(); return inValue; }
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"path0") ) { path0=inValue.Cast< ::zpp_nape::geom::ZPP_CutVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< ::zpp_nape::geom::ZPP_GeomVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"path1") ) { path1=inValue.Cast< ::zpp_nape::geom::ZPP_CutVert >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"vertex") ) { vertex=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::geom::ZPP_CutInt >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"virtualint") ) { virtualint=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_CutInt_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("time"));
	outFields->push(HX_CSTRING("virtualint"));
	outFields->push(HX_CSTRING("vertex"));
	outFields->push(HX_CSTRING("path0"));
	outFields->push(HX_CSTRING("end"));
	outFields->push(HX_CSTRING("start"));
	outFields->push(HX_CSTRING("path1"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("get"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_CutInt*/ ,(int)offsetof(ZPP_CutInt_obj,next),HX_CSTRING("next")},
	{hx::fsFloat,(int)offsetof(ZPP_CutInt_obj,time),HX_CSTRING("time")},
	{hx::fsBool,(int)offsetof(ZPP_CutInt_obj,virtualint),HX_CSTRING("virtualint")},
	{hx::fsBool,(int)offsetof(ZPP_CutInt_obj,vertex),HX_CSTRING("vertex")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_CutVert*/ ,(int)offsetof(ZPP_CutInt_obj,path0),HX_CSTRING("path0")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_GeomVert*/ ,(int)offsetof(ZPP_CutInt_obj,end),HX_CSTRING("end")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_GeomVert*/ ,(int)offsetof(ZPP_CutInt_obj,start),HX_CSTRING("start")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_CutVert*/ ,(int)offsetof(ZPP_CutInt_obj,path1),HX_CSTRING("path1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("next"),
	HX_CSTRING("time"),
	HX_CSTRING("virtualint"),
	HX_CSTRING("vertex"),
	HX_CSTRING("path0"),
	HX_CSTRING("end"),
	HX_CSTRING("start"),
	HX_CSTRING("path1"),
	HX_CSTRING("alloc"),
	HX_CSTRING("free"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_CutInt_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_CutInt_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_CutInt_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_CutInt_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZPP_CutInt_obj::__mClass;

void ZPP_CutInt_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_CutInt"), hx::TCanCast< ZPP_CutInt_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void ZPP_CutInt_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
