#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPNode_ZPP_Arbiter_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_Arbiter","new",0x9e9acdea,"zpp_nape.util.ZNPNode_ZPP_Arbiter.new","zpp_nape/util/Lists.hx",15029,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15063)
	this->elt = null();
	HX_STACK_LINE(15054)
	this->next = null();
}
;
	return null();
}

//ZNPNode_ZPP_Arbiter_obj::~ZNPNode_ZPP_Arbiter_obj() { }

Dynamic ZNPNode_ZPP_Arbiter_obj::__CreateEmpty() { return  new ZNPNode_ZPP_Arbiter_obj; }
hx::ObjectPtr< ZNPNode_ZPP_Arbiter_obj > ZNPNode_ZPP_Arbiter_obj::__new()
{  hx::ObjectPtr< ZNPNode_ZPP_Arbiter_obj > result = new ZNPNode_ZPP_Arbiter_obj();
	result->__construct();
	return result;}

Dynamic ZNPNode_ZPP_Arbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPNode_ZPP_Arbiter_obj > result = new ZNPNode_ZPP_Arbiter_obj();
	result->__construct();
	return result;}

Void ZNPNode_ZPP_Arbiter_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_Arbiter","alloc",0x1dbc987f,"zpp_nape.util.ZNPNode_ZPP_Arbiter.alloc","zpp_nape/util/Lists.hx",15057,0x9f4e6754)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_Arbiter_obj,alloc,(void))

Void ZNPNode_ZPP_Arbiter_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_Arbiter","free",0x239977e2,"zpp_nape.util.ZNPNode_ZPP_Arbiter.free","zpp_nape/util/Lists.hx",15061,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(15061)
		this->elt = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_Arbiter_obj,free,(void))

::zpp_nape::dynamics::ZPP_Arbiter ZNPNode_ZPP_Arbiter_obj::elem( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_Arbiter","elem",0x22ebb3c5,"zpp_nape.util.ZNPNode_ZPP_Arbiter.elem","zpp_nape/util/Lists.hx",15068,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(15068)
	return this->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_Arbiter_obj,elem,return )

::zpp_nape::util::ZNPNode_ZPP_Arbiter ZNPNode_ZPP_Arbiter_obj::zpp_pool;


ZNPNode_ZPP_Arbiter_obj::ZNPNode_ZPP_Arbiter_obj()
{
}

void ZNPNode_ZPP_Arbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPNode_ZPP_Arbiter);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(elt,"elt");
	HX_MARK_END_CLASS();
}

void ZNPNode_ZPP_Arbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(elt,"elt");
}

Dynamic ZNPNode_ZPP_Arbiter_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPNode_ZPP_Arbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { elt=inValue.Cast< ::zpp_nape::dynamics::ZPP_Arbiter >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Arbiter >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Arbiter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZNPNode_ZPP_Arbiter_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_Arbiter*/ ,(int)offsetof(ZNPNode_ZPP_Arbiter_obj,next),HX_CSTRING("next")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_Arbiter*/ ,(int)offsetof(ZNPNode_ZPP_Arbiter_obj,elt),HX_CSTRING("elt")},
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
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_Arbiter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_Arbiter_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_Arbiter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_Arbiter_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZNPNode_ZPP_Arbiter_obj::__mClass;

void ZNPNode_ZPP_Arbiter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPNode_ZPP_Arbiter"), hx::TCanCast< ZNPNode_ZPP_Arbiter_obj> ,sStaticFields,sMemberFields,
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

void ZNPNode_ZPP_Arbiter_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
