#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Island
#include <zpp_nape/space/ZPP_Island.h>
#endif
namespace zpp_nape{
namespace space{

Void ZPP_Component_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.space.ZPP_Component","new",0x39464721,"zpp_nape.space.ZPP_Component.new","zpp_nape/space/Space.hx",579,0x2b65ed03)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(613)
	this->woken = false;
	HX_STACK_LINE(612)
	this->waket = (int)0;
	HX_STACK_LINE(611)
	this->sleeping = false;
	HX_STACK_LINE(610)
	this->island = null();
	HX_STACK_LINE(609)
	this->constraint = null();
	HX_STACK_LINE(608)
	this->body = null();
	HX_STACK_LINE(607)
	this->isBody = false;
	HX_STACK_LINE(606)
	this->rank = (int)0;
	HX_STACK_LINE(605)
	this->parent = null();
	HX_STACK_LINE(580)
	this->next = null();
	HX_STACK_LINE(632)
	{
		HX_STACK_LINE(632)
		this->sleeping = false;
		HX_STACK_LINE(632)
		this->island = null();
		HX_STACK_LINE(632)
		this->parent = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(632)
		this->rank = (int)0;
	}
	HX_STACK_LINE(633)
	this->woken = false;
}
;
	return null();
}

//ZPP_Component_obj::~ZPP_Component_obj() { }

Dynamic ZPP_Component_obj::__CreateEmpty() { return  new ZPP_Component_obj; }
hx::ObjectPtr< ZPP_Component_obj > ZPP_Component_obj::__new()
{  hx::ObjectPtr< ZPP_Component_obj > result = new ZPP_Component_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Component_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Component_obj > result = new ZPP_Component_obj();
	result->__construct();
	return result;}

Void ZPP_Component_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Component","free",0xdef80ecb,"zpp_nape.space.ZPP_Component.free","zpp_nape/space/Space.hx",616,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(617)
		this->body = null();
		HX_STACK_LINE(618)
		this->constraint = null();
		HX_STACK_LINE(619)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Component_obj,free,(void))

Void ZPP_Component_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Component","alloc",0x55220d76,"zpp_nape.space.ZPP_Component.alloc","zpp_nape/space/Space.hx",630,0x2b65ed03)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Component_obj,alloc,(void))

Void ZPP_Component_obj::reset( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_Component","reset",0x1a56b2d0,"zpp_nape.space.ZPP_Component.reset","zpp_nape/space/Space.hx",637,0x2b65ed03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(638)
		this->sleeping = false;
		HX_STACK_LINE(639)
		this->island = null();
		HX_STACK_LINE(640)
		this->parent = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(641)
		this->rank = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Component_obj,reset,(void))

::zpp_nape::space::ZPP_Component ZPP_Component_obj::zpp_pool;


ZPP_Component_obj::ZPP_Component_obj()
{
}

void ZPP_Component_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Component);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(rank,"rank");
	HX_MARK_MEMBER_NAME(isBody,"isBody");
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_MEMBER_NAME(constraint,"constraint");
	HX_MARK_MEMBER_NAME(island,"island");
	HX_MARK_MEMBER_NAME(sleeping,"sleeping");
	HX_MARK_MEMBER_NAME(waket,"waket");
	HX_MARK_MEMBER_NAME(woken,"woken");
	HX_MARK_END_CLASS();
}

void ZPP_Component_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(rank,"rank");
	HX_VISIT_MEMBER_NAME(isBody,"isBody");
	HX_VISIT_MEMBER_NAME(body,"body");
	HX_VISIT_MEMBER_NAME(constraint,"constraint");
	HX_VISIT_MEMBER_NAME(island,"island");
	HX_VISIT_MEMBER_NAME(sleeping,"sleeping");
	HX_VISIT_MEMBER_NAME(waket,"waket");
	HX_VISIT_MEMBER_NAME(woken,"woken");
}

Dynamic ZPP_Component_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"rank") ) { return rank; }
		if (HX_FIELD_EQ(inName,"body") ) { return body; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"waket") ) { return waket; }
		if (HX_FIELD_EQ(inName,"woken") ) { return woken; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"isBody") ) { return isBody; }
		if (HX_FIELD_EQ(inName,"island") ) { return island; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"sleeping") ) { return sleeping; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"constraint") ) { return constraint; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Component_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::space::ZPP_Component >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rank") ) { rank=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"waket") ) { waket=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"woken") ) { woken=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::space::ZPP_Component >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isBody") ) { isBody=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"island") ) { island=inValue.Cast< ::zpp_nape::space::ZPP_Island >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::space::ZPP_Component >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sleeping") ) { sleeping=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"constraint") ) { constraint=inValue.Cast< ::zpp_nape::constraint::ZPP_Constraint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Component_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("rank"));
	outFields->push(HX_CSTRING("isBody"));
	outFields->push(HX_CSTRING("body"));
	outFields->push(HX_CSTRING("constraint"));
	outFields->push(HX_CSTRING("island"));
	outFields->push(HX_CSTRING("sleeping"));
	outFields->push(HX_CSTRING("waket"));
	outFields->push(HX_CSTRING("woken"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::space::ZPP_Component*/ ,(int)offsetof(ZPP_Component_obj,next),HX_CSTRING("next")},
	{hx::fsObject /*::zpp_nape::space::ZPP_Component*/ ,(int)offsetof(ZPP_Component_obj,parent),HX_CSTRING("parent")},
	{hx::fsInt,(int)offsetof(ZPP_Component_obj,rank),HX_CSTRING("rank")},
	{hx::fsBool,(int)offsetof(ZPP_Component_obj,isBody),HX_CSTRING("isBody")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_Component_obj,body),HX_CSTRING("body")},
	{hx::fsObject /*::zpp_nape::constraint::ZPP_Constraint*/ ,(int)offsetof(ZPP_Component_obj,constraint),HX_CSTRING("constraint")},
	{hx::fsObject /*::zpp_nape::space::ZPP_Island*/ ,(int)offsetof(ZPP_Component_obj,island),HX_CSTRING("island")},
	{hx::fsBool,(int)offsetof(ZPP_Component_obj,sleeping),HX_CSTRING("sleeping")},
	{hx::fsInt,(int)offsetof(ZPP_Component_obj,waket),HX_CSTRING("waket")},
	{hx::fsBool,(int)offsetof(ZPP_Component_obj,woken),HX_CSTRING("woken")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("next"),
	HX_CSTRING("parent"),
	HX_CSTRING("rank"),
	HX_CSTRING("isBody"),
	HX_CSTRING("body"),
	HX_CSTRING("constraint"),
	HX_CSTRING("island"),
	HX_CSTRING("sleeping"),
	HX_CSTRING("waket"),
	HX_CSTRING("woken"),
	HX_CSTRING("free"),
	HX_CSTRING("alloc"),
	HX_CSTRING("reset"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Component_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Component_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Component_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Component_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZPP_Component_obj::__mClass;

void ZPP_Component_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.space.ZPP_Component"), hx::TCanCast< ZPP_Component_obj> ,sStaticFields,sMemberFields,
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

void ZPP_Component_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace space
