#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_FluidArbiter
#include <zpp_nape/util/ZNPNode_ZPP_FluidArbiter.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPNode_ZPP_FluidArbiter_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_FluidArbiter","new",0x44172482,"zpp_nape.util.ZNPNode_ZPP_FluidArbiter.new","zpp_nape/util/Lists.hx",15975,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16009)
	this->elt = null();
	HX_STACK_LINE(16000)
	this->next = null();
}
;
	return null();
}

//ZNPNode_ZPP_FluidArbiter_obj::~ZNPNode_ZPP_FluidArbiter_obj() { }

Dynamic ZNPNode_ZPP_FluidArbiter_obj::__CreateEmpty() { return  new ZNPNode_ZPP_FluidArbiter_obj; }
hx::ObjectPtr< ZNPNode_ZPP_FluidArbiter_obj > ZNPNode_ZPP_FluidArbiter_obj::__new()
{  hx::ObjectPtr< ZNPNode_ZPP_FluidArbiter_obj > result = new ZNPNode_ZPP_FluidArbiter_obj();
	result->__construct();
	return result;}

Dynamic ZNPNode_ZPP_FluidArbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPNode_ZPP_FluidArbiter_obj > result = new ZNPNode_ZPP_FluidArbiter_obj();
	result->__construct();
	return result;}

Void ZNPNode_ZPP_FluidArbiter_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_FluidArbiter","alloc",0x5bedc517,"zpp_nape.util.ZNPNode_ZPP_FluidArbiter.alloc","zpp_nape/util/Lists.hx",16003,0x9f4e6754)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_FluidArbiter_obj,alloc,(void))

Void ZNPNode_ZPP_FluidArbiter_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_FluidArbiter","free",0x4ae8e64a,"zpp_nape.util.ZNPNode_ZPP_FluidArbiter.free","zpp_nape/util/Lists.hx",16007,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16007)
		this->elt = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_FluidArbiter_obj,free,(void))

::zpp_nape::dynamics::ZPP_FluidArbiter ZNPNode_ZPP_FluidArbiter_obj::elem( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_FluidArbiter","elem",0x4a3b222d,"zpp_nape.util.ZNPNode_ZPP_FluidArbiter.elem","zpp_nape/util/Lists.hx",16014,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16014)
	return this->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_FluidArbiter_obj,elem,return )

::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;


ZNPNode_ZPP_FluidArbiter_obj::ZNPNode_ZPP_FluidArbiter_obj()
{
}

void ZNPNode_ZPP_FluidArbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPNode_ZPP_FluidArbiter);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(elt,"elt");
	HX_MARK_END_CLASS();
}

void ZNPNode_ZPP_FluidArbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(elt,"elt");
}

Dynamic ZNPNode_ZPP_FluidArbiter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { return elt; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"elem") ) { return elem_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZNPNode_ZPP_FluidArbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { elt=inValue.Cast< ::zpp_nape::dynamics::ZPP_FluidArbiter >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZNPNode_ZPP_FluidArbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("elt"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_FluidArbiter*/ ,(int)offsetof(ZNPNode_ZPP_FluidArbiter_obj,next),HX_CSTRING("next")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_FluidArbiter*/ ,(int)offsetof(ZNPNode_ZPP_FluidArbiter_obj,elt),HX_CSTRING("elt")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("next"),
	HX_CSTRING("alloc"),
	HX_CSTRING("free"),
	HX_CSTRING("elt"),
	HX_CSTRING("elem"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_FluidArbiter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_FluidArbiter_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_FluidArbiter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_FluidArbiter_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZNPNode_ZPP_FluidArbiter_obj::__mClass;

void ZNPNode_ZPP_FluidArbiter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPNode_ZPP_FluidArbiter"), hx::TCanCast< ZNPNode_ZPP_FluidArbiter_obj> ,sStaticFields,sMemberFields,
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

void ZNPNode_ZPP_FluidArbiter_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
