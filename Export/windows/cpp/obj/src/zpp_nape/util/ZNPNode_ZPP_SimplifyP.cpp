#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyP
#include <zpp_nape/geom/ZPP_SimplifyP.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimplifyP
#include <zpp_nape/util/ZNPNode_ZPP_SimplifyP.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPNode_ZPP_SimplifyP_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_SimplifyP","new",0xe559d7e8,"zpp_nape.util.ZNPNode_ZPP_SimplifyP.new","zpp_nape/util/Lists.hx",15502,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15536)
	this->elt = null();
	HX_STACK_LINE(15527)
	this->next = null();
}
;
	return null();
}

//ZNPNode_ZPP_SimplifyP_obj::~ZNPNode_ZPP_SimplifyP_obj() { }

Dynamic ZNPNode_ZPP_SimplifyP_obj::__CreateEmpty() { return  new ZNPNode_ZPP_SimplifyP_obj; }
hx::ObjectPtr< ZNPNode_ZPP_SimplifyP_obj > ZNPNode_ZPP_SimplifyP_obj::__new()
{  hx::ObjectPtr< ZNPNode_ZPP_SimplifyP_obj > result = new ZNPNode_ZPP_SimplifyP_obj();
	result->__construct();
	return result;}

Dynamic ZNPNode_ZPP_SimplifyP_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPNode_ZPP_SimplifyP_obj > result = new ZNPNode_ZPP_SimplifyP_obj();
	result->__construct();
	return result;}

Void ZNPNode_ZPP_SimplifyP_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_SimplifyP","alloc",0xd9d09dfd,"zpp_nape.util.ZNPNode_ZPP_SimplifyP.alloc","zpp_nape/util/Lists.hx",15530,0x9f4e6754)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_SimplifyP_obj,alloc,(void))

Void ZNPNode_ZPP_SimplifyP_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_SimplifyP","free",0xc4032c24,"zpp_nape.util.ZNPNode_ZPP_SimplifyP.free","zpp_nape/util/Lists.hx",15534,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(15534)
		this->elt = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_SimplifyP_obj,free,(void))

::zpp_nape::geom::ZPP_SimplifyP ZNPNode_ZPP_SimplifyP_obj::elem( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPNode_ZPP_SimplifyP","elem",0xc3556807,"zpp_nape.util.ZNPNode_ZPP_SimplifyP.elem","zpp_nape/util/Lists.hx",15541,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(15541)
	return this->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_SimplifyP_obj,elem,return )

::zpp_nape::util::ZNPNode_ZPP_SimplifyP ZNPNode_ZPP_SimplifyP_obj::zpp_pool;


ZNPNode_ZPP_SimplifyP_obj::ZNPNode_ZPP_SimplifyP_obj()
{
}

void ZNPNode_ZPP_SimplifyP_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPNode_ZPP_SimplifyP);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(elt,"elt");
	HX_MARK_END_CLASS();
}

void ZNPNode_ZPP_SimplifyP_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(elt,"elt");
}

Dynamic ZNPNode_ZPP_SimplifyP_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPNode_ZPP_SimplifyP_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { elt=inValue.Cast< ::zpp_nape::geom::ZPP_SimplifyP >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_SimplifyP >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_SimplifyP >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZNPNode_ZPP_SimplifyP_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_SimplifyP*/ ,(int)offsetof(ZNPNode_ZPP_SimplifyP_obj,next),HX_CSTRING("next")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimplifyP*/ ,(int)offsetof(ZNPNode_ZPP_SimplifyP_obj,elt),HX_CSTRING("elt")},
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
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_SimplifyP_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_SimplifyP_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_SimplifyP_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_SimplifyP_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZNPNode_ZPP_SimplifyP_obj::__mClass;

void ZNPNode_ZPP_SimplifyP_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPNode_ZPP_SimplifyP"), hx::TCanCast< ZNPNode_ZPP_SimplifyP_obj> ,sStaticFields,sMemberFields,
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

void ZNPNode_ZPP_SimplifyP_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
