#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionedPoly
#include <zpp_nape/geom/ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_PartitionedPoly
#include <zpp_nape/util/ZNPNode_ZPP_PartitionedPoly.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPNode_ZPP_PartitionedPoly_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_PartitionedPoly","new",0x336296b6,"zpp_nape.util.ZNPNode_ZPP_PartitionedPoly.new","zpp_nape/util/Lists.hx",15459,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15493)
	this->elt = null();
	HX_STACK_LINE(15484)
	this->next = null();
}
;
	return null();
}

//ZNPNode_ZPP_PartitionedPoly_obj::~ZNPNode_ZPP_PartitionedPoly_obj() { }

Dynamic ZNPNode_ZPP_PartitionedPoly_obj::__CreateEmpty() { return  new ZNPNode_ZPP_PartitionedPoly_obj; }
hx::ObjectPtr< ZNPNode_ZPP_PartitionedPoly_obj > ZNPNode_ZPP_PartitionedPoly_obj::__new()
{  hx::ObjectPtr< ZNPNode_ZPP_PartitionedPoly_obj > result = new ZNPNode_ZPP_PartitionedPoly_obj();
	result->__construct();
	return result;}

Dynamic ZNPNode_ZPP_PartitionedPoly_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPNode_ZPP_PartitionedPoly_obj > result = new ZNPNode_ZPP_PartitionedPoly_obj();
	result->__construct();
	return result;}

Void ZNPNode_ZPP_PartitionedPoly_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_PartitionedPoly","alloc",0x4aa12c4b,"zpp_nape.util.ZNPNode_ZPP_PartitionedPoly.alloc","zpp_nape/util/Lists.hx",15487,0x9f4e6754)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_PartitionedPoly_obj,alloc,(void))

Void ZNPNode_ZPP_PartitionedPoly_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_PartitionedPoly","free",0xbda16196,"zpp_nape.util.ZNPNode_ZPP_PartitionedPoly.free","zpp_nape/util/Lists.hx",15491,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(15491)
		this->elt = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_PartitionedPoly_obj,free,(void))

::zpp_nape::geom::ZPP_PartitionedPoly ZNPNode_ZPP_PartitionedPoly_obj::elem( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_PartitionedPoly","elem",0xbcf39d79,"zpp_nape.util.ZNPNode_ZPP_PartitionedPoly.elem","zpp_nape/util/Lists.hx",15498,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(15498)
	return this->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_PartitionedPoly_obj,elem,return )

::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;


ZNPNode_ZPP_PartitionedPoly_obj::ZNPNode_ZPP_PartitionedPoly_obj()
{
}

void ZNPNode_ZPP_PartitionedPoly_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPNode_ZPP_PartitionedPoly);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(elt,"elt");
	HX_MARK_END_CLASS();
}

void ZNPNode_ZPP_PartitionedPoly_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(elt,"elt");
}

Dynamic ZNPNode_ZPP_PartitionedPoly_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPNode_ZPP_PartitionedPoly_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { elt=inValue.Cast< ::zpp_nape::geom::ZPP_PartitionedPoly >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZNPNode_ZPP_PartitionedPoly_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly*/ ,(int)offsetof(ZNPNode_ZPP_PartitionedPoly_obj,next),HX_CSTRING("next")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_PartitionedPoly*/ ,(int)offsetof(ZNPNode_ZPP_PartitionedPoly_obj,elt),HX_CSTRING("elt")},
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
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_PartitionedPoly_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_PartitionedPoly_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZNPNode_ZPP_PartitionedPoly_obj::__mClass;

void ZNPNode_ZPP_PartitionedPoly_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPNode_ZPP_PartitionedPoly"), hx::TCanCast< ZNPNode_ZPP_PartitionedPoly_obj> ,sStaticFields,sMemberFields,
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

void ZNPNode_ZPP_PartitionedPoly_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
